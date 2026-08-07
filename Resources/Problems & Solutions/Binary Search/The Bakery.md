### Problem: [The Bakery](https://codeboost.online/problems/problem_detail/26/)


### Source Code:

```cpp
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll bakes (ll a, ll b, ll c, ll minutes) {

    ll first, second, third;

    first = minutes/a;

    second = minutes/b;

    third = minutes/c;

    return first+second+third;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, a, b, c;

    cin >> n >> a >> b >> c;

    ll left = 1, right = 1e14, result;

    while (left <= right) {

        ll mid = (left+right)/2;

        ll total_bakes = bakes(a, b, c, mid);

        if (total_bakes >= n) {

            result = mid;

            right = mid-1;

        } else {

            left = mid+1;
        }
    }

    cout << result << endl;
}
```