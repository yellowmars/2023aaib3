class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={};//陣列超大，都設為0
        for(char c:s){//針對左邊的字串裡面的每個字C
            H[c]++;
        }
        for(char c:t){
            H[c]--;
            if(H[c]<0) return c;
        }
        return 0;
    }
};