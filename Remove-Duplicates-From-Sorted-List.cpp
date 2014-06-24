
/* Definition for singly-linked list.
 struct ListNode {
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
 };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) {
            return NULL;
        }
        ListNode* currentNode = head;
        ListNode* tempNode = currentNode;
        ListNode* deleteNode = NULL;
        while (tempNode->next!=NULL) {
            if (currentNode->val == tempNode->next->val) {
                deleteNode = tempNode->next;
                tempNode->next = deleteNode->next;
                delete deleteNode;
            }else{
                currentNode = tempNode->next;
                tempNode = currentNode;
            }
        }
        return head;
        
    }
};