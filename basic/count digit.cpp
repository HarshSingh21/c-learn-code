#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
  int  digit =0;
    
    while(n)
    {
        digit++;
        n=n/10;
    }
    cout<<digit;

 return 0;
}