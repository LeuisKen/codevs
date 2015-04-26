#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s, w;
	while(cin >> w) s = w + ' ' + s;
	cout << s;
	return 0;
}