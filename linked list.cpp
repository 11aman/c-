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
	
	Node(int k,int d)
	{
		key = k;
		data = d;
	}
	
};

class singlelinkedlist
{
	public:
		Node* head;
		
		singlelinkedlist()
		{
			head = NULL;
		}
		
		singlelinkedlist(Node* n)
		{
			head = n;
		}
		
		
		//to check if node exist qwith the key already or not
		Node* nodeexists(int k)
		{
			Node* temp = NULL;
			Node* ptr = head;
			
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp = ptr;
				}
				ptr = ptr->next;
			}
			
			return temp;
		}
		
		
		//to append node at last 
void appendNode(Node* n)
{
	if(nodeexists(n->key)!=NULL)
	{
		cout<<"key already exist"<<endl;
	}
	else
	{
		if(head==NULL)
		{
			head = n;
			cout<<"node appended"<<endl;
		}
		else
		{
			Node* ptr = head;
			
			while(ptr->next!=NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = n;
			cout<<"node appended"<<endl;
	}
  }
}


//to append node at first
    void prependNode(Node* n)
      {
	     if(nodeexists(n->key)!=NULL)
	    {
		cout<<"key already exist"<<endl;
	   }
	
     	else
	   {
		n->next = head;
		head = n;
		
		cout<<"node prepend"<<endl;
	   }      
    }

// insert after particular node

      void insertNodeafter(int k, Node* n) 
      {
      	//to find key after which we need to insert 
      	Node* ptr = nodeexists(k);
      	if(ptr==NULL)
      	{
      		cout<<"no node exist with key value: "<<k<<endl;  
		}
		else
		{
			//to check wether key of neqw node made does not exist already
			if(nodeexists(n->key)!=NULL)
           	{
		       cout<<"key already exist"<<endl;
            }
            else
            {
            	n->next = ptr->next;
            	ptr->next = n;
            	
            	cout<<"node insert aftern key:"<<k<<endl;
			}
		}
	  }
	  
//delete node with unique key	  
	  void deleteNode(int k)
	  {
	  	if(head==NULL)
	  	{
	  		cout<<"no elements in the list"<<endl;
		}
		else if(head!=NULL)
		{
			if(head->key==k)
			{
				head = head->next;
				cout<<"head unlinked from this node to delete with key: "<<k<<endl;
			}
			else
			{
				Node* prevptr = head;
				Node* temp = NULL;
				Node* currntptr = head->next;
	            
	            while(currntptr!=NULL)
	            {
	            	if(currntptr->key==k)
	            	{
	            	temp = currntptr;
	            	currntptr = NULL;
	                }
	                else
	                {
	                	prevptr = prevptr->next;
	                	currntptr = currntptr->next;
					}
				}
				
				if(temp!=NULL)
				{
					prevptr->next = temp->next;
					cout<<"node unlinked with value k: "<<k<<endl;
				}
				else
				{
					cout<<"node with key doesn't exist: "<<k<<endl;
				}
			}
		}
	  }
	  
//update node data
      
	   void updateNode(int k, int d)
	   {
            Node* ptr = nodeexists(k);
			
			if(ptr!=NULL)
			{
				ptr->data = d;
				cout<<"data in node update"<<endl;
		    }
			else
			{
				cout<<"ndoe doesnt exist"<<endl;
			}	   	
	   }	  
	   
	   
////// print linked list data 

       void printList()
       {
       	if(head==NULL)
       	{
       		cout<<"no element in the list"<<endl;
		   }
		else
		{
			cout<<"list values are: "<<endl;
			Node* temp = head;
			
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
				temp = temp->next;
			}
		}   
	   }
		
};




int main()
{
	singlelinkedlist s;
	int option;
	int key1,k1,data1;
	
	do
	{
		cout<<"select option"<<endl;
		cout<<"1.appendnode()"<<endl;
		cout<<"2.prependNode()"<<endl;
		cout<<"3.insertafternode()"<<endl;
		cout<<"4.delete by key()"<<endl;
		cout<<"5.uodateby key()"<<endl;
		cout<<"6.print()"<<endl;
		cout<<"7.clear screen"<<endl<<endl;
		
		cin>>option;
		Node* n1 = new Node();
	
	   switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insertNodeafter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.updateNode(key1, data1);

      break;
    case 6:
      s.printList();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);
	
	return 0;
}
