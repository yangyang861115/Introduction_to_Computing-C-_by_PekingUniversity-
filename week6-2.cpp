#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n > 0){
		int s;
		cin >> s;
		n--;
		double walk_time = s / 1.2;
		double bike_time = s / 3.0 + (27 + 23);
		if (walk_time > bike_time)
			cout << "Bike" << endl;
		else if (walk_time < bike_time)
			cout << "Walk" << endl;
		else
			cout << "All" << endl;
	}
	return 0;
}