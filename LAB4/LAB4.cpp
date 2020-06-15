#include <vector>
#define X 1
#if X == 0
#include <iostream>
#include <iterator>
#include <algorithm>
#else
#include "iterator.cpp"
#include "foreach.cpp"
#endif
using namespace std;

void f(const istream_iterator<int> t) {
	cout << "*t";
}

void f(vector<int>& v) {
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));
}
int main() {
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	int x;
	int y;
	cout << "Введите два числа: ";
	istream_iterator<int> iter(cin);
	cout << "Сумма двух чисел: " << *iter + *(iter++) << endl;
	vector<int> v;
	cout << "Введите последовательность чисел: ";
	f(v);
	for_each(v.begin(), v.end(), [](int x) {
		cout << x << " ";
	});
	return 0;
}
