#include <iostream>
#include <bits/stdc++.h>

// program that takes input in uppercase and outputs in lower case

using namespace std;

int main(){
	string s;
	cout << "enter name in capital letters:";
	getline(cin, s);
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
	
	return 0;
}