#include <iostream>
#include <random>
using namespace std;
int main() {

    setlocale(LC_ALL, "UKR");
    srand(time(NULL));
    struct Node {

        int Data;
        Node* next;
        Node* previous;
        int ID;

    };

    int n;
    cout << "Введіть кількість елементів списку:";
    cin >> n;

    if (n <= 0) return 0;

    Node* head = new Node;
    head->ID = 1;
    head->Data = rand() % 10 + (-15);
    head->next = nullptr;
    head->previous = nullptr;


    Node* current = head;
    for (int i = 0; i < n-1; i++) {
        Node* newNode = new Node;
        newNode->ID = current->ID + 1;
        newNode->Data = rand() % 100 + 1;
        newNode->next = nullptr;
        newNode->previous = current;
        current->next = newNode;
        current = newNode;
    }

    cout << "\n Наш список:\n";
    current = head;
    while (current != nullptr) {
    
        cout << current->Data << "->";
        
        current = current->next;
    }
    cout << "nullptr";

    Node* maximum = head;
    current = head;
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


    current = head;
    while (head != nullptr && head->Data % 3 == 0) {
        Node* toDelete = head;
        head = head->next;
        if (head != nullptr) {
            head->previous = nullptr;
        }
        delete toDelete;
    }

    current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->Data % 3 == 0) {
            Node* toDelete = current->next;
            current->next = toDelete->next;

            if (current->next != nullptr) {
                current->next->previous = current;
            }
            delete toDelete;
        }
        else {
            current = current->next;
        }
    }

    int tempID = maximum->ID;
    int tempData = maximum->Data;
    maximum->ID = minimal->ID;
    maximum->Data = minimal->Data;
    minimal->ID = tempID;
    minimal->Data = tempData;

    cout << "\n Наш змінений список:\n";
    current = head;
    while (current != nullptr) {

        cout << current->Data << "->";

        current = current->next;
    }
    cout << "nullptr";

    current = head;
    while (current != nullptr) {
        Node* temp = current->next;
        delete current;
        current = temp;
    }

    return 0;
}
