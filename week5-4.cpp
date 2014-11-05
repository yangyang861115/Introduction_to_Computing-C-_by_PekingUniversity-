#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n>>k;
	int a[n];
	int i = 0;
	while(i < n){
		cin >> a[i];
		i++;
	}
	for (i = 0; i < n-1; i++){
		for (int j = 1; j < n -i; j++) {
			if (a[j-1] < a[j]) {
    			int temp = a[j];
    			a[j] = a[j-1];
    			a[j-1] = temp;
			}
		}
	}
	cout << a[k - 1]<<endl;
	return 0;
}