#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "UKR");

    struct Node {

        int Data;
        Node* next;
        int ID;

    };

    Node* head = new Node{ 1, nullptr, 1 };
    Node* second = new Node{ 2, nullptr, 2 };
    Node* tale = new Node{ 3, nullptr, 3 };

    head->next = second;
    second->next = tale;

    Node* maximum = head;
    Node* current = head;
    while (current != nullptr) {
    
        if (maximum->Data < current->Data) {
        
            maximum = current; 
        
        }
        current = current->next;
    }


    Node* minimal = head;
    current = head;
    while (current != nullptr) {

        if (minimal->Data > current->Data) {

            minimal = current;

        }
        current = current->next;
    }

    Node* temp = new Node{0,nullptr, 4};
    temp->Data = minimal->Data;

    
    current = head;
    while (current != nullptr) {

        if (current ->ID == maximum->ID) {

            current->next = temp;

        }
        current = current->next;
    }

    Node* last = new Node;
    current = head;
    while (current != nullptr) {

        if (current->next == nullptr) {

            last = current;

        }
        current = current->next;
    }

    temp = last;
    last = head;
    head = temp;

    cout << "Інформація з першого елемента після всіх перетворень:" << head->Data << "->" << head->ID << " інформація останнього елемента після всіх перетворень: " << last->Data << "->" << last->ID;


    current = head;
    while (current != nullptr) {

        Node* temp = current-> next;
        delete current;
        current = temp;
    }


    return 0;
}
