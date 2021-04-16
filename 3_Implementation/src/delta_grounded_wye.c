/**
 * @file delta_grounded _wye.c
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
 * @brief function to calculate design parameters for three phase delta-grounded wye transformer
 * 
 * @param nt 
 * @param x 
 * @param s 
 * @return int 
 */

int delta_grounded_wye(float nt, double x, double s)
{
   	 complex m= x + s*I;
	
	 if(nt==0)
	 	 return -1;
			
			
			 printf("\nMatrix of a parameter is :");
			
			 
			for(int i=0; i<3; i++)
			 	{
					printf("\n");
					for(int j=0; j<3; j++)
					{
						if(j==i)
							printf("\t a[%d][%d] = %f", (i+1),(j+1),((2*nt)/3));
						else
							printf("\t a[%d][%d} = 0", (i+1), (j+1));
					}
				 } 
			 
			 
			 double mag1,mag,ang;
			 mag = cabs(m);
			 ang = carg(m);
			 mag = (mag*2*nt)/3;
			 mag1 = mag/2;
			 
			 printf("\nMatrix of b parameter in polar form is :");
			 printf("\nb[1][1] = (%lf, %lf) ", mag ,ang);
			 printf("\tb[1][2] = (%lf, %lf) ", mag ,ang);
			 printf("\tb[1][3] = 0");
			 printf("\nb[2][1] = 0");
			 printf("\tb[2][2] = (%lf, %lf) ", mag ,ang);
			 printf("\tb[2][3] = (%lf, %lf) ", mag1 ,ang);
			 printf("\nb[3][1] = (%lf, %lf) ", mag1 ,ang);
			 printf("\tb[3][2] = 0");
			 printf("\tb[3][3] = (%lf, %lf) ", mag, ang);

			 printf("\nMatrix of c parameter = [0]");

			 printf("\nMatrix of d parameter is :");
			 printf("\nd[1][1] = %f", (1/nt));
			 printf("\td[1][2] = 0");
			 printf("\td[1][3] = - %f", (1/nt));
			 printf("\nd[2][1] = - %f", (1/nt));
			 printf("\td[2][2] = %f", (1/nt));
			 printf("\td[2][3] = 0");
			 printf("\nd[3][1] = 0");
			 printf("\td[3][2] = - %f", (1/nt));
			 printf("\td[3][3] = %f", (1/nt));


	 return 0;

}