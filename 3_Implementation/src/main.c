/**
 * @file main.c
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


void main()
{
    int ch;
    float nt1;
	double x1 , y1, x2, y2, d1, d2;
    float nt;
    double x,s;


	printf("Press 1 for single phase tranformer ");
	printf("\nPress 2 for 3 phase grounded wye-grounded wye ");
	printf("\nPress 3 for delta-grounded wye ");
	printf("\nPress 4 for ungrounded wye-delta ");
	printf("\nPress 5 for delta-delta ");
	printf("\n\n");
	
	scanf("%d", &ch);

    switch(ch)
	{
		case 1 : 
        
                 //float nt1;
			     //double x1 , y1, x2, y2, d1, d2;


			     printf("\n\nEnter turns ratio :");
			     scanf("%f", &nt1);

			     printf("\nEnter real part of impedance refered on secondary side :");
			     scanf("%lf", &x1);
			     printf("\nEnter imagnary part of same impedance :");
			     scanf("%lf", &y1);

			     printf("\nEnter real part of admittance :");
			     scanf("%lf", &x2);
			     printf("\nEnter imagnary part of admittance :");
			     scanf("%lf", &y2);

                 single_phase( nt1, x1, y1, x2, y2);

             break;

         case 2 : 
         
                 //float nt;
			     //double x,s;


                 printf("\n\nEnter the real part of impedance of any phase refered on secondary side :");
                 scanf("%lf", &x);
                 printf("\nEnter the imagnary part of same above impedance :");
                 scanf("%lf", &s);
                 printf("\nEnter turns ratio :");
                 scanf("%f", &nt);

                 wye_grounded_wye( nt, x, s);

             break;

         case 3 :

                 //float nt;
			     //double x,s;

                 printf("\n\nEnter the real part of impedance of any phase refered on secondary side :");
                 scanf("%lf", &x);
                 printf("\nEnter the imagnary part of same above impedance :");
                 scanf("%lf", &s);
                 printf("\nEnter turns ratio :");
                 scanf("%f", &nt);

                 delta_grounded_wye( nt, x, s);

             break;

         case 4 :


                 //float nt;
			     //double x,s;

                 printf("\n\nEnter the real part of impedance of any phase refered on secondary side :");
                 scanf("%lf", &x);
                 printf("\nEnter the imagnary part of same above impedance :");
                 scanf("%lf", &s);
                 printf("\nEnter turns ratio :");
                 scanf("%f", &nt);

                 ungrounded_wye_delta( nt,  x,  s);

             break;
             
         case 5 :


                 //float nt;
			     //double x,s;

                 printf("\n\nEnter the real part of impedance of any phase refered on secondary side :");
                 scanf("%lf", &x);
                 printf("\nEnter the imagnary part of same above impedance :");
                 scanf("%lf", &s);
                 printf("\nEnter turns ratio :");
                 scanf("%f", &nt);

                 delta_delta( nt, x, s);

             break;

         default : printf("\n\n\t\t*Sorry wrong choice entered*");
			  
             break;

    }


}