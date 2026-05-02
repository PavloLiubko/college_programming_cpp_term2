#include <iostream>
using namespace std;
int main() {

    struct Node {
        
        int Data;
        Node* next;
        
    };
    
    Node* head = new Node {1, nullptr};
    Node* second = new Node {2, nullptr};
    head->next = second;
    Node* third = new Node {3, nullptr};
    second->next = third;
    Node* tale = new Node {4, nullptr};
    third->next = tale;
    
   cout << "Сума передостаннього та останнього елементів:" << third->Data + tale->Data;
   
   Node* temp = head;
   head = head->next;
   delete temp;
   
   int counter = 0;
   Node* current = head;    
    while (current != nullptr) {
       if (current->Data %2 == 0)  {
           counter++; 
           current = current->next;
       }
    }
    
    cout << "\n Кількість парних елементів = " << counter;
   
    current = head;    
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
