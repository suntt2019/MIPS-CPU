/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/im.v";
static int ng1[] = {3, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};



static void Cont_6_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t15[8];
    char t19[8];
    char t28[8];
    char t32[8];
    char t41[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 920);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 16, t13, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 2);
    t16 = (t0 + 920);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t20 = (t0 + 920);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 920);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t27, 16, t26, 32);
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t28, 32, 2);
    t29 = (t0 + 920);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    t33 = (t0 + 920);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 920);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 600U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t40, 16, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 8, t31, t35, t38, 2, 1, t41, 32, 2);
    t42 = (t0 + 920);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t46 = (t0 + 920);
    t47 = (t46 + 44U);
    t48 = *((char **)t47);
    t49 = (t0 + 920);
    t50 = (t49 + 40U);
    t51 = *((char **)t50);
    t52 = (t0 + 600U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t45, 8, t44, t48, t51, 2, 1, t53, 16, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t45, 8, t32, 8, t19, 8, t6, 8);
    t52 = (t0 + 1684);
    t54 = (t52 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memcpy(t57, t3, 8);
    xsi_driver_vfirst_trans(t52, 0, 31);
    t58 = (t0 + 1640);
    *((int *)t58) = 1;

LAB1:    return;
}


extern void work_m_00000000002163759346_0441689839_init()
{
	static char *pe[] = {(void *)Cont_6_0};
	xsi_register_didat("work_m_00000000002163759346_0441689839", "isim/test_isim_beh.exe.sim/work/m_00000000002163759346_0441689839.didat");
	xsi_register_executes(pe);
}
