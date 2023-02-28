#include<iostream>
using namespace std;
    
int main()
{ //pattern
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
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
