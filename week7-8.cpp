#include <iostream>
using namespace std;

int main() {
	int l, m;
	int count = 0;
	cin >> l >> m;
	int a[l+1];
	for(int i = 0; i <= l; i++){
		a[i] = 1;
	}
	for(int i = 0; i < m; i++){
		int start, stop;
		cin >> start >> stop;
		for(int j = start; j<= stop; j++){
			a[j] = 0;
		}
	}
	for(int i = 0; i<= l; i++){
		if(a[i] == 1)
			count++;
	}
	cout << count << endl;
	return 0;
}