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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            len++;
        }
        int mid = len/2 + 1;
        temp = head;
        int cnt = 1;
        while(cnt < mid){
            temp = temp -> next;
            cnt ++;
        }
        return temp;
    }
};