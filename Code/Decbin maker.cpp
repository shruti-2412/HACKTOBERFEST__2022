#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*top = NULL, *p = NULL, *np = NULL;
int x;
void push(int n)
{
    np = new node;
    np->data = n;
    np->next = NULL;
    if (top == NULL)
    {
        top = np;
    }
    else
    {
        np->next = top;
        top = np;
    }
}
int pop()
{
    if (top == NULL)
    {
        cout<<"underflow\n";
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        delete(p);
        return(x);
    }
}
int main()
{
    int n, a;
    cout<<"enter the decimal number\n";
    cin>>n;
    while (n > 0)
    {
        a = n % 2;
        n = n / 2;
        push(a);
    }
    p = top;
    cout<<"resultant binary no:";
    while(true)
    {
        if (top != NULL)
	    cout<<pop()<<"\t";
	else
	    break;
    }
    getch();
}
