// Q.consider the problem of finding two distinct element whose sum equals to target

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long target;
    cin >> target;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (!is_sorted(arr.begin(), arr.end())) {
        cout << "Array is not sorted\n";
        return 0;
    }

    int l = 0;
    int r = n - 1;

    while (l < r) {
        long long sum = (long long)arr[l] + arr[r];

        if (sum == target) {
            cout << "Indices: " << l << ", " << r << '\n';
            cout << "Values: " << arr[l] << ", "
                 << arr[r] << '\n';
            return 0;
        }

        if (sum < target) {
            l++;
        } else {
            r--;
        }
    }

    cout << "No pair found\n";
    return 0;
}