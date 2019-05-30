#include <iostream>
using namespace std;
template <typename T1,typename T2> class DoubleBox
{
	T1 num_1 = T1();
	T2 num_2 = T2();
public:
	DoubleBox() {
		};
	DoubleBox(const T1 val_1, const T2 val_2):num_1(val_1),num_2(val_2) {
		};
	void get(T1 &val_1, T2 &val_2) 
	{
		val_1 = num_1;
		val_2 = num_2;
	}
	void set(const T1 val_1, const T2 val_2) 
	{
		num_1 = val_1;
		num_2 = val_2;
	}
};
int main()
{
	int value_1;
	double value_2;
	DoubleBox <int,double> value(10,0.665);
	value.get(value_1,value_2);
	cout << "Работа метода get: ";
	cout << value_1 << " " << value_2 << endl;
	value.set(20, 0.378);
	cout << "Работа метода set: ";
	value.get(value_1,value_2);
	cout << value_1 << " " << value_2 << endl;
	return 0;
}
