class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());//從小排到大
        double total=0;//陷阱，有小數點
        for(int i=1;i<salary.size()-1;i++){
            //避開最小salary[0],最大salary[n-1];
            total+=salary[i];
        }
        return total/(salary.size()-2);//平均就是除法
        
    }
};