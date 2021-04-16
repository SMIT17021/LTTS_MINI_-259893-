/**
 * @file ungrounded_wye_delta.c
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
 * @brief function to calculate design parameters for three phase ungrounded wye-delta transformer
 * 
 * @param nt 
 * @param x 
 * @param s 
 * @return int 
 */

int ungrounded_wye_delta(float nt, double x, double s)
{
    double complex g= x + s*I;

	 if(nt==0);
	 	return -1;

			 printf("\nMatrix of a parameter is :");
			 printf("\na[1][1] = %f", nt);
			 printf("\ta[1][2] = - %f", nt);
			 printf("\ta[1][3] = 0");
			 printf("\na[2][1] = 0");
			 printf("\ta[2][2] = %f", nt);
			 printf("\ta[2][3] = - %f", nt);
			 printf("\na[3][1] = - %f", nt);
			 printf("\ta[3][2] = 0");
			 printf("\ta[3][3] = %f", nt);

			double mag,ang,mag1;
			 mag = cabs(g);
			 ang = carg(g);
			 mag = (mag*nt)/3;
			 mag1 = mag*2;
			 printf("\nMatrix of b parameter in polar form is :");
			 printf("\nb[1][1] = (%lf, %lf)", mag, ang);
			 printf("\tb[1][2] = -(%lf, %lf)", mag,ang);
			 printf("\tb[1][3] = 0");
			 printf("\nb[2][1] = (%lf, %lf)", mag,ang);
			 printf("\tb[2][2] = (%lf, %lf)", mag1,ang);
			 printf("\tb[2][3] = 0");
			 printf("\nb[3][1] = - (%lf, %lf)", mag1,ang);
			 printf("\tb[3][2] = -(%lf, %lf)", mag, ang);
			 printf("\tb[3][3] = 0");

			 printf("\nMatrix of c parameter = [0]");

			 printf("\nMatrix of d parameter is :");
			 printf("\nd[1][1] = %f", (1/(nt*3)));
			 printf("\td[1][2] = - %f", (1/(nt*3)));
			 printf("\td[1][3] = 0");
			 printf("\nd[2][1] =  %f", (1/(nt*3)));
			 printf("\td[2][2] = %f", (2/(nt*3)));
			 printf("\td[2][3] = 0");
			 printf("\nd[3][1] = - %f", (2/(nt*3)));
			 printf("\td[3][2] = - %f", (1/(nt*3)));
			 printf("\td[3][3] = 0");


	 return 0;
}