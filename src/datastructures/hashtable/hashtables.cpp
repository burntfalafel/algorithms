#include "include/hashtables.hpp"

void Hash::insertItem(row key)
{
    int index = hashFunction(key.data);
    table[index].push_back(key);
}
 
void Hash::deleteItem(row key)
{
  // get the hash index of key
  int index = hashFunction(key.data);
 
  // find the key in (index)th list
  std::list<row> :: iterator i;
  for (i = table[index].begin();
           i != table[index].end(); i++) {
    if ((*i).data == key.data)
      break;
  }
 
  // if key is found in hash table, remove it
  if (i != table[index].end())
    table[index].erase(i);
}
 
// function to display hash table
void Hash::displayHash() {
  for (int i = 0; i < BUCKET; i++) {
    std::cout << i;
    for (auto x : table[i])
      std::cout << " --> " << x.data;
    std::cout << std::endl;
  }
}
 
// Driver program
int main()
{
  // array that contains keys to be mapped
  int a[] = {15, 11, 27, 8, 12};
  int n = sizeof(a)/sizeof(a[0]);
 
  // insert the keys into the hash table
  Hash h;   //f 7 is count of buckets in
               // hash table
  for (int i = 0; i < n; i++)
    h.insertItem({.data = a[i]}); 
 
  // delete 12 from hash table
  h.deleteItem({.data = 12});
 
  // display the Hash table
  h.displayHash();
 
  return 0;
}