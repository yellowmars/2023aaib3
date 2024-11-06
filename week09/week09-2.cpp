class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;
        if(low%2==1||high%2==1) ans++;//頭尾都是奇數，就要加1
        return ans;
        
    }
};