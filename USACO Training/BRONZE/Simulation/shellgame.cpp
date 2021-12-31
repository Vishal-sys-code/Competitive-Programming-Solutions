#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

void FAST_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void INPUT_OUTPUT() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//global variables
int N;
int shell_pos[3];
int count[3];

int main() {
    FAST_IO;
    cin >> N;
    for (int i = 0; i < 3; ++i) {
        shell_pos[i] = i;
    }
    for (int i = 0; i < N; ++i) {
        int a, b, g; cin >> a >> b >> g;
        --a, --b, --g;
        swap(shell_pos[a], shell_pos[b]);
        count[shell_pos[g]]++;
    }
    int mE = max(count[0], count[1]);
    cout << max(mE, count[2]) << endl;
}
