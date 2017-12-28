#include <iostream>
//AC
using namespace std;

int main(){

	int a, b;
	while(cin >> a >> b){
		cout << ((a+b)%2 == 0 ? "HAPPY\n":"SAD\n");
	}
	

	return 0;
}