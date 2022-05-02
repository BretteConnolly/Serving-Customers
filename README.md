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


Output:
![Serving Customers](https://user-images.githubusercontent.com/79230918/166170073-3d10d302-51b8-43dc-8c1c-99366ac8759e.jpg)

![Serving Customers 2](https://user-images.githubusercontent.com/79230918/166170086-1cd66a3d-ce48-4141-8c8d-f95873b28a33.jpg)

![Serving Customers 3](https://user-images.githubusercontent.com/79230918/166170090-06de7d17-cd45-44cf-8f4f-5d1b2a9d4282.jpg)

![Serving Customers 4](https://user-images.githubusercontent.com/79230918/166170093-0baceead-3878-45e8-99b0-804145ca15df.jpg)
