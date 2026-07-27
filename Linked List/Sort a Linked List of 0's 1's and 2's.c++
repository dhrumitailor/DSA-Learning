/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            //your code goes here
            int zero = 0 ; 
            int one = 0 ; 
            int two = 0 ;
           ListNode* temp = head;

            while(temp != NULL){
                if(temp ->data == 0){
                    zero++;
                }
                else if(temp->data== 1){
                    one++;
                }
                else{
                    two++;
                }
                temp = temp->next;
            }
            temp = head;

            while(zero--){
                temp->data = 0;
                temp = temp ->next;
            }
            while(one--){
                temp->data = 1;
                temp = temp ->next;
            }
            while(two--){
                temp->data = 2;
                temp = temp ->next;
            }
            return head;
        }
};