#include <iostream>
using namespace std;
#include <string>
int main() {
	char s1[81] ;
	cin.getline(s1,80);
	char s2[81];
	cin.getline(s2,80);
	int i = 0;
	while(s1[i] != '\0'){
		if(s1[i] >= 'A' && s1[i] <= 'Z'){
			s1[i] = s1[i] + 'a' - 'A';
			
		}
		i++;
	}
	
	i = 0;
	while(s2[i] != '\0'){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){
			s2[i] = s2[i] + 'a' - 'A';
		
		}
			i++;
	}
	
	i=0;
	char result = '=';
	do {
    	if (s1[i] > s2[i]) {
        	result = '>';
        	break;
    	} else if (s1[i] < s2[i]) {
        	result = '<';
        	break;
    	}
 		i++;
	} while (s1[i] != '\0' && s2[i] != '\0');
	
	
	cout<<result<<endl;
	return 0;
}