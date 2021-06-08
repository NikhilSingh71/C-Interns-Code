/*Find the smallest and second smallest elements in an array.
First sort the array.The sorting techniue that i have used is selection sort o(n^2) time and then acessed the first and last element*/


#include<iostream>
using namespace std;

void SelectionSort(int A[],int n);

int main()
{
	cout<<"Enter the size of the array"<<endl;
	int n;
	cin>>n;
	
	int num[n];
	cout<<"Enter the "<<n<<" elements of the array"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	
	cout<<"The elements of the array in sorted order are"<<endl;
	SelectionSort(num,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	
	cout<<"\n\nThe smallest element of the array is "<<num[0]<<endl;
	cout<<"The largest element of the array is "<<num[n-1]<<endl;
	
	return 0;
}

void SelectionSort(int A[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++) // for passes
	{
		for(j=k=i;j<n;j++)  // for comparisions 
		{
			if(A[j]<A[k])
			{
				k=j;
			}
		}
		temp=A[k];
		A[k]=A[i];
		A[i]=temp;
		
	}
}

