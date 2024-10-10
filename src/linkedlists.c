#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


// struct IntElement {
//     struct IntElement* next;
//     int data;
// };

// void IntElement_init(struct IntElement* elem, int value) {
//     elem->next = NULL;
//     elem->data = value;
// }

// struct IntElement* IntElement_getNext(struct IntElement* elem) {
//     return elem->next;
// }

// int IntElement_value(struct IntElement* elem) {
//     return elem->data;
// }

// void IntElement_setNext(struct IntElement* elem, struct IntElement* nextElem) {
//     elem->next = nextElem;
// }

// void IntElement_setValue(struct IntElement* elem, int value) {
//     elem->data = value;
// }

// A singly linked list in C++
// class IntElement {
//     public:
//         IntElement(int value) : next(NULL), data(value) {}
//         ~tElement() {}

//         IntElement* getNext() const { return next; }
//         int value() const { return data; }
//         void setNext(IntElement* nextElem) { next = nextElem; }
//         void setValue(int value) { data = value; }
        
//     private:
//         IntElement* next;
//         int data;
// };

// A templated C++ singly linked list
// template <class T>
// class ListElement {
//     public:
//         ListElement(const T &value) : next(NULL), data(value) {}
//         ~ListElement() {}

//         ListElement *getNExt() const { return next; }
//         const T &value() const { return data; }
//         void setNext(ListElement *nextElem) { next = nextElem; }
//         void setValue(const T &value) { data = value; }

//     private:
//         ListElement *next;
//         T data;
// };

// inserting an element at the fromt of a list
// bool insertInFront(IntElement*& head, int data) {
//     // 1. Allocate memory for a new node (newElem) using 'new'
//     IntElement* newElem = new IntElement;

//     // 2. Check if memory allocation was successful (new in C++ throws an exception if it fails, so no need for explicit null check)
//     if (!newElem) {
//         return false;  // Return false if memory allocation fails (rare in C++ with 'new')
//     }

//     // 3. Initialize the new node's data and set its next pointer to the current head
//     newElem->data = data;
//     newElem->next = head;  // Set the new element's next to point to the current head

//     // 4. Update the head pointer to point to the new node
//     head = newElem;

//     return true;  // Insertion successful
// }

// traversing a list
ListElement<int>* find(ListElement<int>* head, int data) {
    ListElement<int>* elem = head;  // Start traversal from the head

    // Traverse until you either find the data or reach the end of the list
    while (elem != nullptr && elem->value() != data) {
        elem = elem->getNext();  // Move to the next element in the list
    }

    return elem;  // Return the element if found, otherwise return nullptr
}


