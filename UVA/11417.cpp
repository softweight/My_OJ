#include <iostream>
using namespace std;

int GCD(int i, int j) {
	while (j >= 1) {
		int tmp = i % j;
		i = j;
		j = tmp;
	}
	return i;
}

int main() {
	int ipt, ans, i, j;

	while (true) {
		cin >> ipt;
		if (ipt == 0) break;

		ans = 0;
		for (i = 1; i < ipt; i++) {
			for (j = i + 1; j <= ipt; j++) {
				int result = GCD(i, j);
                // cout<<result<<endl;
				ans += result;
			}
		}
		cout << ans << endl;
	}

	return 0;
}