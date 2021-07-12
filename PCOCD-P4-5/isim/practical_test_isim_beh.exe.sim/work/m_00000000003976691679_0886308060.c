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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-5/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};



static void Always_13_0(char *t0)
{
    char t10[16];
    char t12[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char t48[8];
    char t51[8];
    char t85[8];
    char t88[8];
    char t128[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    int t135;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t12, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t7))
        goto LAB41;

LAB39:    t8 = (t4 + 4);
    t9 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t9))
        goto LAB41;

LAB40:    *((unsigned int *)t12) = 1;

LAB41:    t11 = (t0 + 1472);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1196);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    t11 = (t12 + 4);
    t23 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    *((unsigned int *)t41) = t21;
    t40 = (t4 + 4);
    t44 = (t12 + 4);
    t45 = (t41 + 4);
    t22 = *((unsigned int *)t40);
    t24 = *((unsigned int *)t44);
    t25 = (t22 | t24);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t45);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB42;

LAB43:
LAB44:    t46 = (t0 + 600U);
    t47 = *((char **)t46);
    memset(t42, 0, 8);
    t46 = (t42 + 4);
    t49 = (t47 + 4);
    t30 = *((unsigned int *)t47);
    t31 = (t30 >> 31);
    t34 = (t31 & 1);
    *((unsigned int *)t42) = t34;
    t35 = *((unsigned int *)t49);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t46) = t37;
    t38 = *((unsigned int *)t41);
    t39 = *((unsigned int *)t42);
    t52 = (t38 ^ t39);
    *((unsigned int *)t43) = t52;
    t50 = (t41 + 4);
    t53 = (t42 + 4);
    t54 = (t43 + 4);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t53);
    t58 = (t56 | t57);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB45;

LAB46:
LAB47:    t55 = (t0 + 692U);
    t63 = *((char **)t55);
    memset(t48, 0, 8);
    t55 = (t48 + 4);
    t64 = (t63 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (t65 >> 31);
    t67 = (t66 & 1);
    *((unsigned int *)t48) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 31);
    t70 = (t69 & 1);
    *((unsigned int *)t55) = t70;
    t71 = *((unsigned int *)t43);
    t72 = *((unsigned int *)t48);
    t73 = (t71 ^ t72);
    *((unsigned int *)t51) = t73;
    t74 = (t43 + 4);
    t75 = (t48 + 4);
    t76 = (t51 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB48;

LAB49:
LAB50:    t84 = (t0 + 1564);
    xsi_vlogvar_assign_value(t84, t51, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1288);
    t8 = (t0 + 1288);
    t9 = (t8 + 44U);
    t11 = *((char **)t9);
    t23 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t12, t11, 2, t23, 4, 2);
    t40 = (t12 + 4);
    t13 = *((unsigned int *)t40);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t12, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB55;

LAB53:    t4 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t7))
        goto LAB55;

LAB54:    *((unsigned int *)t12) = 1;

LAB55:    memset(t41, 0, 8);
    t8 = (t12 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) != 0)
        goto LAB58;

LAB59:    t11 = (t41 + 4);
    t18 = *((unsigned int *)t41);
    t19 = (!(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB60;

LAB61:    memcpy(t48, t41, 8);

LAB62:    memset(t51, 0, 8);
    t63 = (t48 + 4);
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t48);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t63) != 0)
        goto LAB75;

LAB76:    t74 = (t51 + 4);
    t72 = *((unsigned int *)t51);
    t73 = *((unsigned int *)t74);
    t77 = (t72 || t73);
    if (t77 > 0)
        goto LAB77;

LAB78:    memcpy(t88, t51, 8);

LAB79:    t118 = (t88 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t88);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB2;

LAB7:    xsi_set_current_line(15, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t10, 32, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_minus(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t10, 32, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB22;

LAB23:
LAB24:    t40 = (t0 + 1196);
    xsi_vlogvar_assign_value(t40, t12, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB25;

LAB26:
LAB27:    t40 = (t0 + 1196);
    xsi_vlogvar_assign_value(t40, t12, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t41) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t8 = (t0 + 692U);
    t9 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t11);
    t24 = (t22 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t41);
    t27 = *((unsigned int *)t42);
    t28 = (t26 ^ t27);
    *((unsigned int *)t43) = t28;
    t23 = (t41 + 4);
    t40 = (t42 + 4);
    t44 = (t43 + 4);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t40);
    t31 = (t29 | t30);
    *((unsigned int *)t44) = t31;
    t34 = *((unsigned int *)t44);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB28;

LAB29:
LAB30:    t45 = (t0 + 600U);
    t46 = *((char **)t45);
    t45 = (t0 + 692U);
    t47 = *((char **)t45);
    memset(t48, 0, 8);
    t45 = (t46 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB32;

LAB31:    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t46) < *((unsigned int *)t47))
        goto LAB33;

LAB34:    t38 = *((unsigned int *)t43);
    t39 = *((unsigned int *)t48);
    t52 = (t38 ^ t39);
    *((unsigned int *)t51) = t52;
    t53 = (t43 + 4);
    t54 = (t48 + 4);
    t55 = (t51 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB36;

LAB37:
LAB38:    t63 = ((char*)((ng1)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t63, 31, t51, 1);
    t64 = (t0 + 1196);
    xsi_vlogvar_assign_value(t64, t12, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB21;

LAB19:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t41) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t8, 31, t41, 1);
    t9 = (t0 + 1196);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    goto LAB21;

LAB22:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t21 | t22);
    t11 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t38 & t34);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & t35);
    goto LAB24;

LAB25:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t21 | t22);
    t11 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    goto LAB27;

LAB28:    t36 = *((unsigned int *)t43);
    t37 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t36 | t37);
    goto LAB30;

LAB32:    t50 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t48) = 1;
    goto LAB34;

LAB36:    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t51) = (t61 | t62);
    goto LAB38;

LAB42:    t28 = *((unsigned int *)t41);
    t29 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t28 | t29);
    goto LAB44;

LAB45:    t61 = *((unsigned int *)t43);
    t62 = *((unsigned int *)t54);
    *((unsigned int *)t43) = (t61 | t62);
    goto LAB47;

LAB48:    t82 = *((unsigned int *)t51);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t51) = (t82 | t83);
    goto LAB50;

LAB51:    xsi_vlogvar_assign_value(t7, t4, 0, *((unsigned int *)t12), 1);
    goto LAB52;

LAB56:    *((unsigned int *)t41) = 1;
    goto LAB59;

LAB58:    t9 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB60:    t23 = (t0 + 876U);
    t40 = *((char **)t23);
    t23 = ((char*)((ng2)));
    memset(t42, 0, 8);
    if (*((unsigned int *)t40) != *((unsigned int *)t23))
        goto LAB65;

LAB63:    t44 = (t40 + 4);
    t45 = (t23 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB65;

LAB64:    *((unsigned int *)t42) = 1;

LAB65:    memset(t43, 0, 8);
    t46 = (t42 + 4);
    t22 = *((unsigned int *)t46);
    t24 = (~(t22));
    t25 = *((unsigned int *)t42);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t46) != 0)
        goto LAB68;

LAB69:    t28 = *((unsigned int *)t41);
    t29 = *((unsigned int *)t43);
    t30 = (t28 | t29);
    *((unsigned int *)t48) = t30;
    t49 = (t41 + 4);
    t50 = (t43 + 4);
    t53 = (t48 + 4);
    t31 = *((unsigned int *)t49);
    t34 = *((unsigned int *)t50);
    t35 = (t31 | t34);
    *((unsigned int *)t53) = t35;
    t36 = *((unsigned int *)t53);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB62;

LAB66:    *((unsigned int *)t43) = 1;
    goto LAB69;

LAB68:    t47 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB69;

LAB70:    t38 = *((unsigned int *)t48);
    t39 = *((unsigned int *)t53);
    *((unsigned int *)t48) = (t38 | t39);
    t54 = (t41 + 4);
    t55 = (t43 + 4);
    t52 = *((unsigned int *)t54);
    t56 = (~(t52));
    t57 = *((unsigned int *)t41);
    t6 = (t57 & t56);
    t58 = *((unsigned int *)t55);
    t59 = (~(t58));
    t60 = *((unsigned int *)t43);
    t32 = (t60 & t59);
    t61 = (~(t6));
    t62 = (~(t32));
    t65 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t65 & t61);
    t66 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t66 & t62);
    goto LAB72;

LAB73:    *((unsigned int *)t51) = 1;
    goto LAB76;

LAB75:    t64 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB76;

LAB77:    t75 = (t0 + 1564);
    t76 = (t75 + 36U);
    t84 = *((char **)t76);
    memset(t85, 0, 8);
    t86 = (t84 + 4);
    t78 = *((unsigned int *)t86);
    t79 = (~(t78));
    t80 = *((unsigned int *)t84);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t86) != 0)
        goto LAB82;

LAB83:    t83 = *((unsigned int *)t51);
    t89 = *((unsigned int *)t85);
    t90 = (t83 & t89);
    *((unsigned int *)t88) = t90;
    t91 = (t51 + 4);
    t92 = (t85 + 4);
    t93 = (t88 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB79;

LAB80:    *((unsigned int *)t85) = 1;
    goto LAB83;

LAB82:    t87 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB83;

LAB84:    t99 = *((unsigned int *)t88);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t88) = (t99 | t100);
    t101 = (t51 + 4);
    t102 = (t85 + 4);
    t103 = *((unsigned int *)t51);
    t104 = (~(t103));
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t85);
    t108 = (~(t107));
    t109 = *((unsigned int *)t102);
    t110 = (~(t109));
    t33 = (t104 & t106);
    t111 = (t108 & t110);
    t112 = (~(t33));
    t113 = (~(t111));
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t112);
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    t116 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t116 & t112);
    t117 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t117 & t113);
    goto LAB86;

LAB87:    xsi_set_current_line(29, ng0);

LAB90:    xsi_set_current_line(30, ng0);
    t124 = (t0 + 1564);
    t125 = (t124 + 36U);
    t126 = *((char **)t125);
    t127 = (t0 + 1288);
    t129 = (t0 + 1288);
    t130 = (t129 + 44U);
    t131 = *((char **)t130);
    t132 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t128, t131, 2, t132, 4, 2);
    t133 = (t128 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (!(t134));
    if (t135 == 1)
        goto LAB91;

LAB92:    goto LAB89;

LAB91:    xsi_vlogvar_assign_value(t127, t126, 0, *((unsigned int *)t128), 1);
    goto LAB92;

}


extern void work_m_00000000003976691679_0886308060_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000003976691679_0886308060", "isim/practical_test_isim_beh.exe.sim/work/m_00000000003976691679_0886308060.didat");
	xsi_register_executes(pe);
}
