## 0x160 Back to basics

## Table of contents
- [[#0x161 Strings]]
- [[#0x162 Signed, unsigned, long, and short]]
- [[#0x163 Pointers]]
- [[#0x164 Format strings]]
- [[#0x165 Typecasting]]
- [[#0x166 Command-line arguments]]

### 0x161 Strings

The value `Hello, world!\n` passed to the `printf()` function in the previous program is a string, which are stored in a character array, which consists of 20 characters each. An array, which is known as a buffer, is a list of characters' elements of a specific data type in C. The element in a character array is simply the adjacent characters located in memory.

There are two ways of creating a string using 20-element character array, which by:
- Specifying the strings' characters in each element of the array, one by one (written in [`char_array.c`](codes/char_array.c)).
- Using `strcpy()` function (written in [`char_array2.c`](codes/char_array2.c)).

> [!note]
> We can compile each codes by specifying the output name using `-o` flag in GCC.
>
> ```bash
> $ gcc char_array.c -o char_array
> 
> $ ./char_array
> ```

The first way defines the array `str_a` that stores the `char` variable. The first array begins at 0 (as in `str_a[0]`). Although we set 20 bytes allocated for the character array, only 12 of these bytes are actually used. After the string ends with `\n` new line character, we set `0` at the very last of bytes as a **null byte**, which is used as a delimiter character to stop operations at a particular point to any functions used there.

The second way uses the `strcpy()` function, which will copy a string from a source to a destination. The operation iterates through the source string and copying each byte to the destination (and stopping after it copies the null termination byte).

The `strcpy()` function requires two inputs, destination first and then source. This also requires an additional library `string.h` that must be included before the `main()` function, which are shown by the following C snippet code.

```c
# include <stdio.h>
# include <string.h>

int main()
{
	...
	strcpy(<destination>, "source-string");
	...
	return 0;
}
```

### 0x162 Signed, unsigned, long, and short


### 0x163 Pointers


### 0x164 Format strings


### 0x165 Typecasting


### 0x166 Command-line arguments


### 0x167 Variable scoping

