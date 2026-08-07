#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    long long n;

    cin >> n;

    long long original = n, reversed = 0;

    while (n > 0) {

        int last_digit = n % 10;

        reversed = (reversed * 10) + last_digit;

        n = n / 10;
    }

    if (original == reversed) {

        cout << "Palindrome" << endl;

    } else {

        cout << "Not Palindrome" << endl;
    }
}
