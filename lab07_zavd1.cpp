// Лабораторна робота No7 варіант 16 група СН-11 Дурас А.С.
// Дано масив A(5,5). Знайти суму елементів масиву.
#include <iostream>
using namespace std;

int main()
{
int row, col;
cout << "Введіть кількість рядків:" << endl;
cin >> row;
cout << "Введіть кількість стовпців:" << endl;
cin >> col;

int array [row][col];
cout << "Введіть елементи масиву:" << endl;
for (int i=0; i<row; i++) {
	for (int j=0; j<row; j++) {
		cin >> array [i][j];
	}
}
    int sum = 0;
    for (int i=0; i<row; i++) {
	for (int j=0; j<row; j++) {
		sum += array [i][j];
	}
}
 cout << "Сума елементів двовимірного масиву:" << sum << endl;
}