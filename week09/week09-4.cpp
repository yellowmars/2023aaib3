class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b:bills){
            if(b==5) b5++;//客人付5元，直接收
            else if(b==10){//客人拿10元，看能不能找
                if(b5==0) return false;//沒錢找
                b10++;//多一張10元鈔
                b5--;//少一張5元鈔
            }else{//客人拿20元，找10元和5元
                if(b10>0&&b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false;//沒錢找
            }
        }
        return true;
        
    }
};