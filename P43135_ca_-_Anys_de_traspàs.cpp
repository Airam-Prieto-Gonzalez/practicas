#include <iostream>
using namespace std;

int main () {
    for (int n; cin >> n;)
        if (n%100==0) {
            if (n%400==0) cout << "SI" << endl;
            else cout << "NO" << endl;
        } else if (n%4==0) cout << "SI" << endl;
        else cout << "NO" << endl;
}
