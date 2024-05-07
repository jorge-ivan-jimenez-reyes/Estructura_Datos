#include "BST.h"
#include <iostream>

BST::BST() : root(nullptr) {}

BST::~BST() {
    destroyTree(root);
}

void BST::insert(Libro libro) {
    root = insertRecursive(root, libro);
}

bool BST::search(int id) const {
    return searchRecursive(root, id) != nullptr;
}

void BST::remove(int id) {
    root = removeRecursive(root, id);
}

void BST::printInOrder() const {
    inOrderTraversal(root);
    std::cout << std::endl;
}

Node* BST::insertRecursive(Node* node, Libro libro) {
    if (!node) return new Node(libro);
    if (libro.id < node->libro.id)
        node->left = insertRecursive(node->left, libro);
    else
        node->right = insertRecursive(node->right, libro);
    return node;
}

Node* BST::searchRecursive(Node* node, int id) const {
    if (!node || node->libro.id == id)
        return node;
    if (id < node->libro.id)
        return searchRecursive(node->left, id);
    else
        return searchRecursive(node->right, id);
}

Node* BST::removeRecursive(Node* node, int id) {
    if (!node) return nullptr;
    if (id < node->libro.id)
        node->left = removeRecursive(node->left, id);
    else if (id > node->libro.id)
        node->right = removeRecursive(node->right, id);
    else {
        if (!node->left) {
            Node* temp = node->right;
            delete node;
            return temp;
        }
        else if (!node->right) {
            Node* temp = node->left;
            delete node;
            return temp;
        }
        else {
            Node* minNode = findMinNode(node->right);
            node->libro = minNode->libro;
            node->right = removeRecursive(node->right, minNode->libro.id);
        }
    }
    return node;
}

Node* BST::findMinNode(Node* node) const {
    Node* current = node;
    while (current && current->left)
        current = current->left;
    return current;
}

void BST::inOrderTraversal(Node* node) const {
    if (!node) return;
    inOrderTraversal(node->left);
    std::cout << node->libro.id << " - " << node->libro.titulo << " by " << node->libro.autor << std::endl;
    inOrderTraversal(node->right);
}

void BST::destroyTree(Node* node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}
