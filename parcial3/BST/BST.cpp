#include "BST.h"
#include <iostream>

BST::BST() : root(nullptr) {}

BST::~BST() {
    destroyTree(root);
}

void BST::insert(Libro libro) {
    root = insertRecursive(root, libro);
}
//toma un ñibro como parametro y llama al metodo privado insertRecursive 

bool BST::search(int id) const {
    return searchRecursive(root, id) != nullptr;
}
//recibe un id y llama al metodo privado removeRecursive pasando la raiz y el id 

void BST::remove(int id) {
    root = removeRecursive(root, id);
}
//elimina el libro del arbol por su id llamando al metodo privado removeRecursive

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
//primero verifica si es null si lo es crea un nuevo nodo con el libro y lo devuleve  para ser conectado al arbol 
//si no es compara el id con el nodo actual para decidir si debe insertar el libro el el subarbol izquierdo o derecho

Node* BST::searchRecursive(Node* node, int id) const {
    if (!node || node->libro.id == id)
        return node;
    if (id < node->libro.id)
        return searchRecursive(node->left, id);
    else
        return searchRecursive(node->right, id);
}
//veirifica si es null o id si encuentra una coincidencia devuelve el nodo indicando que encontro el libro

Node* BST::removeRecursive(Node* node, int id) {
    if (!node) return nullptr;
    if (id < node->libro.id)
        node->left = removeRecursive(node->left, id);
    else if (id > node->libro.id)
        node->right = removeRecursive(node->right, id);
    //busca el nodo a eliminar
    //si tiene 2 hijos encuentra el nodo mas pequeño del subarbol derecho y lo reemplaza por el nodo a eliminar
    // si no tiene hijos lo elimina y devuelve null
    //
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
