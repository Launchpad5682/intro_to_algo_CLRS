#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &array)
{
    int min, size = array.size();
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array.at(j) < array.at(min))
                min = j;
        }
        if (min != i)
        {
            int temp = array.at(i);
            array.at(i) = array.at(min);
            array.at(min) = temp;
        }
    }
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    selectionSort(arr);

    for (auto i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}