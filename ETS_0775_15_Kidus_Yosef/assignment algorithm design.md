 ALGORITHIM DESIGN BY PSUEDOCODE

1)1. Start
  2. Declare variables Height, Weight
  3. Display "Read the Height:"
  4. Read Height from user input
  5. Display "Read the Weight:"
  6. Read Weight from user input
  7. Calculate BMI = Weight / (Height * Height)
  8. Display "Print the BMI:", BMI
  9. Stop


2)1. Start
  2. Declare variables Fuel_capacity, Miles_per_gallon
  3. Display "Enter the Fuel Capacity of the tank in Gallon:"
  4. Read Fuel_capacity from user input
  5. Display "Enter the Miles per gallon:"
  6. Read Miles_per_gallon from user input
  7. Calculate Number_of_miles = Fuel_capacity * Miles_per_gallon
  8. Display "Display the Number_of_miles:", Number_of_miles
  9. Stop   


3)1. Start
  2. Declare a variable letter of type char
  3. Display "Enter a letter:"
  4. Read letter from user input
  5. If letter is lowercase:
     - Convert letter to uppercase using the toupper() function
     - Display "Uppercase equivalent:", letter
  6. Else if letter is uppercase:
     - Convert letter to lowercase using the tolower() function
     - Display "Lowercase equivalent:", letter
  7. Else:
     - Display "Invalid input. Please enter a valid letter"
  8. Stop


4)1. Start
  2. Declare variables X, Y
  3. Display "Enter the X variable:"
  4. Read X from user input
  5. Display "Enter the Y variable:"
  6. Read Y from user input
  7. Calculate result = X raised to the power of Y using the pow() function
  8. Display "Print the result of the expression:", result
  9. Stop


5)1. Start
  2. Declare variables Hour, Bonus, Base, Tax_rate, Pension, Gross_salary, Net_salary, Bonus_payment
  3. Declare variable Name of type string
  4. Display "Read the name of the employee:"
  5. Read Name from user input
  6. Display "Read the Weekly working hour:"
  7. Read Hour from user input
  8. Display "Read the Bonus rate per hour:"
  9. Read Bonus from user input
  10. Display "Read the Base salary:"
  11. Read Base from user input
  12. Calculate Gross_salary = (Bonus * Hour) + Base
  13. Calculate Tax_rate = 0.15 * Gross_salary
  14. Calculate Pension = 0.05 * Gross_salary
  15. Calculate Net_salary = Gross_salary - Tax_rate - Pension
  16. Calculate Bonus_payment = Bonus * Hour
  17. Display "Hello", Name
  18. Display "Your Gross salary is:", Gross_salary
  19. Display "Your Net_salary is:", Net_salary
  20. Display "Your Bonus_payment is:", Bonus_payment
  21. Stop




6)1. Start
  2. Declare variable Filesize of type float
  3. Display "Read the file size in bytes:"
  4. Read Filesize from user input
  5. Calculate time_taken = Filesize / (sizeof(char) * 960)
  6. Display "The time it takes is:", time_taken
  7, End
  
  7. Stop
