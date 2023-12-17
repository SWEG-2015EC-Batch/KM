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
E --True--> D[result = num1 + num2];
E --False--> F{operation = "-"};
F --True--> G[result = num1 - num2];
F --False--> H{operation = "*"};
H --True--> I[result = num1 * num2];
H --False--> J{operation = "/"};
J --True--> K[result = num1 / num2];
J --False--> M[/Please Input correct operation/];
D --> N[/Print Result/];
G --> N;
I --> N;
K --> N;
N --> O([End]);
```