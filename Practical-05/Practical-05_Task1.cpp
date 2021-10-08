
#include<iostream>
#include<iomanip>
using namespace std;

void boolFun(){
bool a = 5>10;
cout<<sizeof(bool)<<endl;
cout<<sizeof(a)<<endl;
cout<< "boolFun() : "<<a<<endl;
} 
void shortFun(){
short a = 5;
cout<<sizeof(short)<<endl;
cout<<sizeof(a)<<endl;
cout<< "shortFun() : "<<a<<endl;
} 

void intFun(){
int a = 8;
cout<<sizeof(int)<<endl;
cout<<sizeof(a)<<endl;
cout<< "intFun() : "<<a<<endl;
} 
void floatFun(){
float a = 5.28359129178f;
cout<<sizeof(float)<<endl;
cout<<sizeof(a)<<endl;
cout<< "floatFun() : "<<setprecision(7)<<a<<endl;
} 
void doubleFun(){
double a = 10.968736487234762193821;
cout<<sizeof(double)<<endl;
cout<<sizeof(a)<<endl;
cout<< "doubleFun() : "<<setprecision(15)<<a<<endl;
} 
void wideCharFun(){
wchar_t a = L'a';
cout<<sizeof(wchar_t)<<endl;
cout<<sizeof(a)<<endl;
cout<< "wideCharFun() : "<<a<<endl;
} 
void longDoubleFun(){
long double a = 5673821878.6128736;
cout<<sizeof(long double)<<endl;
cout<<sizeof(a)<<endl;
cout<< "londDoubleFun() : "<<setprecision(20)<<a<<endl;
} 
void longFun(){
long a = 567381183727;
cout<<sizeof(long)<<endl;
cout<<sizeof(a)<<endl;
cout<< "longFun() : "<<a<<endl;
} 



int main()
{
   boolFun(); 
   shortFun();
   intFun(); 
   longFun();
   floatFun(); 
   doubleFun(); 
   longDoubleFun(); 
   wideCharFun(); 
}
