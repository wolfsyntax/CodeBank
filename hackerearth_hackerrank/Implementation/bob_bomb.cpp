#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
/**
	Problem	:	Bob and Bombs
	Link	:	https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/
	Verdict	:	Accepted
	Author	:	Wolf Syntax
**/
using namespace std;

int main(){

	int t, len; cin >> t;
	while(t--){
		
		string game; cin >> game;
		size_t pos = 0; len = game.length();
		
		if(game[pos] == 'B'){
			if(len >= 2 && game[pos+1] == 'W') game[pos+1]='*';
			if(len >= 3 && game[pos+1] == 'W') game[pos+2]='*';
		}
		
		if(game[len-1] == 'B'){
			
			if(len >= 2 && game[len-1] == 'W') game[len-2] = '*'; 
			if(len >= 3 && game[len-1] == 'W') game[len-3] = '*'; 
		}
		
		while((pos = game.find('B',pos)) != string::npos){
			if(pos >= 1 && len > 1 && game[pos-1] == 'W')
				game[pos-1] = '*';
			if(pos >= 2 && len > 2 && game[pos-2] == 'W')
				game[pos-2] = '*';
			if(pos+1 < len && game[pos+1] == 'W'){
				game[pos+1] = '*';
			}
			if(pos+2 < len && game[pos+2] == 'W'){
				game[pos+2] = '*';
			}
			pos ++;
		}

		cout << count(game.begin(),game.end(),'*') << endl;
		
	}

	return 0;
}