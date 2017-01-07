#include <iostream>
/**
 * Inserting A Node At Nth position of A Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/5/2017
 *
 * Program inserts nodes at Nth position in a linked list.
 *
 * @author Mariya Eggensperger
*/
struct Node {
    int data;
    Node* next; // Address of consecutive node that links the list
};
struct Node* head; // Global variable for head pointer
/**
 * Function prints all inserted nodes
 * at the nth position in the program.
 *
 * @param args While the temp node is not null, print all nodes inserted
 * @return return void
*/
void Print() {
   Node* temp = head; // Initial temporary node points to the head
   while(temp != NULL){
      printf(" %d", temp->data);
      temp = temp->next;
   }
   printf("\n");
}
/**
 * Function inserts specific nodes at
 * nth position in the linked list.
 *
 * @param args int data, int n
 * @return return void
*/
void Insert(int data, int n) {
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
 * Main function tests node insertion
 * at nth position in the linked list.
 *
 * @param args Insert(int data, int n)
 * @return Printed statement of all nodes inserted at nth position
*/
int main() {
   head = NULL; // Empty linked list
   Insert(2, 1); // List: 2
   Insert(3, 2); // List : 2, 3
   Insert(4, 1); // List : 4, 2, 3
   Insert(5, 2); // List : 4, 5, 2, 3
   Print();
}
/**
 *
 * BEGIN OUTPUT
 *
 4 5 2 3
 *
 * END OUTPUT
 *
*/
