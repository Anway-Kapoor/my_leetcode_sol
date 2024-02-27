class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char ch : s){
            if(isalnum(ch)){
                str += tolower(ch);
            }
        }
        string rev = "";
        for(char ch : str){
            rev += ch;
        }
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};