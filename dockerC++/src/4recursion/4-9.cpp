#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    // a[i-1]を選ばない場合
    if (func(i - 1, w, a)) return true;

    // a[i-1]を選ぶ場合
    if (func(i - 1, w - a[i - 1], a)) return true;

    //どちらもfalse
    return false;
}

int main() {
    int n, w;
    cin >> n;
    cin >> w;
    cout << "n:" << n << endl;
    cout << "w:" << w << endl;
    vector<int> a(n);
    cout << "after vector" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "for --------" << endl;
        cin >> a[i];
        cout << a[i] << endl;
    }

    if (func(n, w, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}