#ifndef CAR_H
#define CAR_H

class Car
{
        public:
                void print(int i);
                const char * getMake();
                const char * getModel();
                const char * getColor();
                int getYear();
                int getInStock();
                char * setMake(char * make);        		                
                char * setModel(char * model);
                char * setColor(char * color);
                void setYear(int year);
                void setInStock(int inStock);
                Car();
        private:
                char * make;
                char * model;
                char * color;
                int inStock;
                int year;
};

#endif
