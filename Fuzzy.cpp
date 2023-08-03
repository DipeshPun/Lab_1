/*Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
a. Degree of membership = 1 if age<=20
Degree of membership = (30-age)/10 if age>20 and age<=30
Degree of membership = 0 if age>30
b. Degree of membership = 1 if age<=15
Degree of membership = (35-age)/20 if age>15 and age<=35
Degree of membership = 0 if age>35
Perform set operations according to rules of fuzzy sets, on these
two sets.*/
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
