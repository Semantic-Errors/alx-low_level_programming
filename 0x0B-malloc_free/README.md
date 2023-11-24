# 0x0B. C - malloc, free

![image](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1104%2F1*7lBxAamBlTEtKNdr1MOgPQ.jpeg&f=1&nofb=1&ipt=08c55c8e67f7d40572f92fdfadd149ec8e4f4a10e46c35c2399287c4dc70bc90&ipo=images)

## Objectives

- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when use `malloc`
- How to use `valgrind` to check for memory leak

## Resources

[Dynamic memory allocation in C - malloc calloc realloc free](https://intranet.alxswe.com/rltoken/pfGb2oVIYLO_1a8jtFGQYw) (stop at 6:50)

__man or help:__

- `malloc`
- `free`

## Tasks

<details>
<summary><a href="./0-create_array.c">0. Float like a butterfly, sting like a bee</a></summary><br>

Write a function that creates an array of chars, and initializes it with a specific char.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if size = `0`
- Returns a pointer to the array, or `NULL` if it fails

```bash
julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$
```
</details>
