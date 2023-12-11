* Statements in any programming langauge can be classified into three types ~ 
    Sequential Statements || Selective Statements (also known as Conditional Statements) || Iteration (or looping)

* The if-else ladder falls under the category of **_Selective Staements_**.

* The if-else ladder helps the programmer in checking conditions based on True | False, output.

* This means that a block of code will be executed if and only if the condition above it is True! And if the condition is found to be False, either some other block of code will be executed, or nothing will happen.

There are **__3__** types of if-else-ladder ~

01. only **_if_** statement.
02. both **_if_** & **_else_** statement.
03. one **_if_** statement followed by **_else-if_** statement(s) and an **_else_** clause in the end.

* Only **_if_** statements are used when we only want to do something if something is True only.
Syntax Of Usage ~

    if (<condition>)
    {
        body
    }

* **_if-else_** statements are used when we want also want to do something if the condition is False.
    These statements can be proved very useful in error-handling, where we need to take care of False **_statements_** or **_Unwanted_** statements.
Syntax Of Usage ~

    if (<condition>)
    {
        body
    }
    else {
        body
    }

* **_if-(else-if)-else_** are very useful in cases when we want to check multiple conditions.
Syntax Of Usage ~

    if (<condition>)
    {
        body
    }
    else if (<condition>) 
    {
        body
    }
    .
    .
    .
    .
    .
    else if (<condition>)
    {
        body
    }
    else {
        body
    }