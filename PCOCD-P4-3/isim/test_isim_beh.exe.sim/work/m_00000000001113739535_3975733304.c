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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/cp0.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {839974620U, 0U};
static unsigned int ng4[] = {2206499856U, 0U};
static const char *ng5 = "Exception invalid cp0 write sel: %b";
static int ng6[] = {1, 0};
static const char *ng7 = "Conflict control signal for EXL";
static int ng8[] = {15, 0};
static int ng9[] = {10, 0};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};



static void Always_19_0(char *t0)
{
    char t13[8];
    char t23[8];
    char t27[8];
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
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);

LAB10:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t2) != 0)
        goto LAB36;

LAB37:    t5 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB38;

LAB39:    memcpy(t27, t13, 8);

LAB40:    t56 = (t27 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2300);
    t4 = (t0 + 2300);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    t14 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t13, t23, t27, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t22 = (!(t6));
    t21 = (t23 + 4);
    t7 = *((unsigned int *)t21);
    t49 = (!(t7));
    t62 = (t22 && t49);
    t31 = (t27 + 4);
    t8 = *((unsigned int *)t31);
    t63 = (!(t8));
    t64 = (t62 && t63);
    if (t64 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);

LAB54:    t2 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t22 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng1)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t22 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng10)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t22 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng11)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t22 == 1)
        goto LAB61;

LAB62:
LAB63:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);

LAB9:    xsi_set_current_line(21, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(27, ng0);

LAB14:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t11 = (t5 + 4);
    t12 = (t4 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB17:    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(30, ng0);

LAB22:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t3, 2);
    xsi_set_current_line(32, ng0);
    xsi_vlog_stop(1);

LAB20:    goto LAB13;

LAB18:    xsi_set_current_line(28, ng0);

LAB21:    xsi_set_current_line(29, ng0);
    t20 = (t0 + 876U);
    t21 = *((char **)t20);
    t20 = (t0 + 2208);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 32);
    goto LAB20;

LAB23:    xsi_set_current_line(36, ng0);

LAB26:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2208);
    t11 = (t0 + 2208);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t20, 32, 1);
    t21 = (t13 + 4);
    t15 = *((unsigned int *)t21);
    t22 = (!(t15));
    if (t22 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 30);
    goto LAB25;

LAB27:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t13), 1);
    goto LAB28;

LAB29:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2208);
    t11 = (t0 + 2208);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t20, 32, 1);
    t21 = (t13 + 4);
    t15 = *((unsigned int *)t21);
    t22 = (!(t15));
    if (t22 == 1)
        goto LAB32;

LAB33:    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t13), 1);
    goto LAB33;

LAB34:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB36:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB38:    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    memset(t23, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t19);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t11) != 0)
        goto LAB43;

LAB44:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t23);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t20 = (t13 + 4);
    t21 = (t23 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t20);
    t33 = *((unsigned int *)t21);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB41:    *((unsigned int *)t23) = 1;
    goto LAB44;

LAB43:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t23 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t23);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t22 = (t42 & t44);
    t49 = (t46 & t48);
    t50 = (~(t22));
    t51 = (~(t49));
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t54 & t50);
    t55 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t55 & t51);
    goto LAB47;

LAB48:    xsi_set_current_line(41, ng0);

LAB51:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(43, ng0);
    xsi_vlog_stop(1);
    goto LAB50;

LAB52:    t9 = *((unsigned int *)t27);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t23);
    t66 = (t10 - t15);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t2, t3, t65, *((unsigned int *)t23), t67);
    goto LAB53;

LAB55:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2208);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 2116);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB63;

LAB57:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2300);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 2116);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB63;

LAB59:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2024);
    t11 = (t5 + 36U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t12, 30, t4, 2);
    t14 = (t0 + 2116);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    goto LAB63;

LAB61:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2392);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 2116);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB63;

}

static void Cont_57_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2208);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 10);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 3764);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 3696);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_58_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3800);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3704);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_59_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3836);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3712);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_60_4(char *t0)
{
    char t3[8];
    char t6[8];
    char t44[8];
    char t58[8];
    char t65[8];
    char t97[8];
    char t109[8];
    char t118[8];
    char t126[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 3492U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    t2 = (t0 + 1520U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 63U);
    if (t42 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t37) != 0)
        goto LAB9;

LAB10:    memset(t44, 0, 8);
    t45 = (t3 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t3);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t45) != 0)
        goto LAB13;

LAB14:    t52 = (t44 + 4);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB15;

LAB16:    memcpy(t65, t44, 8);

LAB17:    memset(t97, 0, 8);
    t98 = (t65 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t98) != 0)
        goto LAB27;

LAB28:    t105 = (t97 + 4);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB29;

LAB30:    memcpy(t126, t97, 8);

LAB31:    t158 = (t0 + 3872);
    t159 = (t158 + 32U);
    t160 = *((char **)t159);
    t161 = (t160 + 40U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t126 + 4);
    t166 = *((unsigned int *)t126);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans(t158, 0, 0);
    t171 = (t0 + 3720);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t44) = 1;
    goto LAB14;

LAB13:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB14;

LAB15:    t56 = (t0 + 1704U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t56 = (t57 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t56) != 0)
        goto LAB20;

LAB21:    t66 = *((unsigned int *)t44);
    t67 = *((unsigned int *)t58);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t44 + 4);
    t70 = (t58 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t58) = 1;
    goto LAB21;

LAB20:    t64 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB21;

LAB22:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t44 + 4);
    t80 = (t58 + 4);
    t81 = *((unsigned int *)t44);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t58);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB24;

LAB25:    *((unsigned int *)t97) = 1;
    goto LAB28;

LAB27:    t104 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB28;

LAB29:    t110 = (t0 + 1796U);
    t111 = *((char **)t110);
    memset(t109, 0, 8);
    t110 = (t111 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t111);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t110) == 0)
        goto LAB32;

LAB34:    t117 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t117) = 1;

LAB35:    memset(t118, 0, 8);
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t109);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t119) != 0)
        goto LAB38;

LAB39:    t127 = *((unsigned int *)t97);
    t128 = *((unsigned int *)t118);
    t129 = (t127 & t128);
    *((unsigned int *)t126) = t129;
    t130 = (t97 + 4);
    t131 = (t118 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB32:    *((unsigned int *)t109) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t118) = 1;
    goto LAB39;

LAB38:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB39;

LAB40:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t97 + 4);
    t141 = (t118 + 4);
    t142 = *((unsigned int *)t97);
    t143 = (~(t142));
    t144 = *((unsigned int *)t140);
    t145 = (~(t144));
    t146 = *((unsigned int *)t118);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (~(t148));
    t150 = (t143 & t145);
    t151 = (t147 & t149);
    t152 = (~(t150));
    t153 = (~(t151));
    t154 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t154 & t152);
    t155 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t155 & t153);
    t156 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t156 & t152);
    t157 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t157 & t153);
    goto LAB42;

}


extern void work_m_00000000001113739535_3975733304_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Cont_57_1,(void *)Cont_58_2,(void *)Cont_59_3,(void *)Cont_60_4};
	xsi_register_didat("work_m_00000000001113739535_3975733304", "isim/test_isim_beh.exe.sim/work/m_00000000001113739535_3975733304.didat");
	xsi_register_executes(pe);
}
