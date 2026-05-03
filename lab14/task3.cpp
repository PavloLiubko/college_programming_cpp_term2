#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "UKR");

    struct Node {

        int Data;
        Node* next;
        int ID;

    };

    Node* a = new Node{ 1, nullptr, 1 };
    Node* b = new Node{ 2, a, 2 };
    Node* c = new Node{ 3,  nullptr, 3 };
    a->next = c;

    cout << "\n Наш список: \n";
    Node* current = b;
    while (current != nullptr) {

        cout << current->Data << "->";
        current = current->next;
    }
    cout << "nullptr";

    b->next = c;

    delete a;

    cout << "\n Наш кінцевий список: \n";
    current = b;
    while (current != nullptr) {

        cout << current->Data << "->";
        current = current->next;
    }
    cout << "nullptr";

    current = b;
    while (current != nullptr) {

        Node* temp = current->next;
        delete current;
        current = temp;
    }

    return 0;
}
