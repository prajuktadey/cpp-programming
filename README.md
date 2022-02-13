1. Whitespace is usually characters that are not visible including new lines, psaces and tabs and whitespaces are mostly ignored in c++.

2. The include directive instructs the preprocessor to include another file to pass to the compiler.

3. Identifiers provide readable names for variables, functions, classes, objects, labels and defined types.
In c++ identifiers are made up of letters and numbers within a set of constraints.

These include the 26 letters of the ISO latin alphabet in both uppercase and lowercase.

The 10 Western Arabic numerals and the ASCII underscore character.

An identifer may not begin with a numeral.

Identifiers may not conflict with reserved words. In current c++ standard reserves 73 keywords plus 11 alternative tokens.

a. Identifiers are case sensitive.
b. Current standards allow letters that are not a part of the ISO latin alphabet.

4. Pointers

Pointers are powerful and dangerous data type.

A variable is a typed and named location in memory.
The name of the variable is used as an index to map to a memory address and a particular associated data type.

C++ also provides a pointer type that is a pointer to a value.

int *ip = This is a pointer definition.
So memory is allocated for a value of type pointer.
The compiler associates this pointer with the int type. So, we call this an integer pointer. It is a pointer to an integer value.

int * ip;
ip= &x;  //Here, the address of the integer variable named x is placed in the integer pointer variable named ip.

The ampersand operator is formally called the reference operator but in this context it's more commonly called the address operator. It returns the address of an object suitable for assigning to a pointer.