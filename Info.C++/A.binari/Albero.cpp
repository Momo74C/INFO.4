#include "Albero.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
 {
    root = nullptr;
}

/*BinaryTree::~BinaryTree() 
{
    delete root;
}
*/
void BinaryTree::insert(int value) 
{
    if (root!=nullptr) 
    {
        root = new Node{value, nullptr, nullptr};
        return;
    }

    Node* current = root;
    while (true) 
    {
        if (value < current->data) 
        {
            if (current->left!=nullptr) 
            {
                current->left = new Node{value, nullptr, nullptr};
                return;
            }
            current = current->left;
        } 
        else 
        {
            if (current->right!=nullptr) 
            {
                current->right = new Node{value, nullptr, nullptr};
                return;
            }
            current = current->right;
        }
    }
}
void BinaryTree::print() {
    Node* current = root;
    if (!current) {
        cout << "L'albero è vuoto." << endl;
        return;
    }

    printtt(root); 
    cout << endl;
}

void BinaryTree::printtt(Node* node) {
    if (node!=nullptr) 
    {
        print(node->left);
        cout << node->data << " ";
        print(node->right);
    }
}

Node* BinaryTree::search(int value) 
{
    Node* current = root;
    while (current) 
    {
        if (current->data == value) 
        {
            return current;
        }
        current = (value < current->data) ? current->left : current->right;
    }
    return nullptr;
}
