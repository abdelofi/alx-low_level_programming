0x15. C - File I/O1
all Task are Coded and well Organized to be Easy To Correct 
i tried to fit  all the requirements 
Task 0: Tread lightly, she is near

we  need to write a function called read _textfile that reads a text file and prints it to the POSIX standard output. The function should take the filename and the number of letters to read as input parameters and return the actual number of letters it could read and print. If the file cannot be opened or read, or if the write operation fails, the function should return 0.

Task 1: Under the snow

we  need to create a function called create_file that creates a file. The function should take the filename and a text content string as input parameters. It should return 1 on success and -1 on failure. The function should create the file with permissions "rw-------" and write the text content to the file. If the file already exists, it should truncate it. If the filename is NULL, the function should return -1. If the text content is NULL, the function should create an empty file.

Task 2: Speak gently, she can hear

we need to write a function called append_text_to_file that appends text at the end of a file. The function should take the filename and a text content string as input parameters. It should return 1 on success and -1 on failure. The function should append the text content to the file. If the file does not exist or if you don't have the required permissions to write the file, the function should return -1. If the filename is NULL, the function should return -1. If the text content is NULL, the function should not add anything to the file.

Task 3: cp

we  need to write a program called cp that copies the content of a file to another file. The program should take two command-line arguments: file_from and file_to. If the number of arguments is not correct, the program should exit with code 97 and print "Usage: cp file_from file_to" on the POSIX standard error. If file_to already exists, it should be truncated. If file_from does not exist or cannot be read, the program should exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error, where NAME_OF_THE_FILE is the name of the file. If file_to cannot be created or write operation fails, the program should exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error. If closing a file descriptor fails, the program should exit with code 100 and print "Error: Can't close fd FD_VALUE" on the POSIX standard error, where FD_VALUE is the value of the file descriptor. The created file should have permissions "rw-rw-r--". The program should read 1,024 bytes at a time from file_from using a buffer.
