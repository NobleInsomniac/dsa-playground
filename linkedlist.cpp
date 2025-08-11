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

Node(int x, Node & prev)
{
    data = x;
    prev.assign_ptr();
}

void give_val(int);
void assign_ptr(Node &);
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


