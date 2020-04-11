#include<iostream>
using namespace std;
int main()
{
	int i,j,n,t,a[30];
	cout<<"enter the number of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"array after sorting";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
		
	}
}
