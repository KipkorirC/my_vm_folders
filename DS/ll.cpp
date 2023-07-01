#include <iostream>
#include <string>

class Node{
    public:
    int data;
    int key;
    Node* next;

    Node(){
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k,int d){
        key = k;
        data = d;
    }
};
class SingleyLinkedList(){
    public:
    Node* head;

    SingleyLinkedList(){
        head=NULL;
    }
    SingleyLinkedList(Node* n){
        head=n;
    }

    Node* NodeExists(int k){
        Node* temp = NULL;
        Node* ptr = head;

        while(ptr!=NULL){
            if(ptr->key ==k){
                temp=ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    void appendNode(Node* n){
        if(NodeExists(n->key)){
            std::cout<<"Node of this key already exists\n";
        }else{
            if(head==NULL){
                head = n;
                std::cout<<"Node appended\n";
            }else{
                Node* ptr = head;
                while(ptr->next!=NULL){
                    ptr = ptr->next;
                }
                ptr->next = n;
                std::cout<<"Node appended\n";
            }
        }
    }
    void prepend(Node* n){
        if(NodeExists(n->key)){
            std::cout<<"Node already exists\n";
        }else{
            if(head==NULL){
                head = n;
            }else{
                n->next = head;
                head=n;
            }
        }
    }
    void insertNode(int k,Node* n){
        Node* ptr = NodeExists(k);
        if(ptr==NULL){
            std::cout<<"node does not exist\n";
        }else{
            if(NodeExists(n->k)){
                std::cout<<"Mode already exists\n";
            }else{
            n->next=ptr->next;
            ptr->next = n;
            std::cout<<"Node inserted\n";
            }
        }
    }
    void DeleteNode(int k){
        if(head==NULL){
            std::cout<<"list is empty\n";
        }else if(head!=NULL){
            if(head->key==k){
                head = head->next;
            }else{
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr= head->next;

                while(currentptr!=NULL){
                    if(currentptr->key==k){
                        temp = currentptr;
                        currentptr= currentptr->next;
                    }else{
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }
                if(temp!=NULL){
                    prev->next = temp->next;
                    std::cout<<"Node deleted\n";
                }else{
                    std::cout<<"Node of this key does not exist in list\n";
                }

            }
        }
    }
    void UpdateNode(int k,int d){
        Node* ptr = NodeExists(k);
        if(ptr){
            ptr->data=d;
        }else{
            std::cout<<"Node of this key does not exist\n";
        }
    }
    void PrintList(){
        
    }
};