// discussion on algorithms and iterators
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

struct Employee {
  int id;
  std::string name;
  double salary;
};

void displayEmployee(const Employee &emp) {
  std::cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $"
            << emp.salary << std::endl;
}

int main(int argc, char *argv[]) {

  std::vector<Employee> employees = {{101, "Void", 6767.69},
                                     {102, "Max", 8008.69},
                                     {103, "Dustin", 1729.90},
                                     {104, "Mike", 2020.90},
                                     {104, "Will", 1979.78}};

  // using lamdas
  std::sort(employees.begin(), employees.end(),
            [](const Employee &e1, const Employee &e2) {
              return e1.salary > e2.salary;
            });

  std::cout << "Employees Sorted by salary -> highest to lowest \n";
  std::for_each(employees.begin(), employees.end(), displayEmployee);

  std::vector<Employee> highEarners;
  std::copy_if(employees.begin(), employees.end(),
               std::back_inserter(highEarners),
               [](const Employee &e) { return e.salary > 2000; });

  std::cout << "High Earning Employees are: \n";
  std::for_each(highEarners.begin(), highEarners.end(), displayEmployee);

  double totalSalary = std::accumulate(
      employees.begin(), employees.end(), 0.0,
      [](double sum, const Employee &emp) { return sum + emp.salary; });

  double averageSalary = totalSalary / employees.size();

  // returns the object with the highest salary
  auto hishestSalary =
      std::max_element(employees.begin(), employees.end(),
                       [](const Employee &e1, const Employee &e2) {
                         return e1.salary < e2.salary;
                       });

  return 0;
}
