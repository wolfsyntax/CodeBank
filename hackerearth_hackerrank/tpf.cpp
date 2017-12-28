#include<iostream>
//AC
using namespace std;

int main(){

	int n,ctr = 0; char c;
	char students[n+1];
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> students[i];
		}
		
		for(int i = 0; i < n; i++){
			cin >> c; 
			if(c != students[i]) ctr++;	
		}
		cout << ctr << endl; ctr = 0;
	}
	
	return 0;
}