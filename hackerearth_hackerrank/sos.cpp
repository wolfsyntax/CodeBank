#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>

using namespace std;
/**
	Link	:	https://www.hackerrank.com/challenges/mars-exploration/problem
	Verdict	:	AC
**/

int main(){
    
	string S;
    cin >> S;
    
	int change = 0, slen = S.length();
	
	for(int i = 3; i < slen; ){
		
		if(S[i-1] != 'S') change++;
		if(S[i-2] != 'O') change++;
		if(S[i-3] != 'S') change++;
		
		i += 3;
			
	}
	
	if(S[slen-3] != 'S') change++;
	if(S[slen-2] != 'O') change++;
	if(S[slen-1] != 'S') change++;
	
	cout << change << endl;
	return 0;
}
