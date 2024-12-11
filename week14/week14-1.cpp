//week14-1學習計畫link list第3題(寫到一半)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        while(l1!=nullptr){//只針對其中一個list 1
            now->next=new ListNode(l1->val);//建新的node
            l1=l1->next;//下一筆
            now=now->next;//下一筆
        }
        return ans->next;
    }
};