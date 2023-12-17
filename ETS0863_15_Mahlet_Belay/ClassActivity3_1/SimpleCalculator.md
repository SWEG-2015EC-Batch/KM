## Basic Calculator Application
### Problem Description
Design an algorithm using flowchart and write the implementation of
simple calculator that perform basic arithmetic operation in C++
language. The program should input type of operator and the
operands. The program only exit when the user enter zero (0) at the
end of the operation. <br />

### Problem Analysis
Input - num1 and num2 and operation <br />
Process - result = num1 operation num2 <br />
Output - result <br />

### Flowchart
```mermaid
    flowchart TD
A([Start]) --> B[/Input num1/];
B --> C[/Input num2/];
C --> D[/Input operation/];
D --> E{operation = "+"};
E --True--> F[result = num1 + num2];
E --False--> G{operation = "-"};
G --True--> H[result = num1 - num2];
G --False--> I{operation = "*"};
I --True--> J[result = num1 * num2];
I --False--> K{operation = "/"};
K --True--> L[result = num1 / num2];
K --False--> M[/Please Input correct operation/];
F --> N[/Print Result/];
H --> N;
J --> N;
L --> N;
N --> O([End]);
```