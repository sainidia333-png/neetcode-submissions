class Solution {
public:
    string minWindow(string s, string t) {
        int freq1[128] = {0};
        int freq2[128] = {0};

        // Required frequency
        for (int i = 0; i < t.length(); i++) {
            freq1[t[i]]++;
        }

        int l = 0;
        int count = 0;
        int minLen = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.length(); r++) {

            // Add current character
            freq2[s[r]]++;

            // This character satisfies a requirement
            if (freq2[s[r]] <= freq1[s[r]]) {
                count++;
            }

            // Window contains all characters of t
            while (count == t.length()) {

                // Update minimum window
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                // Remove left character
                freq2[s[l]]--;

                // We lost a required character
                if (freq2[s[l]] < freq1[s[l]]) {
                    count--;
                }

                l++;
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};