class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4]={1,0,-1,0};//移動的方向
        int dy[4]={0,1,0,-1};
        int x=0,y=0,dir=0;//dir方向direction: 0:左 1:下 2:左 3:右
        for(char c:instructions){
            if(c=='G'){
                x+=dx[dir];
                y+=dy[dir];
            } 
            if(c=='L') dir=(dir+3)%4;//往左轉-1，但會有負的，在+4%4取榆樹。變+3
            if(c=='R') dir=(dir+1)%4;//往右轉+1，0便1便2變3變0變1變2
        }
        if(x==0 && y==0) return true;//留在原地
        else if(dir==0) return false;//不在原來的方向，就會越走越遠
        else return true;//方向有改，就會繞圈圈
    }
};