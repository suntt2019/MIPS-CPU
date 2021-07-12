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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/bridge_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *Bridge test started.";
static unsigned int ng3[] = {305419896U, 0U};
static unsigned int ng4[] = {2271608540U, 0U};
static unsigned int ng5[] = {2309737967U, 0U};
static unsigned int ng6[] = {4275847969U, 0U};
static unsigned int ng7[] = {5U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng8 = "    Read test(DEV_TC): PrRD=%h == %h, DevAddr=%h == %h";
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {23U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng11 = "    Read test(DEV_IN32): PrRD=%h == %h, DevAddr=%h == %h";
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {47U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng14 = "    Read test(DEV_OUT32): PrRD=%h == %h, DevAddr=%h == %h";
static unsigned int ng15[] = {15U, 0U};
static unsigned int ng16[] = {3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng17 = "    Read test(DEV_TC): DevWD=%h == %h, DevAddr=%h == %h";
static unsigned int ng18[] = {3U, 0U};
static unsigned int ng19[] = {18U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng20 = "    Read test(DEV_IN32): DevWD=%h == %h, DevAddr=%h == %h";
static unsigned int ng21[] = {2U, 0U};
static unsigned int ng22[] = {46U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng23 = "    Read test(DEV_OUT32): DevWD=%h == %h, DevAddr=%h == %h";
static unsigned int ng24[] = {14U, 0U};
static const char *ng25 = " *Bridge test finished.";
static int ng26[] = {1, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2520);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng9)));
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng12)));
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng15)));
    xsi_vlogfile_write(1, 0, 0, ng14, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng18)));
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng21)));
    xsi_vlogfile_write(1, 0, 0, ng20, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng24)));
    xsi_vlogfile_write(1, 0, 0, ng23, 5, t0, (char)118, t4, 32, (char)118, t3, 32, (char)118, t6, 4, (char)118, t5, 4);
    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}


extern void work_m_00000000001540132635_0672428334_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001540132635_0672428334", "isim/test_isim_beh.exe.sim/work/m_00000000001540132635_0672428334.didat");
	xsi_register_executes(pe);
}
