// it is only the basic function



SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* ptr1=head1;
    SinglyLinkedListNode* ptr2=head2;
    SinglyLinkedListNode* node=new SinglyLinkedListNode(-1);
    SinglyLinkedListNode* ptr3=node;
    
    
    while(ptr1!=nullptr and ptr2!=nullptr)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=nullptr)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=nullptr)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return(node->next);
}

int main()
{
SinglyLinkedListNode* newhead=mergeLists(head1, head2);
display(newhead);
