// Implementing Bubble Sort

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr={23,45,6,7,12,3,4,589,90,56,77,0};
    cout<<"Array before sorting:"<<endl;
    printArray(arr);
    bubbleSort(arr);
    cout<<"Array after sorting:"<<endl;
    printArray(arr);
    
}