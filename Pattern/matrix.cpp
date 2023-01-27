#include<iostream>
using namespace std;
int main()
{
     int n,p;
     cout<<"enter row  ";
     cin>>n;
     cout<<"enter colomn  ";
     cin>>p;
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<p;j++)
        {
            cout<<"("<<i<<","<<j<<") ";
        }
        cout<<endl;
    }
    return 0;
}


