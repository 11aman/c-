#include <iostream>
using namespace std;

class Node
{
	public:
		int key;
		int data;
		Node* next;
		
		Node()
		{
			key = 0;
			data = 0;
			next = NULL;
		}
		
		Node(int k, int d)
		{
			key = k;
			data = d;
		}
};

class CQueue
{
	public:
	Node* rear;
	Node* front;
	
	CQueue()
	{
		rear = NULL;
		front = NULL;
	}
	
	bool isEmpty()
	{
		if(rear==NULL && front == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	} 
	
	bool nodeexist(Node*n)
	{
		Node* temp = front;
		bool exist = false;
		
		while(temp->next!=front)
		{
			if(temp->key == n->key)
			{
				exist = true;
			}
			temp =temp->next;
		}
		
		return exist;
	}
	
	
	void enqueqe(Node* n)
	{
		if(isEmpty())
		{
			rear = n;
			front = n;
			cout<<"node enqueued"<<endl;
		}
		else if(nodeexist(n))
		{
			cout<<"node with key exist"<<endl;
		}
		else
		{
			rear->next = n;
			n->next = front;
			rear = n;
			
		}
	}
	
	Node* dequeue()
	{
		if(isEmpty())
		{
			cout<<"queue is empty already"<<endl;
		}
		else if(rear == front)
		{
			Node*temp = front;
			front = NULL;
			rear = NULL;
			return temp;
		}
		else
		{
			Node* temp = front;
			front = front->next;
			rear = front->next;
			return temp;
		}
	}
	
	
	int count()
	{
		int count = 0;
		Node* temp = front;
		
		while (temp->next != front)
		{
			count++;
			temp = temp->next;
		}
		
		return count;
	}
	
	void display()
	{
		cout<<"all values are: "<<endl;
		if(isEmpty())
		{
			cout<<"queue is empty"<<endl;
		}
		else
		{
			Node* temp = front;
			
			do
			{
				cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
				temp = temp->next;
			} while(temp!= front);
		}
	}
};

int main()
{
	CQueue q1;
  int key,data, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. count()" << endl;
    cout << "5. display()" << endl;
    cout << "6. Clear Screen" << endl << endl;

    cin >> option;
    Node* new_node = new Node();

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter KEY and VALUE of NODE to push in the queue" <<
        endl;
      cin >> key;
      cin >> data;
      new_node -> key = key;
      new_node -> data = data;
      q1.enqueqe(new_node);
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
      break;
    case 3:
      if (q1.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
      break;
    case 5:
      cout << "Display Function Called - " << endl;
      q1.display();
      break;
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
