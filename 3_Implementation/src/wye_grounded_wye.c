/**
 * @file wye_grounded_wye.c
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
#include <math.h>

/**
 * @brief function to calculate design parameters for three phase grounded wye-ungrounded wye transformer
 * 
 * @param nt 
 * @param x 
 * @param s 
 * @return int 
 */

int wye_grounded_wye(float nt, double x, double s)
{
    double complex z= x + s*I;


	if (nt==0)
	{
		return -1;	/* code */
	}
	

printf("\nMatrix of a parameter is :");
			 

			 for(int i=0; i<3; i++)
			 	{	
					printf("\n");
					for(int j=0; j<3; j++)
					{
						if(j==i)
							printf("\t a[%d][%d] = %f", (i+1),(j+1),nt);
						else
							printf("\t a[%d][%d} = 0", (i+1), (j+1));
					}
				 }

			double mag;
			 mag = cabs(z);
			 double ang = carg(z);
			 mag = mag*nt;


			 printf("\nMatrix of b parameter in polar form is :");
		
			 for(int i=0; i<3; i++)
			 	{	
					printf("\n");
					for(int j=0; j<3; j++)
					{
						if(j==i)
							printf("\t b[%d][%d] = (%lf, %lf)", (i+1), (j+1), mag, ang);
						else
							printf("\t b[%d][%d} = 0", (i+1), (j+1));
					}
				 }

			
			 printf("\nMatrix of c parameter = [0]");

			 printf("\nMatrix of d parameter is ");


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