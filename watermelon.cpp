#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
	string line;
	
	while(true){
		getline(cin, line);
		cout << line << endl;
		if (line.empty())
		{
			break;
		}
	}

	return 0;
}