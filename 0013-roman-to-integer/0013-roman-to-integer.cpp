class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>text={
             {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
        };
       int result = 0;
    for (int i = 0; i < s.length(); ++i) {
        int current = text[s[i]];
        int next = text[s[i + 1]];

        if (i + 1 < s.length() && current < next) {
            result -= current;  // subtract if smaller value before larger
        } else {
            result += current;  // otherwise add
        }
    }
    return result;
    }
};