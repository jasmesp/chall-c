/*
Rapid-Fire C Challenges Workbook

How to use this file:
1. Open this file and work inside the challenge functions.
2. Read the commented prompt at the top of each function.
3. Write your solution below that prompt.
4. Compile and run this file with cc.
5. Compare the "Expected" section to the "Actual" section.

This file compiles before you start. The challenge functions are stubs so you
can fill them in one at a time without reorganizing anything.
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum ChallengeFunction {
  CHALLENGE_00,
  CHALLENGE_01,
  CHALLENGE_02,
  CHALLENGE_03,
  CHALLENGE_04,
  CHALLENGE_05,
  CHALLENGE_06,
  CHALLENGE_07,
  CHALLENGE_08,
  CHALLENGE_09,
  CHALLENGE_10,
  CHALLENGE_11,
  CHALLENGE_12,
  CHALLENGE_13,
  CHALLENGE_14,
  CHALLENGE_15,
  CHALLENGE_16,
  CHALLENGE_17,
  CHALLENGE_18,
  CHALLENGE_19,
  CHALLENGE_20,
  CHALLENGE_21,
  CHALLENGE_22,
  CHALLENGE_23,
  CHALLENGE_24,
  CHALLENGE_25,
  CHALLENGE_26,
  CHALLENGE_27,
  CHALLENGE_28,
  CHALLENGE_29,
  CHALLENGE_30,
} ChallengeFunction;

void challenge_01() {
  /* Challenge 1: Album code checksum
     Store the integer 4829 as a promo code, add its digits, and print the
     checksum.
  */
  int promo_code[] = {4, 8, 2, 9};
  int sum = 0;
  int i;
  // int test_sum = 4 + 8 + 2 + 9;
  for (i = 0; i < 4; i++) {
    sum = sum + promo_code[i];
    printf("%i\n", sum);
  }
  // printf("%i \n %i", sum, test_sum);
  // printf("%i\n", sum);
}

void challenge_02() {
  /* Challenge 2: Comeback countdown
     Convert 3671 seconds into hours, minutes, and seconds, then print the
     result as h:mm:ss.
  */
  int seconds_total = 3671;
  int hours = (seconds_total / 60) % 60;
  int minutes = 0;
  int seconds = 0;
  printf("sanity check:%i\n%i:%i:%i\n", seconds_total, hours, minutes, seconds);

  /* TODO: write your solution here */
}

void challenge_03(void) {
  /* Challenge 3: Score average
     A dance unit scored 7, 11, and 16 points in three rounds. Compute the
     average as a double and print it with exactly two digits after the decimal
     point.
  */

  int score_1 = 7;
  int score_2 = 11;
  int score_3 = 16;

  double avg = ((score_1 + score_2 + score_3) / 3);
  printf("avg = %f\n", avg);
  /* TODO: write your solution here */
}

void challenge_04(void) {
  /* Challenge 4: Playlist wraparound
     Suppose a setlist has 8 songs numbered 0 through 7.
     Starting at song 6, move forward by 5 positions using modulo arithmetic
     and print the final index.
  */

  /* TODO: write your solution here */
}
void challenge_05(void) {
  /* Challenge 5: Anniversary leap year
     Store the year 2000 and determine whether it is a leap year using the real
     Gregorian rules. Print `YES` or `NO`.
  */

  /* TODO: write your solution here */
}

void challenge_07(void) {
  /* Challenge 7: Fanchant shift
     Store the uppercase character 'X', shift it forward by 3 letters with
     wraparound in the alphabet, and print the shifted character.
  */

  /* TODO: write your solution here */
}

void challenge_08(void) {
  /* Challenge 8: Lightstick code classifier
     Store the character '7' and print `digit` if it is a decimal digit;
     otherwise print `letter` or `other` as appropriate.
  */

  /* TODO: write your solution here */
}

void challenge_09(void) {
  /* Challenge 9: Vote cap
     Store the value 137. If it is below 0 print 0, if above 100 print 100,
     otherwise print the value itself.
  */

  /* TODO: write your solution here */
}

void challenge_10(void) {
  /* Challenge 10: Merch shipping
     Shipping costs 5 dollars for packages up to 10 pounds.
     For every pound over 10, add 2 dollars.
     If a box of albums weighs 16 pounds, print the shipping cost.
  */

  /* TODO: write your solution here */
}

void challenge_12(void) {
  /* Challenge 12: Bonus point filter
     Add the numbers from 1 through 20 that are divisible by 3 or 5 and print
     the total.
  */

  /* TODO: write your solution here */
}

void challenge_11(void) {
  /* Challenge 11: Stage cue chant
     Use a loop to print the values from 1 through 15.
     For multiples of 3 print Clap, for multiples of 5 print Shout,
     and for multiples of both print Encore.
     Print everything on one line with spaces between entries.
  */

  /* TODO: write your solution here */
}

void challenge_16(void) {
  /* Challenge 16: Weighted ranking score
     Create an int array with these values: 3, 1, 4, 1, 5.
     Multiply each value by its 1-based position and add the results, then
     print the total.
  */

  /* TODO: write your solution here */
}

void challenge_13(void) {
  /* Challenge 13: Energy switch count
     Given this array of stage energy levels: 1, 1, 2, 2, 2, 3, 1, 1
     count how many times the value changes from one element to the next and
     print the count.
  */

  /* TODO: write your solution here */
}

void challenge_18(void) {
  /* Challenge 18: Encore lineup rotate
     Create an int array with these values: 1, 2, 3, 4, 5.
     Rotate the array one step to the right and print the rotated values on one
     line separated by spaces.
  */

  /* TODO: write your solution here */
}

void challenge_20(void) {
  /* Challenge 20: Message word count
     Store the string "  stream   this new single  " and count its words.
     Treat runs of spaces as a single separator and print the word count.
  */

  /* TODO: write your solution here */
}

void challenge_14(void) {
  /* Challenge 14: Palindrome slogan
     Store the string "level" and determine whether it reads the same
     forward and backward. Print `YES` or `NO`.
  */

  /* TODO: write your solution here */
}

void challenge_15(void) {
  /* Challenge 15: Longest chant streak
     Store the string "aaabbccccd" and find the length of the longest
     consecutive run of the same character, then print that length.
  */

  /* TODO: write your solution here */
}

void challenge_19(void) {
  /* Challenge 19: First repeated letter
     Store the string "banana" and print the first character that appears
     more than once when scanning from left to right.
  */

  /* TODO: write your solution here */
}

void challenge_28(void) {
  /* Challenge 28: Signed ticket parsing
     Store the string "-2048" and convert it to an int without using atoi,
     strtol, or sscanf. Then add 10 and print the result.
  */

  /* TODO: write your solution here */
}

void challenge_22(void) {
  /* Challenge 22: Median vote function
     Write a function that takes three ints and returns the middle value.
     Call it with 14, 9, and 11, then print the returned value.
  */

  /* TODO: write your solution here */
}

void challenge_23(void) {
  /* Challenge 23: Pointer reorder
     Create two ints: 8 and 3. Write a function that uses pointers to reorder
     them so the smaller value comes first. After calling it, print both values.
  */

  /* TODO: write your solution here */
}

void challenge_24(void) {
  /* Challenge 24: Merch inventory total
     Create a struct named Item with fields: name, price, and quantity.
     Make one item priced 12 with quantity 2 and another priced 18 with
     quantity 1. Print the total inventory value.
  */

  /* TODO: write your solution here */
}

void challenge_29(void) {
  /* Challenge 29: Stage config lookup
     Create an array of structs with these entries:
     {"host", "localhost"}, {"port", "8080"}, {"mode", "debug"}
     Search for the key "port" and print its value.
  */

  /* TODO: write your solution here */
}

void challenge_17(void) {
  /* Challenge 17: Second highest score
     Create an int array with these values: 8, 2, 9, 4, 7, 9.
     Find the second largest distinct value and print it.
  */

  /* TODO: write your solution here */
}

void challenge_27(void) {
  /* Challenge 27: Unique seat numbers
     Given the sorted array: 1, 1, 2, 2, 3, 3, 3, 5
     compact it in place so each value appears once, then print the compacted
     result on one line separated by spaces.
  */

  /* TODO: write your solution here */
}

void challenge_21(void) {
  /* Challenge 21: Toggle poster text
     Store the string "iTzY!" and flip the case of every alphabetic character.
     Leave non-letters unchanged and print the final string.
  */

  /* TODO: write your solution here */
}

void challenge_06(void) {
  /* Challenge 6: Cafe split
     Three friends order drinks after a concert. The bill is 48.00 dollars.
     Add 8.25% tax, then 20% tip on the taxed total, split the final amount
     between 3 people, and print the per-person amount with two decimals.
  */

  /* TODO: write your solution here */
}

void challenge_26(void) {
  /* Challenge 26: Parse trainee scores
     Store the string "12,-5,30,8" and parse the comma-separated integers
     yourself without using strtok or atoi. Sum the values and print the total.
  */

  /* TODO: write your solution here */
}

void challenge_25(void) {
  /* Challenge 25: Setlist file + dynamic memory
     Create a program that:
     - uses malloc to allocate space for 5 ints
     - opens `for-import.txt`, which already contains: 2 4 6 8 10
     - reads those 5 ints into the allocated memory
     - writes the same values to `setlist-export.txt` on one line
     - sums the imported values and prints the sum
   */

  /* TODO: write your solution here */
}

void challenge_30(void) {
  /* Challenge 30: Fan poll file report
     Open `for-import-poll.txt`, which already contains: 5 7 5 2 7 7
     Read the numbers, count how many times each distinct number appears, then
     write the report to `fan-report.txt` in ascending numeric order as
     `value:count`.
     Also print the same report to stdout.
   */

  /* TODO: write your solution here */
}

static void print_separator(int number) {
  printf("\n===== Challenge %d =====\n", number);
}

static void print_file_contents(const char *label, const char *path) {
  FILE *file = fopen(path, "r");
  int ch;
  int last_ch = '\n';

  printf("%s\n", label);
  if (file == NULL) {
    printf("(missing)\n");
    return;
  }

  while ((ch = fgetc(file)) != EOF) {
    last_ch = ch;
    putchar(ch);
  }

  if (last_ch != '\n') {
    printf("\n");
  }

  fclose(file);
}

struct Input {};

void user_input(int selection) {
  if (selection == 1) {
    challenge_01();
  } else {
    printf("failed.\n");
  }
}
typedef void (*challenge)(void);
challenge challenges[] = {
    NULL,         challenge_01, challenge_02, challenge_03,
    challenge_04, challenge_05, challenge_06, challenge_07,
    challenge_08, challenge_09, challenge_10, challenge_11,
    challenge_12, challenge_13, challenge_14, challenge_15,
    challenge_16, challenge_17, challenge_18, challenge_19,
    challenge_20, challenge_21, challenge_22, challenge_23,
    challenge_24, challenge_25, challenge_26, challenge_27,
    challenge_28, challenge_29, challenge_30,
};
int main(int argc, char **argv) {
  if (argc == 2) {
    int selection = atoi(argv[1]);
    user_input(selection);
  } else
    printf("fucked.");
  // if (argc == 2) {
  //   int temp_int_input = atoi(argv[1]);
  //
  //   switch (temp_int_input) {
  //   case 1:
  //     challenge_01();
  //   case 2:
  //     challenge_02();
  //   case 3:
  //     challenge_03();
  //   case 4:
  //     challenge_04();
  //
  //   default:
  //     return 0;
  //   }
  // } else {
  //   printf("fucked.");
  // };
  // print_separator(1);
  // printf("Your:\n");
  // challenge_01();
  // printf("Expected:\n23\n");
  // printf("\n");
  //
  // print_separator(2);
  // printf("Your:\n");
  // challenge_02();
  // printf("Expected:\n1:01:11\n");
  // printf("\n");
  //
  // print_separator(3);
  // printf("Your:\n");
  // challenge_03();
  // printf("Expected:\n11.33\n");
  // printf("\n");
  //
  // print_separator(4);
  // printf("Your:\n");
  // challenge_04();
  // printf("Expected:\n3\n");
  // printf("\n");
  //
  // print_separator(5);
  // printf("Your:\n");
  // challenge_05();
  // printf("Expected:\nYES\n");
  // printf("\n");
  //
  // print_separator(6);
  // printf("Your:\n");
  // challenge_07();
  // printf("Expected:\nA\n");
  // printf("\n");
  //
  // print_separator(7);
  // printf("Your:\n");
  // challenge_08();
  // printf("Expected:\ndigit\n");
  // printf("\n");
  //
  // print_separator(8);
  // printf("Your:\n");
  // challenge_09();
  // printf("Expected:\n100\n");
  // printf("\n");
  //
  // print_separator(9);
  // printf("Your:\n");
  // challenge_10();
  // printf("Expected:\n17\n");
  // printf("\n");
  //
  // print_separator(10);
  // printf("Your:\n");
  // challenge_12();
  // printf("Expected:\n98\n");
  // printf("\n");
  //
  // print_separator(11);
  // printf("Your:\n");
  // challenge_11();
  // printf(
  //     "Expected:\n1 2 Clap 4 Shout Clap 7 8 Clap Shout 11 Clap 13 14
  //     Encore\n");
  // printf("\n");
  //
  // print_separator(12);
  // printf("Your:\n");
  // challenge_16();
  // printf("Expected:\n32\n");
  // printf("\n");
  //
  // print_separator(13);
  // printf("Your:\n");
  // challenge_13();
  // printf("Expected:\n3\n");
  // printf("\n");
  //
  // print_separator(14);
  // printf("Your:\n");
  // challenge_18();
  // printf("Expected:\n5 1 2 3 4\n");
  // printf("\n");
  //
  // print_separator(15);
  // printf("Your:\n");
  // challenge_20();
  // printf("Expected:\n4\n");
  // printf("\n");
  //
  // print_separator(16);
  // printf("Your:\n");
  // challenge_14();
  // printf("Expected:\nYES\n");
  // printf("\n");
  //
  // print_separator(17);
  // printf("Your:\n");
  // challenge_15();
  // printf("Expected:\n4\n");
  // printf("\n");
  //
  // print_separator(18);
  // printf("Your:\n");
  // challenge_19();
  // printf("Expected:\na\n");
  // printf("\n");
  //
  // print_separator(19);
  // printf("Your:\n");
  // challenge_28();
  // printf("Expected:\n-2038\n");
  // printf("\n");
  //
  // print_separator(20);
  // printf("Your:\n");
  // challenge_22();
  // printf("Expected:\n11\n");
  // printf("\n");
  //
  // print_separator(21);
  // printf("Your:\n");
  // challenge_23();
  // printf("Expected:\n3 8\n");
  // printf("\n");
  //
  // print_separator(22);
  // printf("Your:\n");
  // challenge_24();
  // printf("Expected:\n42\n");
  // printf("\n");
  //
  // print_separator(23);
  // printf("Your:\n");
  // challenge_29();
  // printf("Expected:\n8080\n");
  // printf("\n");
  //
  // print_separator(24);
  // printf("Your:\n");
  // challenge_17();
  // printf("Expected:\n8\n");
  // printf("\n");
  //
  // print_separator(25);
  // printf("Your:\n");
  // challenge_27();
  // printf("Expected:\n1 2 3 5\n");
  // printf("\n");
  //
  // print_separator(26);
  // printf("Your:\n");
  // challenge_21();
  // printf("Expected:\nItZy!\n");
  // printf("\n");
  //
  // print_separator(27);
  // printf("Your:\n");
  // challenge_06();
  // printf("Expected:\n17.32\n");
  // printf("\n");
  //
  // print_separator(28);
  // printf("Your:\n");
  // challenge_26();
  // printf("Expected:\n45\n");
  // printf("\n");
  //
  // print_separator(29);
  // printf("Your:\n");
  // remove("setlist-export.txt");
  // challenge_25();
  // print_file_contents("File `setlist-export.txt`:", "setlist-export.txt");
  // printf("Expected:\n30\n");
  // printf("\n");
  //
  // print_separator(30);
  // printf("Your:\n");
  // remove("fan-report.txt");
  // challenge_30();
  // print_file_contents("File `fan-report.txt`:", "fan-report.txt");
  // printf("Expected:\n2:1 5:2 7:3\n");
  // printf("\n");
  //
  return 0;
}
