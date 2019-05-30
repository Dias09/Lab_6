#include <iostream>
using namespace std;

template <typename T> void BubbleSort (T * arr, int size)
{
	for (int i = size - 1; i >= 1; i--)
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				T t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
}
int main()
{
	int arr[7]= {12,13,57665,3,-14,13,123212};
	int I = 7;
     BubbleSort (arr,I);
	 for (int i=0; i<I; i++){
		 cout << arr[i] << " ";
	 }
	 cout << endl;
	double array[5] = {-12.3, 1.2e15, 3434.5, -9.09e-3, 1.0e20};
    double D = 5;
	BubbleSort (array,D);
	for (int i=0; i<D; i++){
		 cout << array[i] << " ";
	}

}
