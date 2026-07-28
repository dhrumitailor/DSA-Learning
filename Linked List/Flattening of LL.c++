/*
Definition of special linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode()
    {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next1;
    }
};
*/

class Solution {
public:

ListNode* merge(ListNode* a , ListNode* b){
    if(a==NULL){
        return b;
    }
    if(b== NULL){
        return a;
    }
    ListNode* result;
    if(a->val< b->val){
        result=a;
        result->child= merge(a->child , b);
    }
    else{
        result = b ;
        result->child = merge(a , b->child);
    }
    result->next = NULL;
    return result;
}
    ListNode* flattenLinkedList(ListNode* &head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
       head->next =flattenLinkedList(head->next);

       return merge(head , head->next);

    }
};