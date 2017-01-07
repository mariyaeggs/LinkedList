#include <iostream>
#include <stdio.h>
/**
 * Inserting A Node At Nth position of A Linked List
 * School: CSU, Monterey Bay
 * Course: CST 370 Software Design
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
void Print();
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
}
/**
 * Main function computes node insertion
 * at nth position in the linked list.
 *
 * @param args Insert(int data, int n)
 * @return Printed statement of all nodes inserted at nth position
*/
int main() {
   head = NULL; // Empty linked list
   Insert(2, 1); // List: 2
   Insert(3, 2); // List : 3, 2
   Insert(4, 1); // List : 4, 3, 2
   Insert(5, 2); // List : 5, 4, 3, 2
   Print();
}
