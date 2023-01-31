#include<iostream>
using namespace std;
int
main ()
{
   string str = "how are felling harsh it is amazing";
  int vowel=0,constant=0,space=0;
   for(int i=0;str[i]!='\0';i++)
   {
      if(str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u')
      vowel++;
      else if( str[i]==' ')
      space++;
      else
      constant++;
      
      
   }
     
cout<<"vowel is :"<<vowel<<endl;
cout<<"space is :"<<space<<endl;
cout<<"constant is:"<<constant;
  return 0;
}


