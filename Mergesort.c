#include <stdio.h>

void merge(int array[], int low, int mid, int high)
{
    int temp[10];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (array[i] < array[j])
        {
            temp[k] = array[i];
            i++;
        }
        else
        {
            temp[k] = array[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = array[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = array[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
    {
        array[i] = temp[i];
    }
}

void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);

        merge(array, low, mid, high);
    }
}

int main()
{
    int array[10] = {80, 73, 59, 92, 86, 47, 92, 58, 91, 48};
    int i;

    mergeSort(array, 0, 9);

    printf("Sorted marks:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nLowest mark = %d", array[0]);
    printf("\nHighest mark = %d", array[9]);

    return 0;
}