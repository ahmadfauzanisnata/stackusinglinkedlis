#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node {
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

// Stack class
class stack {
    private:
    Node* top; // pointer to the top node of the stack

    public:
    stack(){
        top = NULL; //initialize the stack with a null top pointer
    }

    // push operatiom: insert an element onto the  top of the stack
    int push(int value) {
        Node* newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. set the next pointer of the new node to the current top node
        top = newNode; // 4. update the top poinnter to the  new node
    }


   

}
 
