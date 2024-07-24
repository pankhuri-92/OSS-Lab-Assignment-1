## Documentation of C++ code of a basic calculator 

1. **Initialization**:
   - Variables are declared for storing input, results, and other control flags.
   - The `storage` vector will hold saved results.
   - `powerOn` controls whether the calculator continues running.

2. **Input**:
   - The user enters the first number (`input1`).
   - They can choose to retrieve saved results from `storage`.
   - If not retrieving saved results, they enter the second number (`input2`).

3. **Operation Selection**:
   - The user selects an operation:
     - Addition (1)
     - Subtraction (2)
     - Multiplication (3)
     - Division (4)

4. **Performing Calculations**:
   - Based on the selected operation:
     - Calculate the result and store it in `results`.
     - Display the result (sum, difference, product, or quotient).

5. **Error Handling**:
   - If an invalid operation is entered, it displays an error message.

6. **Saving Results**:
   - The user can choose to save the result in `storage`.

7. **Continuation**:
   - It asks if the user wants to perform another calculation.
   - If yes, repeat the loop; otherwise, exit the program.
