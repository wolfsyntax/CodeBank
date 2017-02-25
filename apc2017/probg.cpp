#include <iostream>
#include <cstring>

#define LL long long int

using namespace std;

int main(){

	freopen("probg.in","r",stdin);

	int test, h; cin >> test;
	char c;

	for(int i = 1; i <= test; i++){
		
		cout << "CASE " << i << ":\n";
		cin >> h >> c;
		int spacing = h-1;
		for(int j = 0; j < h; j++){
			for(int k = 0; k < spacing; k++)
				cout << ' ';

			for(int k = 0; k < j+1; k++)
				cout << c;

			for(int k = 0; k < j; k++)
				cout << c;

			cout << endl;

			spacing--;
		}



	
	}

	return 0;
}
