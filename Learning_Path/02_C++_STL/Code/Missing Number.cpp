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

    vector<ll>store(n+1,0);

    for( ll i = 0; i < n-1; i++ ) {

        ll value;

        cin >> value;

        store[value] = 1;
    }

    for( ll i = 1; i <= n; i++ ) {

        if( store[i] == 0 ) {

            cout << i << endl;

            break;
        }
    }
}
