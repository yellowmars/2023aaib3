class Solution {
public:
    bool judgeCircle(string moves) {
        int X=0,Y=0;
        for(char c:moves){
                if(c=='U') Y--;
                if(c=='D') Y++;
                if(c=='R') X++;
                if(c=='L') X--;
        }
        if(X==0 && Y==0) return true;
        else return false;
        
    }
};