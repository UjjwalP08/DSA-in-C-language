//**************************Circular Linked List*********************

#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
} node;

node *tail;
int count = 0;

// **********************Create Function*****************

void *create()
{
	node *newnode;
	int c, d, n = 1;
	tail = NULL;
	while (n != 0)
	{
		newnode = (node *)malloc(sizeof(node));
		printf("Enter data  (%p):- ", &newnode->data);
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		if (tail == NULL)
		{
			tail = newnode;
			tail->next = newnode;
		}
		else
		{
			newnode->next = tail->next;
			tail->next = newnode;
			tail = newnode;
		}
		printf("\nPress 1 for continue and press 0 to stop:->\n");
		scanf("%d", &n);
	}
}

void display()
{
	node *temp;

	if (tail == NULL)
	{
		printf("\t \t \t List is empty");
	}
	else
	{
		temp = tail->next;
		while (temp->next != tail->next)
		{
			printf("\n %d is data (%p)\n\n", temp->data, &temp->data);

			temp = temp->next;
		}
		printf("\n %d is data (%p)", temp->data, &temp->data);
	}
}
// **************************Check Linked List Length*******************

int get_length()
{
	node *temp;
	int i = 0;
	temp = tail->next;

	while (temp->next != tail->next)
	{
		temp = temp->next;
		i++;
	}
	return i;
}

//************************Insertion at beganing**************************
void insert_beg()
{
	node *new;

	new = (node *)malloc(sizeof(node));

	printf("Enter data which you want to insert in begning (%p)\n", &new->data);

	scanf("%d", &new->data);

	new->next = NULL;
	if (tail == NULL)
	{
		tail = new;
	}
	else
	{
		new->next = tail->next;
	}

	tail->next = new;

	printf("\t \t \t Data is Inserted at Begning\n");
}

// **************************Insertion at End******************************

void insert_end()
{

	node *new;

	new = (node *)malloc(sizeof(node));

	printf("Enter data which you want to insert at end (%p) \n", &new->data);

	scanf("%d", &new->data);

	if (tail == NULL)
	{

		tail = new;

		tail->next = new;
	}

	else
	{
		new->next = tail->next;
		tail->next = new;
		tail = new;
	}

	printf("\t \t \t Data is Inserted at End\n");
}

//***************************Insertion at Specify Position********************
void insert_pos()
{
	node *new, *temp;

	temp = tail->next;

	int i = 1, l, pos;

	l = get_length();

	printf("Enter Position where you want to insert data\n");
	scanf("%d", &pos);

	if ((pos < 0) || (pos > l))
	{
		printf("\t \t \t Invalide Position\n");
	}

	else if (pos == 1)
	{
		insert_beg();
	}

	else
	{

		new = (node *)malloc(sizeof(node));

		printf("Enter data which you want to insert %d Position (%p)\n", pos, &new->data);

		scanf("%d", &new->data);

		while (i < pos - 1)
		{

			temp = temp->next;

			i++;
		}
		new->next = temp->next;

		temp->next = new;

		printf("\t \t \t Data is Inserted at %d Position\n", pos);
	}
}
//**********************Insert Before Specify Position**************

void insert_befopos()
{
	node *new, *temp;

	temp = tail->next;

	int i = 1, l, pos;

	l = get_length();

	printf("Enter Position Before that you want to insert data\n");
	scanf("%d", &pos);
	pos = pos - 1;

	if ((pos < 0) || (pos > l))
	{
		printf("\t \t \t Invalide Position\n");
	}

	else if (pos == 1)
	{
		insert_beg();
	}

	else
	{

		new = (node *)malloc(sizeof(node));

		printf("Enter data which you want to insert %d Position (%p)\n", pos, &new->data);

		scanf("%d", &new->data);

		while (i < pos - 1)
		{

			temp = temp->next;

			i++;
		}
		new->next = temp->next;

		temp->next = new;

		printf("\t \t \t Data is Inserted at %d Position\n", pos);
	}
}

//*************************Insert After Specify Position*******************

void insert_aftpos()
{
	node *new, *temp;

	temp = tail->next;

	int i = 1, l, pos;

	l = get_length();

	printf("Enter Position after that you want to insert data\n");
	scanf("%d", &pos);
	pos = pos + 1;

	if ((pos < 0) || (pos > l))
	{
		printf("\t \t \t Invalide Position\n");
	}

	else if (pos == 1)
	{
		insert_beg();
	}

	else
	{

		new = (node *)malloc(sizeof(node));

		printf("Enter data which you want to insert %d Position (%p)\n", pos, &new->data);

		scanf("%d", &new->data);

		while (i < pos - 1)
		{

			temp = temp->next;

			i++;
		}
		new->next = temp->next;

		temp->next = new;

		printf("\t \t \t Data is Inserted at %d Position\n", pos);
	}
}

//*************************Delete at Begning*******************

void delete_beg()
{

	node *temp;

	temp = tail->next;

	if (tail == NULL)
	{

		printf("List is empty\n");
	}

	else if (temp == temp->next)
	{
		tail = NULL;
		free(temp);

		printf("\t \t \t Node is Deleted\n");
	}

	else
	{

		tail->next = temp->next;

		printf("Delete node data is %d (%p)\n", temp->data, &temp->data);

		free(temp);

		printf("\t \t \t Node is Deleted\n");
	}
}

//*************************Delete at End*******************

void delete_end()
{

	node *curr, *prev;

	curr = tail->next;

	if (tail == NULL)
	{
		printf("List is Empty\n");
	}

	else if (tail == tail->next)
	{

		tail == NULL;

		free(tail);

		printf("\t \t \t Node is Deleted at the end");
	}

	else
	{
		while (curr->next != tail->next)
		{

			prev = curr;

			curr = curr->next;
		}

		prev->next = tail->next;

		tail = prev;

		printf("Delete node data is %d (%p)\n", curr->data, &curr->data);
		free(curr);

		printf("\t \t \t Node is Deleted at the end");
	}
}

//*************************Delete at Specify Position*******************

void delete_pos()
{
	int i = 1, pos, l;

	node *temp, *prev;

	temp = tail->next;

	printf("Enter Position where you want to Delete Node or Node's Data \n");
	scanf("%d", &pos);

	l = get_length();

	if ((pos < 0) || (pos > l))
	{

		printf("Invalid Position \n");
	}

	else if (pos == 1)
	{
		delete_beg();
	}

	else
	{

		while (i < pos)
		{
			prev = temp;
			temp = temp->next;
			i++;
		}

		prev->next = temp->next;

		printf("Delete node data is %d (%p)\n", temp->data, &temp->data);

		free(temp);

		printf("\t \t \t Node is Delete %d Position\n", pos);
	}
}

//*************************Delete Before Specify Position*******************
void delete_befopos()
{
	int i = 1, pos, l;

	node *temp, *prev;

	temp = tail->next;

	printf("Enter Position Before that you want to Delete Node or Node's Data \n");
	scanf("%d", &pos);
	pos = pos - 1;

	l = get_length();

	if ((pos < 0) || (pos > l))
	{

		printf("Invalid Position \n");
	}

	else if (pos == 1)
	{
		delete_beg();
	}

	else
	{

		while (i < pos)
		{
			prev = temp;
			temp = temp->next;
			i++;
		}

		prev->next = temp->next;

		printf("Delete node data is %d (%p)\n", temp->data, &temp->data);

		free(temp);

		printf("\t \t \t Node is Delete %d Position\n", pos);
	}
}

//*************************Delete After Specify Position*******************
void delete_aftpos()
{
	int i = 1, pos, l;

	node *temp, *prev;

	temp = tail->next;

	printf("Enter Position After that you want to Delete Node or Node's Data \n");
	scanf("%d", &pos);
	pos = pos + 1;

	l = get_length();

	if ((pos < 0) || (pos > l))
	{

		printf("Invalid Position \n");
	}

	else if (pos == 1)
	{
		delete_beg();
	}

	else
	{

		while (i < pos)
		{
			prev = temp;
			temp = temp->next;
			i++;
		}

		prev->next = temp->next;

		printf("Delete node data is %d (%p)\n", temp->data, &temp->data);

		free(temp);

		printf("\t \t \t Node is Delete %d Position\n", pos);
	}
}

int main()
{

	int ch;
	do
	{
		printf("\n\n1  for create list\n2  for display list\n3  for insert at begning\n4  for inset at end\n5  for inset at given position\n6  for delete at begning\n7  for delete at end\n8  for delete at given position\n9  for insert before given position\n10 for insert after given position\n11 for delete before given position\n12 for delete after given position\n13 for Exit\n");
		scanf(" %d", &ch);

		switch (ch)
		{
		case 1:
			create();
			printf("\t \t \t Nodes are created \n");
			break;
		case 2:
			display();

			break;
		case 3:
			insert_beg();
			break;
		case 4:
			insert_end();
			break;
		case 5:
			insert_pos();
			break;
		case 6:
			delete_beg();
			break;
		case 7:
			delete_end();
			break;
		case 8:
			delete_pos();
			break;
		case 9:
			insert_befopos();
			break;
		case 10:
			insert_aftpos();
			break;
		case 11:
			delete_befopos();
			break;
		case 12:
			delete_aftpos();
			break;
		case 13:
			printf("\t \t \t Exit Circular Linked List");
			break;
		default:
			printf("\t \t \t Wrong choice!!!!!!!!!!!!!");
			break;
		}
	} while (ch != 13);

	return 0;
}
