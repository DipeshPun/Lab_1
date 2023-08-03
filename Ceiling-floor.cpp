/*Write a program that takes a real number and produces is ceiling and floor
integers as output.*/
#include<iostream>
using namespace std;
int main(){
    float floor,ceiling,a,c;
    cout<<"Enter the number=";
    cin>>a;
    int b=static_cast<int>(a);
    c=a-b;
    if(c==0){
        ceiling=b;
    }
    else{
        ceiling=b+1;
    }
    cout<<"Ceiling="<<ceiling<<endl;
    cout<<"Floor="<<b;
    return 0;
}
