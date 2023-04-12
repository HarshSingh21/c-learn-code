#include<iostream>
#include <array>
using namespace std ;
int main()
{
    int basic[3]={23,34,54};

    array<int,4>a ={23,32,34,21};
    int size =a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element a 2nd index = "<<a.at(2)<<endl;
    cout<<"Element is empty or not "<<a.empty()<<endl;
    cout<<"first Element"<<a.front()<<endl;
    cout<<"last Element"<<a.back();


}


