# Problem Analysis
### Problem Description
Make a program that calculates and display the Body Mass Index (BMI) of a person. The program should read the height and weight of a person being given and displays the BMI. <br />
BMI = weight(in kg) / (height * height(in m))

### Problem Analysis
###### Input
- height
- weight
###### Output
- BMI
###### Process/Operation
- Variable declaration - holds input and output
- Print input prompt message and read input data
- Calculate the BMI:
        BMI = weight / (height * height)
- Print output message and result

# Algorithm Design/Pseudocode
Step 1: Start <br />
Step 2: Input height <br />
Step 3: Input weight <br />
Step 4: Calculate BMI = weight / (height * height) <br />
Step 5: Print BMI <br />
Step 6: End <br />

### Flowchart

```mermaid
        flowchart TD
A([Start]) --> B[/Input height/];
B --> C[/Input weight/];
C --> D["BMI = weight / (height * height)"];
D --> E[/Print BMI/];
E --> F([End]);
```
