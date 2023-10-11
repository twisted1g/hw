#include <iostream>
using namespace std;
int main() {
	int k = 0, n;
	cin >> n;
	float x, a, b, sum = 0;
	cin >> x;
	a = 1 / x;
	b = -1;
	for (k; k <= n; k++) {
		a *= (x * x);
		b += 2;
		sum += (a / b);
	}
	cout << sum;
	return 0;
}