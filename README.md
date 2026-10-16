# Student GPA Tracker

A C++ console application that helps students calculate and analyze their course GPAs.

## Features

- Calculate the average GPA across multiple courses.
- Identify the highest and lowest GPA.
- Count courses with GPAs above 3.0.
- Display academic status based on a 2.0 GPA benchmark.
- Validate GPA inputs between 0.0 and 4.0.
- Support up to 10 courses.
- Generate a formatted GPA report.
- Allow users to perform multiple calculations.

## Technologies Used

- C++
- Visual Studio Code
- GCC (g++)

## How to Run

1. Download or clone this repository.
2. Open a terminal in the project folder.
3. Compile the source code:

   `g++ main.cpp -o gpa.exe`

4. Run the program in an MSYS2 UCRT64 terminal:

   `./gpa.exe`

## Example Output

```text
========== GPA REPORT ==========
Student Name: Alex
Number of Courses: 3
Course GPAs:
Course 1: 3.50
Course 2: 2.80
Course 3: 4.00
Average GPA: 3.43
Highest GPA: 4.00
Lowest GPA: 2.80
Courses above 3.0: 2
Academic Status: Meeting GPA benchmark
================================
```

## Concepts Practiced

- Functions and parameters
- Arrays
- For loops and while loops
- Conditional statements
- Input validation
- Basic data processing
- Formatted console output

## Future Improvements

- Save GPA reports to a file.
- Support letter grades and credit-hour-weighted GPA calculations.
- Add a menu for viewing previous calculations.
