/*
 *Short Assignment: Inheritance
 *Circle.cpp
 *Created: 04/03/2017
 *Author: Christopher A Runyan
 */
#include "Shape.cpp"

class Circle:public Shape{
	private:
		double radius;
	public:
		Circle(double r){
			radius=r;
		}
	
		double getArea(){
			return 3.14*radius*radius;
		}
};

