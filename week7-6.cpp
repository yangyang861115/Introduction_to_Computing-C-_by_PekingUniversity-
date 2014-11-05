#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i =0; i<n;i++)
		cin >> a[i];
	int temp[m];
	
	for(int i= 0; i<m; i++)
		temp[i] = a[n-m+i];
	for(int i = n-1; i >= m ; i--)
		a[i] = a[i-m];
	
	for(int i=0;i<m; i++)
		a[i] = temp[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	cout<< endl;
	return 0;
}