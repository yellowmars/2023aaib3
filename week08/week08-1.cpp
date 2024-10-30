class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;//最多錢的人，有多少錢?
        for(auto a:accounts){//從一堆人，挑出1人
            int sum=0;//迴圈錢ㄇ驗，sum是0
                for(auto b:a){ //a[0]+a[1]+a[2]+.....
                    sum+=b;//迴圈中間sum+=b越加越多
                }
                if(sum>ans) ans=sum;//更有錢，舊更新
        }
        return ans;//迴圈後面ans拿來用
        
    }
};