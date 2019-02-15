#include "Circle.h"
#include <iostream>
#include <stdexcept>

void Circle::SetPosition(int myX, int myY) {
	// catch definition errors
	if (!myX > NULL) {
		throw std::invalid_argument("circle X must be a natural number");

	}
	if (!myY > NULL) {
		throw std::invalid_argument("circle Y must be a natural number");
	}

	// set diameter properties
	Circle::circleX = myX;
	Circle::circleY = myY;
	isPositionConfigured = true;
}

void Circle::SetDiameter(int myint) {
	// catch definition errors
	if (!myint > NULL) {
		throw std::invalid_argument("circle diameter must be a natural number");
	}

	// set diameter properties
	Circle::diameter = myint;
	isDiameterConfigured = true;
}

void Circle::SetSymbol(char myChar) {
	// set symbol properties
	Circle::symbol = myChar;
	isSymbolConfigured = true;
}

void Circle::SetCanvas(int myX, int myY) {
	// catch definition errors
	if (!myX > NULL) {
		throw std::invalid_argument("canvas X must be a natural number");
	}
	if (!myY > NULL) {
		throw std::invalid_argument("canvas Y must be a natural number");
	}

	// set canvas properties
	canvasWidth = myX;
	canvasHeight = myY;
	isCanvasSizeConfigured = true;

}

int Circle::GetDistance(int myX, int myY) {
	// catch definition errors
	if (!isPositionConfigured) {
		throw std::invalid_argument("circle center X, Y not defined");
	}

	// return length of hypotenuse - distance to current place in cartesian plane
	return sqrt(((circleY - myY) * (circleY - myY)) + ((circleX - myX) * (circleX - myX)));
}

void Circle::Draw() {
	// catch definition errors
	if (!isDiameterConfigured) {
		throw std::invalid_argument("diameter not defined");
	}
	if (!isSymbolConfigured) {
		throw std::invalid_argument("symbol not defined");
	}
	if (!isPositionConfigured) {
		throw std::invalid_argument("position not defined");
	}
	if (!isCanvasSizeConfigured) {
		throw std::invalid_argument("canvas size not defined");
	}

	// print circle
	int radius{ diameter / 2 };
	for (int y{ 0 }; y < canvasHeight; y++) {
		for (int x{ 0 }; x < canvasWidth; x++) {
			if (GetDistance(x, y) == radius) {
				std::cout << symbol;
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}


Circle::Circle()
{
}


Circle::~Circle()
{
}
