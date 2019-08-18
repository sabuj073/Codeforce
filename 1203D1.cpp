#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < int(s.size()); ++i)
    {
        for (int j = i; j < int(s.size()); ++j)
        {
            int pos = 0;
            for (int p = 0; p < int(s.size()); ++p)
            {
                if (i <= p && p <= j)
                    continue;
                if (pos < int(t.size()) && t[pos] == s[p])
                    ++pos;
            }
            if (pos == int(t.size()))
                ans = max(ans, j - i + 1);
        }
    }
    cout << ans << endl;

    return 0;
}
