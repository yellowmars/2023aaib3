//week14-1學習計畫link list第3題
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr){//只針對其中一個list 1
            if(l1==nullptr){
                int here=l2->val+carry;
                now->next=new ListNode(here%10);//建新的node
                carry=here/10;
                l2=l2->next;//移掉l1剩l2
            }else if(l2==nullptr){
                int here=l1->val+carry;
                now->next=new ListNode(here%10);//建新的node
                carry=here/10;
                l1=l1->next;//移掉l2剩l1
            }else{
                int here=l1->val+l2->val+carry;
                now->next=new ListNode(here%10);//建新的node
                carry=here/10;
                l1=l1->next;
                l2=l2->next;
            }            
            now=now->next;//下一筆
        }
        if(carry==1) now->next=new ListNode(carry);
        return ans->next;
    }
};