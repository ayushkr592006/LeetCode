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
 ListNode* reverse(ListNode* head){
   
//    ListNode* prev=NULL;
//    ListNode* curr=head;
//    ListNode*

//base case
if(head->next==NULL) return head;

ListNode* tempi=reverse(head->next);


ListNode* temp=head;
while(temp->next){
    temp=temp->next;
}
temp->next=head;
head->next=NULL;
return tempi;
      

 }


    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;



ListNode* ans= reverse(head);
return ans;
      





//          stack<int>st;
//          ListNode* temp=head;
//          while(temp){
//              st.push(temp->val);
//              temp=temp->next;
          
//          }
//          int n=st.size();
//          ListNode* node=new ListNode(st.top());
//           ListNode*  mover=node;
//          st.pop();
//          for(int i=1;i<n;i++){
//             ListNode* temp=new ListNode(st.top());
//             mover->next=temp;
//             mover=temp;
//             st.pop();

//          }
//          mover->next=NULL;
         

// return node;


//recursive solution

//            if(head==NULL) return NULL;
//  ListNode* head2=reverseList(head->next);
//  if(head2==NULL) return head;
//  ListNode* temp=head2;
//  while(temp->next && temp){
//  temp=temp->next;

//  }
//  temp->next=head;
//  head->next=NULL;

//  return head2;



    }
};