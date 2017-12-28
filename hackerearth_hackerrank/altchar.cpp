#include <bits/stdc++.h>

using namespace std;
/**
	Problem	:	
	Link	:	https://www.hackerrank.com/challenges/alternating-characters/problem
	Verdict	:	AC
**/
int alternatingCharacters(string s){
    // Complete this function
	int ctr = 0; 
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] == s[i+1]) ctr++;
	}
	return ctr;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
