#include <iostream>
#include "Bitmap.h"
using namespace std;
using namespace TryharderMedia;

int main()
{
	int const WIDTH = 800;
	int const HEIGHT = 600;

	Bitmap bitmap(WIDTH, HEIGHT);

	double xFractal = 0;
	double yFractal = 0;
	double min = 999999;
	double max = -999999;

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			//bitmap.setPixel(x, y, 255, 0, 0);
			xFractal = (x - WIDTH/2) / (WIDTH/2.0);
			yFractal = (y - HEIGHT / 2) / (HEIGHT / 2.0);

			if (xFractal < min) min = xFractal;
			if (xFractal > max) max = xFractal;
		}
	}

	cout << min << ", " << max << endl;

	bitmap.write("test.bmp");

	cout << "Finished." << endl;

	system("pause");
	return 0; 
}