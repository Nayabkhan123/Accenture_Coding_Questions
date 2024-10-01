class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(i-1>=0){
                if(s[i]!=' ' && s[i-1] == ' '){
                    cnt=0;
            }
            }
            if(s[i]==' '){
                continue;
            } 
            cnt++;
        }
        return cnt;
    }
};