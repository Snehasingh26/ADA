#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    int flag=0;
    for(int i = 0; i<n; i++){
        if(flag = 0)
        break;
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
    }
}
int main(){
    int n; 
    cin>>n; 
    int arr[n];
    //before sorting
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //after sorting
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}