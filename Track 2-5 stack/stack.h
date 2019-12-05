#include "stack.h"

// implement functions behind
void    initialize(stack *stk){
  stk->cnt = 0;
  stk->top = NULL;
}
void    push(data a, stack *stk){
  elem *ndat = malloc(sizeof(elem));
  ndat->d = a;
  ndat->next = stk->top;
  stk->top = ndat;
  stk->cnt = (*stk).cnt + 1;
}
data    pop(stack *stk){
  data *tmp = &stk->top->d;
  stk->top = stk->top->next;
  stk->cnt = (*stk).cnt - 1;
  return *tmp;
}
data    top(stack *stk){
  return stk->top->d;
}
boolean empty(const stack *stk){
  int chk = stk->cnt;
  if(chk == 0) return true;
  else return false;
}
boolean full(const stack *stk){
  int chk = stk->cnt;
  if(chk == 10000) return true;
  else return false;
}