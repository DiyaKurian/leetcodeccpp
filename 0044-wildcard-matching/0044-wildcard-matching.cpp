class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0;
        int j = 0;
        int star = -1;
        int m = -1;

        while (i < s.size())
        {
            if (j < p.size() && (p[j] == '?' || p[j] == s[i]))
            {
                i++;
                j++;

                continue;
            }

            if (j < p.size() && p[j] == '*')
            {
                star = j++;
                m = i;

                continue;
            }

            if (star >= 0)
            {
                j = star + 1;
                i = ++m;

                continue;
            }

            return false;
        }

        while (j < p.size() && p[j] == '*')
        {
            j++;
        }

        return j == p.size();
    
    }
};