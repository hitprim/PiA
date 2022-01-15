#include <iostream>
#include "mylib.h"
#include <vector>
#define SIZE 5
#define SwapINT(a,b) swap(a,b)
using namespace std;

int main(int argc, char* argv[])
{
	//task 3
	cout << "Task 3" << endl;
	vector<int> arr(SIZE);
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE-1; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				
				SwapINT(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i : arr) {
		cout << i << " ";
		
	}
	cout << endl;

	//task2
	cout << "Task 2" << endl;
#define RANGE(x,y) ((x >= 0 && x<y)? "true" : "false")
	int a;
	cin >> a;
	cout << RANGE(a, 20) << endl;
	//task 1
	cout << "Task 1" << endl;
	int size = 15;
	float* arry = mylib::Array(size);
	if (arry != nullptr) {
		mylib::printArray(arry, size);
		mylib::printPoN(arry, size);
	}
}