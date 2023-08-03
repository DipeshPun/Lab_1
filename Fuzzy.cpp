#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the age of person:"<<i+1;
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<=20)
		cout<<"Degree of Membership of person"<<i+1;
		else if(a[i]>20&&a[i]<=30)
		cout<<"Degree of Membership of person:"<<i+1<<(30.00-(float)a[i])/30.00;
		else
		cout<<"Degree of Membership of person:"<<i+1;
	}
	return 0;
}