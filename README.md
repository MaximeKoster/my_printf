# my_printf

Printf function made by me.

What you will need to run everything : -Any compiler ( I use gcc in my examples )
                                       -make ( sudo apt-get install make on terminal ) 
                                       
To compile all .c files necessary to use the my_printf function simply type "make" or "make all" to compile everything and "make clean" to remove all .o when you're done.
Checkout the Makefile for more commands.
                       
To compile your main : -Use lib.h
                       -Use the static library with "gcc main_name.c -L. -static libmy_printf_x86_64-Linux.a -o app_name"
                       -Use the dynamic library libmy_printf_x86_64-Linux.so
                       
To use my_printf simply use the function "my_printf" just like you would use printf.                      
                       
                       
