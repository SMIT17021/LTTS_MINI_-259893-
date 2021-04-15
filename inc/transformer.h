/**
 * @file transformer.h
 * @author SMIT DESAI (smit082000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __TRANFORMER_H__
#define __TRANSFORMER_H__

/**
 * @brief function to calculate design parameters for single phase transformer
 * 
 * @param nt1 resembling turns ratio for the transformer
 * @param x1  resembling real part of impedenace reffered to secondary side 
 * @param y1  resembling imagnary part of impedenace reffered to secondary side
 * @param x2  resembling real part of admittance reffered to secondary side
 * @param y2  resembling imagnary part of admittance reffered to secondary side
 * @return int zero for successfull execution
 */

int single_phase(float nt1, double x1, double y1, double x2, double y2);

/**
 * @brief function to calculate design parameters for three phase grounded wye-ungrounded wye transformer
 * 
 * @param nt resembling turns ratio for the transformer
 * @param x  resembling real part of impedance of any phase refered on secondary side
 * @param s  resembling imagnary part of impedance of any phase refered on secondary side
 * @return int zero for successfull execution
 */

int wye_grounded_wye(float nt, double x, double s);

/**
 * @brief function to calculate design parameters for three phase delta-grounded wye transformer
 * 
 * @param nt resembling turns ratio for the transformer
 * @param x  resembling real part of impedance of any phase refered on secondary side
 * @param s  resembling imagnary part of impedance of any phase refered on secondary side
 * @return int zero for successful execution
 */

int delta_gounded_wye(float nt, double x, double s);

/**
 * @brief function to calculate design parameters for three phase ungrounded wye-delta transformer
 * 
 * @param nt resembling turns ratio for the transformer
 * @param x  resembling real part of impedance of any phase refered on secondary side
 * @param s  resembling imagnary part of impedance of any phase refered on secondary side
 * @return int zero for successful execution
 */

int ungrounded_wye_delta(float nt, double x, double s);

/**
 * @brief function to calculate design parameters for three phase delta-delta transformer
 * 
 * @param nt resembling turns ratio for the transformer 
 * @param x  resembling real part of impedance of any phase refered on secondary side
 * @param s  resembling imagnary part of impedance of any phase refered on secondary side
 * @return int zero for successful execution
 */
int delta_delta(float nt, double x, double s);


#endif 



