# Goal:
This lab invovles developing C++ code in ** main() ** (only) that utilizes an existing ** Customer ** class which has already been written for you. You will need to learn and utilize the "interface" (constructor and methods) of the Customer class to properly finish your lab.

Your goal is to sell items to 15 customers who enter your shop on a single day, based on each customer's unique wish list of items, so that your shop generates at least $100 in a single day, represented by a single "run" of you program.

Note: This lab can be implemented in fewer than 20 lines of code in main. (this is not a complex solution!)

# Background:
You run a specialty shop that sells all items in the shop to customers for the same unit price per item. As the owner of the shop, you get to decide what the price for all items will be each day. 

Examples: 
- soap: $1, milk $1, bread $1. 
- Or: soap: $25, milk $25, bread $25
- Or: soap: $50, milk $50, break $50

You will choose your item price before you run your program, and adjust the price and re-run your program until you achieve your goal.

You must sell items to customers who enter your shop on a single day, based on each customer's unique wish list of items.
- You will collect money from each customer as they buy each item, one at a time.  
- You can assume that your store will have everything a customer would ever request from their wish list (you do not need to keep track of inventory).
- You can also assume that each customer will pay whatever amount you demand UNTIL they run out of money in their wallet.  
- You may not change the price of each item during the day or between customers (your item price must remain the same during your entire program execution).

Your goal is to collect at least $100 of sales from customer sales, and to print out your total sales before your program stops.

Note that:
- Each customer will have a different wish list of items, and that each wish list will vary in length ( no two customers will have the same wish list).  
- Each customer will have a different amount of money in their wallet (each customer will have from zero to 22 dollars in their wallet)
- Customers will not know how much a particular item costs until they try to buy that item at the price you set for it.
- Customers will pay as much as you demand for a particular item until they run out of money.
- There is no guarantee that a customer will be able to afford all of the items they want to buy from their wishlist.  That is, a customer may run out of money after purchasing only a few items from their wish list. You will know that a customer has failed to buy an item if they give you zero dollars for that item.  That is your clue that a customer has run out of money, and you should simply move on to the next customer.
- A customer will not buy the same item from their wish list more than one time. If you try to sell a customer something they do not want, they will stomp out of your store unhappy and post on social media (your program will terminate immediately, from within the customer's buyOne() method - read more below).

You should start by charging $1 for each item, but you will need experiment, re-running your program with a different unit price to "tune" your store's sales to reach or exceed $100.

 

# Customer Class Interface:
Your Customer Class has already been written for you. All of its data members are private and you may only access its public methods and its constructor.  We'll refer to the combination of "constructor" and "methods" for this class as its "interface".

- **Customer Constructor**: The customer constuctor requires one argument that provides the customer with a unique ID.  
  - You must create 15 dynamically allocated customer instances in main using the "new" keyword and the default constructor
  - You must assign the pointer returned from the "new" keyword to a position in the customers[ ] array of pointers in main().
  - Each customer instance you create in main will have:
    - a randomly chosen list of possible wish list items, each designated by a simple string name like: "bread", "soap", etc.
    - a randomly chosen amount of money in their wallet between zero and $22 that they can spend purchasing items.

- **vector<string> getWishList()**: This method has no arguments, but it returns a vector of strings:
  - The vector will represent the list of items the customer wants to buy
  - The list will be variable in size, so you will need to use the size() method to determine its size once it is returned to main().
 

- **int buyOne(string thisItem, int cost)**: This method requires 2 arguments and returns an integer dollar ammount
  - The ** thisItem ** argument is a string that represents what item the customer is buying from you.
  - The cost argument is an integer that represents how much the customer must pay from their wallet (if they can afford it) for the item.
  - The method will return (pay you) the cost if they can afford the item and if it is currently in their wishlist
  - The method will return zero dollars if the customer cannot afford the tiem.
  - The program will terminate immediately if the item is not currently on the customer's wish list (or if you have already sold it to them)
  

# Main()
- You will need to develop main()
- You must
  - Create Only 15 new dynamic instances of the Customer class, passing the constructor a unique ID for each instances
  - Assign the pointer that is returned from the "new" keyword to the a position in the customers[ ] array of Customer pointers.
  - Try to sell as many items as possible to each Customer that is referenced by the customers[] array via a Customer pointer.
  - use the same item price for all items you sell.
  - Increment your totalSales every time you make a sale to a customer using the buyOne() method.
  - Print out your total sales after you have serviced every customer.
  - Delete all instances of the Customer class using the "delete" keyword before your program terminates.
  - Re-run your program until you find an item price that generates at least $100 in total sales


# Hints:
- review the Customer printMe() method for clues about how to access members of a vector of strings
- In main(), you will need an outer loop for each customer, and an inner loop for each one of that customer's wish list items.
- Your program will terminate immediately if you try to sell a customer something they do not want or that you have alredy sold them.
 

# Scoring (100 Points possible)
Your code must compile and run with no run-time warnings or errors in C++ Version 11 to receive credit.

- Your total sales must be at least $100
- You deleted all Customer instances, automatically calling the destructor for each instance, which prints a goodbye message.


# Sample Output:
Please note that your output does not need to match these shown below.  

However, you may find it helpful to have all of your methods print out a very descriptive message in each case to ensure you know what is going on.  For example, each line of output below identifies the name of the  method that printed it (ex: "setEngineOn()") , along with a simple message indicating what happened (ex: "The car engine is now running").  This is far more verbose than we would normally require - doing it in this LAB will help you (and me) more easily determine that your code is working properly.
```
Customer id# 0 purchased tape for 1 dollars
Customer id# 0 purchased bread for 1 dollars
Customer id# 0 purchased soap for 1 dollars
Customer id# 0 purchased eggs for 1 dollars
Customer id# 0 purchased nails for 1 dollars
Customer id# 1 purchased scissors for 1 dollars
Customer id# 1 purchased tape for 1 dollars
Customer id# 1 purchased bread for 1 dollars
Customer id# 1 purchased soap for 1 dollars
Customer id# 1 purchased nails for 1 dollars
Customer id# 2 purchased tape for 1 dollars
Customer id# 2 purchased scissors for 1 dollars
Customer id# 2 purchased eggs for 1 dollars
Customer id# 2 purchased soap for 1 dollars
Customer id# 2 purchased bread for 1 dollars
Customer id# 3 purchased eggs for 1 dollars
Customer id# 3 purchased soap for 1 dollars
Customer id# 3 purchased bread for 1 dollars
Customer id# 3 purchased scissors for 1 dollars
Customer id# 3 purchased tape for 1 dollars
Customer id# 4 purchased bread for 1 dollars
Customer id# 4 purchased soap for 1 dollars
Customer id# 4 purchased eggs for 1 dollars
Sorry, customer id# 4 has run out of money and cannot afford tape at a cost of $1
Customer id# 5 purchased scissors for 1 dollars
Customer id# 5 purchased tape for 1 dollars
Customer id# 5 purchased eggs for 1 dollars
Customer id# 5 purchased bread for 1 dollars
Customer id# 5 purchased soap for 1 dollars
Customer id# 6 purchased scissors for 1 dollars
Customer id# 6 purchased nails for 1 dollars
Customer id# 6 purchased bread for 1 dollars
Customer id# 6 purchased eggs for 1 dollars
Customer id# 6 purchased soap for 1 dollars
Customer id# 7 purchased eggs for 1 dollars
Customer id# 7 purchased tape for 1 dollars
Customer id# 7 purchased bread for 1 dollars
Customer id# 7 purchased nails for 1 dollars
Customer id# 7 purchased scissors for 1 dollars
Customer id# 8 purchased eggs for 1 dollars
Customer id# 8 purchased nails for 1 dollars
Customer id# 8 purchased scissors for 1 dollars
Customer id# 8 purchased bread for 1 dollars
Customer id# 8 purchased soap for 1 dollars
Customer id# 9 purchased soap for 1 dollars
Customer id# 9 purchased bread for 1 dollars
Customer id# 9 purchased nails for 1 dollars
Sorry, customer id# 9 has run out of money and cannot afford tape at a cost of $1
Sorry, customer id# 10 has run out of money and cannot afford tape at a cost of $1
Customer id# 11 purchased bread for 1 dollars
Customer id# 11 purchased soap for 1 dollars
Sorry, customer id# 11 has run out of money and cannot afford tape at a cost of $1
Customer id# 12 purchased tape for 1 dollars
Customer id# 12 purchased bread for 1 dollars
Customer id# 12 purchased soap for 1 dollars
Customer id# 12 purchased nails for 1 dollars
Customer id# 12 purchased eggs for 1 dollars
Customer id# 12 purchased scissors for 1 dollars
Customer id# 13 purchased tape for 1 dollars
Customer id# 13 purchased scissors for 1 dollars
Customer id# 13 purchased eggs for 1 dollars
Customer id# 13 purchased nails for 1 dollars
Customer id# 13 purchased bread for 1 dollars
Customer id# 13 purchased soap for 1 dollars
Customer id# 14 purchased tape for 1 dollars
Customer id# 14 purchased soap for 1 dollars
Customer id# 14 purchased nails for 1 dollars
Customer id# 14 purchased scissors for 1 dollars
Customer id# 14 purchased bread for 1 dollars
Goodbye from customer 0
Goodbye from customer 1
Goodbye from customer 2
Goodbye from customer 3
Goodbye from customer 4
Goodbye from customer 5
Goodbye from customer 6
Goodbye from customer 7
Goodbye from customer 8
Goodbye from customer 9
Goodbye from customer 10
Goodbye from customer 11
Goodbye from customer 12
Goodbye from customer 13
Goodbye from customer 14
Your store earned 65 dollars today!
```
 
# Submission:
Submit your repl link on Canvas

 
---

#### Copyright © 2022 by Jeff Yates

All rights reserved. No part of this publication may be reproduced, distributed, or transmitted in any form or by any means, including photocopying, recording, or other electronic or mechanical methods, without the prior written permission of the publisher, except in the case of brief quotations embodied in critical reviews and certain other noncommercial uses permitted by copyright law.

 