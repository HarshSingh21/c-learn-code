#include<iostream>
using namespace std;
 /*
 To print the pattern 
 outer loop will print row 
 inner loop will print column 
 print pattern  inside the inner loop
 */

    
int main()
{
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
			if(i>=j)    //think about matrix i and j
		    cout<<"*";
	    }
	        
	    cout<<endl;
	}
	    
	
	return 0;
	
}
