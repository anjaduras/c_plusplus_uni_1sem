// Лабораторна робота No4 варіант 16 група СН-11 Дурас А.С.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float a=2.1 , S;
int i , n;
cout<<"n="; cin>>n;
S = 1;
for (i = 1; i <= n; i++)
S*= (a + i);
cout<<"S="<<S<<endl;
return 0;
}