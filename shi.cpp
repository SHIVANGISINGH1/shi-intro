#include<iostream>
using namespace std;
int again(int c);
int sum(int e)
{int d,f;
    cout<<"\nenter the number to be added to the sum\t";
    cin>>d;
    f=d+e;
   cout<<"sum is\t"<<f;
   again(f);
   return 0;
    
}
 int again(int c)
{  
    int flag;
      cout<<"\nwant to add more numbers to the sum then type 1 otherwise type 2\t";
    cin>>flag;
    if(flag==1)
    sum(c);
    else
    {
           cout<<"sum is "<<c<<"\n";
    }
return 0;
}
int main()
{
    int a,b,c;
    cout<<"enter two numbers to add\t";
    cin>>a>>b;
    c=a+b;
    again(c);
    return 0;
}
    
 