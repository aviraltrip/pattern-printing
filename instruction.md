INSTRUCTIONS

1. Create your own directory at the repository root named with your GitHub username (or your name).
   - Example: `your-name/`

2. Inside your directory add one C++ file per pattern you implement.
   - Use the pattern number from `README.md` as a prefix and a short descriptive name,
    
    e.g. : `pattern01.cpp`

   - Each file must contain a `main()` that reads the input number exactly as shown in `README.md` and prints the expected pattern to stdout.
   - At the top of each file include a short comment with the sample input and expected output.

3. Coding guidelines
   - Use standard C++.
   - No external libraries required.
   - Keep code readable and well-formatted. Add brief comments where logic is non-obvious.
   - Handle the input constraints assumed in the pattern (reasonable n values). No need for heavy optimization.

4. Build and run locally before pushing
   - Compile:
     ```bash
     g++ pattern01.cpp
     ```
   - Run (example):
     ```bash
     ./a.out (for UNIX based) 
     ./a.exe (for windows)
     ```

5. Branch, commit and open a PR
   - Create a branch from `main` named like:
     - `add/<your-username>-patterns` or `feature/<your-username>/patterns`
   - Add and commit your files under your directory.
   - Push the branch and open a Pull Request to `main` with a clear title, e.g. `Add pattern solutions — <your-name>`.
   - In the PR description list which pattern numbers you implemented and any notes (optional).

6. Review and merge
   - Others will review your PR and may request changes. Please respond to review comments and push fixes to the same branch.
   - Once approved, a maintainer or authorized contributor will merge the PR.

Thank you for contributing — create your directory, add C++ solutions for the patterns from `README.md`, and open a PR for review and merge.