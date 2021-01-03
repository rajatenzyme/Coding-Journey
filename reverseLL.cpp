//Author:- Rajat Mittal
//M.Tech. CSE IIT JAMMU (J.K.)
//2020PCT0066

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define INF 1000000007
#define MOD 1000000007

struct Node {
    int data;
    struct Node* next;
};

void reverse( struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* curr = *head_ref;
    struct Node* next = NULL;
    while(curr != NULL)
    {
        next = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev;
}

void push(struct Node** head_ref, int new_data)
{
  struct Node*  new_node = (struct Node*) malloc (sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = (*head_ref);
  (*head_ref) = new_node ;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct Node* head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);
    printList(head);
    reverse(&head);
    printList(head);
}

