class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s;
        int N=s2.length();
        return s2.substr(1,N-2).find(s) != string::npos;//nps對應:沒有這個位置、很大很大
        
    }
};//substr()切字串 左1 又扣1(本來是0...N-1現在變1..N-2)