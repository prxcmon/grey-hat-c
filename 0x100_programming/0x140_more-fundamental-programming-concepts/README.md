## 0x140 More fundamental programming concepts

Universal programming concepts that are used in many programming languages with a few syntactical differences.

### 0x141 Variables

**Variables** hold data that can be changed, which some of them can’t be changed (known as **constants**). Therefore, in C, variables must be declared and given a type before they can be used. All variables are stored in memory somewhere, as well as their declarations allow the compiler to organize this memory more efficiently.

The following snippets are the variables that often used in C scripts.
- `int`: Integer values
- `float`:  Decimal floating-point values
- `double`: The ‘accurate’ version of `float`
- `char`: Single character values

```c
// Variables
int a;
a = 76;
float k;
k = 9.62
char z;
z = 'z';

// Constant variables (prepends `const` before the variable statement)
var int p = 9;
var double pi = 3.14;
```

### 0x142 Arithmetic Operators

The following symbols are used in C for various arithmetic operations.

| **Operation** | **Symbol** | **Example** |
| --- | --- | --- |
| Addition | `+`  | `a + 5 = b` |
| Subtraction | `-` | `a - 5 = b` |
| Multiplication | `*` | `a * 5 = b` |
| Division | `/` | `a / 5 = b` |
| Modulo reduction (remainder) | `&` | `a % 5 = b` |
- The first four operators are look familiar
- The modulo fetches the remainder after division (17 % 4 = 1)
    - I.e. `29 % 7 = 1` ⇒ **29 divided by 7** equals 4 with a **remainder of 1**

There’s also several forms of shorthand for these arithmetic operations. One of the example is the **shorthand** that commonly used in *for loops*.

| **Full Expression** | **Shorthand** | **Explanation** |
| --- | --- | --- |
| `i = i + 1` | `i++` or `++i` | Add 1 to the variable |
| `i = i - 1`  | `i--` or `--i` | Subtract 1 from the variable |
- The shorthand expression `i++` or `i--` means *increment/decrement the value of `i` by 1 **after evaluating the arithmetic operation***.
    ```c
    int a, b;
    a = 5;
    b = a++ * 6
    ```
    - The equivalent statements will be like this
        ```c
        b = a * 6; // b = 30
        a = a + 1; // a = 6
        ```
- While the second shorthand expression `++1` or `--1` means *increment/decrement the value of `i` by 1 **before evaluating the arithmetic operation***.
    ```c
    int a, b;
    a = 5;
    b = ++a * 6
    ```
    - The equivalent statements will be like this
        ```c
        a = a + 1; // a = 6
        b = a * 6; // b = 36
        ```

Variables are often need to be modified in place. An example case is that you want to arbitrarily add 12 and put it on the same variable (i.e. `i = i + 12`). In that case, the **shorthand** also provides the same format that also exists for it.

| **Full Expression** | **Shorthand** | **Explanation**                     |
| ------------------- | ------------- | ----------------------------------- |
| `i = i + 12`        | `i+=12`       | Add some value to the variable      |
| `i = i - 12`        | `i-=12`       | Subtract some value to the variable |
| `i = i * 12`        | `i*=12`       | Multiply some value to the variable |
| `i = i / 12`        | `i/=12`       | Divide some value to the variable   |

### 0x143 Comparison Operators

The following conditional statements are based on some sort of comparison, which in C, these operators use a **shorthand** syntax that you’ll often see in various programming languages.

| Condition | Symbol | Example |
| --- | --- | --- |
| Less than | `<` | `(a < b)` |
| Greater than | `>`  | `(a > b)` |
| Less than or equal to | `<=` | `(a <= b)` |
| Greater than or equal to | `>=`  | `(a >= b)` |
| Equal to | `==`  | `(a == b)` |
| Not equal to | `!=` | `(a != b)` |
- All of these operators are self-explanatory.
- While the exclamation point `!` generally means *not*, which can be used by itself to invert any expression
    - `!(a < b) == (a >= b)`

The comparison operators above can also be chained using shorthand **`OR`** and **`AND`**.
- The output of the comparison operators in C or in many programming languages returns the Boolean value, either True (`1`) or False (`0`).

| **Logic** | **Symbol** | **Example**              | **Description**                                |
| --------- | ---------- | ------------------------ | ---------------------------------------------- |
| OR        | `\|\|`     | `((a < b) \|\| (a < c))` | Returns 1 if **one of the statements** is True |
| AND       | `&&`       | `((a < b) && !(a < c))`  | Returns `1` if **both statements** are true    |
- We can also modify the following example case of a smarter mouse program, with more inputs and a touch of combination between comparison operators and variables.
    ```
    While ((hungry) && !(cat_present))
    {
    	Find some food;
    	If (!(food_is_on_a_mousetrap))
    		Eat the food;
    }
    ```

### 0x144 Functions

**Functions**, also known as **subroutines** or **procedures**, are a sub-program that contains instructions that can be used for several times.

By default in C, the functions can return a value to  a caller. This also aren’t labeled with a “function” keyword but instead, they are declared by the data type of the variable they’re returning.

Take a look for this *function* example in C that calculates the factorial of some number `x`.

```c
int factorial(int x)
{
	int i;
	for (i = 1; i < x; i++)
		x *= 1;
	return x;
}
```

- The function above is declared as an `int`eger because it multiplies every value from `1` to `x` and returns the result, which is an integer.
- The `return` statement at the end of the function passes back to the contents of the variable `x` and ends the function.
- By declaring the factorial function, we can use it like an integer variable in the main part of any program that knows about it. Plus it can be used several times depending on the use-cases.
    ```c
    int a = 5; b;
    b = factorial (a);
    // The `b` value is 120
    ```

In C, a **function prototype** is a way to tell the compiler to expect a function with this name, this return data type, and these data types as its functional arguments. The actual function can be located near the end of the program, but it can be used anywhere else, since the compiler knows about it.

```c
/*
	Example of different formats of the function prototype
*/
// Declaration only of function prototype
int factorial();

// Function prototype that contains function name, return type, number, and type of parameters
int factorial (int);

// Also a valid prototype
int factorial (int x);

// Function definition inherently contains function prototype
int factorial (int x);
{
	// ...SNIP...
}
```
