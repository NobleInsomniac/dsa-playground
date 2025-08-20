#include <iostream>
using namespace std;
class Node
{
private:

int data;
Node *next;


public:
Node()
{
    data = 0;
    next = nullptr;
}
// remove unnecessary constructor

Node(int x, Node & prev)
{
    data = x;
    prev.assign_ptr();
}
 
void give_val(int);
void assign_ptr(Node &);
// functions not needed
void print_next();
void nullify();


};

void Node ::  nullify()
{
    next = nullptr;
}



void Node :: print_next()
{
    cout << next << endl;
}
void Node :: give_val(int a)
{
    data = a;
    
}
void Node :: assign_ptr(Node & N)
{
    next = &N;
}
class ll
{
    private : 
    Node head;
    int lengthofll{1};
    /*
NOT Poossible $tard
    the ll constructor calls the node constructor which assigns the pointer to this node to the previous node.

the methods include
 length of ll
 remove node
 change value of node
 access /search node 
** reverse the ll
** make  dll
 
    */
    public :
    ll()
    {
        Node head;
    }
    //void link_top(int);
    // void link_btm(int);
    //int give_len();



};





int main()
{

Node head;
Node N2(1, head);

head.print_next();
cout << &N2 << endl;


Node N3(2, N2);


cout << &N3<< endl;
N2.print_next();






}


