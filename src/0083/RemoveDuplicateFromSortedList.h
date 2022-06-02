/**
 * @file RemoveDuplicateFromSortedList.h
 * @brief 
 * Given the head of a sorted linked list, 
 * delete all duplicates such that each element appears only once. 
 * Return the linked list sorted as well.
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _REMOVEDUPLICATEFROMSORTEDLIST_H_
#define _REMOVEDUPLICATEFROMSORTEDLIST_H_


#include "../ListNode.h"

class RemoveDuplicateFromSortedListClass
{
public:
    static ListNode* deleteDuplicates(ListNode* head) 
    {
        
        ListNode* temp = head;

        if(temp == nullptr)
        {
            return head;
        }

        while(temp->next != nullptr)
        {
            if(temp->val != temp->next->val)
            {
                temp =temp->next;
            }
            else
            {
                temp->next = temp->next->next;
            }
        }
        

        return head;



    }
};




#endif