#include "binarysearchtree.hpp"

int main()
{
  Node *head = NULL;
  int i = 0;
  binarytree_insert(&head, "EW", i++);
  binarytree_insert(&head, "He", i++);
  binarytree_insert(&head, "lo", i++);
  binarytree_insert(&head, "my", i++);
  binarytree_insert(&head, "is", i++);
  binarytree_insert(&head, "cat", i++);
  binarytree_insert(&head, "dog", i++);
  binarytree_insert(&head, "why", i++);

  binarytree_print(head);

  std::cout << std::endl;
  head = binarytree_del(head, 3, " ");
  binarytree_print(head);
  std::cout << std::endl;
  
  return 0; 
}


