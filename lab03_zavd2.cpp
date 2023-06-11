// Лабораторна робота №3 варіант 16 група СН-11 Дурас А.С.
// Програма 2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float C=2.1;
float y=1.993;
float x,A;

cout<<"x="; cin>>x;
cout<<"y="; cin>>y;
if(x<y)
{ A = pow(C,x*y)+log(x);
cout<<"A="<<A<<endl; }
else
{ A = cos(x)+log(y);
cout<<"A="<<A<<endl; }
return 0;
}