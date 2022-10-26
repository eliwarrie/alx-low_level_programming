		0x13. C - More singly linked lists
		C Algorithm Data structure

0.	Write a function that prints all the elements of a listint_t list.

1.	Write a function that returns the number of elements in a linked listint_t list.
	Prototype: size_t listint_len(const listint_t *h);

2.	Write a function that adds a new node at the beginning of a listint_t list.
	Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3.	Write a function that adds a new node at the end of a listint_t list.
	Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
	Return: the address of the new element, or NULL if it failed

4.	Write a function that frees a listint_t list.
	Prototype: void free_listint(listint_t *head);

5.	Write a function that frees a listint_t list.

	Prototype: void free_listint2(listint_t **head);
	The function sets the head to NULL

6.	Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
	Prototype: int pop_listint(listint_t **head);
	if the linked list is empty return 0

7.	Write a function that returns the nth node of a listint_t linked list.
	Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	where index is the index of the node, starting at 0
	if the node does not exist, return NULL

8.	Write a function that returns the sum of all the data (n) of a listint_t linked list.
	Prototype: int sum_listint(listint_t *head);
	if the list is empty, return 0

9.	Write a function that inserts a new node at a given position.
	Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

10.	Write a function that deletes the node at index index of a listint_t linked list.
	Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

11.	Write a function that reverses a listint_t linked list.
	Prototype: listint_t *reverse_listint(listint_t **head);

12.	Write a function that prints a listint_t linked list.
	Prototype: size_t print_listint_safe(const listint_t *head);

13.	Write a function that frees a listint_t list.
	Prototype: size_t free_listint_safe(listint_t **h);

14.	Write a function that finds the loop in a linked list.
	Prototype: listint_t *find_listint_loop(listint_t *head);
