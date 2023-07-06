Project for 07/06/2023
Name of The Project : 0x14. C - Bit Manipulation

Let's go through the tasks one by one:

Task 0: binary_to_uint

In this task, i implement the binary_to_uint function, which converts a binary number represented as a string to an unsigned int. The function takes a const char* parameter named b, which points to a string containing only '0' and '1' characters. The function should return the converted number as an unsigned int. If the string contains any characters other than '0' and '1', or if b is NULL, the function should return 0.

Task 1: print_binary

For this task,  i did implement the print_binary function, which prints the binary representation of an unsigned long int number. The function takes an unsigned long int parameter named n. The binary representation should be printed without using arrays or malloc. You are not allowed to use the % or / operators either.

Task 2: get_bit

In this task, i implemented the get_bit function, which returns the value of a bit at a given index in an unsigned long int number. The function takes two parameters: unsigned long int n and unsigned int index. The function should return the value of the bit at the specified index (either 0 or 1). If an error occurs (index is out of range), the function should return -1.

Task 3: set_bit

For this task, i implemente the set_bit function, which sets the value of a bit at a given index to 1 in an unsigned long int number. The function takes two parameters: unsigned long int *n (a pointer to the number) and unsigned int index. The function should set the bit at the specified index to 1 and return 1 if it succeeds. If an error occurs (index is out of range or n is NULL), the function should return -1.

Task 4: clear_bit

In this task,  implemented the clear_bit function, which sets the value of a bit at a given index to 0 in an unsigned long int number. The function takes two parameters: unsigned long int *n (a pointer to the number) and unsigned int index. The function should set the bit at the specified index to 0 and return 1 if it succeeds. If an error occurs (index is out of range or n is NULL), the function should return -1.
