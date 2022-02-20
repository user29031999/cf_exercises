#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, solutions = 0; 
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int p, v, t;
		cin >> p >> v >> t;
		if ((p + v + t) >= 2)
		{
			++solutions;
		}
	}
	cout << solutions << endl;
	return 0;
}