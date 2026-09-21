class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size())
            return "";

        unordered_map<char, int> need;

        for(char c : t)
            need[c]++;

        int left = 0;
        int count = 0;

        int minLength = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            char c = s[right];

            if(need[c] > 0)
                count++;

            need[c]--;

            while(count == t.size()) {

                if(right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];

                need[leftChar]++;

                if(need[leftChar] > 0)
                    count--;

                left++;
            }
        }

        if(minLength == INT_MAX)
            return "";

        return s.substr(start, minLength);
    }
};