#week11-3leetcode 2614
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total=0,0#最大total與目前的total
        counter=Counter()
        for i in range(k): #取出前面k個數字
            num=nums[i]
            counter[num]+=1
            total+=num#把現在的樹，加到total裡
        if(len(counter)==k): ans=max(ans,total)
        #上面只處理第一組，下面要處理後續
        for i in range(k,len(nums)): #毛毛蟲慢慢從中間，走到最右邊
            left,right=nums[i-k],nums[i]#左邊舊的，右邊新的
            counter[left]-=1#減左邊(舊)
            counter[right]+=1#加右邊(新)
            total=total+nums[i]-nums[i-k]#加右邊(新)，減左邊(舊)
            if counter[left]==0: del counter[left]
            if len(counter)==k: ans=max(ans,total)
        return ans

        
        