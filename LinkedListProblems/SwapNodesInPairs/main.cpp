// LeetCode Problem Number 24
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
    Node* head;
    Node* tail;

public:
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

    void swapPairs() {
        if (head == NULL || head->next == NULL) {
            return;
        }

        Node* first = head;
        Node* second = head->next;
        Node* prev = NULL;

        while (first != NULL && second != NULL) {
            Node* third = second->next;

            second->next = first;
            first->next = third;

            if (prev != NULL) {
                prev->next = second;
            } else {
                head = second;
            }

            prev = first;
            first = third;

            if (third != NULL) {
                second = third->next;
            } else {
                second = NULL;
            }
        }
    }

    void print_ll() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);

    cout << "Original Linked List:\n";
    ll.print_ll();

    ll.swapPairs();

    cout << "After Swapping Pairs:\n";
    ll.print_ll();

    return 0;
}