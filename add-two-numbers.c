#include <stdbool.h>
#include <stdlib.h>

#include "add-two-numbers.h"

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
  if (l1 == NULL && l2 == NULL)
  {
    return NULL;
  }

  struct ListNode *result = NULL;
  struct ListNode *next1 = NULL;
  struct ListNode *next2 = NULL;

  if (l1 != NULL)
  {
    result = l1;
    next1 = l1->next;
  }

  if (l2 != NULL)
  {
    if (result == NULL)
    {
      result = l2;
    }
    else
    {
      result->val += l2->val;
    }
    next2 = l2->next;
  }

  result->val = result->val % 10;

  if (result->val >= 10)
  {
    if (next1 != NULL && next2 != NULL)
    {
      result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
      result->next->next = NULL;
      result->next->val = 1;
      return result;
    }
    ++(result->next->val);
  }

  result->next = addTwoNumbers(next1, next2);

  return result;
}