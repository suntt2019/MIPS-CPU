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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-9(FINAL)_2MHz/im.v";
static const char *ng1 = "hex/p3-test-main.txt";
static int ng2[] = {0, 0};
static int ng3[] = {56, 0};
static const char *ng4 = "hex/p3-test-int.txt";
static int ng5[] = {128, 0};
static int ng6[] = {192, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};
static int ng9[] = {1, 0};



static void Initial_6_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(6, ng0);

LAB2:    xsi_set_current_line(7, ng0);
    t1 = (t0 + 1608);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    xsi_vlogfile_readmemh(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));
    xsi_set_current_line(8, ng0);
    t1 = (t0 + 1608);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    xsi_vlogfile_readmemh(ng4, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
}

static void Cont_11_1(char *t0)
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

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 8, t13, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 2);
    t16 = (t0 + 1608);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 1608);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng8)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t27, 8, t26, 32);
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t28, 32, 2);
    t29 = (t0 + 1608);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 1608);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1608);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng9)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t40, 8, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 8, t31, t35, t38, 2, 1, t41, 32, 2);
    t42 = (t0 + 1608);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = (t0 + 1608);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 1608);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 1048U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t45, 8, t44, t48, t51, 2, 1, t53, 8, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t45, 8, t32, 8, t19, 8, t6, 8);
    t52 = (t0 + 3176);
    t54 = (t52 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t57, t3, 8);
    xsi_driver_vfirst_trans(t52, 0, 31);
    t58 = (t0 + 3096);
    *((int *)t58) = 1;

LAB1:    return;
}


extern void work_m_00000000002163759346_1091204950_init()
{
	static char *pe[] = {(void *)Initial_6_0,(void *)Cont_11_1};
	xsi_register_didat("work_m_00000000002163759346_1091204950", "isim/practical_test_isim_beh.exe.sim/work/m_00000000002163759346_1091204950.didat");
	xsi_register_executes(pe);
}
