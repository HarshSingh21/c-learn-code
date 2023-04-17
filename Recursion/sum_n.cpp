
#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
   
   // Base Condition.
   if(i<1)
   {
       cout<<sum<<endl;
       return;
   }

   // Function call to increment sum by i till i decrements to 1.
   func(i-1,sum+i);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n;
  cin>>n;
  func(n,0);
  return 0;

}



// Functional way


// #include<bits/stdc++.h>
// using namespace std;

// int func(int n){
   
//    // Base Condition.
//    if(n == 0)
//    {
//        return 0;
//    }

//    // Problem broken down into 2 parts and then combined.
//    return n + func(n-1);

// }


// function way 
// int main(){
  
//   // Here, let’s take the value of n to be 3.
//   int n = 3;
//   cout<<func(n)<<endl;
//   return 0;


// }
