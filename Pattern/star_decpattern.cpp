#include<iostream>
using namespace std;
    
int main()
{
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
			if(i<=j)    //think about matrix i and j
		    cout<<"*";
	    }
	        
	    cout<<endl;
	}
	    
	return 0;
	
}
 

//  //increasing order star
// #include<iostream>
// using namespace std;
    
// int main()
// {
// 	for(int i=0;i<5;i++)
// 	{
// 	    for(int j=0;j<5;j++)
// 	    {
// 			if(i>=j)   //change greater than
// 		    cout<<"*";     
// 	    }
	        
// 	    cout<<endl;
// 	}
	    
// 	return 0;
	
// }
