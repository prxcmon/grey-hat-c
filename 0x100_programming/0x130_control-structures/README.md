## 0x130 Control structures

<aside>
📚

The basic C functions below are likely similar or there might some differences from the C Essentials, that I’ve provided the PDF file in this folder repository.

</aside>

The program requires **control structures**, which is the flow of the program’s execution from a simple sequential order to a more complex and more useful flow.

The following sections are structures based on the pseudo-code above.

### 0x131 If-Then-Else

In general, the *if-then-else structure* pseudo-code looks something like this.

```
If (condition) then
{
	Set of instructions to execute **if** the condition is **met**;
}
Else
{
	Set of instructions to execute **if** the condition is **not met**;
}
```

The *if-then-else structure* pseudo-code based on the program example might look something like this.

```
If (street is blocked)
{
	Turn right on 15th Street;
	Turn left on Pine Street;
	Turn right on 16th Street;
}
Else
	Turn right on 16th Street;
```

The pseudo-code’s rule of thumb, which can also applicable in C codes/scripts.

```
If (there's only one instruction in a set of instructions)
	The use of curly braces to group the instructions is optional;
Else
{
	The use of curly braces is necessary;
	Since there must be a logical way to group these instructions;
}
```

Another variation of the *if-then-else* statements, the *select/case* statements, has the similar logic; if this happens do these things, otherwise do these other things.

### 0x132 While/Until Loops

The looping statements require a set of conditions that tells it when to stop looping, otherwise it will loop infinitely. The most common looping statement, the *while control structure* (a.k.a. *while loop*), says to execute the following set of instructions in a loop *while* a condition is true.

```
While (the person is hungry)
{
	Find some food;
	Eat the food;
}
```

- The looping stops if the condition has been achieved, meaning **the person is not hungry anymore**.

Another variation, the *until loop*, a syntax that exclusive to the programming language **Perl**. The difference is the condition inside of the *until loop* is inverted against the condition inside of the *while loop*.

```
Until (the person is **not** hungry)
{
	Find some food;
	Eat the food;
}
```

The *while loop* for the previous program case should be like this.

```
While (there is not a church on the right)
	Drive down Main Street;
```

- The driving directions state ***Continue on the Main Street util you see a church on the right***.

### 0x133 For Loops

The *for loops* often used when a programmer wants to loop for a certain number of iterations.

Consider the following example when a program is looped for five times.

```
For (5 iterations)
	Drive straight for a mile;
```

A *for loop* can also be considered as a *while loop +* counter, which can be converted into something like this. 

```
Set the counter to 0;
While (the counter is less than 5)
{
	Drive straight for a mile;
	Add 1 to the counter;
}
```

If the pseudo-code is converted into C-like with a touch of the example program (for driving directions), it will look like this, which even more apparent.

```
For (ctr=0; ctr<5; ctr++)
	Drive straight for a mile;
```

The *for loop* above consists of three sections, separated by semicolons.

- The first section, the `ctr` is declared as the counter and sets it to its initial value (`0`).
- The second section, the condition that is similar with a *while* statement using the counter: Keep looping until the condition has been achieved.
- The third section, sets what action should be taken on the counter during each iteration: Add 1 to the counter called `ctr`.