#include <iostream>

using namespace std;

struct Node
{
int data; 
Node * next;
Node(int d = 0, Node * n = nullptr) : data(d), next(n){} 
};

struct list
{
    Node* head;
    list() { head = nullptr;}
    void add_first(int d)
   {
     Node *tmp; 
     tmp = new Node(d, head);
    head = tmp; 
   }
    void print()
{
Node *p = head; 
while (p != nullptr)
{
cout << p->data << " ";
p = p->next; 
}
cout << endl;
}
    Node *last()
    {
        Node *p = head;
        while(p->next != nullptr)
        {
            p = p->next;
        }
        return p;
    }
    Node *prelast ()
{
    Node *p = head;
        while(p->next != last())
        {
            p = p->next;
        }
        return p;
}
    Node *get_ptr (int n)
{
    Node *p = head;
    int i = 0;
    while(i != n)
    {
     i++;
     p = p->next;
    }
    return p;
}
    void add_after_first(int d)
    {
        Node *p = head;
        p->next;
        Node *n = new Node(d, p);
        head = n;
    }
void add_last(int d)
{
    Node *n = new Node(d, nullptr);
    
}

};

int main()
{
list l;
l.add_first(3);
l.add_first(2);
l.add_first(1);
l.print();
cout << l.last()->data << endl;
cout << l.prelast()->data << endl;
cout << "///" << endl;
cout << l.get_ptr(0)->data << endl;
cout << l.get_ptr(1)->data << endl;
cout << l.get_ptr(2)->data << endl;
l.add_after_first(1);
l.print();
l.add_last(4);
l.print();
return EXIT_SUCCESS;
}