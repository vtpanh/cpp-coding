#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, t;
	cin >> s >> t;
	string tmp = "";
	while (s.size() + tmp.size() < t.size())
		tmp.push_back('0');
	s= tmp+s;
	for (int i = 0; i <= s.size(); i++)
    {
		if (s[i]!=t[i]){
			cout << s.size()-i;
			return 0;
		}
	}
	cout << 0 << "\n";
	return 0;
}
