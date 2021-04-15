/**
 * @file Single_Phase.c
 * @author SMIT DESAI (smit082000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include "transformer.h"
#include <complex.h>

/**
 * @brief function to calculate design parameters for single phase transformer
 * 
 * @param nt1 
 * @param x1 
 * @param y1 
 * @param x2 
 * @param y2 
 * @return int 
 */

int single_phase(float nt1, double x1, double y1, double x2, double y2)
{
    double d1,d2;

	if(nt1==0)
		 return -1;

    double complex z1 = x1 + y1*I;
	double complex y = x2 + y2*I;
	double complex d = d1 + d2*I;

    printf("\na parameter is %lf:", nt1);

			 double mag = cabs(z1);
			 double angle = carg(z1);
			 mag = mag*nt1;
			 printf("\nMagnitude of b parameter is %lf:", mag );
			 printf("\nAngle of b parameter is %lf:", angle );


			 mag = cabs(y);
			 angle = carg(y);
			 mag = mag*nt1;
			 printf("\nMagnitude of c parameter is %lf:", mag );
			 printf("\nAngle of c parameter is %lf:", angle );

			 mag = cabs(z1);
			 angle = carg(z1);
			 double mag5 = cabs(y);
			 double ang5 = carg(y);
			 mag = mag*mag5*nt1;
			 angle =angle+ang5;
			 d= mag + angle*I;
			 //d1=d1+(1/nt1);
			 printf("c parameter is %lf + i %lf", creal(d),cimag(d) );
	 
	 return 0;
}