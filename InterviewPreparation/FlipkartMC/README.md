**1. Design a system like Jira** 

    It should have the following functionalities :
    User should be able to create Task of type Story, Feature, Bugs. Each can have their own status.
    Stories can further have subtracts.
    Should be able to change the status of any task.
    User should be able to create any sprint. Should be able to add any task to sprint and remove from it.
    User should be able to print
    Delayed task
    Sprint details
    Tasks assigned to the user
        
**2. Task Planner System**

    Implement a Task Planner System.
    Sprint, story, task, epic, sub story etc. 
    Basic functionalities like create new sprint, delete sprint. 
    change assignee.
    Change task status etc. 
    Code should be modular and extensible.
    
**3. Ride sharing system**

    Design offerRide and shareRide mechanism on basis of fastest and earliest ride

    Create an application that will add user and add their vehicle, there will be two categories one who is offering ride and other who is selecting ride.

    offerRide(user_name, vehicle_no, origin, destination, start_time, duration)
    selectRide(user_name, origin, destination, parameter)

    return parameter is fastest ride which will be on shortest duration

**4. System for cab company (aggregator)**
    
    Design a simple solution for a cab company. Queries are given, output the correct values corresponding to it.

    Q1 : AVG DriverID => give the average rating points for the driver ID given
    Q2 : AVG CustomerID => give the average rating points for the customer ID given
    Q3 : TRIP CustomerID Rating DriverID Rating => Add the trip and rating points with customerID and driverID
    Q4 : TOP Drivers => List the top drivers sorted according to the rating points
    Q5 : TOP Customers => List the top customers sorted according to the rating points
    Q6 : ELIGIBLE CustomerID => Give the eligible drivers for the customerID. Eligible drivers had the following criteria ->
        (i) The average rating of the driver should be greater than the customer
        (ii) If the customer had given the driver a 1 star rating earlier then this driver is not to be considered
        (iii) If there are no drivers found, print the ones for which the customer had rode earlier

    The initial data was to be hardcoded and the solution was to be designed efficient all edge cases handled and optimised.
    
**5. Multi-level cache system design with different storage in each level**

    Candidates were divided into groups and each group was given different problems to solve. Full working code was required with any candidate’s preferred language. It was 90 min round.

    a. Read Operation : – Minimum time to read a particular key from cache system. This should be followed by writing the key in all levels above it. Eg. if “key” is found at level ‘i’, add this key to cache present at 1 to i-1 level.

    b. Write Operation: – Any write Operation should write  in cache of all levels.
    You can choose any algorithm for cache management like LRU, MRU.

    BONUS POINTS:-

    a. Show the current usage of each level cache.(Number of elements vs total Capacity of cache)
    b. Average read time and average write time.

    There was a long discussion on the code written and several test cases were given to check all boundary conditions.
    
**6. Text line editor**

    Implement a Text Line Editor which supports the following operations:

    Insert a line at a given line number
    Delete the specific set of lines
    Copy specific set of lines
    Paste the copied lines at given index
    Print the entire content
    Bonus-
        Undo command
        Redo command

**7. TextPad**

    I was asked to code a TextPad with following functionality:

    display() – to display the entire content
    display(n, m) – to display from line n to m
    insert(n, text) – to insert text at line n
    delete(n) – delete line n
    delete(n, m) – delete from line n to m
    copy(n, m) – copy contents from line n to m to clipboard
    paste(n) – paste contents from clipboard to line n
    undo() – undo last command
    redo() – redo last command
    They expected the textpad to be in memory(not as file). They also  expected to handle error gracefully and the program to be menu driven.

**8. Best Selling Price**

    You need to make a program in which

    1.) You can add a product -> addProduct(“p1”)
    2.) A user can purchase a product -> purchase(“u1″,”p1”)
    3.) A user can return a product -> returnProduct(“u1″,”p1”)
    4.) A user can be blacklisted and all of his purchases will be marked null -> blackListUser(“u1”)
    5.) Display the best selling product -> bestSelling()
    Best selling product will be the one which have been bought by most number of unique users.

    Bonus: Display the best selling products for each category.

    Evaluation: After you are done with your code, two Flipkart SDEs will run test cases on your code and evaluate it. They will also ask some questions around your code.
    
**9. Binary Tree Sequence**

    Given a binary tree as a sequence of (parent, child) tuples: (A B)(A C)(B G)(C H)(E F)(B D)(C E) Write a program to find following errors in the tree:
    E1: More than 2 children
    E2: Duplicate Tuples
    E3: Cycle present
    E4: Multiple roots
    E5: Multiple parents
    Input is a expression containing parent child relations. output is Error codes or success.

    Sample test cases : 
    Input: (A B)(A C)(B G)(C H)(E F)(B D)(C E) Output: Success
    Input: (A B)(A C)(A D) Output: E1
    Input: (A B)(A B) Output: E2
    Input: (A B)(B C)(C A) Output: E3
    Input: (A B)(C D) Output: E4
    Input: (A B)(B C)(A C) Output: E5
    
**10. JSON Constructor**

    You are given some equations which may contain > or = on different-different operand. For example there are valid input and invalid (a=5, b<a=50)

     String e1 = "a>b=1";
     String e2 = "a>b=2";
     String e3 = "a>c>e=3";
     String e4 = "a>c>f=4";
     String e5 = "b>a=5";
     String e6 = "a>b>c=5";
     String e7 = "b=7";
     String e8 = "a>b>c>d=99";
     String e9 = "a>b=99";

    You need to create JSON string from it. 
    {
     ‘a’: {
        ‘b’: [1,2,99],
        ‘c’: {
            ‘e’:3,
            ‘f’:4
             }
         },

     ‘b’: {
        ‘a’ : 5
          }
    }
    
    Highlighted one is invalid because they come they ask for overwrite the data (a>b>c = 5; C has e and f so we can overwrite.

    Input: You are given those string in string array
    Output: Construct JSON, Print it
    If you print in same manner as above (nice manner) +point

    I solved this problem using Trie. 
    One can see interviewee's implementation here: https://github.com/nitsgupta/practice/tree/master/JAVA/JsonBuilder
  
**11. Finite State Machine**

    Implement a finite state machine.
    – The machine should have one start state and can have multiple end states
    – It should be extensible (I should be able to add any number of states or transitions at any time)
    – I should be able to set notifications on or off for any state or for the whole state machine
    
**12. Regular Expressions**

    In a regular expression, * represents 0 or more repetitions for preceding character. & represents the regex preceeding it is at the end of string. and all small case letters represent themselves. For example:

    rat&
    Pass: bigrat, smallrat
    Fail: ratoulite rats

    a*b
    Pass: b, ab, aab
    Fail a, asd

    abc
    Pass: abc, abcd zabcd
    Fail: abdc, dabfc

    Write a code for it.
