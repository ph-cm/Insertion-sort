#include <stdio.h>

void printArray(int arr[], int size);
void insertionSort(int arr[], int n);

int main (int argc, char * argv)
{
    int arr[10] = {5, 1, 19, 3, 28, 12, 7, 9, 4, 11};
    int n = 10; // give me the length of arr

    printf("Unordered array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Ordered array: ");
    printArray(arr, n);

    return 0;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
