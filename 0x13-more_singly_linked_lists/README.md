# 0x13 More Singly Linked List
## [0. Print list](./0-print_listint.c)
 a function that prints all the elements of a listint_t list.

> Prototype: size_t print_listint(const listint_t *h);
> Return: the number of nodes
> Format: see example
>  Using printf is allowed

*Test Code: 0-main.c*

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

##[1. List Length](./1-listint_len.c)

> A function that returns the number of elements in a linked listint_t list.

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

## [2. Add node](./2-add_nodeint.c)

> A function that adds a new node at the beginning of a listint_t list.
> Prototype: listint_t *add_nodeint(listint_t **head, const int n);
> Return: the address of the new element, or NULL if it failed

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

## [3. Add node at the end](./3-add_nodeint_end.c)

> a function that adds a new node at the end of a listint_t list.
> Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
> Return: the address of the new element, or NULL if it failed

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

## [4. Free list](./4-free_listint.c)

> A function that frees a listint_t list.
> Prototype: void free_listint(listint_t *head);

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

## [5. Free](./5-free_listint2.c)

> A function that frees a listint_t list.
> Prototype: void free_listint2(listint_t **head);
> The function sets the head to NULL

*Test Code: 5-main.c*

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

## [6. Pop](./6-pop_listint.c)

> A function that deletes the head node of a listint_t linked list,
> and returns the head node’s data (n).
> Prototype: int pop_listint(listint_t **head);
> if the linked list is empty return 0

*Test Code: 6-main.c*

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

## [7. Get node at index](./7-get_nodeint.c)

> A function that returns the nth node of a listint_t linked list.
> Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
> Where index is the index of the node, starting at 0
> If the node does not exist, return NULL

*Test Code: 7-main.c*

    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
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

## [8. Sum list](./8-sum_listint.c)

> A function that returns the sum of all the data (n) of a listint_t linked list.
> Prototype: int sum_listint(listint_t *head);
> if the list is empty, return 0

*Test Code: 8-main.c*

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

## [9. Insert](./9-insert_nodeint.c)

> A function that inserts a new node at a given position.
> Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
> where idx is the index of the list where the new node should be added. Index starts at 0
> Returns: the address of the new node, or NULL if it failed

*Test Code: 9-main.c*

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

## [10. Delete at index](./10-delete_nodeint.c)

> A function that deletes the node at index index of a listint_t linked list.
> Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
> where index is the index of the node that should be deleted. Index starts at 0
> Returns: 1 if it succeeded, -1 if it failed

*Test Code: 10-main.c*

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
