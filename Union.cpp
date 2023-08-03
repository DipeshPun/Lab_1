#include<iostream>
using namespace std;
int main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2, d[10], f[10], flag=1,l, m=0, n=0;

    cout<<"Enter the size of set a:"<<endl;
    cin>>n1;
    cout<<"Enter the elements of set a:"<<endl;
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    
    cout<<"Enter the size of set b:"<<endl;
    cin>>n2;
    cout<<"Enter the elements of set b:"<<endl;
    for(i=0;i<n2;i++){
        cin>>b[i];
    }

   for(i=0;i<n1;i++)
   {
    
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
   
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }
   
   cout<<"Union of set a & b is="<<endl;
   cout<<"{";
    for(i=0;i<k;i++){
        cout<<c[i];
    }
        cout<<"}";
      k=0;
      for(i=0;i<n1;i++)
      {
      	for(j=0;j<n2;j++)
      	{
      		if(a[i]==b[j])
      		{
      			d[k]=b[j];
      			k++;
			  }
		  }
	  }
	  return 0;
}