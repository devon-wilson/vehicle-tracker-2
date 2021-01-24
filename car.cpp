#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstddef>
#include "car.h"
using namespace std;
Car::Car()
{
        make = NULL;
        model = NULL;
        color = NULL;
        year = 0;
        inStock = 0;

}
void Car::print(int i)
{
	cout << "printing " << i << " car in array" << endl;
        cout << "======Car======" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "In stock total: " << inStock << endl;
}

const char * Car::getMake()
{
	return make;
}

const char * Car::getModel()
{
	return model;
}

const char * Car::getColor()
{
	return color;
}

int Car::getYear()
{
	return year;
}
int Car::getInStock()
{
	return inStock;
}
char * Car::setMake(char * make)
{
	if(this->make != NULL)
	{
		delete this->make;
	}
	this->make = new char[strlen(make)+1];
	
        strcpy(this->make, make);
}

char * Car::setModel(char * model)
{
	if(this->model != NULL)
	{
		delete this -> model;
	}
	this->model = new char[strlen(model)+1];
	
        strcpy(this->model, model);
}

char * Car::setColor(char * color)
{
	if(this->color != NULL)
	{
		delete this -> color;
	}
	this->color = new char[strlen(color)+1];
	
        strcpy(this->color, color);
}

void Car::setInStock(int inStock)
{
        this->inStock = inStock;
}

void Car::setYear(int year)
{
                if(year >= 0)
                {

     			 this->year = year;

                }
                else
                {
                        cout << "Invalid year.  Needs to ";
                        cout << "be larger than or equal to 0." << endl;
                }
}

