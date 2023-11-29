#ifndef ALX_0X0F_FUNCTION_POINTERS_H_
#define ALX_0X0F_FUNCTION_POINTERS_H_

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* ALX_0X0F_FUNCTION_POINTERS_H_ */
