# 0x0F. C - Function pointers

![image](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fi.ytimg.com%2Fvi%2FynYtgGUNelE%2Fmaxresdefault.jpg&f=1&nofb=1&ipt=42145b8184073e07b492874ddf11f2d8ba50d8e25e2fae77cc8777f7d3529bcb&ipo=images)

## Objectives

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Resources

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)


## Tasks

<details>
<summary><a href="./0-print_name.c">0. What's my name</a></summary><br>

Write a function that prints a name.

- Prototype: `void print_name(char *name, void (*f)(char *));`

```bash
julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$
```
</details>


<details>
<summary><a href="./1-array_iterator.c">1. If you spend too much time thinking about a thing, you'll never get it done</a></summary><br>

Write a function that executes a function given as a parameter on each element of an array.

- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- where `size` is the size of the array
- and `action` is a pointer to the function you need to use

```bash
julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$
```
</details>
