#include <iostream>
using namespace std;

class Shape{
public:

float x, y;

public:
  Shape(float x, float y)
  {
    x = x;
    y = y;
  }
};
class Rectangle: public Shape 
  {
public:

  Rectangle(float x, float y) : Shape(x,y) {}
float area()
  {
    return (x * y);
  }
};

class Triangle: public Shape
{
public:

  Triangle(float x, float y) : Shape(x, y) {}
  float area()
  {
    return (x * y/2);
  }
};


int main (){
  Rectangle rectangle(3,6);
  Triangle triangle(3,6);
  cout << rectangle.area() << endl;   // valeur est 12
  cout << triangle.area() << endl;    //la valeur est 9
  return 0;
}