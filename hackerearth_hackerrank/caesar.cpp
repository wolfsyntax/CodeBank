#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/**
	Link	:	https://www.hackerrank.com/challenges/caesar-cipher-1/problem
	Verdict	:	AC
**/
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
	
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	vector<char> alpha_lower;
	vector<char> alpha_upper;
	
	for(int i = 0; i < str.length(); i++)
		if(i < str.length()/2) alpha_upper.push_back(str[i]);
		else alpha_lower.push_back(str[i]);
	
	int SIZE = alpha_lower.size();
	for(int i = 0; i < s.length(); i++)
		if(isalpha(s[i])){
			if(s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = alpha_upper[(((s[i]-'A')+k)%SIZE)];
			
			} else {
				s[i] = alpha_lower[(((s[i]-'a')+k)%SIZE)];
	//			cout << "LowerCase\n\n";
			
			}
		}
	
	cout << s << endl;
    
	return 0;
}
