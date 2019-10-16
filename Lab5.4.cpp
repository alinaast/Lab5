#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	b = a % 10;
	a = a / 10;
	a = b * 10 + a;
	cout << a;
	return 0;
}