#include <bits/stdc++.h>
using namespace std;

string compressString(string s) {
    string res;

    for (char c : s) {
        if (res.empty() || res.back() != c)
            res.push_back(c);
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        set<string> answers;

        // no flip
        answers.insert(compressString(s));

        // flip one middle character
        for (int i = 1; i < n - 1; i++) {
            string cur = s;

            cur[i] = (cur[i] == '0' ? '1' : '0');

            answers.insert(compressString(cur));
        }

        cout << answers.size() << '\n';
    }
}