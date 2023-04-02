#include <iostream>
using namespace std ;

  void print1(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
   }

     void print2(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
   }

    void print3(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        } 
        cout<<endl;
    }
   }


   void print4(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        } 
        cout<<endl;
    }
   }

   void print5(int n){
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
   }

     void print6(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j;
        } 
        cout<<endl;
    }
   }

  void print7(int n){
    for(int i=0;i<n;i++)
  {  //space
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    //star
    for(int j=0;j<2*i+1;j++)
    {
cout<<"*";
    }
    //space 
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    cout<<endl;
  }}

  void print8(int n){
    
    for(int i=0;i<n;i++)
  {  //space
     for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++)
    {
       cout<<"*";
    }
    //space 
    for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    cout<<endl;
  }}

  void print9(int n){
   for(int i=0;i<n;i++)
  {  //space
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    //star
    for(int j=0;j<2*i+1;j++)
    {
cout<<"*";
    }
    //space 
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    cout<<endl;
  }



    for(int i=0;i<n;i++)
  {  //space
     for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++)
    {
       cout<<"*";
    }
    //space 
    for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    cout<<endl;
  }}

  void print10(int n) {
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  }

   void print11(int n) { int start=1;
    for(int i =0;i<n;i++)
    {
        if(i % 2 ==0) start=1;
        else start =0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
   }

   void print13(int n){
    int num=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<num<<" ";
            num += 1 ;      
      }
        cout<<endl;
    }
   }
int main()
   {
    int n;
    cin>>n;
    print13(n);
    return 0;

}