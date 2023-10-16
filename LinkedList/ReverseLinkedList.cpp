#include <iostream>

using namespace std ; 

struct ListNode 
{
    int data ; 
    struct ListNode *next; 
}

void ReverseLinkedList (ListNode * head)
{
    if (head == nullptr)
    {
        return ;
    }

    ListNode * temp1 = nullptr ; 
    ListNode * temp2 = head ; 
    ListNode * temp3 = nullptr ;

    while (temp2 != nullptr)
    {
        temp3 = temp2 -> next ; 

        temp2 -> next = temp1 ;
        temp1 = temp2 ; 
        temp2 = temp2 -> next ; 
    } 
}

int main()
{

    return 0;
}