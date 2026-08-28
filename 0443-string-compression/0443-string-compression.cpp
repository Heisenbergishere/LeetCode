class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, n = chars.size(), ans = 0;
        vector<char> v;
        while (i < n) {
            char c = chars[i];
            v.push_back(c);
            int j = i;
            while (j < n && chars[j] == c)
                j++;
            ans += (j - i);
            int k = (j - i);
            if (k > 1) {
                auto s = to_string(k);
                int k = 0;
                while (k < s.size()) {
                    v.push_back(s[k++]);
                }
            }
            i = j;
        }
        // chars.clear();
        for (int j = 0; j < v.size(); j++)
            chars[j] = v[j];
        return v.size();
    }
};