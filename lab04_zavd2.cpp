// Лабораторна робота No4 варіант 16 група СН-11 Дурас А.С.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
float a=2.1 , S;
int i , n;
cout<<"n="; cin>>n;
S = 1;
for (int i = 1; i <= n; i++)
S*= (a + i);
cout << setiosflags(ios::scientific);
cout<<"S="<<S<<endl;
return 0;
}