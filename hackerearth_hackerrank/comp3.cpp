#include <bits/stdc++.h>

using namespace std;
/**
#	Problem Link:	https://www.hackerrank.com/challenges/compare-the-triplets/problem 
#	Verdict: AC
**/
int main(int argc, char * argv[]) {
	ios::sync_with_stdio(0);
	int alice[3], bob[3]; int bob_points = 0, alice_points = 0;
	while(scanf("%d%d%d%d%d%d",alice,alice+1,alice+2,bob,bob+1,bob+2)){
		bob_points = alice_points = 0;
		for(int i = 0; i < 3; i++)
			if(alice[i] > bob[i])alice_points++; 
			else if(alice[i] < bob[i]) bob_points++;
			
		printf("%d %d\n",alice_points,bob_points);
		
	}
	return 0;
}