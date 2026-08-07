#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int a, b;

    cin >> a >> b;

    for( int i = 1; i <= a*b; i++ )
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << "LCM: " << i << endl;

            break;
        }
    }
}
