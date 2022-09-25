/* Que Link: 
https://leetcode.com/problems/climbing-stairs/
*/

class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 2, c = 0, ans=0;
        if(n==1||n==2) return n;
        for(int i = 3; i<=n; i++){
            c = a+b;
            a=b;
            b=c;
            ans = c;
        }
        return ans;
    }
};