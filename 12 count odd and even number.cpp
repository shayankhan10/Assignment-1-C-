//input 5 num from user and count odd and even integers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
    }
    int flag=0;
    for(i=0; i<5; i++)
    {
    	if(arr[i]%2!=0)
    	{
    		flag++;
		}
	}
	cout<<flag<<" Odd number present"<<endl;
	flag=0;
	for(i=0; i<5; i++)
	{
		if(arr[i]%2==0)
    	{
    		flag++;
		}
	}
	cout<<flag<<" Even Number present"<<endl;
}
