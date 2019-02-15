#pragma once

class Circle
{
public:
	// basic functions
	int GetDistance(int myX, int myY);		// get distance from circle center - radius
	void SetCanvas(int myX, int myY);		// define canvas size
	void SetDiameter(int myint);			// define circle diameter
	void SetPosition(int myX, int myY);		// define circle center position
	void SetSymbol(char myChar);			// define circle's symbol
	void Draw();							// draw circle

	Circle();
	~Circle();

private:
	// invalid argument checks
	bool isCanvasSizeConfigured = false;
	bool isPositionConfigured = false;
	bool isDiameterConfigured = false;
	bool isSymbolConfigured = false;

	// canvas properties
	int canvasWidth;
	int canvasHeight;

	// circle properties
	int circleX;
	int circleY;
	int diameter;
	int radius;

	// symbol properties
	char symbol;
};

