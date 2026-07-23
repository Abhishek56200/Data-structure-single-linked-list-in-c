#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
if(*head==NULL)return FAILURE;
if((*head)->data==data){
    Slist *temp=*head;
    *head=(*head)->link;
    free(temp);
    return SUCCESS;
}
Slist *temp;
Slist *prev=*head;
temp=(*head)->link;
while(temp!=NULL&&temp->data!=data){
    prev=temp;
    temp=temp->link;
}
if(temp==NULL)return DATA_NOT_FOUND;
prev->link=temp->link;
free(temp);
return SUCCESS;
}