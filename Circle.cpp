#include "Circle.h"
#include <iostream>
#include <stdexcept>


// Set circle position.
void Circle::SetPosition(unsigned myX, unsigned myY) {
	Circle::circleX = myX;
	Circle::circleY = myY;
	isPositionConfigured = true;
}


// Set circle diameter.
void Circle::SetDiameter(unsigned myD) {
	Circle::diameter = myD;
	Circle::radius = diameter / 2;
	isDiameterConfigured = true;
}


// Set circumference symbol.
void Circle::SetSymbol(char myC) {
	Circle::symbol = myC;
	isSymbolConfigured = true;
}


// Set canvas size.
void Circle::SetCanvas(unsigned myX, unsigned myY) {
	canvasWidth = myX;
	canvasHeight = myY;
	isCanvasSizeConfigured = true;
}


// Get distance between circle center and current point.
int Circle::GetDistance(unsigned myX, unsigned myY) {
	if (!isPositionConfigured) {
		throw std::invalid_argument("circle center X, Y not defined");
	}
	return sqrt(((circleY - myY) * (circleY - myY)) + ((circleX - myX) * (circleX - myX)));
}


// Draw the circle.
void Circle::Draw() {
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