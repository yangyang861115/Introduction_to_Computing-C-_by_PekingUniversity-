#include <iostream>
using namespace std;

int main() {
	int score, n;
	cin >> score;
	if (score >= 95)
		n = 1;
	else if (score >= 90)
		n = 2;
	else if (score >= 85)
		n = 3;
	else if (score >= 80)
		n = 4;
	else if (score >= 70)
		n = 5;
    else if (score >= 60)
		n = 6;
	else 
		n = 7;
	cout << n << endl;
	return 0;
}