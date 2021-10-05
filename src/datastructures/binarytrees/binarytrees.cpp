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


void binarytree_nuke(Node**head)
{
  std::queue<Node*> q;
  q.push(*head);







int main()
{
  return 0; 
}

