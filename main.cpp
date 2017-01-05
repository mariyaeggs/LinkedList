#include <iostream>
/**
 * Inserting A Node At the Beginning of A Linked List
 * School: CSU, Monterey Bay
 * Course: CST 370 Software Design
 * Professor: Dr. Feiling Jia
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
   if(head != NULL) {
      temp->next = head;
      head = temp;
      return head;
   }
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
   printf("List is: ");
   while(temp != NULL){
      printf(" %d",temp->data);
      temp = temp->next;
   }
   printf("\n");
}
int main() {

    return 0;
}