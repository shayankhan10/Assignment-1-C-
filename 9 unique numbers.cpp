//input 5 num from user and print all unique numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,j,min,count;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
	}
	for(i=0; i<5; i++)
	{
		count=0;
		for(j=0; j<5; j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
			}
		}
	if(count==0)
	    {
		cout<<"Unique number is "<<arr[i]<<endl;
	    }   
	}
	if(count>=1)
	{
		cout<<"No unique number is present";
	}
}
