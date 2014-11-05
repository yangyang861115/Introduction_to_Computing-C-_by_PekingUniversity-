#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	int i = 0;
	int j = 0;
	int a[5][5];
	for(i=0; i < 5; i++){
		for(j=0;j < 5; j++){
			cin >> a[i][j];
		}
	}
	int m, n;
	cin >> m >>n;
	
	if(m>=0 and m<=4 and n>=0 and n<=4){
		int temp[5];
		for(i=0; i<5;i++){
			temp[i] = a[m][i];
			a[m][i] = a[n][i];
			a[n][i] = temp[i];
		}
		
		
		for(i = 0; i < 5; i++){
			for(j = 0;j < 5; j++){
				cout<< setw(4)<< a[i][j];
			}
			cout << endl;
		}
	}
	else{
		cout << "error" <<endl;
	}
	return 0;
}