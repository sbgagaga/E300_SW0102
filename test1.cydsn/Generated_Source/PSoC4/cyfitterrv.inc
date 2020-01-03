;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; EZI2C
EZI2C_SCB__CTRL EQU CYREG_SCB2_CTRL
EZI2C_SCB__EZ_DATA0 EQU CYREG_SCB2_EZ_DATA0
EZI2C_SCB__EZ_DATA1 EQU CYREG_SCB2_EZ_DATA1
EZI2C_SCB__EZ_DATA10 EQU CYREG_SCB2_EZ_DATA10
EZI2C_SCB__EZ_DATA11 EQU CYREG_SCB2_EZ_DATA11
EZI2C_SCB__EZ_DATA12 EQU CYREG_SCB2_EZ_DATA12
EZI2C_SCB__EZ_DATA13 EQU CYREG_SCB2_EZ_DATA13
EZI2C_SCB__EZ_DATA14 EQU CYREG_SCB2_EZ_DATA14
EZI2C_SCB__EZ_DATA15 EQU CYREG_SCB2_EZ_DATA15
EZI2C_SCB__EZ_DATA16 EQU CYREG_SCB2_EZ_DATA16
EZI2C_SCB__EZ_DATA17 EQU CYREG_SCB2_EZ_DATA17
EZI2C_SCB__EZ_DATA18 EQU CYREG_SCB2_EZ_DATA18
EZI2C_SCB__EZ_DATA19 EQU CYREG_SCB2_EZ_DATA19
EZI2C_SCB__EZ_DATA2 EQU CYREG_SCB2_EZ_DATA2
EZI2C_SCB__EZ_DATA20 EQU CYREG_SCB2_EZ_DATA20
EZI2C_SCB__EZ_DATA21 EQU CYREG_SCB2_EZ_DATA21
EZI2C_SCB__EZ_DATA22 EQU CYREG_SCB2_EZ_DATA22
EZI2C_SCB__EZ_DATA23 EQU CYREG_SCB2_EZ_DATA23
EZI2C_SCB__EZ_DATA24 EQU CYREG_SCB2_EZ_DATA24
EZI2C_SCB__EZ_DATA25 EQU CYREG_SCB2_EZ_DATA25
EZI2C_SCB__EZ_DATA26 EQU CYREG_SCB2_EZ_DATA26
EZI2C_SCB__EZ_DATA27 EQU CYREG_SCB2_EZ_DATA27
EZI2C_SCB__EZ_DATA28 EQU CYREG_SCB2_EZ_DATA28
EZI2C_SCB__EZ_DATA29 EQU CYREG_SCB2_EZ_DATA29
EZI2C_SCB__EZ_DATA3 EQU CYREG_SCB2_EZ_DATA3
EZI2C_SCB__EZ_DATA30 EQU CYREG_SCB2_EZ_DATA30
EZI2C_SCB__EZ_DATA31 EQU CYREG_SCB2_EZ_DATA31
EZI2C_SCB__EZ_DATA4 EQU CYREG_SCB2_EZ_DATA4
EZI2C_SCB__EZ_DATA5 EQU CYREG_SCB2_EZ_DATA5
EZI2C_SCB__EZ_DATA6 EQU CYREG_SCB2_EZ_DATA6
EZI2C_SCB__EZ_DATA7 EQU CYREG_SCB2_EZ_DATA7
EZI2C_SCB__EZ_DATA8 EQU CYREG_SCB2_EZ_DATA8
EZI2C_SCB__EZ_DATA9 EQU CYREG_SCB2_EZ_DATA9
EZI2C_SCB__I2C_CFG EQU CYREG_SCB2_I2C_CFG
EZI2C_SCB__I2C_CTRL EQU CYREG_SCB2_I2C_CTRL
EZI2C_SCB__I2C_M_CMD EQU CYREG_SCB2_I2C_M_CMD
EZI2C_SCB__I2C_S_CMD EQU CYREG_SCB2_I2C_S_CMD
EZI2C_SCB__I2C_STATUS EQU CYREG_SCB2_I2C_STATUS
EZI2C_SCB__INTR_CAUSE EQU CYREG_SCB2_INTR_CAUSE
EZI2C_SCB__INTR_I2C_EC EQU CYREG_SCB2_INTR_I2C_EC
EZI2C_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB2_INTR_I2C_EC_MASK
EZI2C_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB2_INTR_I2C_EC_MASKED
EZI2C_SCB__INTR_M EQU CYREG_SCB2_INTR_M
EZI2C_SCB__INTR_M_MASK EQU CYREG_SCB2_INTR_M_MASK
EZI2C_SCB__INTR_M_MASKED EQU CYREG_SCB2_INTR_M_MASKED
EZI2C_SCB__INTR_M_SET EQU CYREG_SCB2_INTR_M_SET
EZI2C_SCB__INTR_RX EQU CYREG_SCB2_INTR_RX
EZI2C_SCB__INTR_RX_MASK EQU CYREG_SCB2_INTR_RX_MASK
EZI2C_SCB__INTR_RX_MASKED EQU CYREG_SCB2_INTR_RX_MASKED
EZI2C_SCB__INTR_RX_SET EQU CYREG_SCB2_INTR_RX_SET
EZI2C_SCB__INTR_S EQU CYREG_SCB2_INTR_S
EZI2C_SCB__INTR_S_MASK EQU CYREG_SCB2_INTR_S_MASK
EZI2C_SCB__INTR_S_MASKED EQU CYREG_SCB2_INTR_S_MASKED
EZI2C_SCB__INTR_S_SET EQU CYREG_SCB2_INTR_S_SET
EZI2C_SCB__INTR_SPI_EC EQU CYREG_SCB2_INTR_SPI_EC
EZI2C_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB2_INTR_SPI_EC_MASK
EZI2C_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB2_INTR_SPI_EC_MASKED
EZI2C_SCB__INTR_TX EQU CYREG_SCB2_INTR_TX
EZI2C_SCB__INTR_TX_MASK EQU CYREG_SCB2_INTR_TX_MASK
EZI2C_SCB__INTR_TX_MASKED EQU CYREG_SCB2_INTR_TX_MASKED
EZI2C_SCB__INTR_TX_SET EQU CYREG_SCB2_INTR_TX_SET
EZI2C_SCB__RX_CTRL EQU CYREG_SCB2_RX_CTRL
EZI2C_SCB__RX_FIFO_CTRL EQU CYREG_SCB2_RX_FIFO_CTRL
EZI2C_SCB__RX_FIFO_RD EQU CYREG_SCB2_RX_FIFO_RD
EZI2C_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB2_RX_FIFO_RD_SILENT
EZI2C_SCB__RX_FIFO_STATUS EQU CYREG_SCB2_RX_FIFO_STATUS
EZI2C_SCB__RX_MATCH EQU CYREG_SCB2_RX_MATCH
EZI2C_SCB__SPI_CTRL EQU CYREG_SCB2_SPI_CTRL
EZI2C_SCB__SPI_STATUS EQU CYREG_SCB2_SPI_STATUS
EZI2C_SCB__SS0_POSISTION EQU 0
EZI2C_SCB__SS1_POSISTION EQU 1
EZI2C_SCB__SS2_POSISTION EQU 2
EZI2C_SCB__SS3_POSISTION EQU 3
EZI2C_SCB__STATUS EQU CYREG_SCB2_STATUS
EZI2C_SCB__TX_CTRL EQU CYREG_SCB2_TX_CTRL
EZI2C_SCB__TX_FIFO_CTRL EQU CYREG_SCB2_TX_FIFO_CTRL
EZI2C_SCB__TX_FIFO_STATUS EQU CYREG_SCB2_TX_FIFO_STATUS
EZI2C_SCB__TX_FIFO_WR EQU CYREG_SCB2_TX_FIFO_WR
EZI2C_SCB__UART_CTRL EQU CYREG_SCB2_UART_CTRL
EZI2C_SCB__UART_FLOW_CTRL EQU CYREG_SCB2_UART_FLOW_CTRL
EZI2C_SCB__UART_RX_CTRL EQU CYREG_SCB2_UART_RX_CTRL
EZI2C_SCB__UART_RX_STATUS EQU CYREG_SCB2_UART_RX_STATUS
EZI2C_SCB__UART_TX_CTRL EQU CYREG_SCB2_UART_TX_CTRL
EZI2C_SCB_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0P_ICER
EZI2C_SCB_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0P_ICPR
EZI2C_SCB_IRQ__INTC_MASK EQU 0x200
EZI2C_SCB_IRQ__INTC_NUMBER EQU 9
EZI2C_SCB_IRQ__INTC_PRIOR_MASK EQU 0xC000
EZI2C_SCB_IRQ__INTC_PRIOR_NUM EQU 3
EZI2C_SCB_IRQ__INTC_PRIOR_REG EQU CYREG_CM0P_IPR2
EZI2C_SCB_IRQ__INTC_SET_EN_REG EQU CYREG_CM0P_ISER
EZI2C_SCB_IRQ__INTC_SET_PD_REG EQU CYREG_CM0P_ISPR
EZI2C_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL2
EZI2C_SCBCLK__DIV_ID EQU 0x00000041
EZI2C_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL1
EZI2C_SCBCLK__PA_DIV_ID EQU 0x000000FF
EZI2C_scl__0__DR EQU CYREG_GPIO_PRT1_DR
EZI2C_scl__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
EZI2C_scl__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
EZI2C_scl__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
EZI2C_scl__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
EZI2C_scl__0__HSIOM_GPIO EQU 0
EZI2C_scl__0__HSIOM_I2C EQU 14
EZI2C_scl__0__HSIOM_I2C_SCL EQU 14
EZI2C_scl__0__HSIOM_MASK EQU 0x00000F00
EZI2C_scl__0__HSIOM_SHIFT EQU 8
EZI2C_scl__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_scl__0__INTR EQU CYREG_GPIO_PRT1_INTR
EZI2C_scl__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_scl__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
EZI2C_scl__0__MASK EQU 0x04
EZI2C_scl__0__PC EQU CYREG_GPIO_PRT1_PC
EZI2C_scl__0__PC2 EQU CYREG_GPIO_PRT1_PC2
EZI2C_scl__0__PORT EQU 1
EZI2C_scl__0__PS EQU CYREG_GPIO_PRT1_PS
EZI2C_scl__0__SHIFT EQU 2
EZI2C_scl__DR EQU CYREG_GPIO_PRT1_DR
EZI2C_scl__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
EZI2C_scl__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
EZI2C_scl__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
EZI2C_scl__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_scl__INTR EQU CYREG_GPIO_PRT1_INTR
EZI2C_scl__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_scl__INTSTAT EQU CYREG_GPIO_PRT1_INTR
EZI2C_scl__MASK EQU 0x04
EZI2C_scl__PC EQU CYREG_GPIO_PRT1_PC
EZI2C_scl__PC2 EQU CYREG_GPIO_PRT1_PC2
EZI2C_scl__PORT EQU 1
EZI2C_scl__PS EQU CYREG_GPIO_PRT1_PS
EZI2C_scl__SHIFT EQU 2
EZI2C_sda__0__DR EQU CYREG_GPIO_PRT1_DR
EZI2C_sda__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
EZI2C_sda__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
EZI2C_sda__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
EZI2C_sda__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
EZI2C_sda__0__HSIOM_GPIO EQU 0
EZI2C_sda__0__HSIOM_I2C EQU 14
EZI2C_sda__0__HSIOM_I2C_SDA EQU 14
EZI2C_sda__0__HSIOM_MASK EQU 0x0000F000
EZI2C_sda__0__HSIOM_SHIFT EQU 12
EZI2C_sda__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_sda__0__INTR EQU CYREG_GPIO_PRT1_INTR
EZI2C_sda__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_sda__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
EZI2C_sda__0__MASK EQU 0x08
EZI2C_sda__0__PC EQU CYREG_GPIO_PRT1_PC
EZI2C_sda__0__PC2 EQU CYREG_GPIO_PRT1_PC2
EZI2C_sda__0__PORT EQU 1
EZI2C_sda__0__PS EQU CYREG_GPIO_PRT1_PS
EZI2C_sda__0__SHIFT EQU 3
EZI2C_sda__DR EQU CYREG_GPIO_PRT1_DR
EZI2C_sda__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
EZI2C_sda__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
EZI2C_sda__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
EZI2C_sda__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_sda__INTR EQU CYREG_GPIO_PRT1_INTR
EZI2C_sda__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
EZI2C_sda__INTSTAT EQU CYREG_GPIO_PRT1_INTR
EZI2C_sda__MASK EQU 0x08
EZI2C_sda__PC EQU CYREG_GPIO_PRT1_PC
EZI2C_sda__PC2 EQU CYREG_GPIO_PRT1_PC2
EZI2C_sda__PORT EQU 1
EZI2C_sda__PS EQU CYREG_GPIO_PRT1_PS
EZI2C_sda__SHIFT EQU 3

; CapSense
CapSense_Cmod__0__DR EQU CYREG_GPIO_PRT4_DR
CapSense_Cmod__0__DR_CLR EQU CYREG_GPIO_PRT4_DR_CLR
CapSense_Cmod__0__DR_INV EQU CYREG_GPIO_PRT4_DR_INV
CapSense_Cmod__0__DR_SET EQU CYREG_GPIO_PRT4_DR_SET
CapSense_Cmod__0__HSIOM EQU CYREG_HSIOM_PORT_SEL4
CapSense_Cmod__0__HSIOM_MASK EQU 0x00000F00
CapSense_Cmod__0__HSIOM_SHIFT EQU 8
CapSense_Cmod__0__INTCFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__0__INTR EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__0__INTR_CFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__0__INTSTAT EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__0__MASK EQU 0x04
CapSense_Cmod__0__PC EQU CYREG_GPIO_PRT4_PC
CapSense_Cmod__0__PC2 EQU CYREG_GPIO_PRT4_PC2
CapSense_Cmod__0__PORT EQU 4
CapSense_Cmod__0__PS EQU CYREG_GPIO_PRT4_PS
CapSense_Cmod__0__SHIFT EQU 2
CapSense_Cmod__Cmod__DR EQU CYREG_GPIO_PRT4_DR
CapSense_Cmod__Cmod__DR_CLR EQU CYREG_GPIO_PRT4_DR_CLR
CapSense_Cmod__Cmod__DR_INV EQU CYREG_GPIO_PRT4_DR_INV
CapSense_Cmod__Cmod__DR_SET EQU CYREG_GPIO_PRT4_DR_SET
CapSense_Cmod__Cmod__INTCFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__Cmod__INTR EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__Cmod__INTR_CFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__Cmod__INTSTAT EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__Cmod__MASK EQU 0x04
CapSense_Cmod__Cmod__PC EQU CYREG_GPIO_PRT4_PC
CapSense_Cmod__Cmod__PC2 EQU CYREG_GPIO_PRT4_PC2
CapSense_Cmod__Cmod__PORT EQU 4
CapSense_Cmod__Cmod__PS EQU CYREG_GPIO_PRT4_PS
CapSense_Cmod__Cmod__SHIFT EQU 2
CapSense_Cmod__DR EQU CYREG_GPIO_PRT4_DR
CapSense_Cmod__DR_CLR EQU CYREG_GPIO_PRT4_DR_CLR
CapSense_Cmod__DR_INV EQU CYREG_GPIO_PRT4_DR_INV
CapSense_Cmod__DR_SET EQU CYREG_GPIO_PRT4_DR_SET
CapSense_Cmod__INTCFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__INTR EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__INTR_CFG EQU CYREG_GPIO_PRT4_INTR_CFG
CapSense_Cmod__INTSTAT EQU CYREG_GPIO_PRT4_INTR
CapSense_Cmod__MASK EQU 0x04
CapSense_Cmod__PC EQU CYREG_GPIO_PRT4_PC
CapSense_Cmod__PC2 EQU CYREG_GPIO_PRT4_PC2
CapSense_Cmod__PORT EQU 4
CapSense_Cmod__PS EQU CYREG_GPIO_PRT4_PS
CapSense_Cmod__SHIFT EQU 2
CapSense_CSD__ADC_CTL EQU CYREG_CSD_ADC_CTL
CapSense_CSD__CMOD_PAD EQU 1
CapSense_CSD__CSD_CONFIG EQU CYREG_CSD_CONFIG
CapSense_CSD__CSD_INTR EQU CYREG_CSD_INTR
CapSense_CSD__CSD_INTR_SET EQU CYREG_CSD_INTR_SET
CapSense_CSD__CSD_NUMBER EQU 0
CapSense_CSD__CSD_STATUS EQU CYREG_CSD_STATUS
CapSense_CSD__CSDCMP EQU CYREG_CSD_CSDCMP
CapSense_CSD__CSH_TANK_PAD EQU 2
CapSense_CSD__CSHIELD_PAD EQU 4
CapSense_CSD__DEDICATED_IO0 EQU CapSense_CSD__CMOD_PAD
CapSense_CSD__HSCMP EQU CYREG_CSD_HSCMP
CapSense_CSD__INTR_MASK EQU CYREG_CSD_INTR_MASK
CapSense_CSD__REFGEN EQU CYREG_CSD_REFGEN
CapSense_CSD__RESULT_VAL1 EQU CYREG_CSD_RESULT_VAL1
CapSense_CSD__RESULT_VAL2 EQU CYREG_CSD_RESULT_VAL2
CapSense_CSD__SENSE_DUTY EQU CYREG_CSD_SENSE_DUTY
CapSense_CSD__SENSE_PERIOD EQU CYREG_CSD_SENSE_PERIOD
CapSense_CSD__SEQ_INIT_CNT EQU CYREG_CSD_SEQ_INIT_CNT
CapSense_CSD__SEQ_NORM_CNT EQU CYREG_CSD_SEQ_NORM_CNT
CapSense_CSD__SEQ_START EQU CYREG_CSD_SEQ_START
CapSense_CSD__SEQ_TIME EQU CYREG_CSD_SEQ_TIME
CapSense_CSD__SW_AMUXBUF_SEL EQU CYREG_CSD_SW_AMUXBUF_SEL
CapSense_CSD__SW_BYP_SEL EQU CYREG_CSD_SW_BYP_SEL
CapSense_CSD__SW_CMP_N_SEL EQU CYREG_CSD_SW_CMP_N_SEL
CapSense_CSD__SW_CMP_P_SEL EQU CYREG_CSD_SW_CMP_P_SEL
CapSense_CSD__SW_DSI_SEL EQU CYREG_CSD_SW_DSI_SEL
CapSense_CSD__SW_FW_MOD_SEL EQU CYREG_CSD_SW_FW_MOD_SEL
CapSense_CSD__SW_FW_TANK_SEL EQU CYREG_CSD_SW_FW_TANK_SEL
CapSense_CSD__SW_HS_N_SEL EQU CYREG_CSD_SW_HS_N_SEL
CapSense_CSD__SW_HS_P_SEL EQU CYREG_CSD_SW_HS_P_SEL
CapSense_CSD__SW_REFGEN_SEL EQU CYREG_CSD_SW_REFGEN_SEL
CapSense_CSD__SW_RES EQU CYREG_CSD_SW_RES
CapSense_CSD__SW_SHIELD_SEL EQU CYREG_CSD_SW_SHIELD_SEL
CapSense_CSD__VREF_EXT_PAD EQU 8
CapSense_IDACComp__CONFIG EQU CYREG_CSD_CONFIG
CapSense_IDACComp__IDAC EQU CYREG_CSD_IDACB
CapSense_IDACComp__POSITION EQU 1
CapSense_IDACMod__CONFIG EQU CYREG_CSD_CONFIG
CapSense_IDACMod__IDAC EQU CYREG_CSD_IDACA
CapSense_IDACMod__POSITION EQU 0
CapSense_ISR__INTC_CLR_EN_REG EQU CYREG_CM0P_ICER
CapSense_ISR__INTC_CLR_PD_REG EQU CYREG_CM0P_ICPR
CapSense_ISR__INTC_MASK EQU 0x2000
CapSense_ISR__INTC_NUMBER EQU 13
CapSense_ISR__INTC_PRIOR_MASK EQU 0xC000
CapSense_ISR__INTC_PRIOR_NUM EQU 3
CapSense_ISR__INTC_PRIOR_REG EQU CYREG_CM0P_IPR3
CapSense_ISR__INTC_SET_EN_REG EQU CYREG_CM0P_ISER
CapSense_ISR__INTC_SET_PD_REG EQU CYREG_CM0P_ISPR
CapSense_ModClk__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL3
CapSense_ModClk__DIV_ID EQU 0x00000040
CapSense_ModClk__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
CapSense_ModClk__PA_DIV_ID EQU 0x000000FF
CapSense_Sns__0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__0__HSIOM_MASK EQU 0x0F000000
CapSense_Sns__0__HSIOM_SHIFT EQU 24
CapSense_Sns__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__0__MASK EQU 0x40
CapSense_Sns__0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__0__PORT EQU 0
CapSense_Sns__0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__0__SHIFT EQU 6
CapSense_Sns__1__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__1__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__1__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__1__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__1__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__1__HSIOM_MASK EQU 0x00F00000
CapSense_Sns__1__HSIOM_SHIFT EQU 20
CapSense_Sns__1__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__1__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__1__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__1__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__1__MASK EQU 0x20
CapSense_Sns__1__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__1__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__1__PORT EQU 0
CapSense_Sns__1__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__1__SHIFT EQU 5
CapSense_Sns__2__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__2__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__2__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__2__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__2__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__2__HSIOM_MASK EQU 0x000F0000
CapSense_Sns__2__HSIOM_SHIFT EQU 16
CapSense_Sns__2__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__2__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__2__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__2__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__2__MASK EQU 0x10
CapSense_Sns__2__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__2__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__2__PORT EQU 0
CapSense_Sns__2__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__2__SHIFT EQU 4
CapSense_Sns__3__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__3__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__3__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__3__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__3__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__3__HSIOM_MASK EQU 0x0000F000
CapSense_Sns__3__HSIOM_SHIFT EQU 12
CapSense_Sns__3__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__3__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__3__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__3__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__3__MASK EQU 0x08
CapSense_Sns__3__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__3__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__3__PORT EQU 0
CapSense_Sns__3__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__3__SHIFT EQU 3
CapSense_Sns__4__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__4__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__4__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__4__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__4__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__4__HSIOM_MASK EQU 0x00000F00
CapSense_Sns__4__HSIOM_SHIFT EQU 8
CapSense_Sns__4__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__4__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__4__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__4__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__4__MASK EQU 0x04
CapSense_Sns__4__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__4__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__4__PORT EQU 0
CapSense_Sns__4__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__4__SHIFT EQU 2
CapSense_Sns__5__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__5__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__5__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__5__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__5__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CapSense_Sns__5__HSIOM_MASK EQU 0x000000F0
CapSense_Sns__5__HSIOM_SHIFT EQU 4
CapSense_Sns__5__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__5__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__5__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__5__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__5__MASK EQU 0x02
CapSense_Sns__5__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__5__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__5__PORT EQU 0
CapSense_Sns__5__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__5__SHIFT EQU 1
CapSense_Sns__ADAS_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__ADAS_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__ADAS_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__ADAS_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__ADAS_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__ADAS_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__ADAS_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__ADAS_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__ADAS_Sns0__MASK EQU 0x02
CapSense_Sns__ADAS_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__ADAS_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__ADAS_Sns0__PORT EQU 0
CapSense_Sns__ADAS_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__ADAS_Sns0__SHIFT EQU 1
CapSense_Sns__Answer_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__Answer_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__Answer_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__Answer_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__Answer_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Answer_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Answer_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Answer_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Answer_Sns0__MASK EQU 0x40
CapSense_Sns__Answer_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__Answer_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__Answer_Sns0__PORT EQU 0
CapSense_Sns__Answer_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__Answer_Sns0__SHIFT EQU 6
CapSense_Sns__DIST_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__DIST_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__DIST_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__DIST_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__DIST_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__DIST_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__DIST_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__DIST_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__DIST_Sns0__MASK EQU 0x04
CapSense_Sns__DIST_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__DIST_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__DIST_Sns0__PORT EQU 0
CapSense_Sns__DIST_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__DIST_Sns0__SHIFT EQU 2
CapSense_Sns__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Menu_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__Menu_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__Menu_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__Menu_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__Menu_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Menu_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Menu_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Menu_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Menu_Sns0__MASK EQU 0x20
CapSense_Sns__Menu_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__Menu_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__Menu_Sns0__PORT EQU 0
CapSense_Sns__Menu_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__Menu_Sns0__SHIFT EQU 5
CapSense_Sns__Mode_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__Mode_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__Mode_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__Mode_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__Mode_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Mode_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Mode_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Mode_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Mode_Sns0__MASK EQU 0x10
CapSense_Sns__Mode_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__Mode_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__Mode_Sns0__PORT EQU 0
CapSense_Sns__Mode_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__Mode_Sns0__SHIFT EQU 4
CapSense_Sns__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__PORT EQU 0
CapSense_Sns__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__Speech_Sns0__DR EQU CYREG_GPIO_PRT0_DR
CapSense_Sns__Speech_Sns0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
CapSense_Sns__Speech_Sns0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
CapSense_Sns__Speech_Sns0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
CapSense_Sns__Speech_Sns0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Speech_Sns0__INTR EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Speech_Sns0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
CapSense_Sns__Speech_Sns0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
CapSense_Sns__Speech_Sns0__MASK EQU 0x08
CapSense_Sns__Speech_Sns0__PC EQU CYREG_GPIO_PRT0_PC
CapSense_Sns__Speech_Sns0__PC2 EQU CYREG_GPIO_PRT0_PC2
CapSense_Sns__Speech_Sns0__PORT EQU 0
CapSense_Sns__Speech_Sns0__PS EQU CYREG_GPIO_PRT0_PS
CapSense_Sns__Speech_Sns0__SHIFT EQU 3

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x1B0711AB
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4K
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4K_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 8
CYDEV_DFT_SELECT_CLK1 EQU 9
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8cpussv3_VERSION EQU 1
CYIPBLOCK_m0s8csdv2_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8pass4a_VERSION EQU 1
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8srsslt_VERSION EQU 1
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END