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
 * \brief ����ģʽ���̣�ͨ��������ӿ�ʵ��
 *
 * - �������裺
 *   1. �ϵ�ǰ�� WAKE_UP(PIOA_0) ���ӵ��͵�ƽ��
 *   2. �ȴ� MCU �������ģʽ��
 *   3. �� PIOA_0 ���ӵ��ߵ�ƽ��ʹ PIOA_0 �ϲ��������ػ��� MCU��
 *
 * - ʵ������
 *   1. �ɹ��������ģʽʱ���������"enter standby!"���� J-Link ���ԶϿ���
 *      ���򴮿����"WAKE_UP(PIOA_0) must be low!"��
 *   2. PIOA_0 ���������غ�MCU ��λ���С�
 *
 * \note
 *    ֻ���� WAKE_UP(PIOA_0) Ϊ�͵�ƽ��ʱ����ܽ������ģʽ
 *
 * \par Դ����
 * \snippet demo_aml165_core_drv_standbymode_wake_up.c src_aml165_core_drv_standbymode_wake_up
 *
 * \internal
 * \par Modification History
 * - 1.00 17-04-15  nwt, first implementation
 * \endinternal
 */
 
/**
 * \addtogroup demo_if_aml165_core_drv_standbymode_wake_up
 * \copydoc demo_aml165_core_drv_standbymode_wake_up.c
 */
 
/** [src_aml165_core_drv_standbymode_wake_up] */
#include <am_aml165_inst_init.h>
#include "ametal.h"
#include "am_vdebug.h"
#include "demo_zlg_entries.h"
#include "demo_aml165_core_entries.h"

/**
 * \brief �������
 */
void demo_aml165_core_drv_standbymode_wake_up_entry (void)
{
    AM_DBG_INFO("demo aml165_core drv standbymode wake up!\r\n");

    demo_zlg116_drv_standbymode_wake_up_entry();
}
/** [src_aml165_core_drv_standbymode_wake_up] */

/* end of file */