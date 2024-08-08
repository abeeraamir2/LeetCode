class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            while(l < r && !vowel(s[l])){
            l++;
        }
            while(l < r && !vowel(s[r])){
            r--;
        }
            if(l < r ){
            swap(s[l],s[r]);
            l++;
            r--;
        }
        }
        return s;
    }
private:
    bool vowel(char c){
        c =  tolower(c);
        if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            return true;
        }
        else {
            return false;
        }
    }
};