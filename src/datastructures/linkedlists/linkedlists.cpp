#include <iostream>

#include "include/linkedlists.hpp"

/* pushes node to end of linked list */
template <typename T>
T *linkedlist_add ( T* head, char data)
{
  T *tmp = new T();
  T *itr = head;
  tmp->data = data;
  tmp->next = NULL;
  if(head==NULL)
    return tmp;
  while(itr->next!=NULL)
    itr=itr->next;
  itr->next = tmp;
  return head;
}

/* removed linked list by finding data point
 * will remove first occurance only! */
template <typename T>
T *linkedlist_rem (T *head, char data)
{
  T *itr = head;
  T *prev_itr = head;
  while(itr!=NULL)
  {
    if(itr->data==data)
    {
      prev_itr->next = itr->next;
      delete itr;
      return head;
    }
    prev_itr = itr;
    itr = itr->next;
  }
  return head;
}

/* delete all nodes in linked list */
template <typename T>
void linkedlist_nuke (T *head)
{
  T *next = NULL;
  while(next!=NULL)
  {
    next = head->next;
    head = NULL;
    delete head;
  }
  delete next;
}

/* print all nodes */
template <typename T>
void linkedlist_print (T *head)
{
  while(head!=NULL)
  {
    head = head->next;
    std::cout << " Node data: " << head->data;
  }
}

