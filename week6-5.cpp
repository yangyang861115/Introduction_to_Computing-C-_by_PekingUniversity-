#include <iostream>
using namespace std;

int main() {
	int n, i = 10;
	cin >> n;
	for(i = 10; i < n; i++){
		int s = 0;
		int num = i;
		
		while(num > 0){
			s += num% 10;
			num = num/10;
		}
		if (i % s == 0){
			cout << i <<endl;
		}
	}
	return 0;
}