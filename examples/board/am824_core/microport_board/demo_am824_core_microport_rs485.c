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
 * \brief MicroPort-RS485 ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - �������裺
 *   1. �� MicroPort-RS485 ��չ�����ӵ� AM824-Core �� MicroPort �ӿڡ�
 *
 * - ʵ������
 *   1. ������� "MicroPort-RS485 Test:"��
 *   2. ����������յ����ַ�����
 *
 * \note
 *   1. TP8485E Ϊ RS485 ת����оƬ��
 *   2. ����ʹ�� USART0���� DEBUG ����ʹ�ô�����ͬ������۲촮�ڴ�ӡ�ĵ�����Ϣ����
 *      Ҫ�� PIO0_0 �������� PC ���ڵ� TXD��PIO0_4 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_am824_core_microport_rs485.c src_am824_core_microport_rs485
 *
 * \internal
 * \par Modification History
 * - 1.00 17-11-13  pea, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am824_core_microport_rs485
 * \copydoc demo_am824_core_microport_rs485.c
 */

/** [src_am824_core_microport_rs485] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_lpc82x_inst_init.h"
#include "demo_std_entries.h"



/**
 * \brief �������
 */
void demo_am824_core_microport_rs485_entry (void)
{
    AM_DBG_INFO("demo am824_core microport rs485!\r\n");

    demo_std_uart_rs485_entry(am_microport_rs485_inst_init());
}
/** [src_am824_core_microport_rs485] */

/* end of file */