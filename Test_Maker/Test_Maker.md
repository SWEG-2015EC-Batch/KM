## Test Maker Program
### Description
Your English teacher needs help in grading a True/False, Multiple, and short answers test. The
test answer stored in 1D array and the students’ IDs and test answers are stored in 2D array. The
first entry in the student array contains students’ IDs and other entries in the array are student’s
answers to the question. The exam has 20 questions, and the class has more than 150 students.
Each correct answer is awarded two points, each wrong answer gets one point deducted, and no answer gets zero points. The program processes the test data and should display the student’s ID,
followed by the answers, followed by the test score, followed by the test grade. When it is
required, the program should print the 5/10 top test scores along with the student’s ID in order
the top score first and forth. The program should allow your teacher to search for a student with
his/her id.
### Pseudocode
Step 1: Start <br />
step 2: Reads input of the correct answers for the twenty multiple choices using a for loop. <br />
step 3: Store answers in array, declare the array. <br />
step 4: Read the number of students, number of student should be greater than 150. <br />
step 5: Initialze and store each sudents ID and answers to the test questions using string. <br />
Step 6: Ask if user wants to input students' IDs and answers. <br />
step 7: Read input students' IDs and answers using for nested loops. <br />
step 8: Calculate scores and assign grades, using if else functions. <br />
step 9: Output User menu for displaying information <br />
step 10: Read input using Switch functon based on user choice <br />
switch choice <br />
    case 1: <br />
        Print the list of all student's test information <br />
        output formatted table with student IDs, test answers, scores, and grades <br />
        break <br />
    case 2: <br />
        Print a specific student's information <br />
        output "Input Student ID: " <br />
        input studentID <br />
        search for studentID in student_answers array and print relevant information <br />
        break <br />
    case 3: <br />
        Print top 10 student's grade and ID <br />
        calculate top 10 scores and corresponding indices <br />
        sort the top 10 scores and indices <br />
        output formatted table with top 10 student IDs and grades <br />
        break  <br />
    default: <br />
        output "There's no such choice!" <br />
step 11: End <br />

### Flowchart

