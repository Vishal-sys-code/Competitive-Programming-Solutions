#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n); //sorting STL ==> O(log(n))
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}

//DNF(Dutch National Flag) SORTING

/*
0's -> RED => staring
1's -> WHITE => low pointer
????'s(unknown) -> NO COLOR => mid pointer
2's -> BLUE -> high pointer
*/

/*
Check the valur of arr[mid]
if 0, swap arr[low] and arr[mid], low++, mid++
if 1, mid++
if 2, swap arr[mid] and arr[high], high--
*/


void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void DNFSORT() {
	int low = 0;
	int mid = 0;
	int high = n - 1;
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap(arr, low, mid);
			low++; mid++;
		}
		else if (arr[mid] == 1) {
			mid++;
		}
		else {
			swap(arr, mid, high);
			high--;
		}
	}
}