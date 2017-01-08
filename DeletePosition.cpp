#include <iostream>

/**
 * Inserting A Node At the Beginning of A Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/7/2017
 *
 * Program deletes nodes at the beginning of a linked list.
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
 * @param args int n
 * @return int x insertion
*/
Node* Insert(int x) {
   Node* temp = (Node*)malloc(sizeof(struct Node));
   temp->data = x;
   temp->next = NULL;
   if(head != NULL) temp->next = head;
   head = temp;
}
/**
 * Function prints nodes inserted
 * at nth position(s) in the list
 *
 * @param args while temp != NULL
 * @return printf of data values in linked list
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
 * Function deletes node(s) at
 * nth position(s) in the list
 *
 * @param args while temp != NULL
 * @return printf of data values in linked list
*/
void Delete(int n) {
   Node * temp1 = head;
   if(n == 1) {
      head = temp1->next;  // Head points to 2nd node
      free(temp1);
   }
   for(int i=0; i<n-2; i++) { // Where i<n-2 is the n-1th node
      temp1 = temp1->next; // temp1 points to (n-1)th node
      Node* temp2 = temp1->next; // Nth node
      temp1->next = temp2->next; // (n+1)th Node
      free(temp2); // Delete temp2
      return;
   }
}
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
