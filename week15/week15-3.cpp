class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //上上週的程式可以反過來
        return myReverse(l1);//呼叫函式
    }
    ListNode*myReverse(ListNode*l1){//自訂函式
        vector<int> a;//裡面塞一堆數字
        while(l1!=nullptr){//一直塞，到結束
            a.push_back(l1->val);//塞
            l1=l1->next;//下一筆
        }
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        int N=a.size();
        for(int i=N-1;i>=0;i--){
                now->next=new ListNode(a[i]);
                now=now->next;
        }

        return ans->next;
    }
};