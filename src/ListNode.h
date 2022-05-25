/**
 * @file ListNode.h
 * @brief
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _LISTNODE_H_
#define _LISTNODE_H_

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif