#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void countSort(int arr[], int n) {
    int maxVal = arr[0];
    int minVal = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    int range = maxVal - minVal + 1;

    int count[range];
    int output[n];

    for (i = 0; i < range; i++) {
        count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        count[arr[i] - minVal]++;
    }

    for (i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void insertionSort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(const int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {29, 10, 14, 37, 14, 8, 44, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    int choice ;
    printf("Masukkan opsi sorting: ");
    scanf("%c", &choice);

    printf("Array sebelum diurutkan: ");
    printArray(arr, n);

    switch (choice) {
        case 'A':
        case 'a':
            bubbleSort(arr, n);
            printf("Array setelah diurutkan (Bubble Sort): ");
            break;
        case 'B':
        case 'b':
            countSort(arr, n);
            printf("Array setelah diurutkan (Count Sort): ");
            break;
        case 'C':
        case 'c':
            insertionSort(arr, n);
            printf("Array setelah diurutkan (Insertion Sort): ");
            break;
        case 'D':
        case 'd':
            selectionSort(arr, n);
            printf("Array setelah diurutkan (Selection Sort): ");
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return 0;
    }

    printArray(arr, n);

    return 0;
}
