#include <bits/stdc++.h>

using namespace std;
/**
Problem Title: 	1 Like 1 House	
Link: 			https://www.hackerrank.com/contests/noi-ph-practice-page/challenges/1-like-1-house
Verdict:		AC
**/
int main(){

	int t,roof, base_height, base_width;
	cin >> t;
	while(t--){
		cin>> roof >> base_height >> base_width;
		int height = roof + base_height + 1, width = base_width+5, res;
		res = width - (roof * 2);
		for(int i = 0; i < height; i++){
			
			
			
			
			if(i == 0){
				string sroof(roof,'.');
				string froof(res,'_');
				cout << sroof << froof << sroof << endl;
			}else if(roof > 0){
				string froof(res,'#');
				string sroof(roof,'.');
				cout << sroof << '/' << froof << "\\" << sroof << endl;
				res += 2;	
			}else if(roof == 0){
				
				string froof(res,'#');
				cout << '/' << froof << "\\" << endl;
			}else if(i < height-3){
				
				string tmp(base_width-1,'.');
				cout << "..|" << tmp << "|.." << endl;
			}else if(i < height - 2){
				string tmp(base_width-3,'.');
				cout << "..|" << tmp << "_.|.." << endl;
			}else if(i < height-1){
				string tmp(base_width-4,'.');
				cout << "..|" << tmp << "|.||.." << endl;
			}else{
				string tmp(base_width-4,'_');
				cout << "..|" << tmp << "|_||.." << endl;
			}
			
			roof--;
			
		}  cout << endl;
	}
	return 0;
}