#include <iostream>
#include <climits>

using namespace std;

//Task 1
int sum(int arr[], int n, int index) {
	if (index == n) {
		return 0;
	}
	return arr[index] + sum(arr, n, index + 1);
}

//Task2
int findElement(int arr[], int n, int index, int element) {
	if (n == index) {
		return INT_MIN;
	}
	else if (arr[index] == element) {
		return index;
	}
	else {
		return findElement(arr, n, index + 1, element);
	}
}

//Task3
int findElementsLargerThanN(int arr[], int n, int index, int element) {
	if (index == n) {
		return 0;
	}
	else if (arr[index] > element) {
		return 1 + findElementsLargerThanN(arr, n, index + 1, element);
	}
	else {
		return findElementsLargerThanN(arr, n, index + 1, element);
	}
}

int main() {
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << findElementsLargerThanN(arr, n, 0, 5) << endl;
	cout << findElementsLargerThanN(arr, n, 0, 15) << endl;

	system("pause");
	return 0;
}