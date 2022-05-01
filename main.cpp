#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Customer 
{
  private:
    int id = -1; 
    vector<string> wishList = {"scissors", "soap", "tape", "nails", "eggs", "bread"}; 
    int wallet = rand() % 99; 
    int spent = 0; 

  public:
    Customer(int _id) 
    { 
      id = _id;
      random_shuffle(wishList.begin(), wishList.end()); // randomize the "master" wish list so each customer is different
      int removeCount = min(wishList.size()/4, rand() % wishList.size()); // how many items to remove from the end?
      for (int x = 0; x < removeCount; x++)
        wishList.pop_back(); // remove a random number of things from the wishList
    };

    vector<string> getWishList() {return wishList;} 

    int buyOne(string thisItem, int cost) 
    {  
      auto it = find (wishList.begin(), wishList.end(), thisItem);
      if (it != wishList.end())
      {
        if (wallet - cost >= 0)
        {
          cout << "Customer id# " << id << " purchased " << * it <<  " for " << cost << " dollars" << endl;
          wallet -= cost; 
          wishList.erase(it);// remove the item from the wishlist
          return cost; 
        }
        else
         cout << "Sorry, customer id# " << id << " has run out of money and cannot afford " << thisItem << " at a cost of $" << cost << endl;
         return 0;
      }
      else
      {
      cout << "ERROR, Customer " << id << " did not want or need " << thisItem << ".  This complaint is going on Yelp. (Exit Program)" << endl;
      exit(0);
      }
    }

    void printMe(string prefix) 
    {
      if (wishList.size() > 0)
      {
        cout << endl << prefix << "Customer id# " << id << " has " << wallet << " dollars left and still wants these items: " << endl;
        for(int x  = 0; x < wishList.size(); x++)
          cout << wishList.at(x) << ", ";
        cout << endl;
      }
      else 
      {
        cout << endl << prefix << "Customer id# " << id << " has " << wallet << " dollars left and does not want any additional items." << endl;
      }
    }

    ~Customer()
    {
        cout << "Goodbye from customer " << id << endl;
    }
};

int main() 
{
  const int totalCustomers = 15; 
  Customer *customer_pointers[totalCustomers]; 
  int totalSales = 0; 

  for (int x = 0; x < totalCustomers; x++)
    customer_pointers[x] = new Customer(x);
    
  for(int x = 0; x < totalCustomers; x++)
    {
      vector<string> wish_list = customer_pointers[x]->getWishList();
      for (int wish = 0; wish < wish_list.size(); wish++)
        {
        int aSale = customer_pointers[x]->buyOne(wish_list[wish], 7);
        customer_pointers[x]->printMe(" ");  
        if (aSale > 0)
          totalSales += aSale;
        else
          break;
        }
    }

  for(int x = 0; x < totalCustomers; x++)
   delete customer_pointers[x];  

  cout << "Your store earned " << totalSales << " dollars today!" << endl; 
}