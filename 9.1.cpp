#include <iostream>
#include "9.1.h"
 using namespace std;
 void fun1(){
 cout<<"it worked"<<endl;
 }
 void shape::get_data(){
   cout<<"enter a:\n";
   cin>>x;
   cout<<"enter b:\n";
   cin>>y;
 }
 void triangle::display(){
   cout<<"area of triangle:\n";
   cout<<(.5*x*y)<<endl;
 }
 void rect::display(){
   cout<<"area of rect:\n"<<(x*y)<<endl;
 
 }
 void triangle::get_data(){
   cout<<"enter data for triangle\n";
 cout<<"enter a:\n";
   cin>>x;
   cout<<"enter b:\n";
   cin>>y;
 }