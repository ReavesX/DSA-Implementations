/*
Author: Donald Jackson
File: Linked_List.c
Description: Linked List implementation and example usage.


Notes:
             -- A linked list is a data structure which lets you efficiently insert and delete arrays. 
             -- Linked Lists are used to implement Stacks, Queues, and Deques
             

            Characteristics:
             -- Non-Contiguous: Elements may be not touching or connected. I.E. there are multiple blocks of memory at different addresses, 
                                Head Node (Data, Link) - > Node 1 (Data, Link) -> Node N (Data, Link) -> NULL
            -- Accessed Sequentially, 

            Types of Linked Lists:
             -- Doubly Linked List
             -- Singly Linked List
             -- Circular Linked List
             
             
            Typical Operations:
             -- Length
             -- Print
             -- Insert
             -- Search
             -- Delete Key
             -- Delete Given Position
             -- Delete List
             -- Get Nth Node from Start
             -- Get Nth Node from End
             -- Size of Doubly Linked List
*/


// Singly Linked List


struct Node{
    int data;  // This is the Data element of the node
    struct Node* link; // This is where the next node is located
};


// This is how you create a node. 
struct Node* createNode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));  // allocate memory for the node & typecast it as a Node
    temp->data = data; // store memory for data integer in the memory allocated for the struct
    temp->link = NULL; // stores the value of the link as null (this is the last link of the node)
    return temp;
}

void insertValue(int data){
    Node* temp = (struct Node*)malloc(sizeof(struct Node));  // allocate memory for the node & typecast it as a Node
    (*temp).data = value;
    temp->link = NULL;
    head = temp;
    
}
void printLinkedList();

// implementation basic: 

struct Node* head; // the head is global and can be accessed everywhere.

int main(){
    head = NULL
    printf("how many numbers are there?")
    int amount, i , value;
    scanf("%d",&amount); // Get input for how many numbers there are in the list

    for(i = 0; i < amount; i++){ // Loops from 0 until the amount of numbers that the user specified
                                 // inserting the number given into the linked list
        printf("Enter the number:\n");
        scanf("%d", &value);
        insertValue(value);
        printLinkedList();
    }
}