// Лабораторна робота No5 варіант 16 група СН-11 Дурас А.С.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
//setlocate(0 , ”ukr”);
float a,b,xp,xk,h,x,y;
cout << "a= "; cin >> a;
cout << "b= "; cin >> b;
cout << "xp= "; cin >> xp;
cout << "xk= "; cin >> xk;
cout << "h= "; cin >> h;
x = xp;
cout << "    аргумент" << "\t" << "          функція " << endl;
cout << setiosflags(ios::scientific);
do
{
y = exp(4.7)*pow(a*x + b,2)-log10(b*x)/tan(b*x) + acos(b);
cout << x << "\t" << "\t" << y << endl;
x += h;
}
while(x <= xk + h/2);
return 0;
}