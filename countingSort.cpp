#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> &array)
{
    int k = *max_element(array.begin(), array.end());
    k++;
    // auxillary array keeping counts

    vector<int> aux(k, 0);
    int size = array.size();
    for (int i = 0; i < size; i++)
        aux.at(array.at(i))++;

    // cumulative count
    for (int i = 1; i < k; i++)
        aux.at(i) += aux.at(i - 1);

    vector<int> result(size,0);
    for (int i = size - 1; i >= 0; i--)
    {
        result[aux[array[i]]-1] = array[i];
        aux[array[i]]--;
    }

    return result;
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    arr = countingSort(arr);

    for (auto i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}