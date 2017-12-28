
#include <bits/stdc++.h>

using namespace std;

/**
	Problem	:	
	Link	:	https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
	Verdict	:	AC
**/

int theLoveLetterMystery(string s){
    // Complete this function
	string rev = s; reverse(rev.begin(),rev.end());
	int n = 0;
	if(rev == s) return 0;
	else {
		int len = s.length(); len = (len/2)+(len%2 == 0 ? 0 : 1);
		for(int i = 0; i < len; i++){
			if(rev[i] != s[i]){
				//cout << rev[i]<< ' ' << s[i] << endl;
				n += abs(int(rev[i])-int(s[i]));
				//cout << "N:\t" << n << endl;
			}
		}
	}
	
	return n;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}
