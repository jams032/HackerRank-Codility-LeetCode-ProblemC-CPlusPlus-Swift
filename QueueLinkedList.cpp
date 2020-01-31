////
////  main.cpp
////  QueueLinkedList
////
////  Created by Jamshed on 20/12/19.
////  Copyright © 2019 Jamshed. All rights reserved.
//// Example 1
//#include <stdio.h>
//#include <iostream>
//
//// example 1
//// A CPP program to demonstrate linked list
//// based implementation of queue
//using namespace std;
//
//// A linked list (LL) node to store a queue entry
//class QNode {
//public:
//    int key;
//    QNode* next;
//};
//
//// The queue, front stores the front node
//// of LL and rear stores the last node of LL
//class Queue {
//public:
//    QNode *front, *rear;
//};
//
//// A utility function to create
//// a new linked list node.
//QNode* newNode(int k)
//{
//    QNode* temp = new QNode();
//    temp->key = k;
//    temp->next = NULL;
//    return temp;
//}
//
//// A utility function to create an empty queue
//Queue* createQueue()
//{
//    Queue* q = new Queue();
//    q->front = q->rear = NULL;
//    return q;
//}
//
//// The function to add a key k to q
//void enQueue(Queue* q, int k)
//{
//    // Create a new LL node
//    QNode* temp = newNode(k);
//
//    // If queue is empty, then
//    // new node is front and rear both
//    if (q->rear == NULL) {
//        q->front = q->rear = temp;
//        return;
//    }
//
//    // Add the new node at
//    // the end of queue and change rear
//    q->rear->next = temp;
//    q->rear = temp;
//}
//
//// Function to remove
//// a key from given queue q
//QNode* deQueue(Queue* q)
//{
//    // If queue is empty, return NULL.
//    if (q->front == NULL)
//        return NULL;
//
//    // Store previous front and
//    // move front one node ahead
//    QNode* temp = q->front;
//    delete(temp);
//
//    q->front = q->front->next;
//
//    // If front becomes NULL, then
//    // change rear also as NULL
//    if (q->front == NULL)
//        q->rear = NULL;
//    return temp;
//}
//
//// Driver code
//int main()
//{
//    Queue* q = createQueue();
//    enQueue(q, 10);
//    enQueue(q, 20);
//    deQueue(q);
//    deQueue(q);
//    enQueue(q, 30);
//    enQueue(q, 40);
//    enQueue(q, 50);
//    QNode* n = deQueue(q);
//    if (n != NULL)
//        cout << "Dequeued item is " << n->key;
//    return 0;
//}
//
//// This code is contributed by rathbhupendra


// Example 2
#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};

struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void Insert() {
    int val;
    cout<<"Insert the element in queue : "<<endl;
    cin>>val;
    if (rear == NULL) {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->data = val;
        front = rear;ha 
    } else {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
void Delete() {
    temp = front;
    if (front == NULL) {
        cout<<"Underflow"<<endl;
        return;
    }
    else
        if (temp->next != NULL) {
            temp = temp->next;
            cout<<"Element deleted from queue is : "<<front->data<<endl;
            free(front);
            front = temp;
        } else {
            cout<<"Element deleted from queue is : "<<front->data<<endl;
            free(front);
            front = NULL;
            rear = NULL;
        }
}
void Display() {
    temp = front;
    if ((front == NULL) && (rear == NULL)) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements are: ";
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    while (1) {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch) {
            case 1: Insert();
                break;
            case 2: Delete();
                break;
            case 3: Display();
                break;
            case 4: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;
        }
    } //while(ch!=4);
    return 0;
}
