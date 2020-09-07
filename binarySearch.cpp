#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &array, int element)
{
    int low = 0, high = array.size() - 1;
    int mid = (high + low) / 2;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (array[mid] == element)
            return mid;
        else if (array[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

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
    // element to be searched
    int n, element;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    selectionSort(arr);

    for (auto i : arr)
        cout << i << " ";

    cout << endl;
    cin >> element;
    cout << binarySearch(arr, element) << endl;
    return 0;
}