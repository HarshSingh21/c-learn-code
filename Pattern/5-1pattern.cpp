#include<iostream>
using namespace std;
    
int main()
{ 
	for(int i=0;i<5;i++)  //row 
	{
	    for(int j=0;j<5;j++) //column
	    {
			if(i>j)
		    cout<<" ";
		    else
		    cout<<"*";
	    }
	    cout<<endl;
			} 
	return 0;
	
}
