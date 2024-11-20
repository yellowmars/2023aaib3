//week11-5.cpp學習計畫Math  leetcode 1232
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int N=coordinates.size();//全部有幾點
        int x0=coordinates[0][0],y0=coordinates[0][1];
        int x1=coordinates[1][0],y1=coordinates[1][1];
        for(int i=1;i<N;i++){//這個迴圈從1開始
            int xi=coordinates[i][0],yi=coordinates[i][1];
            if((y1-y0)*(xi-x0)!=(yi-y0)*(x1-x0)) return false;//不相等就失敗

        }
        return true;//沒失敗就成功
        
    }
};