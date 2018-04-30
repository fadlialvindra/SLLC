#include <iostream>

using namespace std;
class Node
{
  public:
    int data;
    Node *next;
};

Node *head;

void init()
{
    head = NULL;
}
bool isEmpty()
{
    if (head == NULL)
        return 1;
    return 0;
}


int main()
{
    init();
    
    
    return 0;
}
