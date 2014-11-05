#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n && n != 0){
		
		
		int a[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		int ans;
		//bubble sort
		for(int i = 0; i < n - 1; i++ ){
			for(int j = 1; j < n - i; j++){
				if(a[j-1] > a[j]){
					int temp= a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
				}
			}
		}
		//middle
		if(n%2 == 0){
			ans = (a[n/2]+a[n/2-1])/2;
		}
		else{
			ans = a[n/2];
		}
		
		
		cout << ans<<endl;
	};
	
	return 0;
}