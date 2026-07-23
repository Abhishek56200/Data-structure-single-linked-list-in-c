#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    if(*head==NULL)return LIST_EMPTY;
    Slist *temp=*head;
    while(temp!=NULL&&temp->data!=g_data){
    temp=temp->link;
}
if(temp==NULL)return DATA_NOT_FOUND;
Slist *new=malloc(sizeof(Slist));
if(new==NULL)return 0;
new->data=ndata;
if(temp->link==NULL){
temp->link=new;
new->link=NULL;
return SUCCESS;
}
new->link=temp->link;
temp->link=new;
return SUCCESS;
}