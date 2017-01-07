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
 * Function prints all inserted nodes
 * at the nth position in the program.
 *
 * @param args While the temp node is not null, print all nodes inserted
 * @return return void
*/
int main() {

}