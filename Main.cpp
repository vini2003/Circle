#include "Circle.h"
#include <iostream>
#include <chrono>


int main() {
	Circle myCircle;
	myCircle.SetCanvas(64, 16);
	myCircle.SetDiameter(15);
	myCircle.SetSymbol('X');
	myCircle.SetPosition(8, 8);
	myCircle.Draw();
}