#include <iostream>
#include <stdio.h>
/**
 * Inserting A Node At the Beginning of A Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/7/2017
 *
 * Program inserts nodes at the beginning of a linked list.
 *
 * @author Mariya Eggensperger
*/
struct Node {
    int data;
    Node* next; // Address of consecutive node that links the list
};
struct Node* head; // Global variable for head pointer
int n; // Global variable for nth position
/**
 * Function inserts specific nodes at
 * nth position in the linked list.
 *
 * @param args int data, int n
 * @return return void
*/
void Insert(int data) {
   Node* temp1 = new Node(); // Initiate malloc/new with 4 bytes of free storage from the Heap
   temp1->data = data;
   temp1->next = NULL; // End linked list
   if(n==1) { // If the position of the node is equal to 1
      temp1->next=head;
      head = temp1;
      return;
   }
   Node* temp2 = head; // Pointer for declaration of (n-1) position
   for(int i=0; i<n-2; i++) { // Where i<n-2 assumes the (n-1) position
      temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp1;
}
/**
 * Function prints approved node(s)
 * as a list at the program output.
 *
 * @param args While temp != NULL
 * @return printf of data values in linked list
*/

void Print() {
   struct Node* temp = head; // Local variable for a temporary node pointer
   printf("List is:\n");
   while(temp != NULL){
      printf(" %d",temp->data);
      temp = temp->next;
   }
   printf("\n\n");
}

void Delete(int n);
/**
 * Main function tests node deletion
 * at nth position in the linked list.
 *
 * @param args int n
 * @return
*/
int main() {
   head = NULL; // Empty linked list
   Insert(2);
   Insert(4);
   Insert(6);
   Insert(5); // List is: 2, 4, 6, 5
   Print();
   int n; // Position of node deletion
   printf("Enter the node position: \n");
   scanf("%d",&n);
   Delete(n);
   Print();
}
