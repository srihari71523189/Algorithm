#include<iostream>
using namespace std;
int main()
{
	int i,j,t,n,min,a[30];
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	cout<<"array after sorting";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
}
