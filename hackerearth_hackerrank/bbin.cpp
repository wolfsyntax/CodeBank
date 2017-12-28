#include <bits/stdc++.h>

using namespace std;

/**
	Problem	:	Beautiful Binary String
	Link	:	https://www.hackerrank.com/challenges/beautiful-binary-string/problem
	Verdict	:	AC
**/

int minSteps(int n, string B){
    // Complete this function
	int steps = 0; string tmp = "";
	for(int i = 0; i < n-2; i++){
		tmp = tmp + B[i] + B[i+1] + B[i+2]; 
		
		if(tmp == "010"){ B[i] = B[i+2] = '1'; steps++; }
		tmp = "";
	}
	return steps;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}
