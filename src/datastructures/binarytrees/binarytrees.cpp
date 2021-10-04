#include <iostream>

#include "include/binarytress.hpp"

/* initializer list */
Node::Node(std::string n, int d) : name{n}, data{d}, right{NULL}, left{NULL} {}

void binarytree_insert(Node** head, std::string name, int data)
{
  Node* tmp = new Node(name, data);
  if(*head==NULL)
  {
    *head = tmp;
    return;
  }




int main()
{
  return 0; 
}

