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
  bool hasNext1 = false;
  bool hasNext2 = false;

  if (l1 != NULL)
  {
    result = l1;
    hasNext1 = l1->next != NULL;
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
    // sumRes += l2->val;
    hasNext2 = l1->next != NULL;
  }

  if (result->val >= 10)
  {
    if (!hasNext1 && !hasNext2)
    {
      result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
      result->next->next = NULL;
      result->next->val = 1;
      return result;
    }
    else if (hasNext1)
    {
      ++(l1->next->val);
    }
    else
    {
      ++(l2->next->val);
    }
  }
  result->val = result->val % 10;
  result->next = addTwoNumbers(l1->next, l2->next);

  return result;
}