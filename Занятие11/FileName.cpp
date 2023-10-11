////task8
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a1, a2, cnt=0, pr = 1, flag;
//	cin >> a1;
//	cin >> a2;
//	while (a2 != 0) {
//		int sum_dels = 0;
//		if (a2 < a1) {
//			for (int i = 1; i < a2; i++) {
//				if (a2 % i == 0) sum_dels += i;
//			}
//			if (sum_dels == a2) {
//				cnt += 1;
//				pr *= a2;
//			}
//		}
//		a1 = a2;
//		cin >> a2;
//	}
//	cout << cnt << " " << pr;
//	return 0;
//}

////task9
//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, k, a1, a2, a3, cnt=0, sum=0;
//	cin >> n;
//	cin >> k;
//	cin >> a1;
//	cin >> a2;
//	cin >> a3;
//	for (int i = 3; i < n; i++) {
//		if ((a1 - a2 <= k) && (a3 - a2 >= k)) {
//			int sum_number, copy;
//			copy = a2;
//			sum_number = 0;
//			while (copy != 0) {
//				sum_number += copy % 10;
//				copy /= 10;
//			}
//			if (sum_number % 2 == 0) {
//				cnt += 1;
//				sum += a2;
//			}
//		}
//		a1 = a2;
//		a2 = a3;
//		cin >> a3;
//	}
//	cout << cnt << " " << sum;
//	return 0;
//}

////task10
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a1, a2, cnt=0;
//	cin >> a1;
//	if (a1 != 0) {
//		cin >> a2;
//		while (a2 != 0) {
//			if (a2 < 0) {
//				int copy = a1, cnt_5 = 0;
//				while (copy != 0) {
//					if (copy % 10 == 5) cnt_5 += 1;
//					copy /= 10;
//				}
//				if (cnt_5 == 2) cnt += 1;
//			}
//			a1 = a2;
//			cin >> a2;
//		}
//	}
//	cout << cnt;
//	return 0;
//}

////task11
//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, a1, a2, sum = 0, cnt = 0, cnt_del;
//	cin >> n;
//	cin >> a1 >> a2;
//	for (int i = 2; i < n; i++) {
//		cnt_del = 0;
//		if (a2 % 2 == 0) {
//			for (int j = 1; j <= a1; j++) {
//				if (a1 % j == 0) cnt_del += 1;
//			}
//			if (cnt_del == 3) {
//				sum += a1;
//				cnt += 1;
//			}
//		}
//		a1 = a2;
//		cin >> a2;
//	}
//	cout << sum / cnt;
//	return 0;
//}

////task 12
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a1, a2, flag, cnt = 0, sum=0;
//	cin >> a1;
//	if (a1 != 0) {
//		cin >> a2;
//		while (a2 != 0) {
//			flag = 1;
//			for (int i = 2; i < a2; i++) {
//				if (a2 % i == 0) flag = 0;
//			}
//			int cnt_num=0,copy = abs(a1);
//			while (copy != 0) {
//				copy /= 10;
//				cnt_num += 1;
//			}
//			if ((flag == 1) && (cnt_num % 2 == 0)) {
//				sum += a2;
//				cnt += 1;
//			}
//			a1 = a2;
//			cin >> a2;
//		}
//	}
//	cout << sum / cnt;
//	return 0;
//}

//task13
#include <iostream>
using namespace std;

int main() {
	int n, a1, a2, cnt=0;
	cin >> n;
	cin >> a1 >> a2;
	for (int i = 2; i < n; i++) {
		int cnt_num = 0, sum_num = 0;
		while (a2 != 0) {
			cnt_num += 1;
			a2 /= 10;
		}
		while (a1 != 0) {
			sum_num += a1 % 10;
			a1 /= 10;
		}
		if ((cnt_num % 2 == 0) && (sum_num < 20)) cnt += 1;
		a1 = a2;
		cin >> a2;
	}
	cout << cnt;
	return 0;
}