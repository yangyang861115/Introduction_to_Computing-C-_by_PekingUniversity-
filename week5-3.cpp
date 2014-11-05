#include <iostream>
using namespace std;

int main() {
	int n, total;
	cin >> n;
	int a = 0, b = 0, c = 0;
	while (n > 0){
		int temp1, temp2, temp3;
		cin >> temp1 >> temp2 >> temp3;
		a += temp1;
		b += temp2;
		c += temp3;
		n--;
	}
	total = a + b + c;
	cout << a <<' '<< b <<' '<< c << ' ' << total << endl;
	return 0;
}