#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 



void RotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    arr[i] = temp; 
} 

void Rotate(int arr[], int d, int n) 
{ 
    for (int i = 0; i < d; i++) 
        RotatebyOne(arr, n); 
} 
  

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  

int main() 
{ 
     int n;
     cout<<"Enter the size of array"<<endl;
     cin>>n;
     int arr[n]; 
    
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    
    
    
    int k = sizeof(arr) / sizeof(arr[0]); 
  
     
    Rotate(arr, 2, k); 
    printArray(arr, n); 
  
    return 0; 
} 
