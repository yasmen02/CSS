// linked.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* next;

};
class linkedlist {
public:
    node* head;
    linkedlist()
    {
        head = NULL;
    }
    /* bool isempty() {
         if (head == NULL)
             return true;
         else
             return false;
     }*/
    bool isempty() {
        return (head == NULL);
    }
    void insertfirst(int newitem) {
        node* newnode;
        newnode->data = newitem;

        if (isempty()) {

            newnode->next = NULL;
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head->next = newnode;
        }

    }
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    int count() {
        int counter;
        node* temp = head;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    bool isfound(int key) {
        bool found = false;
        node* temp = head;
        while (temp != NULL) {
            if (temp->data == key)
                found = true;
            temp = temp->next;
        }
        return found;
    }

};

int main()
{
    linkedlist lst;
    if (lst.isempty())
        cout << "thhe list is empty \n";
    else
        cout << "the list contains" << lst.count() << endl;
    int item;
    cout << "enter item to insert in the list\n";
    cin >> item;
    lst.insertfirst(item);
    lst.display();

    cout << "enter item to insert in the list\n";
    cin >> item;
    lst.insertfirst(item);
    lst.display();

    cout << "enter item to insert in the list\n";
    cin >> item;
    lst.insertfirst(item);
    lst.display();

    if (lst.isfound(item))
        cout << "is found\n";
    else
        cout << "is not found\n";
}