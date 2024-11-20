#week11-2.py leetcode 2641
nums=[1,1,1,2,3]#輸入資料
from collections import Counter#進階資料結構Hash Map用來計算出現次數
counter=Counter()
for num in nums:
  counter[num]+=1
print(counter) #印出統計結果