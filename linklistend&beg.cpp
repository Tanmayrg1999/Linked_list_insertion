#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};
struct node *head=NULL;

/*void insertatbeg(int data)
{
	node *newnode=(struct node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}*/
/*void insertatend(int data)
{
	node *newnode=(struct node*)malloc(sizeof(node));
	node *temp,*p;
	temp=newnode;
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}*/

/*	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->data=data;
	newnode->data=temp->data;
	newnode->next=NULL;*/
void display()
{
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
}
