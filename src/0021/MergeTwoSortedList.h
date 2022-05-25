/**
 * @file MergeTwoSortedList.h
 * @brief 
 * You are given the heads of two sorted linked lists list1 and list2.

    Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

    Return the head of the merged linked list.
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _MERGETWOSORTEDLIST_H_
#define _MERGETWOSORTEDLIST_H_

#include "../ListNode.h"

class MergeTwoSortedListClass
{
public:
    /**
     * @brief 
     * @param  list1            My Param doc
     * @param  list2            My Param doc
     * @return ListNode* 
     */
    static ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1 == nullptr)
        {
            return list2;
        }

        if(list2 == nullptr)
        {
            return list1;
        }

        ListNode* head;

        if(list1->val <= list2->val)
        {
            head = new ListNode(list1->val);
            list1 = list1->next;
        }
        else
        {
            head = new ListNode(list2->val);
            list2 = list2->next;
        }

        ListNode* end = head;
        list1 =list1->next;

        while(list1 != nullptr || list2 != nullptr)
        {
            ListNode* next = nullptr;

            if(list1 == nullptr)
            {
                end->next = new ListNode(list2->val);
                list2 = list2->next;
                continue;
            }

            if(list2 == nullptr)
            {
                end->next = new ListNode(list1->val);
                list1 = list1->next;
                continue;
            }

            if(list1->val <= list2->val)
            {
                end->next = new ListNode(list1->val);
                list1 = list1->next;
                
            }
            else
            {
                end->next = new ListNode(list2->val);
                list2 = list2->next;
            }
                       
        }
        return head;

    }

    static ListNode* mergeTwoLists2(ListNode* list1, ListNode* list2) 
    {
        if(list1 == nullptr)
        {
            return list2;
        }

        if(list2 == nullptr)
        {
            return list1;
        }

        ListNode* head;

        if(list1->val <= list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        ListNode* end = head;

        while (list1 != nullptr || list2 != nullptr)
        {

            if(list1 == nullptr)
            {
                end->next = list2;
                return head;
            }

            if(list2 == nullptr)
            {
                end->next = list1;
                return head;
            }

            if(list1->val <= list2->val)
            {
                end->next = list1;
                end = end->next;
                list1 = list1->next;
            }
            else
            {
                end->next = list2;
                end = end->next;
                list2 = list2->next;
            }


        }

        return head;
        
    }
};



#endif