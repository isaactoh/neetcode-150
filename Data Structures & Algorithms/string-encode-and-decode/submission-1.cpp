class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (int i = 0; i < strs.size(); i++) {
            string len = to_string(strs[i].length());
            encoded += len + "#" + strs[i];
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // Find the delimiter
            while (s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract the original string
            string str = s.substr(j + 1, len);
            result.push_back(str);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return result;
    }
};
