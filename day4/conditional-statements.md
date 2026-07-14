# Conditional Statements

> Conditional statements are the constructs that allow your program to make decisions and execute certain blocks of code depending upon the situation evaluates to be true or false

---

<u>1. ```if-else ```statements</u>
    The ```if else``` statement executes the code block if a condition is ture & the other code block if it is false.

    
Structure
```
 if(condition)
   {//execute if the condition is true}

else{
    //execute if the condition is flase
}
```

<u>2. ```else-if ```statements</u>
    The ```else-if``` statement checks an additional condition if the previous 'if' or the previous ```else-if``` condition was false.

Structure
```
  if(condition1)
  {
    //execute when the condition1 is true
  }

  else if(condition2)
  {
    //execute if the condition1 is false and the condition2 is true
  }

  else
  {
    //execute if the both the conditions are false
  }
```

---

## Ternary conditional operator

>The ternary operator (?:) is a conditional operator that evaluates a condition and returns one of two expressions based on whether the condition is true or false

```
syntax 

condition? do if true : do if flase;

```

In the above syntax, if the condition is true then the first task is done and if the condition is false, then the second task is done.

---

## Switch conditional statements

definition
>the switch statement is a multiway selection statement that executes one block of code from multiple possible cases based of the value of the single expression.

``` 
Syntax

switch(expression){
  case C1 : //code block for the C1 ;
  break;

  case C2 : //code block for C2;
  break;

  case C3 : //code block for C3;
  break; 

  default : //code block for default;
}
```

Now the question is how does this works??
this graph explains that how does this works.

```

                         Evaluator-expression
                                  |
                                  |
                    matches with the switch case
                                  |
                                  |
       ______________________________________________________
       |                                                    |
       |                                                    |
       |                                                    |
switch case found                                    switch case not 
       |                                                  found
executes the resp                                           |
code block                                                  |
      |                                              is there a default 
      |                                                     case
    break                                                    |
      |                                           _______________________
  exits the                                      |                      |
  switch case                                    |                     no
                                                yes                     |
                                                 |            exit from 
                                                 |           switch case 
                                          the code block for
                                          default executes

```

### Components of the switch case
 
 1. Expression = value that is evaluated once<br>
 2. Case = represents the possible value of expression<br>
 3. break = terminates the switch statement, without this the execution continues and this is known as fall-through
 4. default = this is the code block that is executed when no switch case is true


