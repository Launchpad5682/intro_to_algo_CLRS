#include <bits/stdc++.h>

using namespace std;

void minMax(int *max, int *min, int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (*(array + i) > *max)
            *max = *(array + i);
        if (*(array + i) < *min)
            *min = *(array + i);
    }
}

int main()
{
    int size;
    cin >> size;
    int *array = new int(size);
    for (int i = 0; i < size; i++)
        cin >> *(array + i);

    int max = *array, min = *array;
    minMax(&max, &min, array, size);
    cout << max << " " << min << endl;
}