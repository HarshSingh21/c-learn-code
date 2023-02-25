#include <iostream>
#include <climits>
using namespace std;
int main()
{     
       int day ;
       cin>>day;
       
       switch(day)
       {
           case 1 :  cout<<"Monday";
           
           case 2: cout<<"Tuesday";
           
           case 3: cout<<"Wednesday";
           
           case 4: cout<<"Thursady";
           
           case 5: cout<<"firday";
           
           break;
           
           case 6: cout<<"sataurday";
           break;
           
           case 7: cout<<"sunday";
           
           default :  cout<<"Invalid";
           
       }
       cout<<"hello try again";
        return 0;
}        