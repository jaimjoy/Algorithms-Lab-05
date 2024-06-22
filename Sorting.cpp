#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    int temp;
    for(int i=1; i<n; i++) {
        for(int j=(n-1); j>=i; j--) {
            if(arr[j-1] > arr[j]) {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[i] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int minIndex, temp;
    for (int i = 0; i < n-1; ++i) {
        minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr1[]= {11,5,1,9,3,4,7,10,2,8,6,20,17,16,13,19};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int temp;

    cout << "Given Array: ";
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    bubbleSort(arr1, n);
    cout << "Sorted Array (Bubble Sort): ";
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //
    insertionSort(arr1, n);
    cout << "Sorted Array (Insertion Sort): ";
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //
    selectionSort(arr1, n);
    cout << "Sorted Array (Selection Sort): ";
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}

