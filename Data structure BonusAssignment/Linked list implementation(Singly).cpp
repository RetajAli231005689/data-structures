#include <iostream>
struct Node {
int data;
Node* next;
};

class Sortedsinglylinkedlist {
public:
Node* head = nullptr;

void insert(int value) {
Node* newNode = new Node{value, nullptr};
if (!head || head->data >= value) {
newNode->next = head;
head = newNode;
return;
}

Node* temp = head;
while (temp->next && temp->next->data < value)
temp = temp->next;
newNode->next = temp->next;
temp->next = newNode;
}

void display() {
for (Node* temp = head; temp; temp = temp->next)
std::cout << temp->data << " -> ";
std::cout << "NULL\n";
}
};

int main() {
SortedSinglyLinkedList list;
list.insert(30);
list.insert(10);
list.insert(20);
list.display();
return 0;
}










