
#include <iostream>
using namespace std;
 

void printRepeating(int arr[], int n)       // function to find repeating elements                    
{
    
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
 
    
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
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
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "The repeating elements are: \n";
 
    
    printRepeating(arr, arr_size);
    return 0;
}
