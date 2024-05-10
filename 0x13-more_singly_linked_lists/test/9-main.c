#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void test_01()
{
    listint_t *head;
	printf("test_01\n");

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
    printf("-------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    printf("-----------------\n");

}

void test_02()
{
    listint_t *head;
	printf("test_02\n");

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
    printf("-------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    print_listint(head);
    free_listint2(&head);
    printf("-----------------\n");
}



void test_03()
{
    listint_t *head;
	printf("test_03\n");

    head = NULL;
    print_listint(head);
    printf("--------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    print_listint(head);
    free_listint2(&head);
    printf("-----------------\n");

}

void test_04()
{
    listint_t *head;
	printf("test_04\n");

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
    printf("--------------\n");
    insert_nodeint_at_index(&head, 8, 4096);
    print_listint(head);
    free_listint2(&head);
    printf("-----------------\n");

}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	test_01();
	test_02();
	test_03();
	test_04();
	return (0);
}

