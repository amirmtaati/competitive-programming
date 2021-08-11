#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	while(cin >> n) {
		int result = 0;
		
		for(int i = 1; i <= n; i++) {
			result += i * i;
		}
		
		cout << result << "\n";
	}

	return 0;
}