#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
        

	while (t--) {
		int n;
		cin >> n;

		int ones = 0 , twos = 0;

		while (n--)
		{
			int w;
			cin >> w;
			if (w == 1) ones++;
			else twos++;
		}

		if (ones % 2 == 1) cout << "NO \n";
		else if((twos % 2 == 1 && ones >= 1) || twos % 2 == 0) cout << "YES \n";
		else cout << "NO \n";

	}

	return 0;
}
