#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//AC
int main(){
	
	int n,sum = 0;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	vector<int> s;
	
	for(int i =0; i < n; i++){
		s.push_back(sum-arr[i]);
	}
	
	sort(s.begin(),s.end());
	
	cout << s[0] << " " << s[n-1] << endl;
	return 0;
}