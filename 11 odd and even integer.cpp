//input 5 num from user and separate odd and even num
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[5],arr2[5],i,j;
	cout<<"Enter values for arr1"<<endl;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr1[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr1[i]<<endl;
    }
    cout<<"Enter values for arr2"<<endl;
	for(j=0; j<5; j++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr2[j];
    }
    for(j=0; j<5; j++)
    {
    	cout<<"The number is "<<arr2[j]<<endl;
    }
    for(i=0; i<5; i++)
    {
    	if(arr1[i]%2!=0)
    	{
    		cout<<arr1[i]<<" is odd number"<<endl;
		}
		if(arr1[i]%2==0)
		{
			cout<<arr1[i]<<" is even number"<<endl;
		}
	}
	for(j=0; j<5; j++)
    {
    	if(arr2[j]%2!=0)
    	{
    		cout<<arr2[j]<<" is odd number"<<endl;
		}
		if(arr2[j]%2==0)
		{
			cout<<arr2[j]<<" is even number"<<endl;
		}
    }
}
