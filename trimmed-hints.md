# Trimmed Challenge Hints

These are for the moment when you have stared at the screen long enough to start negotiating with the compiler.

They are meant to nudge, not solve.

## Challenge 1: Album code checksum

Break the number apart one digit at a time with `% 10` and `/ 10`.

## Challenge 2: Comeback countdown

Use integer division for hours and minutes, then `% 60` for the leftover seconds.

`printf("%d:%02d:%02d\n", ...)` is your friend.

## Challenge 3: Score average

If every value in the expression is an `int`, C will do integer division first.

Make at least one part of the division a `double`.

## Challenge 4: Playlist wraparound

This is a modulo problem: `(start + move) % total`.

## Challenge 5: Anniversary leap year

A year is a leap year if it is divisible by 4, except century years must also be divisible by 400.

## Challenge 6: Fanchant shift

Characters are just small integers in C.

Shift inside the `'A'` to `'Z'` range, then wrap back around.

## Challenge 7: Lightstick code classifier

You can test whether a character is a digit by checking whether it falls between `'0'` and `'9'`.

## Challenge 8: Vote cap

Think in three branches: below range, above range, or already okay.

## Challenge 9: Merch shipping

Handle the base price first, then only charge extra for pounds above 10.

## Challenge 10: Bonus point filter

Loop through the numbers and add only when `n % 3 == 0 || n % 5 == 0`.

## Challenge 11: Stage cue chant

Check the “both” case before the separate 3 and 5 cases.

If you check 3 first, the shared multiples will never reach the combined branch.

## Challenge 12: Weighted ranking score

This is not a plain sum.

Multiply each array element by its 1-based position, not its 0-based index.

## Challenge 13: Energy switch count

Compare each element to the one right before it.

Start at index `1`, not `0`.

## Challenge 14: Encore lineup rotate

Save the last element before you overwrite anything.

Then shift the rest from right to left.

## Challenge 15: Message word count

Count a word only when you enter one from a run of spaces.

A small “inside a word / outside a word” flag helps a lot.

## Challenge 16: Palindrome slogan

Use two indexes: one from the front and one from the back.

Stop as soon as you find a mismatch.

## Challenge 17: Longest chant streak

Track both the current run length and the best run length seen so far.

Update the best value before you reset the current run.

## Challenge 18: First repeated letter

For each character, look ahead to see whether it appears again later.

The first character that satisfies that condition is your answer.

## Challenge 19: Signed ticket parsing

Check for an optional leading `-` first.

Build the number one digit at a time with `value = value * 10 + digit`.

## Challenge 20: Median vote function

You do not need sorting.

Think about which value is not the min and not the max.

## Challenge 21: Pointer reorder

Compare the two pointed-to values and swap them only if they are out of order.

## Challenge 22: Merch inventory total

A struct field is accessed with `item.field`.

Total value is `price * quantity` for each item, then summed.

## Challenge 23: Stage config lookup

An array of structs can be searched with a loop.

Compare the current key against `"port"` until you find a match.

## Challenge 24: Second highest score

Track the largest and second-largest distinct values separately.

Be careful not to let a duplicate of the maximum become the second-largest.

## Challenge 25: Unique seat numbers

Use one index for reading and one for writing.

When the current value differs from the last kept value, copy it forward.

## Challenge 26: Toggle poster text

Check lowercase and uppercase ranges separately.

To flip case, move by the distance between `'a'` and `'A'`.

## Challenge 27: Cafe split

This is multi-step arithmetic: tax first, tip on the taxed total second, split last.

Use floating-point math all the way through.

## Challenge 28: Parse trainee scores

You need to parse signed integers separated by commas.

Treat a comma like “end of current number, add it to the running sum, reset parser state.”

Do not forget to add the final number after the loop ends.

## Challenge 29: Setlist file + dynamic memory

This challenge has a clear sequence:

Allocate memory.

Fill the array.

Open a file for writing and write the numbers.

Reopen for reading.

Read the numbers back and sum them.

Free the memory and close every file you open.

## Challenge 30: Fan poll file report

You do not need a fancy data structure for this exact input.

Read the numbers, keep counts for the distinct values you have seen, then print the report in ascending order.
