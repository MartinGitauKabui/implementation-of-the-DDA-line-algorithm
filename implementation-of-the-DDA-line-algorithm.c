

// C program for DDA line generation
#include<stdio.h>
#include<math.h>
//Function for finding absolute value
int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
	// calculate dx & dy
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	printf("Change in x value is %d\n",dx );
	printf("Change in y value is %d\n",dy );

	// calculate steps required for generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	printf("The step value is %d\n",steps );

	// calculate increment in x & y for each steps
	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	printf("The x increment value is %f\n",Xinc );
	printf("The y increment value is %f\n",Yinc );

	// Put pixel for each step
	float X = X0;
	float Y = Y0;
	printf("Here are the points \n");
	for (int i = 0; i <= steps; i++)
	{
      int roundx = round(X);
      int roundy = round(Y);
      printf("%d and %d\n",roundx,roundy);
      // put pixel at (X,Y)
		X += Xinc;		 // increment in x at each step
		Y += Yinc;		 // increment in y at each step
			 // for visualization of line-
							// generation step by step
	}
}

// Driver program
int main()
{


	int X0 = 2, Y0 = 2, X1 = 6, Y1 = 6;
	DDA(2, 2, 6, 6);
	return 0;
}
