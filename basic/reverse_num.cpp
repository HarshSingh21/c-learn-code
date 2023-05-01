#include <iostream>
using namespace std;
int main() {
    
int sum=0;
int n;
cin>>n;
   while(n)
    {
       int  digit =n%10;
       sum =sum*10+digit;
        n=n/10;
    }
    cout<<sum;

 return 0;
}