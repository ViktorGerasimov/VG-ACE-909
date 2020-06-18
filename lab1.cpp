#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n = 10;
	cout << "Количество элементов массива: ";
	cin >> n;
	int a[10];
	for(int i=1; i <= n; i++){
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
if (i == n)
		cout << a[i] << "}";
		else
		cout << a[i] << ",";
	}
	return 0;
}
