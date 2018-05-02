#include <stdio.h>
#include <stdlib.h>

struct BST
{
    int data;
    struct BST* left;
    struct BST* right;
};
typedef struct BST node;

node* createNode(int n)
{
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=n;
    newnode->left=newnode->right=NULL;
    return newnode;
}

node* insert(node* root, int n)
{
    if(root==NULL)
    {
        root=createNode(n);
    }
    else if(n<=root->data)
    {
        root->left=insert(root->left,n);
    }
    else
    {
        root->right=insert(root->right,n);
    }
    return root;
}

int search(node* root,int number)
{
    if(root==NULL)
        return 0;
    else if(number==root->data)
        return 1;
    else if (number<=root->data)
        return search(root->left,number);
    else
        return search(root->right,number);

}


int main()
{
    struct BST* root=NULL;
    int n;
    char ch;
    do
    {
    printf("\n please enter a number\n");
    scanf("%d",&n);
    root=insert(root,n);
    printf("Do you want to insert more(y/n)?");
    ch=getche();
    }while(ch=='y'||ch!='n');
    int number;
    printf("\n Enter a number to be searched:\n");
    scanf("%d",&number);
    if (search(root,number)==1)
        printf("\nItem found search succsessful\n");
    else
        printf("\nItem not found search not succsessfull\n");
    getch();
    return 0;
}
