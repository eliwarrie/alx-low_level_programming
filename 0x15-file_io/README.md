		0x15. C - File I/O. 
		C	Syscall

0.	Write a function that reads a text file and prints it to the POSIX standard output.

	Create a function that creates a file.

1.	Prototype: int create_file(const char *filename, char *text_content);
	where lename is the name of the file to create and text_content is a NULL 
	terminated string to write to the file.

2.	Write a function that appends text at the end of a file.

	Prototype: int append_text_to_file(const char *filename, char *text_content);
	where filename is the name of the file and text_content is the NULL terminated 
	string to add at the end of the file
	Return: 1 on success and -1 on failure

3.	Write a program that copies the content of a file to another file.

	Usage: cp file_from file_to
