#include <iostream>
struct Node {
int data;
Node* next;
};

class Singlylinkedlist {
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
