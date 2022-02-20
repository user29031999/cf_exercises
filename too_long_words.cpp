#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
	int n;
	scanf("%d", &n);
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
	{
		string word, input;
		cin >> input;
		if (input.length() > 10){
			word += input[0];
			word += to_string((input.length() - 2));
			word += input[input.length() - 1];
		}else {
			word = input;
		}
		v[i] = word;
	}

	for (int i = 0 ; i < n ; ++i){
		cout << v[i] << endl;
	}
	return 0;
}