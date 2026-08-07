#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int mark;

    cin >> mark;

    if (mark >= 80 && mark <= 100)
    {
        cout << "A+";
    }
    else if (mark >= 70 && mark <= 79)
    {
        cout << "A";
    }
    else if (mark >= 60 && mark <= 69)
    {
        cout << "A-";
    }
    else if (mark >= 50 && mark <= 59)
    {
        cout << "B";
    }
    else if (mark >= 40 && mark <= 49)
    {
        cout << "C";
    }
    else
    {
        cout << "F";
    }

    cout << endl;
}
