#include <iostream>
//AC
using namespace std;

int main(){

	int w, h;
	while(cin >> w >> h)
	cout << ((w/(h*h)) >= 25 ?"GO ON A DIET\n":"YOU ARE TOO THIN\n");

	return 0;
}