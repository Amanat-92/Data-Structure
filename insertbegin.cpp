#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertbegin(int data) {
    struct node *lk = (struct node*)malloc(sizeof(struct node));

    lk->data = data;
    lk->next = head;
    head = lk;
}

void display() {
    struct node *p = head;

    cout << "Linked List: [";
    while (p != NULL) {
        cout << " " << p->data;
        p = p->next;
    }
    cout << " ]";
}

int main() {
    insertbegin(12);
    insertbegin(22);
    insertbegin(30);
    insertbegin(44);
    insertbegin(50);

    display();

    return 0;
}
