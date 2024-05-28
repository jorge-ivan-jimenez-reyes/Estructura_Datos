#pragma once
#include <string>

struct Customer
{
public:
	Customer() = default;
	std::string name{};
	int id{};
};

struct Node
{
	Node* left;
	Customer data;
	Node* right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void create_tree(const Customer&);
	Node* get_root() const;
	void insert(Node*);
	static void search(const Node*, int, BinaryTree);
	void postorder(const Node*);
	int get_level(const Node*);

private:
	Node* root_{}, * temp_{};
};
