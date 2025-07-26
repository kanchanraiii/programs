// To implement quick sort algorithm

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {23, 45, 6, 7, 12, 3, 4, 589, 90, 56, 77, 0};
    cout << "Array before sorting:" << endl;
    printArray(arr);
    quickSort(arr, 0, arr.size() - 1);
    cout << "Array after sorting:" << endl;
    printArray(arr);
    return 0;
}