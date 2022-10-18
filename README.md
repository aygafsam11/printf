# 0x11. C - printf Team Project  
Add Main.h file with function and struc  
Add Test Directories  
Add main.c file with functions  
# Resources  
Read or watch:  

# Secrets of printf  
Group Projects concept page (Don’t forget to read this)  
Flowcharts concept page  

# More Info  
### Authorized functions and macros  
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)  
## Compilation
- Your code will be compiled this way:  
`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`  
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
- Our main files will include your main header file (main.h): #include main.h
- You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
