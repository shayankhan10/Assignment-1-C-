//input 5 num from user and print 2nd smallest number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,j;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
    }
    int count;
    for(i=0; i<5; i++)
    {
    	for(j=i+1; j<5; j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			count=arr[i];
    			arr[i]=arr[j];
    			arr[j]=count;
			}
		}
	}
	i=1;
	cout<<"The second smallest element is "<<arr[i];
}
