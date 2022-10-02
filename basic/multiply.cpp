#include<iostream>
//display program for 1 to n from loop
using namespace std;
int main()
{
    int i,n,q;
    cout<<"enter a number ";
    cin>>n;
    for (i=1;i<=10;i++)
    {
      cout<<n<<" X "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}
