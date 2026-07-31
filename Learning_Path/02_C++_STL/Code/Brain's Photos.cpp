#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<char>>photo;

    for (int i = 0; i < n; i++) {

        vector<char>temp;

        for (int j = 0; j < m; j++) {

            char ch;

            cin >> ch;

            temp.push_back(ch);
        }

        photo.push_back(temp);
    }

    bool color = false;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y') {

                color = true;

                break;
            }
        }

        if (color) {

            break;
        }
    }

    if (color) {

        cout << "#Color" << endl;
    }
    else {

        cout << "#Black&White" << endl;
    }

    return 0;
}
