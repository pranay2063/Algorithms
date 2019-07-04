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
