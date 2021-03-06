#include <iostream>
#include <stdio.h>
/**
 * Inserting A Node At the Beginning of A Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/5/2017
 *
 * Program inserts nodes at the beginning of a linked list.
 *
 * @author Mariya Eggensperger
*/
struct Node {
    int data;
    struct Node* next;
};
/**
 * Function inserts approved node(s)
 * at the beginning of a linked list.
 *
 * @param args Node* head, int x
 * @return head pointer node
*/
struct Node* head; // Global variable for head pointer
Node* Insert(Node* head, int x) {
   Node* temp = (Node*)malloc(sizeof(struct Node));
   temp->data = x;
   temp->next = NULL;
   if(head != NULL) temp->next = head;
   head = temp;
   return head;
}
/**
 * Function prints approved node(s)
 * as a list at the program output.
 *
 * @param args While temp != NULL
 * @return printf of data values in linked list
*/
void Print(Node* head) {
   struct Node* temp = head; // Local variable for a temporary node pointer
   printf("List is:\n");
   while(temp != NULL){
      printf(" %d",temp->data);
      temp = temp->next;
   }
   printf("\n\n");
}
/**
 * Main function tests node insertion
 * at a beginning position in the linked list.
 *
 * @param args Count of data in list int n. Values comprising count, int x.
 * @return exit code 0
*/
int main() {
   Node* head = NULL; // Create empty linked list
   printf("How many numbers are in the linked list?\n");
   int i, n, x;
   scanf("%d", &n);
   // Iterate over count of linked list data
   for(i=0; i<n; i++){
      printf("\nEnter the number:\n");
      scanf("%d", &x);
      head = Insert(head,x);
      Print(head);
   }
   return 0;
}
/**
 *
 * BEGIN OUTPUT
 *

How many numbers are in the linked list?
4

Enter the number:
1
List is:
 1


Enter the number:
2
List is:
 2 1


Enter the number:
3
List is:
 3 2 1


Enter the number:
4
List is:
 4 3 2 1

 *
 * END OUTPUT
 *
*/