BigShell
========

Specifications:

   Parse command-line input into commands to be executed

   Execute a variety of external commands (programs) as separate processes

   Implement a variety of shell built-in commands within the shell itself

   Perform a variety of i/o redirection on behalf of commands to be executed

   Assign, evaluate, and export to the environment, shell variables

   Implement signal handling appropriate for a shell and executed commands

   Manage processes and pipelines of processes using job control concepts


Learning Outcomes:

   Describe the Unix process API (Module 3, MLO 2)

   Write programs using the Unix process API (Module 3, MLO 3)

   Explain the concept of signals and their uses (Module 3, MLO 2)

   Write programs using the Unix API for signal handling (Module 3, MLO 3)

   Explain I/O redirection and write programs that can employ I/O redirection (Module 3, MLO 4)

   
The functionalities implemented within this POSIX-Shell program are:


   Built-in shell utilities:

      cd – Change the working directory

      exit – Cause the shell to exit

      unset – unset values of variables


   Signal handling behavior of the shell, and commands

Command execution

   Expansion of:

      Command words

      Assignment values

      Redirection filename operands

   I/O Redirection of the following operators:
      ''>'    '<'     '<>'    '>>'     '>|'     '>&'     '<&'


   Variable assignment


   Simple commands:

      Foreground commands -- ;

      Background commands -- &

Shell pipelines -- |

Job control