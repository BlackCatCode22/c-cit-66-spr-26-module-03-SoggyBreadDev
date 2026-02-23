#include <iostream>

struct node {
    int data;
    node* next;
};

void insertEnd(node** head, int newData) {
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void displayList(node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

auto deleteByValue(node* head, int position) {
    node* temp = head;

    if (position == 1) {
        head = temp->next;
        delete temp;
        return head;
    }
    node* prev = nullptr;
    for (int i = 1; i < position - 1; i++) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    delete temp;

    return head;
}

int main() {
    node* head = nullptr;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    int x{};
    std::cout << "Enter 1, 2, or 3 to be deleted: ";
    std::cin >> x;
    displayList(head);
    deleteByValue(head, x);
    displayList(head);

    return 0;
}