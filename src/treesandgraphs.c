#include <stdio.h>
#include <stdlib.h>


// struct Node {
//     struct Node** children;
// };

// struct IntNode {
//     struct Node base;
//     int value;
// };

//Binary Tree
// struct Node {
//     struct Node* left;
//     struct Node* right;
//     int value;
// };

// struct Node* createNode(struct Node* left, struct Node* right, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         fprintf(stderr, "Memory allocation failed\n");
//         exit(1);
//     }
//     newNode->left = left;
//     newNode->right = right;
//     newNode->value = value;
//     return newNode;
// }

// struct Node* getLeft(struct Node* node) { return node->left; }
// struct Node* getRight(struct Node* node) { return node->right; }
// int getValue(struct Node* node) { return node->value; }

//Binary Search Tree
// struct Node {
//     struct Node* left;
//     struct Node* right;
//     int value;
// };

// struct Node* findNode(struct Node* root, int value) {
//     while (root != NULL) {
//         int currval = root->value;
//         if (currval == value) break;
//         if (currval < value) {
//             root = root->right;
//         } else { // currval > value
//             root = root->left;
//         }
//     }
//     return root;
// }

//Binary Search Tree (2)
struct Node {
    struct Node* left;
    struct Node* right;
    int value;
};

struct Node* findNode(struct Node* root, int value) {
    if (root == NULL) return NULL;
    int currval = root->value;
    if (currval == value) return root;
    if (currval < value) return findNode(root->right, value);
    else return findNode(root->left, value);
}