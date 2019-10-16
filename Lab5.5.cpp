#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	b = a / 100;
	a = a % 100;
	a = a * 10 + b;
	cout << a;
	return 0;
}
