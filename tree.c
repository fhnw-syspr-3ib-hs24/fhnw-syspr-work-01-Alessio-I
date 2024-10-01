#include <stdio.h>

typedef struct node {struct Node *left; struct Node *right; char *label} Node;

int main(void) {
    Node n1;
    Node n2;
    Node n3;
    Node n4;
    Node n5;

    char name1[32] = "Node_one";
    char name2[32] = "Node_two";
    char name3[32] = "Node_three";
    char name4[32] = "Node_four";
    char name5[32] = "Node_five";
    
    Node *pn1 = malloc(sizeof(Node));
    Node *pn2 = malloc(sizeof(Node));
    Node *pn3 = malloc(sizeof(Node));
    Node *pn4 = malloc(sizeof(Node));
    Node *pn5 = malloc(sizeof(Node));

    pn1 = &n1;
    pn2 = &n2;
    pn3 = &n3;
    pn4 = &n4;
    pn5 = &n5;

    n1.label = &name1;
    n2.label = &name2;
    n3.label = &name3;
    n4.label = &name4;
    n5.label = &name5;

    n1.left = pn2;
    n1.right = pn3;
    n2.left = pn4;
    n2.right = pn5;

    printf("%s\n", pn1->label);
    printf("%s\n", pn2->label);
    printf("%s\n", pn3->label);
    printf("%s\n", pn4->label);
    printf("%s\n", pn5->label);
}

