#include <iostream>
//AC
using namespace std;

int main(){

	int n;
	while(cin >> n){
		int ctr = 1; 
		for(int i = 0; i < n; ){
			for(int j = 0; j < ctr; j++){
				if(i >= n) break;
				i++;
				cout << "PAK\n";
			}

			for(int j = 0; j < ctr && i < n; j++){
				if(i >= n) break;
				i++;
				cout << "GANERN\n";
			}
			
			ctr++;
		}
	}

	return 0;
}
