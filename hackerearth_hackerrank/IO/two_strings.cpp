#include <iostream>
#include <cstdio>
#include <algorithm>
//Accepted
using namespace std;

int main(){
	
	int t; scanf("%d",&t);
	string str,ing;
	while(t--){
		cin >> str >> ing;
		sort(str.begin(), str.end());
		sort(ing.begin(), ing.end());
		cout << (str == ing ? "YES\n" : "NO\n");
	}
	
	return 0;
}