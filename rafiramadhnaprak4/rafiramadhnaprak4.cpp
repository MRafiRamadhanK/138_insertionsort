#include <iostream>
using namespace std;
int arr[11];
int n;

void insertionSort() {
	int i, temp, j;
	
	
	for (i = 1; i <= n - 1; i++) {
		temp = arr[i];
		j = i - 1;
		while ((j >= 0) && (arr[j] > temp)) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
	}
	arr[j + 1] = temp;
}

void input() {
	while (true) {
		cout << "Masukan banyaknya element pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "nArray dapat mempunyai maksimal 20 elemen.n";
		}
	}

	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===================== " << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();
}