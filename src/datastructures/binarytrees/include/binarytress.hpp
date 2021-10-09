#include <string>

class Node
{
  public:
    int data;
    std::string name;
    Node* right;
    Node* left;
    Node ( std::string, int);
};

void binarytree_insert(Node **head, std::string name, int data);

void binarytree_print(Node *temp);

Node *binarytree_del(Node *root, int data, std::string name);