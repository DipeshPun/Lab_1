#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],n,i,j,found=0;
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
    cout<<"Difference of set a & b=";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                found=1;
                break;
            }
        }
        if(!found){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}