# Problem Analysis

### Problem Discription

Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons the automobiles can be driven. The program outputs the number miles the automobile can be driven without refueling.<br />
**distance_driven = capacity \* distancePerCapacity**

###### Input

- capacity of the fuel tank
- distance per capacity

###### Output

- distance it can be driven without refueling

###### Process/Operation

- Variable declaration - input and output
- Print input prompt message and read input
- Calculate distance_driven: capacity \* distancePerCapacity
- Print output prompt and result

# Algorithm Design/Pseudocode

**Step 1:** Start <br />
**Step 2:** Read distancePerCapacity and capacity of the automobile <br />
**Step 3:** Calculate distance: capacity * distancePerCapacity <br />
**Step 4:** Print distance <br />
**Step 5:** End <br />

### Flowchart

```mermaid
  flowchart TD
A([Start]) --> B[/Read distancePerCapacity and capacity/];
B --> C["distance = capacity * distancePerCapacity"];
C --> D[/Print distance/];
D --> E([End]);
```
