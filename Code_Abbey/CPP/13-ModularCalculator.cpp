#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int calculate(unsigned int,unsigned int,char);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ull a, b;
	cin >> a;
	char op;
	while (op != '%') {
		cin>>op;
		cin >> b;
		a = calculate(a, b, op);
	}
	cout << a << endl;
}

int calculate(unsigned int a,unsigned int b, char sign) {
	ull ans;
	switch (sign) {
	case '+':
		a += b;
		break;
	case '*':
		a *= b;
		break;
	case '%':
		a %= b;
	}
	return a;
}
