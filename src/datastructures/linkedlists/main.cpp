#include <iostream>
#include "linkedlists.hpp"

int main()
{
  Node<char> *head = NULL;
  head = linkedlist_add<Node<char>>(head, 'a');
  head = linkedlist_add<Node<char>>(head, 'b');
  linkedlist_print<Node<char>>(head);
  linkedlist_nuke<Node<char>>(head);
  return 0;
}
