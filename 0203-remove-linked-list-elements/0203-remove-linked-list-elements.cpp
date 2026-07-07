/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* remove(ListNode* head, int val){
 if(head==NULL)return NULL;
//  if(head->val==val){
//     prev->next=head->next;
//     return prev->next;
//  }
 
 head->next= remove(head->next,val);
 if(head->val==val)return head->next;

 return head;

}


 void solve(ListNode* head, ListNode* prev){
    prev->next=head->next; }


    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return head;
     
ListNode dummy(0);
dummy.next=head;
ListNode* prev=&dummy;
    return remove(head,val);

        




//         ListNode dummy(0);
//         dummy.next=head;
//         ListNode* prev=&dummy;
//       ListNode* temp=head;
//       while(temp){

//         if(temp->val==val){ 
//             solve(temp,prev);
//             temp=prev->next;
//         }
//         else{
//             prev=temp;
//             temp=temp->next;
//         }
//       }
// return dummy.next;
    }
};