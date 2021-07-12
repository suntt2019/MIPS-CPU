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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-5/dynamic_scanner.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {170U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {254U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {253U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {251U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {247U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {239U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {223U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {191U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {127U, 0U};



static void Always_6_0(char *t0)
{
    char t13[8];
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
    int t14;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(7, ng0);
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

LAB7:    xsi_set_current_line(10, ng0);

LAB10:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 1012);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t14 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng12)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng14)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng16)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t14 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(7, ng0);

LAB9:    xsi_set_current_line(8, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1012);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(9, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB12:    xsi_set_current_line(13, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 920);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    goto LAB28;

LAB14:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB16:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB18:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB20:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB22:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB24:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB26:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

}


extern void work_m_00000000000289181568_0147386696_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000000289181568_0147386696", "isim/practical_test_isim_beh.exe.sim/work/m_00000000000289181568_0147386696.didat");
	xsi_register_executes(pe);
}
