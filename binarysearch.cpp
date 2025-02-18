#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int high = 0;
    int low = size-1;

    int mid = high + (low-high)/2;

    while( high<=low){

        if(arr[mid] == key){
            return mid;      
              }
        if(arr[mid] < key){
            high = mid+1;
        }
        else{
            low = mid-1;
        }
        mid = high + (low-high)/2;
}
return -1;
}

int main() {
    int n, key;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int result = binarysearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}




