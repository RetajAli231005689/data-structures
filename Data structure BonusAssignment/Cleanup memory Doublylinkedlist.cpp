#include <iostream>
struct Node {
int data;
Node* prev;
Node* next;
};

class Doublylinkedlist {
public:
Node* head = nullptr;

void makenull() {
while (head) {
Node* temp = head;
head = head->next;
delete temp;
}
}
};
