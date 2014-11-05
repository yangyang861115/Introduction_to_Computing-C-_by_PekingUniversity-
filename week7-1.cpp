#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	char s[81];
	cin.getline(s, 80);
	for(int c = 0; s[c] != '\0'; c++){
		if(s[c] == 'a'){
			a++;
		}
		else if(s[c] == 'e'){
			e++;
		}
		else if(s[c] == 'i'){
			i++;
		}
		else if(s[c] == 'o'){
			o++;
		}
		else if(s[c] == 'u'){
			u++;
		}
	}
	cout << a << ' '<< e << ' '<< i << ' ' << o << ' ' << u << endl;
	return 0;
}