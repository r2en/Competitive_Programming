#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main ()
{
  list<int> ls;

  ls.push_front(1);
  ls.push_front(2);

  ls.push_back(3);
  ls.push_back(4);

    auto End = end(ls);
    for(auto i = begin(ls); i != End; ++i){
        cout << *i << "\n";
    }
}