class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=0,dir=0;//0右1下2左3上
        int dI[4]={0,1,0,-1};//移動的值
        int dJ[4]={1,0,-1,0};//移動的值

        vector<int > ans;
        ans.push_back(matrix[i][j]);//把答案放入ans
        i+=dI[dir];//移動的值
        j+=dJ[dir];//移動的值
        ans.push_back(matrix[i][j]);//把答案放入ans
        i+=dI[dir];//移動的值
        j+=dJ[dir];//移動的值
        ans.push_back(matrix[i][j]);//把答案放入ans
        //這程式不會轉向
        return ans;
        
    }
};