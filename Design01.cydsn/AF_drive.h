/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef __AD_DRIVE__
#define __AD_DRIVE__
    

#include "Apply.h"
    
#define    NIAddr    0x46
#define    REG_INIT  11
    
uint8 addr;
    
int16 AF_sampling();
void AF_Init();
void AF_stop();


    
    
#endif
/* [] END OF FILE */
