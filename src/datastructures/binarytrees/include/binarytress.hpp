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

