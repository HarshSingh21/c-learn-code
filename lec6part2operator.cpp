// revise this note and tutorial point operator or w3 once after this.

#include<iostream>
using namespace std;
int main()
 {        int a=4,b=5;
    cout<<"operator in c++"<<endl;
     cout<<"following are the type of operator in c++:"<<endl;
    //Arithmetic operator
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a -- is "<<a--<<endl;
    cout<<"the value of ++a  is "<<++a<<endl;
    cout<<"the value of --a  is "<<--a<<endl;
    cout<<endl;

    // assignment operator --> used to assign the value 
    // int a =3,b=9;
    // char d='d';

    // camparsion operator
    cout<<"following are the type of  comparsion operator in c++:"<<endl;
    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;
    cout<<"the value of a<=b is"<<(a<=b)<<endl;
    cout<<"the value of a > b is"<<(a>b)<<endl;
    cout<<"the value of a < b is"<<(a<b)<<endl;
    cout<<endl;

    // logical operator
    cout<<"following are the type of Logical operator in c++:"<<endl;
    cout<<"the value of this logical and operator ((a==b)) && (a<b) is  "<<((a==b) && (a<b))<<endl; // and me dono condition true hone par hi true print hoga . 1 bhi galat huaa to false matlab 0.
    cout<<"the value of this logical OR operator ((a==b)) || (a<b) is  "<<((a==b) || (a<b))<<endl;  // OR me dono condition me se 1 true hone chaiye. 1 bhi sahi huaa to 1 print ho jaega.
    cout<<"the value of this logical not operator (!(a==b)) is  "<<(!(a==b))<<endl; // not me jo true answer hai uska ulta print karega . (matlab opposite )
return 0;
}
