/*
25 rapid-fire C coding challenges

Each challenge is self-contained and should print the exact required output
to stdout. Keep each solution short; none of these should need more than
about 100 lines.
*/

#include <stdio.h>

int main(void) {
    puts("Rapid-Fire C Challenges");
    puts("=======================");
    puts("");

    puts("1. Hello, stdout");
    puts("Write a program that prints exactly:");
    puts("Hello, world!");
    puts("");

    puts("2. Two lines");
    puts("Write a program that prints exactly:");
    puts("C is fun");
    puts("Let's build");
    puts("");

    puts("3. Simple math");
    puts("Store 17 and 25 in variables, add them, and print exactly:");
    puts("42");
    puts("");

    puts("4. Integer division");
    puts("Using variables, divide 29 by 5 with integer division and print exactly:");
    puts("5");
    puts("");

    puts("5. Remainder");
    puts("Using variables, compute 29 % 5 and print exactly:");
    puts("4");
    puts("");

    puts("6. Floating output");
    puts("Store 7 and 2, divide them as floating-point values, and print exactly:");
    puts("3.50");
    puts("");

    puts("7. Character basics");
    puts("Store the character 'Z' in a variable and print exactly:");
    puts("Z");
    puts("");

    puts("8. ASCII value");
    puts("Store the character 'A' and print its integer ASCII value exactly:");
    puts("65");
    puts("");

    puts("9. If statement");
    puts("Store 12 in a variable. If it is greater than 10, print YES; otherwise print NO.");
    puts("Required output:");
    puts("YES");
    puts("");

    puts("10. Even or odd");
    puts("Store 19 in a variable and print exactly:");
    puts("odd");
    puts("");

    puts("11. For loop count");
    puts("Use a for loop to print the numbers 1 through 5 on one line exactly like this:");
    puts("1 2 3 4 5");
    puts("");

    puts("12. While loop sum");
    puts("Use a while loop to add the numbers 1 through 10 and print exactly:");
    puts("55");
    puts("");

    puts("13. Countdown");
    puts("Use a loop to print exactly:");
    puts("5 4 3 2 1");
    puts("");

    puts("14. Multiplication table row");
    puts("Print the 7 times table from 7 x 1 through 7 x 5 exactly like this:");
    puts("7 14 21 28 35");
    puts("");

    puts("15. Star line");
    puts("Use a loop to print exactly 8 stars on one line:");
    puts("********");
    puts("");

    puts("16. Sum an array");
    puts("Create an int array with these values: 3, 1, 4, 1, 5");
    puts("Add them with a loop and print exactly:");
    puts("14");
    puts("");

    puts("17. Find the largest");
    puts("Create an int array with these values: 8, 2, 9, 4, 7");
    puts("Find the largest value and print exactly:");
    puts("9");
    puts("");

    puts("18. Reverse an array");
    puts("Create an int array with these values: 1, 2, 3, 4, 5");
    puts("Print the values in reverse order on one line exactly like this:");
    puts("5 4 3 2 1");
    puts("");

    puts("19. C string length");
    puts("Store the string \"banana\" and, without hard-coding the answer, print its length exactly:");
    puts("6");
    puts("");

    puts("20. Count vowels");
    puts("Store the string \"Education\" and count the vowels (a, e, i, o, u, case-insensitive).");
    puts("Print exactly:");
    puts("5");
    puts("");

    puts("21. Uppercase conversion");
    puts("Store the string \"codex\" and convert it to uppercase without changing the printed text by hand.");
    puts("Print exactly:");
    puts("CODEX");
    puts("");

    puts("22. Function with return");
    puts("Write a function that takes two ints and returns the larger one.");
    puts("Call it with 14 and 9, then print exactly:");
    puts("14");
    puts("");

    puts("23. Swap with pointers");
    puts("Create two ints: 3 and 8. Write a function that swaps them using pointers.");
    puts("After swapping, print exactly:");
    puts("8 3");
    puts("");

    puts("24. Struct total");
    puts("Create a struct named Item with fields: name and price.");
    puts("Make two items priced 12 and 18, add the prices, and print exactly:");
    puts("30");
    puts("");

    puts("25. File + dynamic memory");
    puts("Create a program that:");
    puts("- uses malloc to allocate space for 5 ints");
    puts("- stores 2, 4, 6, 8, 10");
    puts("- writes them to a text file, one line as: 2 4 6 8 10");
    puts("- reopens the file, reads the numbers back, sums them, and prints exactly:");
    puts("30");
    puts("");

    puts("Rules:");
    puts("- Every challenge should be solvable with common headers like stdio.h, stdlib.h, string.h, and ctype.h.");
    puts("- Keep the solution self-contained.");
    puts("- Match the required stdout exactly.");

    return 0;
}
