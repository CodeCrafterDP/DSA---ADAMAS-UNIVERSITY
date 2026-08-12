#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return i + 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);

        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

int main()
{
    int array[10] = {8, 2, 10, 6, 5, 12, 18, 9, 4, 11};
    int i;

    quickSort(array, 0, 9);

    printf("Sorted array in ascending order:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}