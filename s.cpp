#include <iostream>
using namespace std;
 int fact(int d)
 {
      int factorial = 1;
     for(int s=1;s<=d;s++)
      factorial*=s;
      return factorial;
 }
  int  pas(int n)
    {
        for(int i=0;i<n;++i)
    {
        for(int j=0;j<=i;++j)
        {
            
            
                cout<<fact(i)/(fact(j)*fact(i-j));
            }
            cout<<endl;
    }
    
}
int main()
{
    int num;
    cin>>num;
    pas(num);
    return 0;
}