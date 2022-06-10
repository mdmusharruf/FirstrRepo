#include<stdio.h>
#include<stdlib.h>
struct node {
 int a ;
 struct node * lchild, *rchild;
};
struct node *insert(struct node *ptr, int ikey);
struct node *search(struct node *ptr, int ikey);
struct node *Min(struct  node *ptr);
struct node *Max(struct  node *ptr);
struct node *inorder(struct node  *ptr);
struct node *preorder(struct  node *ptr);
struct node *postorder(struct node  *ptr);
int main(){
    struct node *root = NULL;
    int ch ,k;
    printf("this is the BST program........");
    while(1){
        printf("the menu is :");
        printf("1.insert\t 2.search\t 3.Min & Max\t 4.inorder\t 5.Preorder\t 6.postorder");
        printf("enter your choice :");
        scanf("%d",&ch);
        switch(ch){
        case 1:printf("enter your value to insert into BST ");
               scanf("%d",&k);
               root = insert(root,k);
               break;

        case 2:printf("enter your value to search into BST ");
               scanf("%d",&k);
               root = search(root,k);
               break;

        case 3: ptr = Min(root);
                if (ptr!=NULL)
                    printf("Min key is %d",ptr->info);

                ptr = Max(root);
                if (ptr!=NULL)
                    printf("Max key is %d",ptr->info);
                    break;

        case 4:inorder(root);break;
        case 5:preorder(root);break;
        case 6:postorder(root);break;
        case 7:exit(1);break;

        }
    }
return 0;

}
struct node *insert(struct node *ptr, int ikey){
    if (ptr == NULL){
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->info = ikey;
        ptr->lchild = NULL;
        ptr->rchild = NULL;
    }
    else if (ptr->info>ikey)
        ptr->lchild = insert(ptr->lchild,ikey);
    else if (ptr->info<ikey)
        prt->rchild = insert(ptr->rchild,ikey);
}

struct node *search(struct node *ptr, int ikey){}
struct node *Min(struct  node *ptr){
  return NULL;  
}
struct node *Max(struct  node *ptr){
    
}
struct node *inorder(struct node  *ptr){
    
}
struct node *preorder(struct  node *ptr){
    
}
struct node *postorder(struct node  *ptr){
    
}
