#include <bits/stdc++.h>
/**
#	Problem	: Time Conversion
#	Link	: https://www.hackerrank.com/challenges/time-conversion/problem
#	Verdict	: AC
**/
using namespace std;

string timeConversion(string s) {
    // Complete this function
	string hours = s.substr(0,2);
	if(s[s.length()-2] == 'P'){
		
		
		if(hours == "01") { s[0] = '1'; s[1] = '3'; }
		else if(hours == "02") { s[0] = '1'; s[1] = '4'; }
		else if(hours == "03") { s[0] = '1'; s[1] = '5'; }
		else if(hours == "04") { s[0] = '1'; s[1] = '6'; }
		else if(hours == "05") { s[0] = '1'; s[1] = '7'; }
		else if(hours == "06") { s[0] = '1'; s[1] = '8'; }
		else if(hours == "07") { s[0] = '1'; s[1] = '9'; }
		else if(hours == "08") { s[0] = '2'; s[1] = '0'; }
		else if(hours == "09") { s[0] = '2'; s[1] = '1'; }
		else if(hours == "10") { s[0] = '2'; s[1] = '2'; }
		else if(hours == "11") { s[0] = '2'; s[1] = '3'; }
		
	} else {
		if(hours == "12") s[0] = s[1] = '0'; 
	}
	
	s.erase(s.length()-2,2);
	return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
