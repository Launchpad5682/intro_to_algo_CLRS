#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(vector<int> &arr)
{
    int size = arr.size();
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(&arr[j], &arr[j - 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    bubblesort(arr);

    for (auto i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}