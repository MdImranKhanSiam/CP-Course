#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    long long n;

    cin >> n;

    int digits = 0;

    while (n > 0) {

        n = n / 10;

        digits++;
    }

    cout << "Digits: " << digits << endl;
}
