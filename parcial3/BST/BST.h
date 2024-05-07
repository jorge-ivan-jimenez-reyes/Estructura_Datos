
#include <string>

struct Libro {
    int id;
    std::string titulo;
    std::string autor;

    Libro(int id, std::string titulo, std::string autor)
        : id(id), titulo(titulo), autor(autor) {}
};

struct Node {
    Libro libro;
    Node* left;
    Node* right;

    Node(Libro libro) : libro(libro), left(nullptr), right(nullptr) {}
};

class BST {
public:
    BST();
    ~BST();
    void insert(Libro libro);
    bool search(int id) const;
    void remove(int id);
    void printInOrder() const;

private:
    Node* root;
    Node* insertRecursive(Node* node, Libro libro);
    Node* searchRecursive(Node* node, int id) const;
    Node* removeRecursive(Node* node, int id);
    Node* findMinNode(Node* node) const;
    void inOrderTraversal(Node* node) const;
    void destroyTree(Node* node);
};

