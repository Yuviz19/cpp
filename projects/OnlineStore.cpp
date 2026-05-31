// a project from the tutorials to learn STL (standard template library)
// STL - it has 3 major components
// 1. containers  - data strucnture where u store the data
// 2. algorithm - the algorithms that u apply on the containers, to get some
// work done
// 3. Iterators - it is used to traverse and manipulate elements within a
// container

// data strucntures used
// Vector stores list of products,
// list order, it is a sequence container that is used to implement a doubly
// linked list deque visits, (double ended queue), insertion and deletion from
// both sides, queue is also an option but its less effecient set categories,
// stores unique values for some data map stock count, stores the key-value
// pairs for some data multimap allowing multiple order per customer,
// unordered_map, unordered_set

#include <ctime>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

struct Product {
  int prodId;
  std::string name;
  std::string category;
};

struct Order {
  int orderId;
  int prodId;
  int quantity;
  std::string customerId;
  std::time_t orderDate;
};

int main(int argc, char *argv[]) {
  std::vector<Product> products = {
      {101, "Laptop", "Electronics"},   {102, "Smart Phone", "Electronics"},
      {103, "Coffee Maker", "Kitchen"}, {104, "Blender", "Kitchen"},
      {105, "Study Lamp", "Home"},
  };

  std::deque<std::string> recentCurtomer = {"C001", "C002", "C003"};
  recentCurtomer.push_back("C004");
  recentCurtomer.push_back("C005");

  std::list<Order> orderHistory;
  orderHistory.push_back({1, 101, 1, "C001", std::time(0)});
  orderHistory.push_back({2, 102, 2, "C002", std::time(0)});
  orderHistory.push_back({3, 103, 1, "C003", std::time(0)});

  std::set<std::string> categories;

  for (const auto &product : products) {
    categories.insert(product.category);
  }

  std::map<int, int> procuct_stock = {
      {101, 10}, {102, 20}, {103, 15}, {104, 5}, {105, 7}};

  std::multimap<std::string, Order> customerOrders;
  for (const auto &Order : orderHistory) {
    customerOrders.insert({Order.customerId, Order});
  }
  // unlike map, multimap allows user to store multiple values associated to
  // single key

  for (const auto &order : customerOrders) {
    std::cout << order.first << " " << order.second.orderDate << std::endl;
  }
  // a map or a multimap can not be printed directly, hence the first and second
  // keywords

  std::unordered_map<std::string, std::string> customerData = {
      {"C001", "Alice"}, {"C002", "Void"},  {"C003", "Max"},
      {"C004", "Mike"},  {"C005", "Lucas"},
  };
  // the key difference between map and unordered_map is that, a map keeps data
  // sorted (uses Binary search tree) while that is upside, unordered_map gives
  // high effeciency on the other hand (used hash tables)

  std::unordered_set<int> uniqueProductIds;
  for (const auto &product : products) {
    uniqueProductIds.insert(product.prodId);
  }

  return 0;
}
