#include<iostream>
using namespace std;

int main()
{
	int size1;
	cout<<"Enter the size of the array"<<endl;
	cin>>size1;
	
	int a[size1],i,j;
	cout<<"Enter the elements of the array in sorted order"<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The elements of the array are"<<endl;
	for(i=0;i<size1;i++)
	{
		cout<<a[i]<<" ";
	}

    int size2;
	cout<<"Enter the size of the second array"<<endl;
	cin>>size2;
	
	int b[size2];
	cout<<"Enter the elements of the array second array in sorted order "<<endl;
	for(i=0;i<size2;i++)
	{
		cin>>b[i];
	}
	
	cout<<"The elements of the array are"<<endl;
	for(i=0;i<size2;i++)
	{
		cout<<b[i]<<" ";
	}


   int size3;
	cout<<"Enter the size of the larger array"<<endl;
	cin>>size3;
	
	int c[size3],k;
    i=0,j=0,k=0;
    while(i<size1 && j<size2)       //any list ends stop thats why && is used.
    {
    	if(a[i]<b[j])
    	{
    		c[k]=a[i];
    		i++;
    		k++;
		}
	  else if(a[i]==b[j])        //additional condition in union than merge as if same element is encountered in union store once and increment all index
		{
			c[k]=a[i];
			i++,j++,k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	
	for(;i<size1;i++)     //copying leftover elements  either from this (leftover elements depend upon value of i and j)
	{
		c[k]=a[i];
		k++;
	}
	
	for(;j<size2;j++)      //copying leftover elements or from this
	{
		c[k]=b[j];
		k++;
	}


	cout<<"The elements of the union of the sorted array are"<<endl;
	for(i=0;i<k;i++)  //k keeps counter of the number of elements stored in new array after union..if i<size3 we use garbage value will appear.
	{
		cout<<c[i]<<" ";
	}






}
