#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    long long arr[n + 1], prefix[n + 1];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        long long sum = prefix[b] - prefix[a - 1];
        cout << sum << endl;
    }
    return 0;
}