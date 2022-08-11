#include<stdio.h>
#include<stdbool.h>

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSort(int *ptr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
    bool haveSwap = false;
        for (j = 0; j < n - 1 -i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                swap((ptr + j), (ptr + j + 1));
                haveSwap = true;
            }
        }
        if (haveSwap == false) {
            break;
        }
    }
}

void insertionSort(int *ptr, int n) {
    int i, pos, key;
    for (i = 1; i < n; i++) {
        key = *(ptr + i);
        pos = i;
        while (pos > 0 && *(ptr + pos - 1) > key) {
            *(ptr + pos) = *(ptr + pos - 1);
            pos--;
        }
        *(ptr + pos) = key;
    }
}

void displayArray(int *ptr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main() {
    int n = 5;
    int arr[] = {12, 9, 3, 6, 5};
    //int arr[] = {3, 6, 5, 9, 12};
    printf("Unsorted array:\n");
    displayArray(arr, n);

    //bubbleSort(arr, n);
    insertionSort(arr, n);
    printf("Sorted array:\n");
    displayArray(arr, n);

    return 0;
}