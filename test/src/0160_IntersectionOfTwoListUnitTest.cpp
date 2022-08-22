#include "gtest/gtest.h"
#include <string>
#include <vector>
#include "CheckEqual.h"
#include <0160_IntersectionOfTwoList.h>
#include <ListNode.h>


TEST(InterSectionOfTwoListUnitTest, Test1)
{
    ListNode *headA = new ListNode(10);
    headA->next = new ListNode(5);
    headA->next->next = new ListNode(7);

    ListNode *headB = new ListNode(15);
    headB->next = headA->next;
    headB->next->next = headA->next->next;
    
    ListNode *interSectionNode = IntersectionOfTwoList::getIntersectionNode(headA, headB);

    EXPECT_EQ(interSectionNode->val, 5);
    
}