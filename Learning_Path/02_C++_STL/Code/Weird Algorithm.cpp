#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>store(1, n);

    while( n != 1 ) {

        if( n % 2 == 0 ) {

            n /= 2;

        } else {

            n = (n*3)+1;
        }

        store.push_back(n);
    }

    for( auto point : store ) {

        cout << point << " ";
    }

    cout << endl;
}
