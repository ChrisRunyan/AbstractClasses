/*
 *Short Assignment: Inheritance
 *Rectangle.cpp
 *Created: 04/03/2017
 *Author: Christopher A Runyan
 */
#include "Shape.cpp"

class Rectangle:public Shape{
	private:
		double width;
		double height;
	public:
		Rectangle(double w, double h){
			width=w;
			height=h;
		}


		double getArea(){
			return width*height;
		}
};

