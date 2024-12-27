class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mpp;
        int n=s.size(),evensum=0,oddsum=0;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            if(mpp[s[i]] %2 == 0){
                evensum += 2;
            }
        }
        for(auto it:mpp){
            if(it.second %2 ==1){
                oddsum++;
                break;
            }
        }
        return evensum+oddsum;
    }
};
