#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    double a, b;

    char op;

    cin >> a >> b >> op;

    switch (op) {

    case '+':
        cout << fixed << setprecision(2) << a+b;
        break;

    case '-':
        cout << fixed << setprecision(2) << a-b;
        break;

    case '*':
        cout << fixed << setprecision(2) << a*b;
        break;

    case '/':
        cout << fixed << setprecision(2) << a/b;
        break;

    default:
        cout << "Invalid Operator";
    }

    cout << endl;
}
