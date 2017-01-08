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
void Insert(int data);
void Print();
void Delete(int n);
/**
 * Main function tests node deletion
 * at nth position in the linked list.
 *
 * @param args Count of data in list int n. Values comprising count, int x.
 * @return exit code 0
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