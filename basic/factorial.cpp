//factorail of n number 
#include <iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter a Number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact *=i;
    }
    cout<<"Factorial is   = "<<fact;
    return 0;
}

