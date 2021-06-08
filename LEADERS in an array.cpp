#include<iostream> 
using namespace std; 
  

void leaders(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int j; 
        for (j = i+1; j<n; j++) 
        { 
            if (arr[i] <= arr[j]) 
                break; 
        }     
        if (j == n) 
            cout << arr[i] << " "; 
  } 
} 
int main() 
{ 
    int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 
    int k = sizeof(arr)/sizeof(arr[0]); 
    leaders(arr, k); 
    return 0; 
}
 
