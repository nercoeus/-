/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution
{
public:
    int titleToNumber(string s)
    {
        long res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            res = res * 26 + s[i] - 'A' + 1;
        }
        return res;
    }
};
// @lc code=end
