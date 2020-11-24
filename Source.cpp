#include <iostream>

using namespace std;

int sum(int arr[], int n, int index) {
	if (index == n) {
		return 0;
	}
	return arr[index] + sum(arr, n, index + 1);
}

int main() {
	const int n = 5;
	int arr[n] = { 5,3,6,2,1 };
	cout << sum(arr, n, 0) << endl;
	system("pause");
	return 0;
}