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

void printList(struct Node* n)
{
    while(n!=NULL)
    {
        printf("%d\n", n->data);
        n = n -> next;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                                
    
    struct Node* head = NULL;
    struct  Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc ( sizeof(struct Node));
    third = (struct Node*) malloc (sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third ->next = NULL;

    printList(head);

}