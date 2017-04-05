/*
 *Short Assignment: Inheritance
 *ShapeTest.cpp
 *Created: 04/03/2017
 *Author: Christopher A Runyan
 */
#include <iostream>
#include "Shape.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

int main(){
	Rectangle rect(10, 20);
	Circle circle(20);

	Shape* rectS=new Rectangle(10, 20);
	Shape* circleS=new Circle(20);

	std::cout<<"Area of Rectangle Shape - "<<rectS->getArea()<<"\n";
	std::cout<<"Area of Circle Shape - "<<circleS->getArea()<<"\n";

	return 0;
}


	
