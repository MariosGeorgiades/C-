#include <iostream>

using namespace std;

int main()
{
    int n, P, V, T, number(0);
    cin >> n;
    while (n--)
    {
        cin >> P >> V >> T;
        if (P + V + T  >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}
