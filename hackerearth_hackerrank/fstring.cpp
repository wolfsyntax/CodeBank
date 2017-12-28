#include <bits/stdc++.h>

using namespace std;
/**
	Problem	:	Funny String
	Link	:	https://www.hackerrank.com/challenges/funny-string/problem
	Verdict	:	AC
**/
string funnyString(string s){
    // Complete this function
    int c = 0, dc = s.length()-1;
		for(int i = 0; i < s.length()-1; i++){ 
			if(abs(int(s[i])-int(s[i+1]))  == abs(int(s[dc])-int(s[dc-1]))) c++;
			else break;
			dc--;
		}
		
		return (c == s.length()-1 ? "Funny":"Not Funny");
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
