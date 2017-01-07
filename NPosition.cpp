#include <iostream>
#include <stdio.h>
/**
 * Inserting A Node At Nth position of A Linked List
 * School: CSU, Monterey Bay
 * Course: CST 370 Software Design
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/5/2017
 *
 * Program inserts nodes at Nth position of a linked list.
 *
 * @author Mariya Eggensperger
*/
struct Node {
    int data;
    Node* next; // Address of consecutive node
};
struct Node* head; // Global variable for head pointer
void Print();
void Insert(int data, int n);

/**
 * Main function computes node insertion
 * at nth position in the linked list.
 *
 * @param args
 * @return
*/
int main() {
   head = NULL; // Empty linked list
   Insert(2, 1); // List: 2
   Insert(3, 2); // List : 3, 2
   Insert(4, 1); // List : 4, 3, 2
   Insert(5, 2); // List : 5, 4, 3, 2
   Print();

}
