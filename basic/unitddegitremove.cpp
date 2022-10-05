# include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		r=n%10;
	  r=n/10;
		cout<<r<<endl;
		break;
	}
	return 0;
}