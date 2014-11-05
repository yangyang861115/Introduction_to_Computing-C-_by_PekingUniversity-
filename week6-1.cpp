#include <iostream>
using namespace std;

int main() {
	int a, temp;
	int sum = 0, i = 1;
	cin >> a;
	while(i <= 5){
		cin >> temp;
		if(temp < a)
			sum += temp;
		i++;
	}
	cout << sum <<endl;
	return 0;
}