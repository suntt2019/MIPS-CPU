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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/dm.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2048U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Initial_10_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(10, ng0);

LAB2:    xsi_set_current_line(11, ng0);
    xsi_set_current_line(11, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1288);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(11, ng0);

LAB11:    xsi_set_current_line(12, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 1196);
    t19 = (t0 + 1196);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = (t0 + 1196);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t0 + 1288);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(11, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1288);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB13;

}

static void Always_16_1(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2296);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(17, ng0);

LAB9:    xsi_set_current_line(21, ng0);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 1196);
    t24 = (t0 + 1196);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t0 + 1196);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    t30 = (t0 + 600U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t31, 14, 2);
    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1196);
    t12 = (t0 + 1196);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1196);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 14, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1196);
    t12 = (t0 + 1196);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1196);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 14, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1196);
    t12 = (t0 + 1196);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1196);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 14, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t11, 0, *((unsigned int *)t23), t41);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB17;

}

static void Cont_28_2(char *t0)
{
    char t3[8];
    char t6[8];
    char t17[8];
    char t26[8];
    char t30[8];
    char t39[8];
    char t43[8];
    char t52[8];
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
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 2100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1196);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t14, 14, 2);
    t13 = (t0 + 1196);
    t15 = (t13 + 36U);
    t16 = *((char **)t15);
    t18 = (t0 + 1196);
    t19 = (t18 + 44U);
    t20 = *((char **)t19);
    t21 = (t0 + 1196);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 600U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng4)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t25, 14, t24, 32);
    xsi_vlog_generic_get_array_select_value(t17, 8, t16, t20, t23, 2, 1, t26, 32, 2);
    t27 = (t0 + 1196);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t31 = (t0 + 1196);
    t32 = (t31 + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 1196);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = (t0 + 600U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t38, 14, t37, 32);
    xsi_vlog_generic_get_array_select_value(t30, 8, t29, t33, t36, 2, 1, t39, 32, 2);
    t40 = (t0 + 1196);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t44 = (t0 + 1196);
    t45 = (t44 + 44U);
    t46 = *((char **)t45);
    t47 = (t0 + 1196);
    t48 = (t47 + 40U);
    t49 = *((char **)t48);
    t50 = (t0 + 600U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng6)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t51, 14, t50, 32);
    xsi_vlog_generic_get_array_select_value(t43, 8, t42, t46, t49, 2, 1, t52, 32, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t43, 8, t30, 8, t17, 8, t6, 8);
    t53 = (t0 + 2348);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memcpy(t57, t3, 8);
    xsi_driver_vfirst_trans(t53, 0, 31);
    t58 = (t0 + 2304);
    *((int *)t58) = 1;

LAB1:    return;
}


extern void work_m_00000000002519648259_2773049695_init()
{
	static char *pe[] = {(void *)Initial_10_0,(void *)Always_16_1,(void *)Cont_28_2};
	xsi_register_didat("work_m_00000000002519648259_2773049695", "isim/test_isim_beh.exe.sim/work/m_00000000002519648259_2773049695.didat");
	xsi_register_executes(pe);
}
