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


// //
// #include <iostream>
// using namespace std;

// int  countfun(int x )
// {
//     int res =0;
//     while(x>0)
//     {
//         x=x/10;
//         res++;
//     }
//     return res;
// }

// int main()

// {
//  int result = countfun(565);
//     cout << result;
//     return 0;
// }