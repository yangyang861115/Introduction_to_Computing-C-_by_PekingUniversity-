#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n>>k;
	int a[n];
	for (int i =0 ; i < n; i++){
		cin >> a[i];
	}
	int i, j;
	int flag =0;
	for (i =0; i < n; i++){
		if(flag == 1) break;
		for(j = 1; j < n; j++){
			if((i != j)&&(a[i] + a[j] == k)){
				flag =1;
				cout << "yes"<< endl;
				break;
			}
		}
	}
	if (flag ==0){
		cout<<"no"<<endl;
	}
	return 0;
}