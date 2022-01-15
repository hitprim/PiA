#include <iostream>

using namespace std;
namespace mylib {
	float* Array(size_t size) {
		float* arry = new float[size];
		if (arry != nullptr) {
			for (size_t i = 0; i < size; i++) {
				arry[i] = (rand() % 100) - 20.0f;
			}
		}
		return arry;
	}
	void printArray(float* arr, int size) {
		for (size_t i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void printPoN(float* arr, int size) {
		int p = 0, n = 0;
		for (size_t i = 0; i < size; i++) {
			if (arr[i] > 0)
				p++;
			else if (arr[i] < 0)
				n++;

		}
		cout << "Pos: " << p << endl << "Neg: " << n << endl;
	}
}