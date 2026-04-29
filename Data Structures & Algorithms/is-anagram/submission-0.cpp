// Mirae Schwartz
// 29 April 2026

#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int x = s.size();
        int y = t.size();

        if (x != y) return false;

        for (int i = 0; i < x; i++){
            if (s[i] != t[i]) return false;
        }

        return true;
    }
};
