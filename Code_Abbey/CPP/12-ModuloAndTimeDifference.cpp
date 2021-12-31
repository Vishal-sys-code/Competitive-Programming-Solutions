#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {
		ll day1, day2, hour1, hour2, min1, min2, sec1, sec2;
		ll day_rem, hour_rem, min_rem;
		ll day_quo, hour_quo, min_quo;
		ll beg, end;
		cin >> day1 >> hour1 >> min1 >> sec1;
		cin >> day2 >> hour2 >> min2 >> sec2;
		beg = (day1 * 60 * 60 * 24) + (hour1 * 60 * 60) + (min1 * 60) + sec1;
		end = (day2 * 60 * 60 * 24) + (hour2 * 60 * 60) + (min2 * 60) + sec2;
		ll diff = end - beg;
		day_quo = (floor(diff / 86400));
		day_rem = (diff % 86400);
		hour_quo = (floor(day_rem/(60*60)));
		hour_rem = (day_rem % 3600);
		min_quo = (floor(hour_rem / 60));
		min_rem = (hour_rem % 60);
		cout << "(" << day_quo << " " << hour_quo << " " << min_quo << " " << min_rem << ")" << endl;
	}
	return 0;
}
