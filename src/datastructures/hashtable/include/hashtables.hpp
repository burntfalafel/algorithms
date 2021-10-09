#include <iostream>
#include <list>

#define BUCKET 100

typedef struct row
{
    int data;
} row;

class Hash
{
    public:
    int bucket; 
    std::list<row> *table;
    Hash()
    {
        table = new std::list<row>[BUCKET];
    }
    void insertItem(row key);
    void deleteItem(row key);
    int hashFunction(int x) {
        return (x % BUCKET);
    }
 
    void displayHash();
};

