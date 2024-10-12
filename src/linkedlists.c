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
// ListElement<int>* find(ListElement<int>* head, int data) {
//     ListElement<int>* elem = head;  // Start traversal from the head

//     // Traverse until you either find the data or reach the end of the list
//     while (elem != nullptr && elem->value() != data) {
//         elem = elem->getNext();  // Move to the next element in the list
//     }

//     return elem;  // Return the element if found, otherwise return nullptr
// }

// // Inserting and Deleting Elements
// bool deleteElement(IntElement** head, IntElement* deleteMe) {
//     IntElement* elem;

//     // 1. Check for null pointers to ensure the list and the element to delete are valid
//     if (!head || !*head || !deleteMe) {
//         return false;
//     }

//     elem = *head;

//     // 2. Special case: if the element to delete is the head of the list
//     if (deleteMe == *head) {
//         *head = elem->next;  
//         // Update the head to the next element
//         delete deleteMe;      
//         // Use 'delete' in C++ instead of 'free'
//         return true;
//     }

//     // 3. Traverse the list to find the element preceding the one to be deleted
//     while (elem) {
//         if (elem->next == deleteMe) {
//             elem->next = deleteMe->next;  
//             // Bypass the element to delete
//             delete deleteMe;              
//             // Use 'delete' to free the memory
//             return true;
//         }
//         elem = elem->next;
//     }

//     // 4. If the element to delete is not found
//     return false;
// }

// void deleteList (IntElment **head) {
//     IntElement *deleteMe = *head;

//     while ( deleteMe)
//     {
//         IntElement *next = deleteMe->next;
//         delete deleteMe;
//         deleteMe = next;
//     }

//     *head = NULL;
    
// }

// Stack Implemetation
// class Stack {
//     public:
//         Stack() : head ( NULL ) {};
//         ~Stack() {};
//         void push( void *data );
//         void *pop();
//     protected:
//         class Element {
//             public:
//                 Element ( Element *n, void *d ): next(n), data(d) {}
//                 Element *getNext() const { return next; }
//                 void *value const { return data; }
//             private:
//                 Element *next;
//                 void *data;
//         };
//         Element *head;
// };

// Stack::~Stack() {
//     while( head ) {
//         Element *next = head->getNext();
//         delete head;
//         head = next;

//     }
// }
// void Stack::push( void *data ) {
//     //Allocation erorr will throw exception
//     Element *element = new Element( head, data );
//     head = element;
// }
// void *Stack::pop() {
//     Element *popElement = head;
//     void *data;
//     /* Assume StackError exception calss is defined elsewhere */
//     if (head == NULL) 
//         throw StackError( E_EMPTY );
    
//     data = head->value();
//     head = head->getNext();
//     delete popElement;
//     return data;
// }

//Maintain Linked List Tail Pointer
// bool delete(Element *elem) {
//     Element *curPos = head;

//     if ( !elem ) return false;
//     if (elem == head ) {
//         head = elem->next;
//         free (elem);

//         /*special case for 1 element list */
//         if ( !head ) tail = NULL;
//         return true;

//     }
//     while ( curPos ) {
//         if ( curPos->next == elem ) {
//             curPos->next = elem->next;
//             free (elem);
//             if ( !curPos->next == NULL ) tail = curPos;
//             return true;

//         }
//         curPos = curPos->next;
//     }
//     return false;
// }

// bool insertAfter( Element *elem, int data ) {
//     Element *newElem, *curPos = head;

//     newElem = malloc( sizeof(Element) );
//     if ( !newElem ) return false;
//     newElem->data = data;

//     /* Insert at beginning of list */
//     if ( !elem ) {
//         newElem->next = head;
//         head = newElem;
//         /* Special case for empty list */
//         if ( !tail ) tail = newElem;
//         return true;
//     }

//     while ( curPos ) {
//         if ( curPos == elem ) {
//             newElem->next = curPos->next;
//             curPos->next = newElem;
//             /* Special case for inserting at the end of the list */
//             if ( !newElem->next ) tail = newElem;
//             return true;
//         }
//         curPos = curPos->next;
//     }
//     /* Insert position not found; free element and return failure */
//     free (newElem);
//     return false;
// }

// Bugs in removeHead
/* void removeHead ( ListElement *head ) {
    free ( head );
    head = head->next 
    }*/
// void removeHead ( ListElement **head ) {
//     ListElement *temp;
//     if ( head && * head ) {
//         temp = (*head)->next;
//         free ( *head );
//         *head = temp;
//     }
// }

// Mth to Last Element of a Linked List
// ListElement *findMtoLastElement( ListElement *head, int m ) {
//     ListElement *current, *mBehind;
//     int i;
//     if ( !head ) return NULL;
//     /* Advance current m elements from beginning,
//     * checking for the end of the list */
//     current = head;
//     for ( i = 0; i < m; i++ ) {
//         if ( current->next ) {
//             current = current->next;
//         } else {
//             return NULL;
//         }
//     }
//     /* Start mBehind at beginning and advance pointers
//     * together until current hits last element */
//     mBehind = head;
//     while ( current->next ) {
//         current = current->next;
//         mBehind = mBehind->next;
//     }

//     /* mBehind now points to the elemnt we were
//     * searching for, so return it */
//     return mBehind;
// }

// List Flattening
void flattenList(Node* head, Node** tail) {
    Node* curNode = head;
    while (curNode) {
        /* The current node has a child */
        if (curNode->child) {
            append(curNode->child, tail);
        }
        curNode = curNode->next;
    }
}

/* Appends the child list to the end of the tail and updates the tail */
void append(Node* child, Node** tail) {
    Node* curNode;

    /* Append the child list to the end */
    (*tail)->next = child;
    child->prev = *tail;

    /* Find the new tail, which is the end of the child list */
    for (curNode = child; curNode->next; curNode = curNode->next)
        ; /* Body intentionally empty */

    /* Update the tail pointer now that curNode is the new tail */
    *tail = curNode;
}

// List Unflattening

