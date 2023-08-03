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