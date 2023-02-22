//check two arrays are same or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[5],arr2[5],i;
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
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr2[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr2[i]<<endl;
    }
    int flag=0;
    for(i=0; i<5; i++)
    {
    	if(arr1[i]!=arr2[i])
    	{
    		flag++;
        }
	}
	if(flag!=0)
	{
		cout<<"arrays are not same"<<endl;
	}
	else
	{
		cout<<"arrays are same"<<endl;
	}
}
