* switch(case) usage Syntax ~

        switch (<variable>)
        {
            case <a-constant-thru-which-equality-check-has-to-be-done> :
                body
                break; (if required)
    
            case <a-constant-thru-which-equality-check-has-to-be-done> :
                body
                break; (if required)
    
            case <a-constant-thru-which-equality-check-has-to-be-done> :
                body
                break; (if required)
    
            .
            .
            .
            .
            .
            .
    
            case <a-constant-thru-which-equality-check-has-to-be-done> :
                body
                break; (if required)
    
            default :
                body 
                break; (optional, it pretty much works the same, if not putted also!)
        }

_Ques_. **Why should I use switch(case) statements when I already have if-else ladder?**

There are a bunch of resons to choose switch(case) ladder over an if-else ladder. They are ~

    01. Readability: They improves the readability of the program when you have multiple conditions checking the value of a single variable, especially true when you're comparing a variable against multiple constant values.

    02. More concise and easier to read than an if-else ladder.

    03. In many cases, a switch-case statement might be more efficient than a series of if-else statements, especially when there are much options to cater. Compilers can optimize switch statements to use jump tables, making the execution faster compared to a chain of if-else conditions. 
    It is always a good practice to use switch(case) when you have to check many conditions rather than puuting an if-else ladder for every condition in the use.

    04. switch(case) statements are designed for situations where you are comparing a single value against multiple possible constant values, while, if-else statements, on the other hand, are more flexible and can handle a wide range of conditions, including complex logical expressions.

_Ques_. **Why not to use switch(case) statements? or Why should I prefer if-else ladder over switch(case)?**

01. switch(case) only evaluates integers and single-character values. That means, you can only perform functions or pass integer or single-character values in the switch(case) expression. While in the if-else ladder, comparisions can be laid out on the basis of any data-type, be it float, be it boolean, etc....

02. When writing code for longer comparisions, it is always a wise-move to use if-else ladder over switch(case) as you have to write code for every single value in the switch(case), while you just have to pass the range in the condition of the if-else ladder and that's it. It's that easy!!

03. switch(case) is designed for simple equality comparisons, and it may not handle complex conditions as effectively.

04. If your conditions involve a variable that can take on a wide range of values and does not have a fixed set of constant values, if-else is a better choice. Switch-case is most effective when you're comparing against a predefined set of constants.

But, in the end, it pretty much really depends upon 

01. what's the problem statement?
02. How you are thinking to handling it?
03. What's your approach?

, which reallly decides what is best suited for you. Maybe you perform the same thing with switch(case) easily, maybe you perform it well using if-else ladder only! It really depends upon you.

And also, in the end, both allows nesting! SO you need to worry! If your approach requires nesting an if statement into a switch(case), do it. If your approach requires nesting a switch(case) into your else clause, do it.