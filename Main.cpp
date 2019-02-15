#include "Circle.h"
#include <iostream>

int main() {
	Circle myCircle;
	myCircle.SetCanvas(16, 16);
	myCircle.SetDiameter(15);
	myCircle.SetSymbol('X');
	myCircle.SetPosition(8, 8);
	myCircle.Draw();
}