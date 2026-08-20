//leetcode problem number is 430
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {

        if (head == NULL) {
            return head;
        }

        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                Node* next = curr->next;

                curr->next = flatten(curr->child);
                curr->next->prev = curr;

                curr->child = NULL;

                while (curr->next != NULL) {
                    curr = curr->next;
                }

                if (next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};

void printList(Node* head) {
    Node* curr = head;

    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    cout << endl;
}

int main() {

    // Main list: 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);

    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    n4->next = n5;
    n5->prev = n4;

    n5->next = n6;
    n6->prev = n5;

    // Child of 3: 7 <-> 8
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);

    n3->child = n7;

    n7->next = n8;
    n8->prev = n7;

    // Child of 8: 9 <-> 10
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);

    n8->child = n9;

    n9->next = n10;
    n10->prev = n9;

    Solution obj;

    Node* head = obj.flatten(n1);

    printList(head);

    return 0;
}