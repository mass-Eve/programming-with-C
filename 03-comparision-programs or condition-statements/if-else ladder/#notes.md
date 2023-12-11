                    Introduction To if-else ladder
* Statements in any programming langauge can be classified into three types ~ 

Sequential Statements || Selective Statements (also known as Conditional Statements) || Iteration (or looping)

* The if-else ladder falls under the category of **_Selective Staements_**.

* The if-else ladder helps the programmer in checking conditions based on True | False, output.

* This means that a block of code will be executed if and only if the condition above it, is True! And if the condition is found to be False, either some other block of code will be executed, or nothing will happen.
------------------------------------------

                    Types Of if-else ladders
* There are **__3__** types of if-else-ladder ~

01. only **_if_** statement.
02. both **_if_** & **_else_** statement.
03. one **_if_** statement followed by **_else-if_** statement(s) and an **_else_** clause in the end.

* Only **_if_** statements are used when we want to do something, when something is True only.

    Syntax Of Usage ~
    
        if (<condition>)
        {
            body
        }

    working => as soon as the program will reach to the if-statement, it will go inside the condition part of it, then it will check if the condition is True or False. If (condition = True), then it will go inside the if-block and will do the further.
------------------------------------------
* **_if-else_** statements are used when we also want to do something if the condition is False.
    These statements can be proved very useful in error-handling, where we need to take care of **_False_** statements or **_Unwanted_** statements.

    Syntax Of Usage ~

        if (<condition>)
        {
            body
        }
        else {
            body
        }

    working => first the program will go into the if's condition, if (condition = True), it will go inside the if-block and will do the further. But, if (condition = False), it will go into the else's block and will do the further.

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

    working => first the program will go into the if's coondition, if (condition = True), it will go into the if's block and will do the further. But if (condition = False), it go into the else-if's condition, and will repeat the above process untill a True condition is not obtained. If a True condition is found, it will go into that else-if's block and will do the further. Otherwise it will move until it will find the else block.

* Important Notes - 
    
    01. The **_if_** statement has the most priority. That means, it is always executed.

    02. If there are more than one **_if_** blocks, the program will go through every block until the end of the program. It will check every if-block, doesnn't matter if the condition of any of the if-block was True. If condition is True, it will entire its body, otherwise it will move to other if.