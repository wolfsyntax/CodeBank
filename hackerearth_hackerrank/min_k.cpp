#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
//AC
int main(){
	int n, k; cin >> n;
	int a;
	
	vector<int> arr(n);
	map<int,int> x;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		x[arr[i]]++;
	} cin >> k;	
	
	sort(arr.begin(),arr.end());
	
	for(int i =0; i < n; i++){
		if(x[arr[i]] == k){
			cout << arr[i] << endl;
			break;
		}
	}
	return 0;
}