#include <cstdlib>
#include <iostream>
#include <cstring>
#include "car.h"
#include <cstddef>
using namespace std;

int main()
{
  Car();
  int arraySize;
  char * make;
  make = new char[1000];
  char * model;
  model = new char[1000];
  char * color;
  color = new char[1000];
  int  inStock;
  int  year;
  cout << "How many car entries? ";
  cin >> arraySize;
  cin.ignore();
  Car * carList;
  carList = new Car[arraySize];
  for(int i = 0; i < arraySize; i++)
  {
          cout << "for car " << i << endl;
          cout << "make? ";
  	  cin.getline(make, 1000); 
          carList[i].setMake(make);
          cout << "model? ";
          cin.getline(model, 1000);
          carList[i].setModel(model);
          cout << "color? ";
          cin.getline(color, 1000);
          carList[i].setColor(color);
          cout << "year? ";
          cin >> year;
          cin.ignore();
          carList[i].setYear(year);
          cout << "how many in stock? ";
          cin >> inStock;
          cin.ignore();
          carList[i].setInStock(inStock);
  }
  for(int i=0; i < arraySize; i++)
  {
          carList[i].print(i)
  }
  delete [] carList;
  return 0;
}
