#include <iostream>
#include <queue>

#include "include/binarytress.hpp"

/* initializer list */
Node::Node(std::string n, int d) : name{n}, data{d}, right{NULL}, left{NULL} {}

/* insert node based on data, first fills left and then right. No intermediate logic */
void binarytree_insert(Node** head, std::string name, int data)
{
  Node* tmp = new Node(name, data);
  if(*head==NULL)
  {
    *head = tmp;
    return;
  }
  std::queue<Node*> q;
  q.push(*head);

  while(!q.empty())
  {
    Node *q_tmp = q.front();
    q.pop();

    if(q_tmp->left != NULL)
      q.push(q_tmp->left);
    else
    {
      q_tmp->left = tmp;
      return;
    }
    if(q_tmp->right != NULL)
      q.push(q_tmp->right);
    else
    {
      q_tmp->right = tmp;
      return;
    }
  }
}

/* Inorder print traversal of a binary tree*/
void binarytree_print(Node *temp)
{
    if (!temp)
        return;
    binarytree_print(temp->left);
    std::cout << temp->data << " " << temp->name << " ";
    binarytree_print(temp->right);
}
 
/* function to delete the given deepest node
(d_node) in binary tree */
void deletDeepest(Node* root,
                  Node* d_node)
{
    std::queue<Node*> q;
    q.push(root);
 
    // Do level order traversal until last node
    Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == d_node) {
            temp = NULL;
            delete (d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }
 
        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}
 
/* function to delete element in binary tree */
Node* binarytree_del(Node* root, int data, std::string name)
{
    if (root == NULL)
        return NULL;
 
    if (root->left == NULL && root->right == NULL) {
        if ((root->data == data) || (root->name == name))
            return NULL;
        else
            return root;
    }
 
    std::queue<Node*> q;
    q.push(root);
 
    struct Node* temp;
    struct Node* key_node = NULL;
 
    // Do level order traversal to find deepest
    // node(temp) and node to be deleted (key_node)
    while (!q.empty()) {
        temp = q.front();
        q.pop();
 
        if ((temp->data == data) || (temp->name == name))
            key_node = temp;
 
        if (temp->left)
            q.push(temp->left);
 
        if (temp->right)
            q.push(temp->right);
    }
 
    if (key_node != NULL) {
        int x = temp->data;
        std::string y = temp->name;
        deletDeepest(root, temp);
        key_node->data = x;
        key_node->name = y;
    }
    return root;
}
