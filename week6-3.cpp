#include <iostream>
using namespace std;

int main() {
	int n, k;
	
	while(cin >> n >> k){
		int count = 1;
		double price = 200;
		double sal = n;
		while(count <= 20){
			if(sal >= price){
				cout << count<< endl;
				break;
			}
			else{
				sal += n;
				price = price * (1+ 1.0*k/100);
				count++;
			}
			if(count > 20)
				cout <<"Impossible"<<endl;
				
		}
		
		
	}
	return 0;
}