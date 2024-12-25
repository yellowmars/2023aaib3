//week16-1b.cpp 學習計畫 Math 最後一題  //當n很大時，可能會超時，導致未通過
//leecode 50.pow(x,n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){//瘋狂程設的寫法，但是n<0會失敗
            for(int i=0;i<n;i++){
                ans*=x;
            }
        }else if(n<0){//特別針對n<0用負負得正，換成倒過來的型式
            for(int i=0;i<-n;i++){
                ans*=1/x;
            }
        }
        return ans;
    }
};