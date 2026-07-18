// LeetCode Problem Number 21
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    Node* mergeTwoLists(Node* head1, Node* head2) {
        if (head1 == NULL || head2 == NULL) {
            return (head1 == NULL) ? head2 : head1;
        }

        if (head1->data <= head2->data) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }

    void print_ll(Node* head) {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {
    List list1, list2, result;

    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);

    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);

    cout << "List 1: ";
    result.print_ll(list1.head);

    cout << "List 2: ";
    result.print_ll(list2.head);

    Node* mergedHead = result.mergeTwoLists(list1.head, list2.head);

    cout << "Merged List: ";
    result.print_ll(mergedHead);

    return 0;
}