# Problem Analysis
### Problem Description
Write a program that converts a letter entered from the keyboard to its uppercase or lowercase equivalent.

###### Input
- a letter
###### Output
- uppercase or lowercase equivalent of the letter
###### Process/Operation
- Variable declaration - input and output
- Read input
- use islower() and isupper() functions to switch to lower or uppercase equivalents
- Print output

# Algorithm Design
**Step 1:** Start <br />
**Step 2:** Read letter <br />
**Step 3:** Convert it to lowercase or uppercase using islower() and isupper() functions <br />
**Step 4:** Print output <br />
**Step 5:** End <br />

### Flowchart
```mermaid
  flowchart TD
A([Start]) --> B[/Read letter/];
B --> C["Convert to lowercase using islower() function"];
C --> D["Convert to uppercase using isupper() function"];
D --> E[/Print outputs/];
E --> F([End]);
```
