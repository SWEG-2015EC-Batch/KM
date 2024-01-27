### Pseudocode
step 1: Start <br />
Step 2: Read Input a number greater than one and store it in variable <br /></t>
Input a number greater than one and store it in variable n <br />
Step 3: Display error If n is less than 1 <br /></t>
Else, continue with the following steps <br />
Step 4: Use a for nested loop with if else staments to create the pattren based on the number n. <br />
For i from 0 to (n / 2 + 1): <br />
    Initialize num to 0 <br />
    For j from 0 to (n / 2 + 1): <br />
        If i is greater than j, print two spaces <br />
        Else, print num and increment it by 1 <br />
    For k from (n / 2) to i: <br />
        Calculate num2 as (k - i - 1) <br />
        Print num2 and decrement it by 1 <br />
    Move to the next line <br />
For i from 0 to (n / 2): <br />
    Initialize num to 0 <br />
    For j from 0 to (n / 2): <br />
        If j is greater than (n / 2 - 2) - i, print num and increment it by 1 <br />
        Else, print two spaces <br />
    For k from -2 to i: <br />
        Print num and decrement it by 1 <br />
    Move to the next line <br />
Step 5: End




