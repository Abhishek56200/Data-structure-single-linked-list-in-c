#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
Slist *new=malloc(sizeof(Slist));
new->data=data;
new->link=NULL;
if(n==1){
    new->link=*head;
    *head=new;
    return SUCCESS;
}
    if(*head==NULL)return LIST_EMPTY;
int count=1;
Slist *temp=*head;
while(temp!=NULL&&count<n-1){
    temp=temp->link;
    count++;
}
if(temp==NULL)return POSITION_NOT_FOUND;
new->link=temp->link;
temp->link=new;
return SUCCESS;
}