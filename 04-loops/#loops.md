16/11/2023

                                                      Loops In C Programming

* When we want to perform a task repetitively, we use the concept of Loops.

* Loops in programming allows the user to perform a task or a set of tasks multiple times, that too without writing the same code multiple times. Just write the code a single time and it will run it until you say to stop.

* In C programming, there are three loops in total -->
while loop | for loop | do-while loop

* **while loop** and for loop are collectively known as **Entry Controlled Loop** !
Why? Because in these loops, entry in the loop's body is allowed only if the condition is True. That means, condition in these loops is checked first, then the program can enter the loop's body.

* where as, a **do-while loop** is also known by **Exit Controlled Loop** !
Why? Because in a do-while loop, condition is checked at the last of the loop's body. That means, a do-while loop always runs at least one time, irrespective of the condition being True. But a point to be noted that once it reaches the condition of the loop (the very first time), it will check it and will run the body again only if the condition is True this time.

* Every loop has 4 components -->
Initialization | Condition | Updation | Body

* Let's have a look at the syntax of each loop.

* Syntax of a for-loop

```c
for (initialization, condition, updation)
{
    // body
}
```

* Syntax of a while-loop

```c
loop-variable initialization;
while (condition)
{
    // body
    // updation
}
```

while it may seem that the individual components of a loop are occuring at different positions, but the flow of execution is same, except in a do-while loop.

* Syntax of a do-while loop

```c
// loop-variable intialization;
do {
    // body
    // updation
} while (condition);
```

* Compound Statements ~
The statements written inside a block of curly-brackets are known as Compound statements. Either all the content that is written inside a curly-brackets block will execute, or nothing will execute. 