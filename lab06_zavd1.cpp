// Лабораторна робота №6 варіант 16 група СН-11 Дурас А.С.
// Програма 1
// Дано масив А(15). Знайти кількість від`ємних елементів масиву.

#include<iostream>
using namespace std;
int main()
{
    int pos=0, neg=0, zer=0, i, arr[15];
    cout<<"Будь ласка, введіть 15 чисел: ";
    for(i=0; i<15; i++)
        cin>>arr[i];
    for(i=0; i<15; i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else
            neg++;
    }
    cout<<"\n:Кількість від`ємних елементів масиву = "<<neg;
    cout<<endl;
    return 0;
}

