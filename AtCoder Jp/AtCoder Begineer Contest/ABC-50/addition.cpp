#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int a, b; cin >> a >> b;
	// char op; cin >> op;
	int a; cin >> a;
	char op; cin >> op;
	int b; cin >> b;
	if (op == '+') cout << a + b << endl;
	else if (op == '-')cout << a - b << endl;
	else cout << "NO" << endl;
}