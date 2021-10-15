#include <iostream>

using namespace std;

template <typename t>
struct node
{
	int data;
	node<t> *next;
};
template <typename t>
class linkedlist
{
	node<t> *head, *np, *temp, *tail;

public:
	linkedlist()
	{
		head = temp = np = tail = NULL;
	}
	~linkedlist()
	{
		temp = head;
		while (temp != NULL)
		{
			np = temp;
			temp = temp->next;
			delete np;
		}
		delete temp;
		delete tail;
		delete head;
	}
	bool is_empty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	void insert()
	{
		temp = new node<t>();
		cout << "Enter the value to be inserted :";
		cin >> temp->data;
		temp->next = NULL;
		if (is_empty())
			head = tail = temp;
		else
		{
			if (temp->data < head->data)
			{
				temp->next = head;
				head = temp;
			}
			else if (temp->data > tail->data)
			{
				tail->next = temp;
				tail = temp;
			}
			else
			{
				int c = 1, k;
				np = head;
				while (np->data < temp->data)
				{
					np = np->next;
					c++;
				}
				k = 1;
				np = head;
				while (k < c - 1)
				{
					np = np->next;
				}
				temp->next = np->next;
				np->next = temp;
			}
		}
	}
	void del(int data)
	{
		if (is_empty())
			cout << "Linked list is empty.\n";
		else if (head->data == data)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
		else 
		{
			temp = head;
			while ((temp == NULL)|| (temp->data != data))
				{
					temp = temp->next;
				}
			if (temp == NULL)
				cout << "Element is not present in list.";
			else if(temp==tail)
			{
				temp=tail;
				np=head;
				while(np->next!=tail)
				np=np->next;
				np->next=NULL;
				tail=np;
				delete temp;
			}
			else
			{
				np = head;
				while (np->next != temp)
				{
					np = np->next;
				}
				np->next = temp->next;
				delete temp;
			}
		}
	}

	void merge(linkedlist<t> &l)
	{
		tail->next = l.head;
		tail = l.tail;
	}

	void print()
	{
		cout << "Linked list :";
		np = head;
		while (np != NULL)
		{
			cout << np->data<<" ";
			np = np->next;
		}
		cout << endl;
	}
};

int main()
{
	linkedlist<int> list;
	char ch;
	int choice;
	do
	{
		cout << "\n1. Insert\n2. Delete\n3. Merge with another list\n\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			list.insert();
			list.print();
			break;
		case 2:
			cout << "Enter the element to be deleted :";
			cin >> choice;
			list.del(choice);
			list.print();
			break;
		case 3:
			linkedlist<int> list2;
			do
			{
				cout << "For second linked list:" << endl;
				list2.insert();
				list2.print();
				cout << "\nPress y to insert more in second linked list.";
				cin >> ch;
			} while (ch == 'y');
			list.merge(list2);
			list.print();
			break;
		}
		cout << "\nWant to operate more? y/n : ";
		cin >> ch;
	} while (ch == 'y');
	return 0;
}
