#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* newhead = new Node(head->val);
        Node* oldtemp = head->next;
        Node* newtemp = newhead;

        m[head] = newhead;

        while (oldtemp != NULL) {
            Node* copynode = new Node(oldtemp->val);
            m[oldtemp] = copynode;
            newtemp->next = copynode;

            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        oldtemp = head;
        newtemp = newhead;

        while (oldtemp != NULL) {
            if (oldtemp->random != NULL) {
                newtemp->random = m[oldtemp->random];
            }

            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        return newhead;
    }
};

int main() {
    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    Node* n4 = new Node(10);
    Node* n5 = new Node(1);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    n1->random = NULL;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;

    Solution obj;
    Node* copy = obj.copyRandomList(n1);

    Node* temp = copy;

    while (temp != NULL) {
        cout << "Value: " << temp->val;

        if (temp->random != NULL)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";

        cout << endl;
        temp = temp->next;
    }

    return 0;
}