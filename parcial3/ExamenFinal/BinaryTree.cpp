#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree() { root_ = nullptr; }

BinaryTree::~BinaryTree() = default;

void BinaryTree::create_tree(const Customer& value)
{
	temp_ = new Node;
	temp_->data = value;
	temp_->left = nullptr;
	temp_->right = nullptr;
}

Node* BinaryTree::get_root() const { return root_; }

void BinaryTree::insert(Node* value)
{
	if (root_ == nullptr)
	{
		root_ = temp_;
		cout << "ROOT node was added" << endl;
		return;
	}
	if (temp_->data.id < value->data.id)
	{
		if (value->left == nullptr)
		{
			value->left = temp_;
			cout << "Node added to the LEFT of ----> " << value->data.id << endl;
			return;
		}
		insert(value->left);
		return;
	}
	if (temp_->data.id > value->data.id)
	{
		if (value->right == nullptr)
		{
			value->right = temp_;
			cout << "Node added to the RIGHT of ----> " << value->data.id << endl;
			return;
		}
		insert(value->right);
		return;
	}
	if (temp_->data.id == value->data.id)
	{
		cout << "Node already exists" << endl;
	}
}

int BinaryTree::get_level(const Node* value) {
	int level = 0;
	temp_ = root_;
	while (temp_ != value)
	{
		if (value->data.id < temp_->data.id)
		{
			temp_ = temp_->left;
			level++;
		}
		else if (value->data.id > temp_->data.id)
		{
			temp_ = temp_->right;
			level++;
		}
	}
	return level;
}


void BinaryTree::search(const Node* value, const int key, BinaryTree tree)
{
	if (value == nullptr)
	{
		cout << "Node not found" << endl;
		return;
	}
	if (value->data.id == key)
	{
		cout << "Node found" << endl;
		cout << "ID: " << value->data.id << endl;
		cout << "Name: " << value->data.name << endl;
		cout << "Level: " << tree.get_level(value) << endl;
		return;
	}
	if (key < value->data.id)
	{
		search(value->left, key, tree);
		return;
	}
	if (key > value->data.id)
	{
		search(value->right, key, tree);
	}
}

void BinaryTree::postorder(const Node* start)
{
	if (!root_)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (start->left != nullptr) postorder(start->left);
	if (start->right != nullptr) postorder(start->right);
	cout << "\t" << start->data.id << "\t" << start->data.name << endl;
}
