#include <iostream>
//AC
using namespace std;

int main(){
	int m,u,d,n, sum;
	while(cin >> m >> u >> d){ n = 1; sum = 0;
	
		for(int i = u; i < m; i += u){
			i -= d; n++;
		}
		cout << n << endl;
	}
	return 0;
}