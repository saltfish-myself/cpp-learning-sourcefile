#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(abs(x));
        }
        cout << s.size() << endl;
    }
    return 0;
}
