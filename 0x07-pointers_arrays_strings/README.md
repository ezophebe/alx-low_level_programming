0x07-pointers_arrays_strings
0. memset: A function that fills memory with a constant byte.
Prototype: char *_memset(char *s, char b, unsigned int n) Returns a pointer to the memory area s
1. memcpy: A function that copies memory area.
Prototype: char *_memcpy(char *dest, char *src, unsigned int n);The _memcpy() function copies n bytes from memory area src to memory area dest. Returns a pointer to dest
2. strch: A function that locates a character in a string.
Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
3. strspn:  A function that gets the length of a prefix substring.
Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept

