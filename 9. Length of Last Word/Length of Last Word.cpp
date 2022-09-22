/* Que Link: 
https://leetcode.com/problems/length-of-last-word/
*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        reverse(s.begin(),s.end()); // so we traverse from end ----
        bool spc = false;   // this tell about spaces---
        for(int i=0;s[i];i++){
            
            if(s[i] == ' ' && spc){break;} // when we raed the word and space occurs...
            
            if(s[i] == ' ' && !spc){ // means no character found yet---
                
            }
            else{  // character found, we only count character in this word---
                spc = true;
                ans++;
            }
        }
        return ans;
    }
};