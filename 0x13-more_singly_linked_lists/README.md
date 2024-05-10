# 0x12. C - More singly linked lists

## Tasks


### [0-print_listint.c](./0-print_listint.c)

This task have to create a function that will print all the contents of a listint_t
type list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example

<details>
<summary>Test 0-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_listint.c -o a
$ ./a 
9
8
-> 2 elements
```
---
### [1-listint_len.c](./1-listint_len.c)

This task have to create a function that return the length of a listint_t
type list.

* Prototype: `size_t listint_len(const listint_t *h);`

<details>
<summary>Test 1-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint_len.c -o b
$ ./b
-> 2 elements
```

### [2-add_nodeint.c](./2-add_nodeint.c)

This task have to create a function that add a new node to the `head` of a list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

<details>
<summary>Test 2-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
$ ./c 
1024
402
98
4
3
2
1
0
$ 
```
---
### [3-add_nodeint_end.c](./3-add_nodeint_end.c)

This task have to create a function that add a new node to the `end` of a list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

<details>
<summary>Test 3-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
$ ./d
0
1
2
3
4
98
402
1024
$ 
```
---
### [4-free_listint.c](./4-free_listint.c)

This task have to free all nodes in a list.

* Prototype: `void free_listint(listint_t *head);`

<details>
<summary>Test 4-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
$ valgrind ./d
...
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocate
...
```
---

### [5-free_listint2.c](./5-free_listint2.c)

This task create a function that free all the node and set the `head` to `NULL`

* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

<details>
<summary>Test 5-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
```
</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
$ valgrind ./f
...
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
...
```
---

### [6-pop_listint.c](./6-pop_listint.c)

This task have to create a function delete the first node of a list and returns the value of that node.

* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return 0

<details>
<summary>Test 6-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
```
---

</details>

#### Output
```
$ gcc 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
$ ./g
0
1
2
3
4
98
402
1024
- 0
$ 
```
---
### [7-get_nodeint.c](./7-get_nodeint.c)

This task have to create a function that returns a pointer to nth node in a list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`

<details>
<summary>Test 7-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
```

---

</details>

#### Output
```
$ gcc 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
$ ./h
0
1
2
3
4
98
402
1024
98
...
$ 
```
---
### [8-sum_listint.c](./8-sum_listint.c)

This task have to create a function that sum up all the values of a list.

* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return `0` 

<details>
<summary>Test 8-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);
    return (0);
}
```

</details>

#### Output
```
$ gcc 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
$./i
sum = 1534
$ 
```
---
### [9-insert_nodeint.c](./9-insert_nodeint.c)

This task have to create a function that will insert a new node into a given position.

* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

<details>
<summary>Test 9-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
```

</details>

#### Output
```
$ gcc 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
$ ./dj
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
$ 
```
---

### [10-delete_nodeint.c](./10-delete_nodeint.c)

This task have to create a function that will delete a node at a given index.

* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

<details>
<summary>Test 10-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 5);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    return (0);
}
```

</details>

#### Output
```
$ gcc 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
$ valgrind ./k
...
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
...
$ 
```
