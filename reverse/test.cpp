#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
	vector<int> a;
	vector<int> b;
	int n;
	int tmp;
	int i;
	cin >> n;

	for (i = 0;i < n; ++i) {
		cin >> tmp;
		a.push_back(tmp);
	}

	for (vector<int>::const_iterator it = a.begin();it != a.end();++it) {
		b.push_back(*it);
		reverse(b.begin(), b.end());
	}

	for (vector<int>::const_iterator it = b.begin();it != b.end();++it) {
		cout << *it;
		if (it != b.end() - 1)
			cout << " ";
	}

	system("pause");
	return 0;
}