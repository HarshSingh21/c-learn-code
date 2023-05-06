#include<iostream>


// #include <array>
// #include<vector>
// #include <deque>
// #include<list>

// using namespace std ;
// int main()

// {}
//Sequential container 

/*
list 

{
list<int> l;


l.push_back(1);
l.push_front(2);

for(int i : l)
{
    cout<<i<<" ";
}
cout<<endl;

cout <<"Before erase "<<l.size()<<endl;
 l.erase(l.begin());
cout <<"After  erase "<<l.size()<<endl;

} */






/*
DEQUE 
 {

<int> d;
d.push_back(1);
d.push_front(2);

for(int i :d)
{
    cout<<i<<" ";
 
}  cout <<"\n";
cout<<d.size()<<endl;

cout<<"print index of element "<<d.at(1)<<endl;
cout<<"First element "<<d.front()<<endl;

cout<<"last element "<<d.back()<<endl;
cout<<"empty or not "<<d.empty()<<endl;

cout <<"Before erase "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout <<"After  erase "<<d.size()<<endl;

for(int i :d)
{
    cout<<i <<" ";
}
cout<<endl;
d.pop_back();
cout<<"POP from back ";
for(int i :d)
{
    cout<<i<<" ";
 
}  cout <<"\n";   // = 2 

//
d.pop_front();
cout<<"POP from front ";
for(int i :d)
{
    cout<<i<<" ";    // ==    1  
 
}  cout <<"\n";}
*/




/*
Vector 
{
   vector<int> v;
 

 // initialze 5 element of every value 1 
   vector <int> a(5,1);
   cout<<"Print a "<<endl;
    for(int i:a)
   {
    cout<<i<<" ";
   }cout<<"\n";

 //copy one varible to another 
   vector <int> last(a);
   cout<<"Print last "<<endl;
   for(int i:last)
   {
    cout<<i<<" ";
   }cout<<"\n";
   cout<<"Size ->"<<v.capacity()<<endl;
   v.push_back(1);
  cout<<"Size ->"<<v.capacity()<<endl;
    v.push_back(2);
  cout<<"Size ->"<<v.capacity()<<endl;
    v.push_back(3);
  cout<<"Size ->"<<v.capacity()<<endl;

  //
  cout<<"Element at 2 index "<<v.at(2)<<endl;
  cout<<"first Element "<<v.front()<<endl;
   cout<<"last Element  "<<v.back()<<endl;

   //
   cout<<"before pop ";
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;

   v.pop_back();

   cout<<"After pop ";
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<"\n";

   cout<<"Before clear  "<<v.size()<<endl;
   v.clear();
   cout<<"After clear  "<<v.size()<<endl;

}
*/




/*
ARRAY

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
    cout<<"last Element"<<a.back();}

    */
