#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    long long n;

    cin >> n;

    long long reversed = 0;

    while (n > 0) {

        int last_digit = n % 10;

        reversed = (reversed * 10) + last_digit;

        n = n / 10;
    }

    cout << "Reversed: " << reversed << endl;
}
