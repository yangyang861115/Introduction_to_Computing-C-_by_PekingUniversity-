#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	int  l1 = 0, l2 = 0, l3 = 0, l4 = 0;
	cin >> n;
	int total = n;
	while (n > 0){
		int temp;
		cin >> temp;
		if (temp > 60)
			l4 += 1;
		else if (temp > 35)
			l3 += 1;
		else if (temp > 18)
			l2 += 1;
		else 
			l1 += 1;
		
		n--;
	}
	double n1 = 1.0 * l1/total;
	double n2 = 1.0 * l2/total;
	double n3 = 1.0 * l3/total;
	double n4 = 1.0 * l4/total;
	
	cout << "1-18: " << fixed << setprecision(2) << n1 * 100 <<'%'<<endl;
	cout << "19-35: " << fixed << setprecision(2) << n2 * 100 <<'%'<<endl;
	cout << "36-60: " << fixed << setprecision(2) << n3 * 100 <<'%'<<endl;
	cout << "60-: " << fixed << setprecision(2) << n4 * 100 <<'%'<<endl;
	return 0;
}