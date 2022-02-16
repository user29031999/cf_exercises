#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
	int n;
	scanf("%d", &n);
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
	{
		string word;
		cin >> word;
		if (word.length() > 10){
			//v[i] = word[0] + (word.length() - 2) + word[word.length() - 1];
		}else {
			v[i] = word;
		}
	}

	for (int i = 0 ; i < n ; ++i){
		cout << v[i] << endl;
	}
	return 0;
}