These are the instructions for the evaluation.
The main goal is to write maintainable code, in an incremental way.

You have two hours to complete the evaluation.
Afterwards, send your code in a zip file,
including the version control directory ( .git ) to vivien@eugensystems.com .

Goal:

- Write a C++ program passing the test suite.

Instructions:

- Get the package TddGame-Eugen.zip. It contains an executable program for your platform.
- This program is a test running, implementing a secret test suite. Usage: "tddgame-eugen.exe <your_program>".
- You must write "your_program", which takes exactly one command-line argument, and then prints its result on stdout.

Example:

- Compile the following C++ program, to "hello.exe":

  #include <iostream>
  int main() { std::cout << "hello" << std::endl; return 0; }

- Then execute 'tddgame-eugen.exe hello.exe'. You will see an error: 'tddgame-eugen.exe' is telling your that "your_program" is expected to print "(0;0) (1;0)" when its input is "(0;0) (1;0)".
- Now modify your program this way, and recompile it to "hello.exe":

  #include <iostream>
  int main() { std::cout << "(0;0) (1;0)" << std::endl; return 0; }

  This is a fake a program that returns a fixed string.

- Then execute again `./tddgame-eugen.exe hello.exe` . The first test will pass, and the next one will reveal itself, and fail.


Remarks:

- You are expected to use git. This is the way we see how you work.
- C++ is expected (you may rely on the C standard library if it makes your life easier).
- Use your favorite tools (compiler, editor, tests, google, etc.).
- Don't rely on external tools that would do the job for you: this would miss the point of this exercise (you can use the standard libraries).
- Don't copy paste code from stackoverlow or any other external source.
- It's OK not to reach the end. Go as far as you can, while keeping your code clean: quality is preferred to quantity, and unnecessarily complex code will be penalized.
