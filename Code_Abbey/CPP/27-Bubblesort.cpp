#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define N 1000

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t = 1;
	while (t--) {
		int n; cin >> n;
		int swap_count = 0;
		int pass_count = 0;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int i, j;
		for (i = 0; i < n - 1; i++) {
			for (j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(&arr[j], &arr[j + 1]);
					swap_count++;
				}
			}
			pass_count++;
		}

		cout << pass_count << " " << swap_count << endl;
	}
	return 0;
}

