#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};
struct node *head=NULL;

void insert(int data)
{
	node* newnode= (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
void display()
{
	node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	cout<<"LINKED LIST IS:"<<endl;
	insert(50);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	display();

}

