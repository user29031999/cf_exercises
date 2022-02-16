#include<bits/stdc++.h>
using namespace std;

int main(){
	string input, cipherString;
	int rotationFactor;
	cin >> input >> rotationFactor;
	for (int i = 0 ; i < input.length() ; ++i){
		int c = int(input[i]);
		char r = input[i];
		if (c >= 65 && c <= 90){
			// Mayus
	      	r = char(((c + rotationFactor) - 65) % 26 + 65);
	    } else if(c >= 97 && c <= 122) {
			// Minus
	      	r = char(((c + rotationFactor) - 97) % 26 + 97);
	    } else if (c >= 49 && c <= 57){
	    	// Nums
	      	r = char(((c + rotationFactor) - 49) % 10 + 49);
	    }
	    cipherString += r;
	}
	cout << cipherString << endl;
	return 0;
}

