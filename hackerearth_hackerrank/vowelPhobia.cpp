#include <iostream>
#include <algorithm>

using namespace std;
//AC
int main() {

	int n; string str; cin >> n;
	
	while(n--){
		
		cin >> str;
//		count(str.begin(),str.end(),'a') + count(str.begin(),str.end(),'e') + count(str.begin(),str.end(),'i') + count(str.begin(),str.end(),'o') + count(str.begin(),str.end(),'u') + (count(str.begin(),str.end(),'A') + count(str.begin(),str.end(),'E') + count(str.begin(),str.end(),'I') + count(str.begin(),str.end(),'O') + count(str.begin(),str.end(),'U'))
		cout << (count(str.begin(),str.end(),'a') + count(str.begin(),str.end(),'e') + count(str.begin(),str.end(),'i') + count(str.begin(),str.end(),'o') + count(str.begin(),str.end(),'u') + (count(str.begin(),str.end(),'A') + count(str.begin(),str.end(),'E') + count(str.begin(),str.end(),'I') + count(str.begin(),str.end(),'O') + count(str.begin(),str.end(),'U'))) << endl;
	}
	
	
	return 0;
}