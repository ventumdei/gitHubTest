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



int main()
{
    cout << "Hello World!===========" << endl;
    return 0;
}
