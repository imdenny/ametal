/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief CLK 例程，通过 HW 层接口实现
 *
 * - 实验现象：
 *   1. 串口打印各总线频率；
 *   2. PIOA_9 输出系统时钟（SYSCLK）。
 *
 * \note
 *    1. 由于默认调试串口 TXD 为 PIOA_9，与时钟输出引脚冲突，所以本例程中的调试信息
 *       通过 PIOA_2 输出，如需观察串口打印的调试信息，需要将 PIOA_2 引脚连接 PC 串
 *       口的 RXD。
 * 
 * \par 源代码
 * \snippet demo_aml165_core_hw_clk.c src_aml165_core_hw_clk
 * 
 * \internal
 * \par Modification History
 * - 1.00 15-7-13  sss, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_aml165_core_hw_clk
 * \copydoc demo_aml165_core_hw_clk.c
 */

/** [src_aml165_core_hw_clk] */
#include <am_aml165_inst_init.h>
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg116.h"
#include "demo_zlg_entries.h"
#include "demo_aml165_core_entries.h"

/** \brief 配置调试串口输出的波特率 */
#define __DEBUG_BAUDRATE        115200

/**
 * \brief 初始化串口 2 为调试串口
 */
am_local void __uart_init (void)
{
    am_uart_handle_t handle = NULL;

    handle = am_zlg116_uart2_inst_init();

    /* 调试初始化 */
    am_debug_init(handle, __DEBUG_BAUDRATE);
}

/**
 * \brief 例程入口
 */
void demo_aml165_core_hw_clk_entry (void)
{
    am_clk_id_t clk_id[] = {CLK_PLLIN,
                            CLK_PLLOUT,
                            CLK_AHB,
                            CLK_APB1,
                            CLK_APB2,
                            CLK_HSEOSC,
                            CLK_LSI,
                            CLK_HSI};

    __uart_init();

    AM_DBG_INFO("demo aml165_core hw clk!\r\n");

    am_gpio_pin_cfg(PIOA_9, PIOA_9_MCO | PIOA_9_AF_PP | PIOA_9_SPEED_50MHz);

    amhw_zlg116_rcc_mco_src_set(4);

    demo_zlg_hw_clk_entry(&clk_id[0], AM_NELEMENTS(clk_id));
}
/** [src_aml165_core_hw_clk] */

/* end of file */
