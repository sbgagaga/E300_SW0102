/***************************************************************************//**
* \file Slave_PM.c
* \version 4.0
*
* \brief
*  This file provides the source code to the Power Management support for
*  the SCB Component.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Slave.h"
#include "Slave_PVT.h"

#if(Slave_SCB_MODE_I2C_INC)
    #include "Slave_I2C_PVT.h"
#endif /* (Slave_SCB_MODE_I2C_INC) */

#if(Slave_SCB_MODE_EZI2C_INC)
    #include "Slave_EZI2C_PVT.h"
#endif /* (Slave_SCB_MODE_EZI2C_INC) */

#if(Slave_SCB_MODE_SPI_INC || Slave_SCB_MODE_UART_INC)
    #include "Slave_SPI_UART_PVT.h"
#endif /* (Slave_SCB_MODE_SPI_INC || Slave_SCB_MODE_UART_INC) */


/***************************************
*   Backup Structure declaration
***************************************/

#if(Slave_SCB_MODE_UNCONFIG_CONST_CFG || \
   (Slave_SCB_MODE_I2C_CONST_CFG   && (!Slave_I2C_WAKE_ENABLE_CONST))   || \
   (Slave_SCB_MODE_EZI2C_CONST_CFG && (!Slave_EZI2C_WAKE_ENABLE_CONST)) || \
   (Slave_SCB_MODE_SPI_CONST_CFG   && (!Slave_SPI_WAKE_ENABLE_CONST))   || \
   (Slave_SCB_MODE_UART_CONST_CFG  && (!Slave_UART_WAKE_ENABLE_CONST)))

    Slave_BACKUP_STRUCT Slave_backup =
    {
        0u, /* enableState */
    };
#endif


/*******************************************************************************
* Function Name: Slave_Sleep
****************************************************************************//**
*
*  Prepares the Slave component to enter Deep Sleep.
*  The “Enable wakeup from Deep Sleep Mode” selection has an influence on this 
*  function implementation:
*  - Checked: configures the component to be wakeup source from Deep Sleep.
*  - Unchecked: stores the current component state (enabled or disabled) and 
*    disables the component. See SCB_Stop() function for details about component 
*    disabling.
*
*  Call the Slave_Sleep() function before calling the 
*  CyPmSysDeepSleep() function. 
*  Refer to the PSoC Creator System Reference Guide for more information about 
*  power management functions and Low power section of this document for the 
*  selected mode.
*
*  This function should not be called before entering Sleep.
*
*******************************************************************************/
void Slave_Sleep(void)
{
#if(Slave_SCB_MODE_UNCONFIG_CONST_CFG)

    if(Slave_SCB_WAKE_ENABLE_CHECK)
    {
        if(Slave_SCB_MODE_I2C_RUNTM_CFG)
        {
            Slave_I2CSaveConfig();
        }
        else if(Slave_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            Slave_EzI2CSaveConfig();
        }
    #if(!Slave_CY_SCBIP_V1)
        else if(Slave_SCB_MODE_SPI_RUNTM_CFG)
        {
            Slave_SpiSaveConfig();
        }
        else if(Slave_SCB_MODE_UART_RUNTM_CFG)
        {
            Slave_UartSaveConfig();
        }
    #endif /* (!Slave_CY_SCBIP_V1) */
        else
        {
            /* Unknown mode */
        }
    }
    else
    {
        Slave_backup.enableState = (uint8) Slave_GET_CTRL_ENABLED;

        if(0u != Slave_backup.enableState)
        {
            Slave_Stop();
        }
    }

#else

    #if (Slave_SCB_MODE_I2C_CONST_CFG && Slave_I2C_WAKE_ENABLE_CONST)
        Slave_I2CSaveConfig();

    #elif (Slave_SCB_MODE_EZI2C_CONST_CFG && Slave_EZI2C_WAKE_ENABLE_CONST)
        Slave_EzI2CSaveConfig();

    #elif (Slave_SCB_MODE_SPI_CONST_CFG && Slave_SPI_WAKE_ENABLE_CONST)
        Slave_SpiSaveConfig();

    #elif (Slave_SCB_MODE_UART_CONST_CFG && Slave_UART_WAKE_ENABLE_CONST)
        Slave_UartSaveConfig();

    #else

        Slave_backup.enableState = (uint8) Slave_GET_CTRL_ENABLED;

        if(0u != Slave_backup.enableState)
        {
            Slave_Stop();
        }

    #endif /* defined (Slave_SCB_MODE_I2C_CONST_CFG) && (Slave_I2C_WAKE_ENABLE_CONST) */

#endif /* (Slave_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: Slave_Wakeup
****************************************************************************//**
*
*  Prepares the Slave component for Active mode operation after 
*  Deep Sleep.
*  The “Enable wakeup from Deep Sleep Mode” selection has influence on this 
*  function implementation:
*  - Checked: restores the component Active mode configuration.
*  - Unchecked: enables the component if it was enabled before enter Deep Sleep.
*
*  This function should not be called after exiting Sleep.
*
*  \sideeffect
*   Calling the Slave_Wakeup() function without first calling the 
*   Slave_Sleep() function may produce unexpected behavior.
*
*******************************************************************************/
void Slave_Wakeup(void)
{
#if(Slave_SCB_MODE_UNCONFIG_CONST_CFG)

    if(Slave_SCB_WAKE_ENABLE_CHECK)
    {
        if(Slave_SCB_MODE_I2C_RUNTM_CFG)
        {
            Slave_I2CRestoreConfig();
        }
        else if(Slave_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            Slave_EzI2CRestoreConfig();
        }
    #if(!Slave_CY_SCBIP_V1)
        else if(Slave_SCB_MODE_SPI_RUNTM_CFG)
        {
            Slave_SpiRestoreConfig();
        }
        else if(Slave_SCB_MODE_UART_RUNTM_CFG)
        {
            Slave_UartRestoreConfig();
        }
    #endif /* (!Slave_CY_SCBIP_V1) */
        else
        {
            /* Unknown mode */
        }
    }
    else
    {
        if(0u != Slave_backup.enableState)
        {
            Slave_Enable();
        }
    }

#else

    #if (Slave_SCB_MODE_I2C_CONST_CFG  && Slave_I2C_WAKE_ENABLE_CONST)
        Slave_I2CRestoreConfig();

    #elif (Slave_SCB_MODE_EZI2C_CONST_CFG && Slave_EZI2C_WAKE_ENABLE_CONST)
        Slave_EzI2CRestoreConfig();

    #elif (Slave_SCB_MODE_SPI_CONST_CFG && Slave_SPI_WAKE_ENABLE_CONST)
        Slave_SpiRestoreConfig();

    #elif (Slave_SCB_MODE_UART_CONST_CFG && Slave_UART_WAKE_ENABLE_CONST)
        Slave_UartRestoreConfig();

    #else

        if(0u != Slave_backup.enableState)
        {
            Slave_Enable();
        }

    #endif /* (Slave_I2C_WAKE_ENABLE_CONST) */

#endif /* (Slave_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/* [] END OF FILE */