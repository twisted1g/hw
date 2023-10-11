////task3
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 3, y = 1;
//	float a, b, c, d, sum=0;
//	a = -1;
//	b = 1;
//	c = 0.5;
//	d = 1;
//	for (k; k <= n; k++) {
//		a = -a;
//		b *= (y * y);
//		c *= 4;
//		d *= (k + 1);
//		sum += ((a * (b + 1)) / (c + d));
//	}
//	cout << sum;
//	return 0;
//}
//
////task6
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 3;
//	float a, b, c, sum = 0;
//	a = 1;
//	c = 2;
//	for (k; k <= n; k++) {
//		a = -a;
//		b = k * k * k - 27;
//		c *= (k + 2);
//		sum += ((a * b) / (3 * c));
//	}
//	cout << sum;
//	return 0;
//}
//
////task7
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 3;
//	float a, b, c, sum = 0;
//	c = 1;
//	for (k; k <= n; k++) {
//		a = (k - 4) * (k - 4) * (k - 4);
//		b = (k + 7);
//		c *= k;
//		sum += ((a * b) / c);
//	}
//	cout << sum;
//	return 0;
//}
//
////task8
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 3, x = 1;
//	float a, b, c, sum = 0;
//	a = 1;
//	b = 1;
//	c = 1;
//	for (k; k <= n; k++) {
//		a = -a;
//		b *= x;
//		c *= k;
//		sum += ((a * b) / c);
//	}
//	cout << sum;
//	return 0;
//}
//
////task9
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 2, n = 4, x = 1;
//	float a, b, sum = 0;
//	a = x;
//	b = 1;
//	for (k; k <= n; k++) {
//		a *= x;
//		b *= k;
//		sum += (a / b);
//	}
//	cout << sum;
//	return 0;
//}
//
////task10
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 4, x = 1;
//	float a, b, sum = 0;
//	a = 1;
//	b = x;
//	for (k; k <= n; k++) {
//		a += 2;
//		b *= (x * x);
//		sum += (1 / (a * b));
//	}
//	cout << sum;
//	return 0;
//}
//
////task11
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k = 1, n = 4, x = 1;
//	float a, b, c, sum = 0;
//	a = -1;
//	b = 1;
//	c = x;
//	for (k; k <= n; k++) {
//		a = -a;
//		b += 2;
//		c *= (x * x);
//		sum += (a / (b * c));
//	}
//	cout << sum;
//	return 0;
//}
//
////task12
//#include <iostream>
//
//int main() {
//	int k = 1, n = 4, x = 1;
//	float a, b, c, sum = 0;
//	a = 1;
//	b = 1;
//	c = 1;
//	for (k; k <= n; k++) {
//		a = -a;
//		b *= (x * x);
//		c *= ((2 * k) * (2 * k - 1));
//		sum += ((a * b) / c);
//	}
//	std::cout << sum;
//	return 0;
//}
//
////task13
//#include <iostream>
//
//int main() {
//	int k = 1, n = 4, x = 2;
//	float a, b, c, sum = 0;
//	a = 1;
//	b = x-1;
//	c = 1;
//	for (k; k <= n; k++) {
//		a = -a;
//		b *= (x - 1);
//		c += 1;
//		sum += ((a * b) / c);
//	}
//	std::cout << sum;
//	return 0;
//}
//
////task14
//#include <iostream>
//
//int main() {
//	int k = 2, n = 4;
//	float a, b, sum=0;
//	a = -1;
//	b = 3;
//	for (k; k <= n; k++) {
//		a = -a;
//		b += 2;
//		sum += (a / (b * k));
//	}
//	std::cout << sum;
//	return 0;
//}