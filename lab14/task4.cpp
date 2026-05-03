#include <iostream>
#include <string>
using namespace std;
int main() {

    setlocale(LC_ALL, "UKR");

    struct Node {

        string  name;
        int cost;
        Node* next;
        int ID;

    };

    int n;
    cout << "Введіть кількість елементів списку, який хочете створити:";
    cin >> n;
    cin.ignore(1000, '\n');

    if (n <= 0) return 0;


    Node* head = new Node;

    cout << " \nВведіть назву для першого елемента списку:";
    getline(cin,  head->name);
    cout << " \nВведіть ціну для першого елемента списку:";
    cin >> head->cost;
    head->ID = 1;
    head->next = nullptr;

    Node* current = head;
    for (int i = 0; i < n-1; i++) {
        Node* newNode = new Node;
        newNode->ID = current->ID + 1;
        cin.ignore(1000, '\n');


        cout << "Введіть назву для " << newNode->ID << "-го елемента:";
        getline(cin, newNode->name);

        cout << "Введіть ціну для " << newNode->ID << "-го елемента:";
        cin >> newNode->cost;
        newNode->next = nullptr;
    
        current -> next = newNode;
        current = newNode;

    }

    cout << "\n Наш утворений список:\n";
    current = head; 
    while (current != nullptr) {
    
        cout << current->name << "->";
        current = current->next;
    
    }
    cout << "nullptr";

    cout << "\n Елементи ціна яких менше 10 грн:\n";
    current = head;
    int counter = 0;
    while (current != nullptr) {

        if (current->cost < 10) {
            counter++;
            cout << "Назва:" << current->name << endl;
            cout << "Ціна:" << current->cost << endl;
            cout << "Ідентифікатор:" << current->ID << endl;

        }

        current = current->next;

    }

    cout << "\n Їх кількість: " << counter;

    current = head;
    while (current != nullptr) {

        Node* temp = current->next;
        delete current;
        current = temp;

    }

    return 0;
}
