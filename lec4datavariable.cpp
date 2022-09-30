 #include<iostream>
 using namespace std;
 void sum ()
 // glo = global variable 
 {
  int glo =84;
 }
 // after main() local variable starts
 int main()
 {    int a=4,b=5;
      float pi =3.14;
        int glo =99; // local variable take over global variable  ( precidance will be local varialbe)
      char c ='n';
      double d =2.333333;
      // for using new line \n can be used 
    // cout<<"tutorial 4 .\n here the value of a is  :"<<a<<"\n the value of b is "<<b<<c<<pi<<d;
    cout<<glo;

    return 0;

 }