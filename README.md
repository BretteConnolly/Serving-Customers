What the program does:
-- Sells items of uniform price to 15 customers, each with a randomly generated budget between $0 and 99
-- Optimizes which uniform price will earn the most money. For example, a run of the program with a $1 price generated earnings of $72, while a $7 price generated earnings of $441.

What the program entails:
-- Programmed in C++
-- Customer class
-- Constant number of customers
-- Dynamically generates an array of customer pointers, with the attributes and methods of each customer object allocated on the heap
-- Randomly generated vector wishlist for each customer, with various sizes from 1-6 and various orders of preference, for a total of 63 possible unique wishlists
-- buyOne method that causes a customer to continue purchasing items from their wishlist, until either they run out of money or they buy every item on their wishlist
-- printMe function to record each purchase
-- Keeps track of total earnings from all customers
-- Destructor to delete customer objects from the array at the end of the program

Further applications:
-- Can be used as a simple model to simulate how much a business would earn from various numbers of customers, budgets, and prices
