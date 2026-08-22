//leetcode problem number is 25
#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        int count = 0;

        while (count < k) {
            if (temp == NULL) {
                return head;
            }

            temp = temp->next;
            count++;
        }

        ListNode* prevnode = reverseKGroup(temp, k);

        temp = head;
        count = 0;

        while (count < k) {
            ListNode* next = temp->next;

            temp->next = prevnode;
            prevnode = temp;
            temp = next;

            count++;
        }

        return prevnode;
    }
};

void printList(ListNode* head) {
    ListNode* curr = head;

    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    cout << endl;
}

int main() {

    // Main list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    int k = 2;

    Solution obj;

    ListNode* head = obj.reverseKGroup(n1, k);

    printList(head);

    return 0;
}