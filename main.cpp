#include <iostream>

using namespace std;

struct Node
{
    int age;
    string fname;
    string lname;
    Node *next;
};

void print(Node *&head);
void pushFront(Node *&head);
bool manip(Node *&head, int n, int idx);



int main()
{
    cout << "Hello World!===========" << endl;
    return 0;
}
