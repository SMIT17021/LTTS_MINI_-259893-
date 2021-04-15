#   Requirements 
##  Introduction

*   Distribution transformer is a X’mer that provides the final voltage transformation in the electric power distribution system,stepping down the voltage used in the distribution lines to the level used by the customer. The invention of a practical efficient X’mer made AC power distribution feasible; a system using distribution X’mers was demonstrated as early as 1882. 

*   Thus the motive behind the project is to do modelling of X’mer by calculating transmission parameters. A model is designed to simulate the performance of a  X’mer under different loads. It is done after considering the appropriate mathematical equations. From this we can know the sending end and receiving end voltages and currents.

## Research

*   After calculations of the transmission parameters of the distribution  transformer we can make the further analysis of the distribution system easier as we can also calculate the same for the transmission line and hence we can calculate the overall transmission parameter of the model further decreasing our efforts to analyze the system.

*   Using the programme module also we can decide the value of voltage to be supplied to the distribution transformer according to the load to be connected on secondary side.

## Benifits

*   Smooth controlling of volatge at reciecving end
*   Easy to decide the Mvar capacity of shunt capacitor at load end
*   Less burden on substations employee
*   Time efficient analysis

## Cost and features 

*   Size of the App: More the features, more the cost.
*   Calculating parameters for transmission lines : If we want to add a feature wherein the same program module also calculates the model parameters for the transmission line, so that for having overall parameters we can add both of them then it will make the module more costlier.
*   Development Region: The development cost per hour in countries of UK, USA and Europe is much higher than that of India. Hence, to create a module for modelling of transformer in India would cost around $25000 to $35000 which will be having very basic features and will be on one single platform only.

## Defining the system
![defining system](https://github.com/SMIT17021/LTTS_MINI_-259893-/blob/master/5_Images/transformer_defining.png)

##  SWOT
![SWOT_image](https://github.com/SMIT17021/LTTS_MINI_-259893-/blob/master/5_Images/SWOT.png)

##  5W's 1 H

### Why
*   To reduce the manual work, operating time, and to manage Transformer parameters and check for maximum possible efficiency.
### Who
*   Producer and Consumer of Electricity. Producer can get load requirement from consumer and perform some design changes in Transformer based on results from the system.
### What
*   A simple and easy to use system for the Users to do all the calculations related to distribution transformer and load requirements.
### When
*   The system is required now to bring effective distribution possible thereby reducing the losses to the utmost possible level.
### Where:
*   The system is expected to work in distribution system all over India.
### How
*   User can view the options for calculating various Parameters of Transformer once the code is runned.

##  Detailed Requirements

### High Level Requirement
| **ID** | **Description**            | **Status** |   
|--------|----------------------------|------------|
|1       |Input transformer’s data from user|Implemented|
|2       |Input user’s choice for calculation|Implemented|
|3       |Calculation of parameters for single phase tranformer|Implemented|
|4       |Calculation of parameters for 3 phase grounded wye-grounded wye|Implemented|
|5       |Calculation of parameters for 3 phase delta-grounded wye|Implemented|
|6       |Calculation of parameters for 3 phase ungrounded wye-delta|Implemented|
|7       |Calculation of parameters for 3 phase delta-delta|Implemented|

### Low Level Requirements
| **ID** | **Description**            | **Status** |   
|--------|----------------------------|------------|
|1       |Input transformer's turns ratio|Implemented|
|2       |Input transformer's  real part of impedance of any phase refered on secondary side and imagnary part of same above impedance|Implemented|
|3       |Input transformer's  real part of admittance of any phase refered on secondary side and imagnary part of same above admittance|Implemented|
|4       |Input user’s preferred choice like 1-for single phase tranformer,2-for 3 phase grounded wye-grounded wye,3-for 3 phase delta-grounded wye,4-for 3 phase ungrounded wye-delta,5- for 3 phase delta-delta|Implemented|
