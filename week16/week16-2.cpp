//week16-2.cpp 學習計畫 Math 最後一題  用函式呼叫函式，簡化問題
//leecode 50.pow(x,n)
class Solution {
public:
    double myPow(double x,long long int n) {
        if(n==0) return 1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        if(n%2==0){
            double now=myPow(x,n/2);
            return now*now;
        }else{
            double now=myPow(x,n/2);
            return now*now*x;
        }

    }
};