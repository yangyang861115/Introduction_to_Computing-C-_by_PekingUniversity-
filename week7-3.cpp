#include <iostream>
using namespace std;

int main() {
	char s[500];
	cin.getline(s,500);
	int i = 0;
	int p = 0;
	int le = 0;
	int start = 0;
	
	while(s[i] != '\0'){
		if(s[i] == ' ' || s[i] == '.'){
			
			if((i - p) >le){
				le = i -p;
				start = p;
				p = i + 1;
				
			}
			else{
				p = i+1;
			}
		}	
		i++;
	}
	
	for(int j = start; j < start + le; j++){
		cout <<s[j];
	}
	cout<<endl;
	return 0;
}