//week12-2 linked list第一題 Merge Two Sorted Lists
class Solution {
public://代表指標，老師把他叫嗆上用來瞄準的準星
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode();
        ListNode* now=ans;//答案放在now裡
        while(list1!=nullptr||list2!=nullptr){
            if(list1==nullptr){
                now->next=list2;
                list2=nullptr;//清空
            }else if(list2==nullptr){
                now->next=list1;
                list1=nullptr;
            }
            else if(list1->val<list2->val){
                now->next=new ListNode(list1->val);//答案放在now的下一筆放小的
                list1=list1->next;
                now=now->next;
            }else{
                now->next=new ListNode(list2->val);
                list2=list2->next;
                now=now->next;
            }
        }
        return ans->next;

    }//把三種版本都執行過，看Test Result裡面紅色output
};
