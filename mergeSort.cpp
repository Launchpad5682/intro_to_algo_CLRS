#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &array, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    vector<int> left(n1 + 1, 0), right(n2 + 1, 0);
    for (int i = 0; i < n1; i++)
    {
        left[i] = array[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = array[q + j + 1];
    }

    left[n1] = INT_MAX;
    right[n2] = INT_MAX;

    int i = 0, j = 0;
    for (int k = p; k <= r; k++)
    {
        if (left[i] <= right[j])
            array[k] = left[i++];
        else
            array[k] = right[j++];
    }
}

void mergeSort(vector<int> &array, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(array, p, q);
        mergeSort(array, q + 1, r);
        merge(array, p, q, r);
    }
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    mergeSort(arr, 0, n - 1);

    for (auto i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}