# Problem Analysis
### Problem Description
A serial transmission line can transmit 960 characters per second. Write a program that will calculate how long it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may take days.
### Problem Analysis
###### Input
- File size in bytes
###### Output
- time taken to transmit the file
###### Process/Operation
- Variable declaration - input, output, byte per second transmitted
- Print input prompt and read input
- Calculate the time taken = file_size / byte_per_second
- Print output prompt and result

# Algorithm Design/Pseudocode
Step 1: Start <br />
Step 2: Read file_size <br />
Step 3: Calculate time_taken = file_size / byte_per_second <br />
Step 4: Print time_taken <br />
Step 5: End