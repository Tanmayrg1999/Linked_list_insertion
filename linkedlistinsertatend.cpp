//insert at the end
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
void insert(int data)
{
	node *newnode;
	node *temp=head;
	newnode=(struct node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	temp->next=newnode;	
}
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
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	cout<<"LINKED LIST IS:"<<endl;
	display();
}
