
#include <iostream>
using namespace std;

class Node
  {
        public:
		int key;
		int data;
		Node* prev;
		Node* next;
		
		Node()
		{
		  key =0;
		  data = 0;
		  next = NULL;
		  prev = NULL;	
		}  
		
		Node(int k,int d)
		{
			key = k;
			data = d;
			
		}

  };
   
   
  class Doublelinkedlist
  {
  	public:
  		Node* head;
  		
  		Doublelinkedlist()
  		{
  			head = NULL;
		}
		
		Doublelinkedlist(Node* n)
  		{
  			head = n;
		}
		
		
		//1. check if node exist using key value
		
		Node* checkifnodeexist(int k)
		{
			Node* temp = NULL;
			Node* ptr = head;
			
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp = ptr;
				}
				ptr = ptr->next
			}
			return temp;
		}
       
	   //2. append node
	   void appendNode(Node* n)
	   {
	   	   if(checkifnodeexist(n->key)!=NULL)
	   	   {
	   	   	 cout<<"mode exist with key: "<<k<<endl;
		   }
		   else
		   {
		   	   if(head==NULL)
		   	   {
		   	   	 head = n;
		   	   	 cout<<"node appended as head or 1st node"<<endl;
			   }
			   else
			   {
			   	   Node*ptr = head;
			   	   
			   	   while(ptr!=NULL)
			   	   {
			   	   	  ptr = ptr->next;
				   }
				   ptr->next = n;
				   n->prev = ptr;
				   n->next = NULL;
				   cout<<"NODE APPENDED"<<endl;
				   
			   }
		   }
	   }
	   
	   //2.prepemd node function
	   
	   void prependNode(Node* n)
	   {
	   	if(checkifnodeexist(n->key)!=NULL)
	   	   {
	   	   	 cout<<"mode exist with key: "<<k<<endl;
		   }
		 else
		 {
		 	if(head==NULL)
		   	   {
		   	   	 head = n;
		   	   	 cout<<"node appended as head or 1st node"<<endl;
			   }
			 else
			 {  
		 	head->prev = n;
		 	n->next = head;
		 	
		 	head = n;
		 	
		 	cout<<"node prepend: "<<endl;
		     }
		 }  
	   }
	   
	   
	  //3.insertafter node 
	   void insertafterNode(int k,Node* n)
	   {
	   	  Node* ptr = checkifnodeexist(k);
	   	  
	   	  if(ptr==NULL)
	   	  {
	   	  	cout<<"no node exist in list"
		  }
		  else
		  {
		  	if(checkifnodeexist(n->key)!=NULL)
		  	{
		  		cout<<"node with a key exist"<<endl;
			}
			else
			{
				Node* nextnode = ptr->next;
				// inserting at the end
				if(nextnode==NULL)
				{
					ptr->next =n;
					n->prev = ptr;
					cout<<"node inserted at end"<<endl;
				}
				
				//inserting in b/w
				else
				{
					n->next = nextnode;
					nextnode->prev = n;
					n->prev = ptr;
					ptr->next = n;
					
					cout<<"node inserted in b/w"<<endl;
				}
			}
		  }
	   }
	   
	   	
   }; 

int main()
{
	
	return 0;
}
