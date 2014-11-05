#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i =0; 
	int j =0;
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	
	int count = 0;

	
	for(i=1; i<n-1; i++){
		for(j=1; j<n-1; j++){
			if((a[i-1][j]-a[i][j]>=50)&&(a[i+1][j]-a[i][j]>=50)&&(a[i][j-1]-a[i][j]>=50)&&(a[i][j+1]-a[i][j]>=50)){
				count++;
			}
		}
	}
	cout << count <<endl;	
		
	return 0;
}