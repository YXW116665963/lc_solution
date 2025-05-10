#include "common.h"

class Solution {
    bool check(string t, string s) {
        int lenx = (int)s.length() / (int)t.length();
        string ans = "";
        for (int i = 1; i <= lenx; ++i) {
            ans = ans + t;
        }
        return ans == s;
    }
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = (int)str1.length(), len2 = (int)str2.length();
        for (int i = min(len1, len2); i >= 1; --i) { // 从长度大的开始枚举
            if (len1 % i == 0 && len2 % i == 0) {
                string X = str1.substr(0, i);
                if (check(X, str1) && check(X, str2)) return X;
            }
        }
        return "";
    }
};
Solution solution;


int main() {
	
}

/*
* 题目：
* 对于字符串 s 和 t，只有在 s = t + t + t + ... + t + t（t 自身连接 1 次或多次）时，我们才认定 “t 能除尽 s”。
* 给定两个字符串 str1 和 str2 。返回 最长字符串 x，要求满足 x 能除尽 str1 且 x 能除尽 str2 。
* 
* 从最大的前缀(也就是最短字符串)开始枚举，判断是否能除尽两个字符串
*/