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
 * Inserts approved node(s) at the
 * beginning of a linked list.
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
int main() {
    return 0;
}