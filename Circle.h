#pragma once

class Circle
{
public:
	int GetDistance(unsigned myX, unsigned myY);
	void SetCanvas(unsigned myX, unsigned myY);
	void SetPosition(unsigned myX, unsigned myY);
	void SetDiameter(unsigned myD);
	void SetSymbol(char myC);
	void Draw();

private:
	bool isCanvasSizeConfigured = false;
	bool isPositionConfigured = false;
	bool isDiameterConfigured = false;
	bool isSymbolConfigured = false;

	unsigned canvasWidth;
	unsigned canvasHeight;

	unsigned circleX;
	unsigned circleY;

	unsigned diameter;
	unsigned radius;

	char symbol;
};

