#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete a node
    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        // If head node is to be deleted
        if (head->data == value) {
            head = head->next;

            if (head != NULL) {
                head->prev = NULL;
            }

            delete temp;
            return;
        }

        while (temp != NULL && temp->data != value) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Element not found\n";
            return;
        }

        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }

        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }

        delete temp;
    }

    // Display list forward
    void displayForward() {
        Node* temp = head;

        cout << "Forward Traversal:\n";

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

// Main function
int main() {
    DoublyLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.displayForward();

    list.deleteNode(20);

    cout << "After deleting 20:\n";
    list.displayForward();

    return 0;
}
