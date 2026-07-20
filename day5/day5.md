 # Switch statement properties

- cases can be any order, the switch will execute the exact block when the matching case is found
- multiway selection statement allows the program to choose one execution path from multiple possible cases.
- the switch only evaluates only one expression and the expression should be a boolean

---
## rules for using the switch statement 

- the expression must be an integer, char or ennum
- case lable must be compile time constant
- every case must be unique, duplication cases are not allowed
- multiple cases can share single code block,
- we cannot use the ranges for the cases

>explanation for the 5th point is here
  ```
  when we want to use the ranges like this 

  case 1-3:
  printf("done");

  we are not going to specify the cases in the ranges, what we will do 
  is we will make share a single code block with multiple cases.

  eg,
  
  case1: 
  case2:
  case3:
  printf("done");
  ```

