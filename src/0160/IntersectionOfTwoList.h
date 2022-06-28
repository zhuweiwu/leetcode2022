/**
 * @file IntersectionOfTwoList.h
 * @brief
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-27
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _INTERSECTIONOFTWOLIST_H_
#define _INTERSECTIONOFTWOLIST_H_

#include "../ListNode.h"

class IntersectionOfTwoList
{
public:

    int GetLen(ListNode * head)
    {
        int len = 0;
        while(head != nullptr)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if(headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }

        int aLen = GetLen(headA);
        int bLen = GetLen(headB);

        ListNode* aTemp = headA;
        ListNode* bTemp = headB;

        if(aLen > bLen)
        {
            int diff = aLen - bLen;
            while(diff != 0)
            {
                aTemp = aTemp->next;
                diff--;
            }
        }
        else if(aLen < bLen)
        {
            int diff = bLen - aLen;
            while(diff != 0)
            {
                bTemp = bTemp->next;
                diff--;
            }
        }

        while(aTemp != bTemp)
        {
            aTemp = aTemp->next;
            bTemp = bTemp->next;
        }

        return aTemp;
    }
};

#endif