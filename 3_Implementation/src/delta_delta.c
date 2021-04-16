/**
 * @file delta_delta.c
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
 * @brief function to calculate design parameters for three phase delta-delta transformer
 * 
 * @param nt 
 * @param x 
 * @param s 
 * @return int 
 */

int delta_delta(float nt, double x, double s)
{
    double complex t= x + s*I;

			 if(nt==0)
			 	return -1;


			 printf("\n\nMatrix of a parameter is ");
			

			for(int i=0; i<3; i++)
			 	{
					printf("\n");
					for(int j=0; j<3; j++)
					{
						if(j==i)
							printf("\t a[%d][%d] = %f", (i+1),(j+1),((2*nt)/3));
						else
							printf("\t a[%d][%d} = %f", (i+1), (j+1), ((1*nt)/3));
					}
				}  

			 double mag2,mag,ang,mag1;
			 mag = cabs(t);
			 ang = carg(t);
			 mag = (nt*mag)/9;
			 mag1 = mag*4;
			 mag2 = mag*3;
			
			 printf("\nMatrix of b parameter in polar form is ");
			 printf("\nb[1][1] = (%lf, %lf)", mag,ang);
			 printf("\tb[1][2] = 0");
			 printf("\tb[1][3] = 0");
			 printf("\nb[2][1] = - (%lf ,%lf)", mag1,ang);
			 printf("\tb[2][2] = (%lf, %lf)", mag2,ang);
			 printf("\tb[2][3] = 0");
			 printf("\nb[3][1] = - (%lf, %lf)", mag2,ang);
			 printf("\tb[3][2] = - (%lf, %lf)", mag2,ang);
			 printf("\tb[3][3] = 0");

			 printf("\nMatrix of c parameter = [0]");

			 printf("\nMatrix of d parameter is :");
			

			for(int i=0; i<3; i++)
			 	{
					printf("\n");
					for(int j=0; j<3; j++)
					{
						if(j==i)
							printf("\t d[%d][%d] = %f", (i+1),(j+1),(1/nt));
						else
							printf("\t d[%d][%d} = 0", (i+1), (j+1));
					}
				 } 


	 return 0; 
}