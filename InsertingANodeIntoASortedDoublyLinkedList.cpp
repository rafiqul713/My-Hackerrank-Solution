#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;

        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
                node->prev = this->tail;
            }

            this->tail = node;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        DoublyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *temp;
    DoublyLinkedListNode *new_node= new DoublyLinkedListNode(data);
    new_node->next=NULL;
    new_node->prev=NULL;
    temp=head;
    int counter=0;
    while(temp!=NULL){
        int temp_data=temp->data;
        if(temp_data>=data){
            cout<<temp_data<<endl;
            new_node->next=temp;
            new_node->prev=temp->prev;
            temp->prev=new_node;
            if(counter>0){ //inserting in the middle of the linked list 
                new_node->prev->next=new_node;
            }
            if(counter==0){ //inserting in front of the linked list
                head=new_node;
            }
            break;
        }
        else if(data>temp_data && temp->next==NULL){ //insert at the last
            temp->next=new_node;
            break;

        }
        temp=temp->next;
        counter++;
    }

    return head; 
}

int main()
