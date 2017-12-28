#include <iostream>
#include <algorithm>

using namespace std;
//AC
int main(){

	string str; int t; cin >> t;
	while(t--){ cin >> str;
		string s = str; reverse(s.begin(),s.end());
		
		if(s == str){
			cout << "YES " << (str.length()%2 ? "ODD" : "EVEN"); 
		} else {
			cout << "NO";
		} cout << endl;
	}

	return 0;
}