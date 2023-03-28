class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool res = 0;
        for(int i = n-1 ;i>=0;i--){
            if(s[i]!=' '){
            count++;
            res = 1;
            }
           else {
               if(res==1)
                   break;
         }

        }

        return count;
    }
};