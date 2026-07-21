# Loop control instructions

Definition - 
  > Loop control statements are used to execute a set of statements repeatedly until a specific condition becomes false

```

              Loops
                |
                |
 -------------------------------------
|                |                   |
|                |                   |
for              while               do-while

```

----

### for loop

```
syntax

for(intialization; condition; updation){
    //code
}
```

- key properties
1. The for loop is entry controlled, the condition is checked before the execution of the code

2. Initialization takes place only once

3. The initialization and updation variable can be different
3.commonly used for a count controlled iteration, where the number of iterations are known.

- example
```
for(int i=0; i<=5; i++){
    printf("hello world\n");
}
```
This will pring the hello world quote 10 times.

#### execution flow of for loop
```
Initialization
        |
   condition
        |
      body
        |
     update
        |
    condition
        |
       body
```

---
### while loop

"executes the code block until the condition remains true"

```
syntax

while(condition){
    //code
}
```

- key properties
1. entry controlled loop, the condition is checked before execution of the code
1. as the condition is checked before the execution, the loop may not execute of the condition is false from the first start.
2. this loop is best when the numbers are unknown
3. the iterator is specified outside the loop
3. the updation statement is specified inside the loop's code block

- example
```
int i=0;
while(i<=5){
    printf("hello world");
    i++;
}
```
the above code will print hello world 5 times

--- 

### do-while loop
