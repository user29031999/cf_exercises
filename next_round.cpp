#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, next = 0;
	cin >> n >> k;
	vector<int> participant;
	int x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		participant.push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		if (participant[i] > 0 && participant[i] >= participant[k - 1])
		{
			++next;
		}
	}
	cout << next << endl;
	return 0;
}