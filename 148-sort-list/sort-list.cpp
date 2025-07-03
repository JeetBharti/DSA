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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL){
            return nullptr;
        }
        if(head->next==NULL){
            return head;
        }

        int count=0;
        ListNode* temp1=head;
        while(temp1!=NULL){
            count++;
            temp1=temp1->next;
        }
        
        ListNode* dummy=head;
        vector<int>arr(count);
        for(int i=0;i<count;i++){
            arr[i]=dummy->val;
            dummy=dummy->next;
        }
        sort(arr.begin(),arr.end());

        ListNode* ans=head;
        for(int j=0;j<count;j++){
            ans->val=arr[j];
            ans=ans->next;
        }
        return head;





 

        // while(!temp && !temp->next){
        //     for(int i=0;i<n;i++){
        //         if(store->val<store->next->val){
        //         store->val=store->next->val;
        //         temp=temp->next;
        //     }
        // }
        // return head;
        
    }
};