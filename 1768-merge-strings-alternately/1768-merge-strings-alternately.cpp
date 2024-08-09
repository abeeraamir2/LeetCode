class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int totalLength = m + n;
        string ans(totalLength,' ');
        int a = 0;
        int b = 0;
        for(int i=0 ; i<totalLength ; i++){
            if(a < m && (i % 2 == 0 || b >= n)){
                ans[i] = word1[a++];
            }
            else if(b < n){
                ans[i] = word2[b++];
            }
        }
        return ans;
    }
};