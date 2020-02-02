#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;

void insert(NODE** start,int n){
    NODE* newnode,*i;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->data=n;
    newnode->next=*start;
    if(*start==NULL){
        *start=newnode;
        newnode->next=*start;
    }
    else{
        for(i=(*start);i->next!=(*start);i=i->next);
        i->next=newnode;
    }
}

void joseph(NODE* start,int m){
    int p=1;
    NODE* i,*pre=start;
    for(i=start;i->next;pre=i,i=i->next,p++){
        if(p%m==0)
            pre->next=i->next;
        if(i->next=i){
            printf("%d",i->data);
            break;
        }
    }
}
int main(){
    NODE* start=NULL;
    int a,n,m;
    while(1){
        scanf("%d",&a);
        if(a==-1)
            break;
        insert(&start,a);
    }
    scanf("%d",&m);
    joseph(start,m);


return 0;
}
