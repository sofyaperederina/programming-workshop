#include "task3.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
void test1() {
  struct Stack *new_stack = create_stack(3);
  push(new_stack, 5);
  push(new_stack, 7);
  assert(is_empty(new_stack) == 0 && pop(new_stack) == 7);
  assert(is_empty(new_stack) == 0 && pop(new_stack) == 5);
  delete_stack(new_stack);
}
int main() {
  test1();
  return 0;
}