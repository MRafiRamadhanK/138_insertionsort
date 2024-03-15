#include <iostream>
using namespace std;

void insertionSort() {
	int i, n, temp, j;
	int arr[11];
	
	for (i = 1; i <= n - 1; 1++) {
		temp = arr[i];
		j = i - 1;
		while ((j >= 0) && (arr[j] > temp)) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
	}
	arr[j + 1] = temp;
}

int main(){

}

