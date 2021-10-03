#ifndef linkedlists_hpp
#define linkedlists_hpp

template<typename T>
class Node
{
  public:
    T data;
    Node *next;
};

template <typename T>
T *linkedlist_add (T *head, char data);

template <typename T>
T *linkedlist_rem (T *head, char data);

template <typename T>
void linkedlist_nuke (T *head);

template <typename T>
void linkedlist_print (T *head);

#endif
