class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20=0,0,0
        for b in bills:#用迴圈收客人的鈔票
            if b==5: #客人拿5元不用找錢 
                b5+=1 #直接把五元收起來
            elif b==10: #客人給10元，要找錢
                if b5==0: return False#沒五元，失敗
                b10+=1
                b5-=1
            else:
                if b10>0 and b5>0:
                    b20+=1
                    b10-=1
                    b5-=1
                elif b5>=3:
                    b20+=1
                    b5-=3
                else: #都不能找零錢的話
                    return False
        return True
        