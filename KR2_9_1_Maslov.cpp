#include <iostream>
using namespace std;

int maxel(double a[100][100], int strok, int k) {
	int stroki = 0;
	double max_element = a[0][k];

	for (int g = 1; g < strok; g++) {
		if (a[g][k] > max_element) {
			max_element = a[g][k];
			stroki = g;
		}
	}
	return stroki + 1;
}


int main() {
	setlocale(LC_ALL, "Russian");

	int strok, stolb, k;
	double a[100][100];
	cout << "Введите количество строк и столбцов в матрице: ";
	cin >> strok >> stolb;

	cout << "Ведите элементы матрицы: ";
	for (int i = 0; i < strok; i++) {
		for (int j = 0; j < stolb; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Введите номер столбца: ";
	cin >> k;
	k -= 1;
	if (k > stolb) {
		cout << "Столб выходит за пределы матрицы";
		return 0;
	}
	int result = maxel(a, strok, k);
	cout << "Номер наибольшего элемента k-ого столбца: " << result;
	return 0;

}