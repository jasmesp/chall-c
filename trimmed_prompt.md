codex resume 019ceb2d-a8ee-70b3-a0fd-f8d9fafd4a20

## Goal

Create a rapid-fire C workbook that still uses stdout for quick evaluation, but expects students to combine concepts, reason a little, and solve small practical problems. the challenge set should feel rewarding as it gets harder.

This must be enforced strongly:

- do not generate rote “type this again” challenges
- do not generate thin syntax drills whose only purpose is to prove the student can write a `printf`, assign one variable, or write a bare loop
- do not generate challenge sets padded with near-duplicates
- do not keep a weak challenge just because it is traditional or easy to grade

If a challenge mostly asks the student to mechanically restate obvious syntax with little or no decision-making, replace it with something better.

## Core constraints

- Use standard C with a normal dev setup only.
- Prefer common headers such as `stdio.h`, `stdlib.h`, `string.h`, `ctype.h`, and `stdbool.h` when useful.
- Use `gcc` as the expected compiler target.
- Keep everything in a single student-facing source file named `trimmed.c`.
- Include a `Makefile` so the student can just type `make`.
- The file must compile before the student starts.
- The student should be able to open one file, solve stubs, compile, and compare output.

## Challenge design requirements

- Generate about 30 challenges.
- Escalate difficulty in a satisfying way.
- The first few challenges can still be short, but they should require actual thinking, not just typing a `puts`, assigning one variable, or doing `29 % 5`.
- If a challenge is solved merely by setting up a basic loop, it is too easy.
- Prefer exercises that combine 2 or more familiar concepts.
- Avoid repetition: no clusters of challenges that feel like the same skill with slightly different numbers.
- Do not include filler tasks whose main purpose is “prove you can write syntax.”
- Be aggressively skeptical of anything that feels like a first-hour beginner worksheet.
- Reject challenge ideas that mainly test whether the student can type syntax they already know.
- Reject challenge ideas that are only minor numeric variations of an earlier challenge.
- Every challenge should create at least a small problem-solving moment.
- Keep the overall level in the fundamentals-to-moderate range rather than algorithm-contest mode.
- Solutions should still generally stay under about 100 lines.
- Keep challenges standalone.

## Tone and theme

- Avoid sterile tutorial phrasing.
- Use a light 3rd/4th gen K-pop theme where it fits.
- Keep the theme to girl groups only.
- Do not reference TWICE.
- The theme should add flavor, not replace technical clarity.

## Workbook prompt format

- Put challenge instructions in comments inside each stub function.
- Do not include the exact expected stdout in the prompt comments.
- The prompt should describe what to compute, transform, print, or write, but not hand over the literal final answer unless unavoidable.
- Avoid making the prompt trivially back-solvable from a shown answer.
- Keep prompts concise and readable in an editor.

## Workbook structure

- Include a short header comment explaining the workflow.
- Use one stub function per challenge, such as `void challenge_01(void)`.
- Put the prompt comment at the top of each stub.
- Add a short TODO comment below the prompt.
- Leave 5 real blank lines after the TODO comment before the closing brace of each stub.
- Reorder the function definitions in the file so the difficulty curve is visible while scrolling.
- The student should feel the progression in the file itself, not only in `main()`.

## main function behavior

- Use a single `main`.
- For each challenge, print a separator like `===== Challenge N =====`.
- Then print `Your:` and call the challenge function.
- After the student output, print `Expected:` and then the exact expected stdout for that challenge.
- Do not print `Expected:` before the student output.
- Keep the expected answers in `main()`, not in the challenge comments.

## File I/O rules

- Any challenge that involves reading from a file must have that input file already created in the repo.
- Use a filename starting with `for-import` and give it an appropriate extension.
- It is fine for multiple challenges to share the same import file.
- Any challenge that writes to a file must name the required output file explicitly in the prompt.
- For write-to-file challenges, `main()` should help verify success by reading that file back and printing its contents when useful.
- Use judgment; this is not meant to become over-engineered.

## Supporting files

When generating this trimmed workbook, also create:

- `Makefile`
  - `make` should compile and run `trimmed.c` using `gcc`
  - include at least a `clean` target
- `trimmed-hints.md`
  - rescue-level hints only
  - no full solutions
  - one section per challenge
- any `for-import*` files needed by the file-reading challenges

## Difficulty guidance

Good fit:
- arithmetic combined with formatting or decomposition
- conditionals with realistic rule handling
- arrays plus scanning, filtering, or transformation
- strings plus loops and state tracking
- helper functions
- pointers used for a real task
- structs plus aggregation or lookup
- parsing small hard-coded formats
- file I/O paired with aggregation, formatting, or verification

Avoid overusing:
- hello world style printing
- one-step math drills
- bare “count from 1 to 5” loops
- several nearly identical array scans in a row
- several nearly identical string counts in a row
- challenge text that gives away the exact answer too easily

Hard rule:
- if a challenge feels like “can you type the syntax for X,” it should not be in this workbook
- if a challenge feels like “same task as before, different literals,” it should not be in this workbook
- if a competent student would find it patronizingly easy, rewrite it or cut it

Still avoid:
- linked lists
- trees
- graphs
- concurrency
- sockets
- platform-specific APIs
- advanced preprocessor tricks
- undefined-behavior gotchas as the point of the task

## Output style for the actual workbook file

- Keep the workbook directly editable.
- Do not hide behavior behind macros, menus, or command-line parsing.
- Keep naming simple.
- Success should still be fast to judge from stdout and any printed file verification.

## Verification reminder

After generating `trimmed.c`:

- verify that the file compiles
- verify the `Makefile` works with `make`
- verify at least one stub has the TODO comment followed by 5 real blank lines
- verify any required `for-import*` files exist

## Intent

This workbook is supposed to feel like:

- “you already know the baby stuff”
- “now combine fundamentals in useful ways”
- “each solved challenge feels a little more earned”

not:

- “type exactly what the prompt already told you”
- “reverse-engineer the answer from the comment block”
- “prove once again that you can type a `for` loop”
- “fill out the workbook with sterile syntax repetition”
