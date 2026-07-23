#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
     if(*head==NULL){
    return LIST_EMPTY;
    }
    if(((*head)->data==g_data)){
        Slist *new=malloc(sizeof(Slist));
        if(new==NULL)return FAILURE;
        new->data=ndata;
        new->link=*head;
        *head=new;
        return SUCCESS;
    }
    Slist *prev=*head;
   Slist  *temp=(*head)->link;
    while(temp!=NULL&&temp->data!=g_data){
        prev=temp;
        temp=temp->link;
    }
    if(temp==NULL)return DATA_NOT_FOUND;
     Slist *new=malloc(sizeof(Slist));
        new->data=ndata;
    new->link=temp;
    prev->link=new;
    return SUCCESS;
}