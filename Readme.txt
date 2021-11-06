*******************************************************
*  Name      :  Ruibin Peng, Chongtian Zhang
*  Student ID:  107028696, 109414051
*  Class     :  CSC 2421 001
*  HW#       :  Final Project
*  Due Date  :  Dec. 11, 2020
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program does create a database that contains the best movies and Academy Awards information since 1927.
Provides searching, sorting in database,
Also lets user to modify the database.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that push functions
   to read data from file or input data. Show the menu to let user choice
   and then run the program

Name: function.h
    Set up functions for movies information.

Name: function.cpp
    All the functions to add, sort, search, and output the data about movies information.
    For add function, we create a temporary object, ask user for its information then push it into vector.
    For all search functions, we ask user for keyword then traverse vector to find matching object for keyword.
    For output function, we put whole vector to ofstream to create a new file to store them.

Name:  functions2.h
   Set up functions for actors or actress information.

Name: functions2.cpp
   Same as functions.cpp and all the functions for the data are about actor-actress.

Name: pictures.csv
   The data for movies.

Name: actor-actress.csv
      The data for actor adn actress.


*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.

   The program was developed and tested on gnu g++ 4.4.2.  It was
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands
       % unzip [Zhang&Peng Final Project]

   Now you should see a directory named homework with the files:
        main.cpp
        functions.cpp
        functions.h
        functions2.cpp
        functions2.h
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [Zhang&Peng Final Project]

    Compile the program by:
    % make

3. Run the program by:
   % ./[main]

4. Delete the obj files, executables, and core dump by
   %./make clean