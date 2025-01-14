
// Problem 1: Average Calculation
//
// Problem Statement
//- Declare three variables of type `int`.
//- Calculate their average and store the result in a `float` variable.
//- Take input from the user for all three numbers.
//- Divide the average by a random number and determine if the result is even or odd without using `if-else`.
//
// Solution Description
//1. Input three integers from the user.
//2. Calculate the average as a `float` to ensure decimal accuracy.
//3. Divide the average by a random number provided by the user.
//4. Use the modulus operator `%` to check if the result is even or odd, and output the result using a ternary operator.
//

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float avg;

    // Input three numbers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate average
    avg = (num1 + num2 + num3) / 3.0;

    // Divide average by a random number
    int randomNum;
    cout << "Enter a random number: ";
    cin >> randomNum;

    float result = avg / randomNum;

    // Check if the result is even or odd using a ternary operator
    cout << "The result is: "
        << (((int)result % 2 == 0) ? "Even" : "Odd")
        << endl;

    return 0;
}

//## Problem 2: String Concatenation
//
//### Problem Statement
//- Take four variables of type `string` from the user.
//- Concatenate them using the `+` operator.
//
//### Solution Description
//1. Use the `string` data type to store four strings.
//2. Input four strings from the user.
//3. Use the `+` operator to concatenate the strings.
//4. Display the concatenated result.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3, str4;

    // Input four strings
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Enter third string: ";
    cin >> str3;
    cout << "Enter fourth string: ";
    cin >> str4;

    // Concatenate strings
    string result = str1 + " " + str2 + " " + str3 + " " + str4;

    // Display the result
    cout << "Concatenated string: " << result << endl;

    return 0;
}

//### Problem Statement
//Write the code to find the size of the following variables :
//-`int`
//- `string`
//- `char`
//- `float`
//- `double`
//- `long int`
//- `short int`
//
//### Solution Description
//1. Use the `sizeof` operator to determine the size of each variable type.
//2. Display the results using `cout`.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;

    return 0;
}


//This simple C++ program takes a string input 
//from the user, converts it into an integer, and 
//displays both the original string and the integer value.
//It uses the std::stoi() function to convert the string to an integer.
#include <iostream>
using namespace std;

int main() {
    // Declare a string variable to store user input
  string inputStr;

    // Prompt the user for input
    cout << "Enter a string: ";
    cin >> inputStr;

    // Convert the string to an integer using stoi()
    int inputInt = stoi(inputStr);

    // Display both the original string and the converted integer
    cout << "The string is: " << inputStr << std::endl;
    cout << "The integer is: " << inputInt << std::endl;

    return 0;
}

//This program reads 6 numbers from the user and
//calculates the percentage of even and odd numbers.
//It then displays the percentages for both even and odd numbers
//based on the total numbers entered.
#include <iostream>
using namespace std;
int main() {
    int evenCount = 0, oddCount = 0, num;

    // Read 6 numbers from the user
    for (int i = 0; i < 6; i++) {
       cout << "Enter a number: ";
        cin >> num;

        // Check if the number is even or odd
        if (num % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    // Calculate percentages
    float evenPercentage = (evenCount / 6.0) * 100;
    float oddPercentage = (oddCount / 6.0) * 100;

    // Display the results
    cout << "Percentage of even numbers: " << evenPercentage << "%" << std::endl;
    cout << "Percentage of odd numbers: " << oddPercentage << "%" << std::endl;

    return 0;
}

//This program takes your first name, converts each character to its ASCII value, and checks if the sum of the ASCII values is odd or even.It then performs the following tasks using the++ and --operators:
//
//Increases each ASCII value by 4 and converts it back to a string.
//Decreases each ASCII value by 4 and converts it back to a string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;

    int asciiSum = 0;

    // Convert each character to ASCII and calculate the sum
    for (char c : firstName) {
        asciiSum += static_cast<int>(c);
    }

    // Check if the ASCII sum is odd or even
    cout << "The sum of ASCII values is: " << asciiSum << endl;

    // Increase each ASCII value by 4 using ++ operator
    string increasedName = "";
    for (char c : firstName) {
        increasedName += static_cast<char>(static_cast<int>(c) + 4);
    }

    // Decrease each ASCII value by 4 using -- operator
    string decreasedName = "";
    for (char c : firstName) {
        decreasedName += static_cast<char>(static_cast<int>(c) - 4);
    }

    // Display the modified names
    cout << "Name after increasing ASCII by 4: " << increasedName << endl;
    cout << "Name after decreasing ASCII by 4: " << decreasedName << endl;

    return 0;
}

//This program calculates the gross salary of a user over the next 5 years under different conditions.It performs the following tasks :
//
//Task 1 : Calculate the gross salary for the next 5 years with a 3 % annual increment and a 1.5 % tax deduction each year.
//Task 2 : Calculate the gross salary for the next 5 years with a 14 % annual increment and a 10 % tax deduction each year.
//Task 3 : Calculate the gross salary for the next 5 years with alternating 3 % increment with 1.5 % tax deduction, and
//14 % increment with 10 % tax deduction, and 
//also calculate the total gross salary for all 5 years.
//Additionally, the program will check if the total salary over the 5 years is even or odd.
#include <iostream>
using namespace std;
int main() {
    double salary;

    // Input the current salary from the user
    cout << "Enter your current salary: ";
    cin >> salary;

    // Task 1: Calculate salary for 5 years with 3% increment and 1.5% tax deduction each year
    double salary1 = salary;
    for (int year = 1; year <= 5; year++) {
        salary1 += salary1 * 0.03;    // 3% increment
        salary1 -= salary1 * 0.015;   // 1.5% tax deduction
        cout << "Year " << year << " Gross Salary: " << salary1 << endl;
    }

    // Task 2: Calculate salary for 5 years with 14% increment and 10% tax deduction each year
    double salary2 = salary;
    for (int year = 1; year <= 5; year++) {
        salary2 += salary2 * 0.14;    // 14% increment
        salary2 -= salary2 * 0.10;    // 10% tax deduction
        cout << "Year " << year << " Gross Salary: " << salary2 << endl;
    }

    // Task 3: Alternating increments and tax deductions over 5 years
    double salary3 = salary;
    double totalSalary = 0;
    for (int year = 1; year <= 5; year++) {
        if (year % 2 != 0) {  // Odd years (1st, 3rd, 5th) - 3% increment and 1.5% tax deduction
            salary3 += salary3 * 0.03;    // 3% increment
            salary3 -= salary3 * 0.015;   // 1.5% tax deduction
        }
        else {  // Even years (2nd, 4th) - 14% increment and 10% tax deduction
            salary3 += salary3 * 0.14;    // 14% increment
            salary3 -= salary3 * 0.10;    // 10% tax deduction
        }
        totalSalary += salary3;  // Add the salary for the year to total salary
        cout << "Year " << year << " Gross Salary: " << salary3 << endl;
    }

    // Display the total salary over 5 years and check if it's even or odd
    cout << "Total Gross Salary for 5 years: " << totalSalary << endl;

    // Check if the total salary is even or odd without using if-else
    cout << "The total salary is: " << (static_cast<int>(totalSalary) % 2 == 0 ? "Even" : "Odd") << endl;

    return 0;
}
