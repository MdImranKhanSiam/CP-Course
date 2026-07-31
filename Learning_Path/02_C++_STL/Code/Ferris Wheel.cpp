#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    vector<int>weight;

    for(int i = 0; i < n; i++) {

        int value;

        cin >> value;

        weight.push_back(value);
    }

    sort(weight.begin(), weight.end());

    int seat = 0;

    int current = 0;

     7 8    5 8   8  8  9  9  10  10

    c =10
    s =8

    for (auto point: weight) {

        if ( current+point > x) {

            current = point;

            seat++;

        } else {

            current += point;
        }
    }

    cout << seat+1 << endl;
}
