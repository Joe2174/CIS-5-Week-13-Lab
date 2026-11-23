#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

// Lab 13 — Joe Barron
// CIS 5 Week 13 · Names and a roster

struct Student 
{
  string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) 
{
      cout << s.id << " " << s.name << " " << s.gpa << "\n";
}

int main() 
{
  // Part 1: format a name
  string first, last;
  cout << "First: ";
  cin >> first;
  cout << "Last: ";
  cin >> last;
  
  string fullName = first + " " + last;
  
  cout << "Full name: " << fullName << "\n";
  cout << "Length: " << fullName.size() << "\n";

  // Part 2: a roster of three
  const int N = 3;
  Student roster[N] = 
  {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };
  cout << "All students:\n";
  // TODO: print every student with printStudent
  for (int i = 0; i < N; ++i) 
  {
	  printStudent(roster[i]);
  }

  cout << "Honors (gpa 3.0 or above):\n";
  
  int count = 0;
  for (int i = 0; i < N; ++i) 
  {
    if (roster[i].gpa >= 3.0) 
    {
      printStudent(roster[i]);
      count++;
    }
  }
  cout << count << " of 3\n";

  return 0;
}
