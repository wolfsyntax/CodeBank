#include <iostream>
#include <map>
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
using namespace std;
//Accepted
int main(){
	string msg; int key;
	string str,ing;
	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ing = "abcdefghijklmnopqrstuvwxyz";
	
	map<int,char> dictionary_up;
	map<int,char> dictionary_lower;
	map<int,char> dictionary_numeric;
	for(int i = 0; i < str.length(); i++){
		dictionary_up[i] = str[i];
		dictionary_lower[i] = ing[i];
	}
	
	dictionary_numeric[0] = '0';dictionary_numeric[1] = '1';dictionary_numeric[2] = '2';dictionary_numeric[3] = '3'; dictionary_numeric[4] = '4';
	dictionary_numeric[5] = '5';dictionary_numeric[6] = '6';dictionary_numeric[7] = '7';dictionary_numeric[8] = '8'; dictionary_numeric[9] = '9';
	
	while(cin >> msg){
		
		cin >> key;

		for(int i = 0; i < msg.length(); i++){
			if(msg[i] >= 65 && msg[i] <= 90){
				msg[i] = dictionary_up[((msg[i]-65)+key)%26];
			} else if(msg[i] >= 97 && msg[i] <= 122){				
				msg[i] = dictionary_lower[((msg[i]-97)+key)%26];
			} else if(msg[i] >= 48 && msg[i] <= 57){
				msg[i] = dictionary_numeric[((msg[i]-48)+key)%10];
			}
		}
		
		cout << msg << endl;
	}
	return 0;
}