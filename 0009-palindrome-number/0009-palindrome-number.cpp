#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string str_p=str;
        reverse(str_p.begin(), str_p.end());
        if(str_p==str)
        {
          return true;
        }
        else
        return false;
    }
};