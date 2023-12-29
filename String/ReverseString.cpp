class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int length=s.size()-1;
        while(st<length)
        {
            swap(s[st++],s[length--]);
        }
        
    }
};