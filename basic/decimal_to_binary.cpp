#include <iostream>
using namespace std;
int main() {
    
int num ;
cin>>num;
 int sum=0;
 int mul=1;
 while(num>0)
 {
     int digit = num%2;
     sum = sum+digit*mul;
     num = num/2;
     mul=mul*10;
 }
cout<<sum;
 return 0;
}