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
    ListNode* middleList(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev = nullptr;

        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* mergeList(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }

        ListNode* result;
        if(list1->val<list2->val){
            result=list1;
            result->next=mergeList(list1->next,list2); 
        }
        else{
            result=list2;
            result->next=mergeList(list1,list2->next);
        }
        return result;
    }

    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* middle;
        middle=middleList(head);

        ListNode* right=middle->next;
        ListNode* left=head;
        middle->next=NULL;

        ListNode* leftsort=sortList(left);
        ListNode* rightsort=sortList(right);

        return mergeList(leftsort, rightsort);
    }
};