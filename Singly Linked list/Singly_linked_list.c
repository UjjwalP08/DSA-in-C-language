
//**************************Singly Linked List*********************

#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
} node;

node *head;
int count = 0;

// **********************Create Function*****************

node *create()
{
	node *temp, *newnode;
	int c, d, n = 1;
	head = temp = NULL;
	while (n != 0)
	{
		newnode = (node *)malloc(sizeof(node));
		printf("Enter data  (%p):- ", &newnode->data);
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("\nPress 1 for continue and press 0 to stop:->\n");
		scanf("%d", &n);
	}
	temp = head;

	return head;
}

//**************************Display Function*********************
void display()
{

	node *temp;

	temp = head;

	while (temp != NULL)
	{
		printf("\nThe data is %d (%p) \n", temp->data, &temp->data);

		temp = temp->next;

		count++;
	}
}

// **************************Check Linked List Length*******************

int get_length()
{
	node *temp;
	int i = 0;
	temp = head;

	while (temp != NULL)
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

	new->next = head;
	head = new;

	printf("\t \t \t Data is Inserted at Begning\n");
}

//**************************Insertion at End******************************

void insert_end()
{
	node *new, *temp;
	temp = head;
	new = (node *)malloc(sizeof(node));
	printf("Enter data which you want to insert at End (%p) \n", &new->data);
	scanf("%d", &new->data);
	new->next = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	printf("\t \t \t Data is Inserted at End");
}

//***************************Insertion at Specify Position********************

void insert_pos()
{
	node *new, *temp;
	int i = 1, pos, l;
	l = get_length();

	printf("Enter Given Position \n");
	scanf("%d", &pos);

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		insert_beg();
	}
	else
	{
		temp = head;
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}

		new = (node *)malloc(sizeof(node));
		printf("Enter data which U want to insert (%p)\n", &new->data);
		scanf("%d", &new->data);

		new->next = temp->next;
		temp->next = new;

		printf("\t \t \t Data is Inserted %d Position\n", pos);
	}
}

//**********************Insert Before Specify Position**************
void insert_befopos()
{
	node *new, *temp;
	int i = 1, pos, l;
	l = get_length();

	printf("Enter  Position Before U Insert  Data \n");
	scanf("%d", &pos);
	pos = pos - 1;

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		insert_beg();
	}
	else
	{
		temp = head;
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}

		new = (node *)malloc(sizeof(node));
		printf("Enter data which U want to insert (%p)\n", &new->data);
		scanf("%d", &new->data);

		new->next = temp->next;
		temp->next = new;

		printf("\t \t \t Data is Inserted %d Position\n", pos);
	}
}

//*************************Insert After Specify Position*******************

void insert_aftpos()
{
	node *new, *temp;
	int i = 1, pos, l;
	l = get_length();

	printf("Enter  Position After U Insert Data\n");
	scanf("%d", &pos);
	pos = pos + 1;

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		insert_beg();
	}
	else
	{
		temp = head;
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}

		new = (node *)malloc(sizeof(node));
		printf("Enter data which U want to insert (%p)\n", &new->data);
		scanf("%d", &new->data);

		new->next = temp->next;
		temp->next = new;

		printf("\t \t \t Data is Inserted %d Position\n", pos);
	}
}

//***************************Delete at Beganing************************

void delete_beg()
{
	node *temp;
	temp = head;
	head = head->next;

	printf("Deleted element is %d at Beganing (%p)\n", temp->data, &temp->data);

	free(temp);
}

//*****************************Delete at End********************************

void delete_end()
{
	node *temp, *prev;
	temp = head;
	while (temp->next != NULL)
	{
		prev = temp;

		temp = temp->next;
	}

	if (temp == head)
	{
		head = NULL;
	}
	else
	{
		prev->next = NULL;
	}
	printf("Deleted element is %d at End (%p) \n", temp->data, &temp->data);
	free(temp);
}

//********************************Delete at Specify Postion***************************

void delete_pos()
{
	int i = 1, pos, l;
	node *temp, *extra;
	temp = head;
	l = get_length();

	printf("Enter a Position\n");
	scanf("%d", &pos);

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		delete_beg();
	}
	else
	{
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}
		extra = temp->next;
		temp->next = extra->next;
		printf("The position of %d Deleted element is %d  (%p) \n", pos, extra->data, &extra->data);
		free(extra);
	}
}

//***************************Delete Data Before Specify Postition*******************************

void delete_befopos()
{
	int i = 1, pos, l;
	node *temp, *extra;
	temp = head;
	l = get_length();

	printf("Enter a Position \n");
	scanf("%d", &pos);

	pos = pos - 1;

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		delete_beg();
	}
	else
	{
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}
		extra = temp->next;
		temp->next = extra->next;
		printf("The position of %d Deleted element is %d (%p) \n", pos, extra->data, &extra->data);
		free(extra);
	}
}

//******************************Delete Data After Specify Postion***********************

void delete_aftpos()
{
	int i = 1, pos, l;
	node *temp, *extra;
	temp = head;
	l = get_length();

	printf("Enter a Position\n");
	scanf("%d", &pos);

	pos = pos + 1;

	if ((pos < 1) || (pos > l))
	{
		printf("\t \t \t Invalid Position\n");
	}
	else if (pos == 1)
	{
		delete_beg();
	}
	else
	{
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}
		extra = temp->next;
		temp->next = extra->next;
		printf("The position of %d Deleted element is %d (%p) \n", pos, extra->data, &extra->data);
		free(extra);
	}
}

int main()
{

	int ch;
	do
	{
		printf("\n1  for create list\n2  for display list\n3  for insert at begning\n4  for inset at end\n5  for inset at given position\n6  for delete at begning\n7  for delete at end\n8  for delete at given position\n9  for insert before given position\n10 for insert after given position\n11 for delete before given position\n12 for delete after given position\n13 for Exit\n");
		scanf(" %d", &ch);

		switch (ch)
		{
		case 1:
			create();
			printf("\t \t \t Node is created \n");
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
			printf("\t \t \t Exit Linkde List");
			break;
		default:
			printf("Wrong choice");
			break;
		}
	} while (ch != 13);

	return 0;
}
