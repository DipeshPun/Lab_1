/*Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/
#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],n,i,j;
    cout<<"Enter the size of set:";
    cin>>n;
    cout<<"Enter the elements of set a:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of set b:"<<endl;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"Cartessian Product=";
    cout<<"{";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"(";
            cout<<a[i]<<","<<b[j];
            cout<<")";
            cout<<",";
        }
    }
    cout<<"}";
    return 0;
}
