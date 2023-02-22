//concatenate all programs using switch statement
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,j,min,max,sum,count;
	bool flag;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
	}
	int ch;
	cout<<"1) Find minimum number"<<endl;
	cout<<"2) Find maximum number"<<endl;
	cout<<"3) Identify a number"<<endl;
	cout<<"4) Count the number"<<endl;
	cout<<"5) Print odd numbers"<<endl;
	cout<<"6) Print even numbers"<<endl;
	cout<<"7) Find sum of all elements"<<endl;
	cout<<"8) Reverse the array"<<endl;
	cout<<"9) Find Unique elements"<<endl;
	cout<<"10) Exit"<<endl;
	do
	{
	cout<<"Enter Choice: ";
	cin>>ch;
	switch (ch)
	{
		case 1:
			min=arr[0];
	        for(i=0; i<5; i++)
	        {
		        if(min>arr[i])
	         	{
		        	min=arr[i];
		        }
	        }
	        cout<<"The min number is "<<min<<endl;
	    break;
		case 2:
		    max=arr[0];	
            for(i=0; i<5; i++)
        	{
		        if(max<arr[i])
	        	{
			        max=arr[i];
	    	    }
	        }
        	cout<<"The max number is "<<max<<endl;
        break;
		case 3:
			int a;
            cout<<"Enter the number for finding ";
            cin>>a;
            for(i=0; i<5; i++)
            {
    	        if(a==arr[i])
    	        {
    	        	flag++;
		        }
	        }
	    	if(flag==1)
		    {
			cout<<"Number is present"<<endl;	
	    	}
		    else
		    {
			cout<<"Number is not present"<<endl;
	    	}
	    break;
	    case 4:
	    	count=0;
            cout<<"Enter the number for count ";
            cin>>a;
            for(i=0; i<5; i++)
            {
            	if(a==arr[i])
            	{
    	        	count++;
		        }
	        }
	        cout<<a<<" is present "<<count<<" time"<<endl;
	    break;
		case 5:
            for(i=0; i<5; i++)
            {
            	if(arr[i]%2!=0)
    	        {
    	        	cout<<"Odd number "<<arr[i]<<endl;
    		        flag++;
	        	}
	        }
        	if(flag==0)
	        {
	        	cout<<"No odd number is present"<<endl;
	        }
	    break;
		case 6:
		    bool flag;
            for(i=0; i<5; i++)
            {
            	if(arr[i]%2==0)
    	        {
    	        	cout<<"Even Number "<<arr[i]<<endl;
    	        	flag++;
	        	}
	        }
	        if(flag==0)
        	{
		        cout<<"No even number is present"<<endl;
	        }
	    break;
		case 7:
		    sum=0;
        	for(i=0; i<5; i++)
        	{
		        sum=sum+arr[i];
	        }
	        cout<<"The sum is "<<sum<<endl;
	    break;
		case 8:
		    cout<<"The reverse values are"<<endl;
        	for(i=4; i>=0; i--)
	        {
	        	cout<<"The number at "<<i<<" is "<<arr[i]<<endl;
	        }
	    break;
		case 9:
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
		        cout<<"No unique number is present"<<endl;
	        }
	    break;
	    case 10:
			cout<<"Exit"<<endl;
		break;
		default:
			cout<<"invalid choice"<<endl;
	    break;
	}
    }
    while(ch!=10);
	return 0;
}
