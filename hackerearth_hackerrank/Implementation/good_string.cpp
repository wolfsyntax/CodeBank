#include <iostream>
#include <algorithm>

using namespace std;
/**
	Problem	:	Good String
	Link	:	https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/good-string-3/
	Verdict	:	Accepted
	Author	:	Wolf Syntax
**/

int main(){
	
	string str;
	while(getline(cin,str)){
		sort(str.begin(),str.end());
		int prev = str.length();
		
		str.erase(unique(str.begin(),str.end()),str.end());
		
		cout << prev-str.length() << endl;
	}
	return 0;
}