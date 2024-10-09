#include <stddef.h>

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
class IntElement {
    public:
        IntElement(int value) : next(NULL), data(value) {}
        ~tElement() {}

        IntElement* getNext() const { return next; }
        int value() const { return data; }
        void setNext(IntElement* nextElem) { next = nextElem; }
        void setValue(int value) { data = value; }
        
    private:
        IntElement* next;
        int data;
};
