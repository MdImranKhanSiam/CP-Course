#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int a, b;

    cin >> a >> b;

    int GCD;

    for( int i = 1; i <= a; i++ )
    {
        if (a % i == 0 && b % i == 0) {

            GCD = i;
        }
    }

    cout << "GCD: " << GCD << endl;
}
