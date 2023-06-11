// Лабораторна робота No7 варіант 16 група СН-11 Дурас А.С.
// Програма 2
// Дано масив A(5,5). Знайти суму елементів масиву.
#include <iostream>
using namespace std;
#define row 5
#define col 5
int main()

{
int i, j;
int array [row][col] = { 4, 5, 7, 3, 8, 
9, 6, 4, 8, 9,
2, 8, 9, 5, 8,
1, 7, 2, 3, 5,
7, 9, 4, 6, 1};

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