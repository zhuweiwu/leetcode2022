/**
 * @file RemoveNthNodeFromEnd.h
 * @brief
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _REMOVENTHNODEFROMEND_H_
#define _REMOVENTHNODEFROMEND_H_

#include "../ListNode.h"

class RemoveNthNodeFromEndClass
{
public:
    /**
     * @brief 
     * 
     * n = 2;
     * 
     * -     +
     * 1 --> 2 --> 3 -->4
     * 
     * @param  head             My Param doc
     * @param  n                My Param doc
     * @return ListNode* 
     */
    static ListNode *RemoveNthNodeFromEnd(ListNode *head, int n)
    {
        if (head == nullptr)
        {
            return head;
        }

        ListNode *front = head;
        ListNode *back = new ListNode(0, head);
        int leftStep = n;

        while (front != nullptr)
        {
            if (leftStep != 0)
            {
                front = front->next;
                leftStep--;
            }
            else
            {
                front = front->next;
                back = back->next;
            }
        }

        if(leftStep != 0)
        {
            return head;
        }
        else
        {
            if(back->next == head)
            {
                ListNode* delNode = head;
                head = head->next;
                delete delNode;
            }
            else
            {
                ListNode* delNode = back->next;
                back->next = back->next->next;
                delete delNode;
            }
        }

        return head;
    }
};

#endif