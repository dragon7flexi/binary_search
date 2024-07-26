#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& a, k) {
    int left = 0;
    int right = a.size() - 1;

    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;

        if (a[mid] == k) {
            return mid;
        } else if (a[mid] < k) {
            left = mid + 1;
        } else if (a[mid] > k) {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = binary_search(a, k);
    cout << (ans == -1 ? "No" : ans) << endl;

    return 0;
}