//merge two unsorted array of different lenghth
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	int arr1[5],arr2[5],arr3[5];
	cout<<"Enter values for first array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the Number ";
		cin>>arr1[i];
		arr3[i]=arr1[i];
	}
	for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr1[i]<<endl;
	}
	j=i;
	cout<<"Enter values for second array"<<endl;
	for(i=0;i<5;i++)
	{
		for(i=0;i<5;i++)
		{
			cout<<"Enter the Number ";
		    cin>>arr2[i];
			arr3[j]=arr2[i];
			j++;
		}
		cout<<"The merge array is ";
		for(i=0;i<j;i++)
		{
			cout<<arr3[i]<<" ";	
		}
	}
}
