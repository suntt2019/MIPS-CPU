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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/bac_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *BAC test started.";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {305419896U, 0U};
static unsigned int ng5[] = {303182900U, 0U};
static unsigned int ng6[] = {2021161080U, 0U};
static const char *ng7 = "    Word test: Ain=%h, Aout=%h == %h, Din1=%h, Dout1=%h == %h, Din2=%h, Dout2=%h == %h";
static const char *ng8 = "Assertion Error";
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {65U, 0U};
static unsigned int ng11[] = {2022707764U, 0U};
static const char *ng12 = "    Byte test: Ain=%h, Aout=%h == %h, Din1=%h, Dout1=%h == %h, Din2=%h, Dout2=%h == %h";
static unsigned int ng13[] = {64U, 0U};
static unsigned int ng14[] = {2022733876U, 0U};
static unsigned int ng15[] = {18U, 0U};
static const char *ng16 = " *BAC test finished.";
static int ng17[] = {1, 0};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t24[8];
    char t25[8];
    char t26[8];
    char t35[8];
    char t36[8];
    char t42[8];
    char t69[8];
    char t85[8];
    char t88[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2428);
    *((int *)t2) = 1;
    t3 = (t0 + 2260);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2132);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1288);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1380);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 784U);
    t14 = *((char **)t13);
    t13 = (t0 + 1380);
    t15 = (t13 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 1472);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 876U);
    t21 = *((char **)t20);
    t20 = (t0 + 1472);
    t22 = (t20 + 36U);
    t23 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng7, 10, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32, (char)118, t12, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t19, 32, (char)118, t21, 32, (char)118, t23, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t25, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB9;

LAB7:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t25) = 1;

LAB9:    memset(t26, 0, 8);
    t8 = (t25 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB13:    t10 = (t26 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t10);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t42, t26, 8);

LAB16:    memset(t69, 0, 8);
    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t70) != 0)
        goto LAB29;

LAB30:    t77 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB31;

LAB32:    memcpy(t96, t69, 8);

LAB33:    memset(t24, 0, 8);
    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t128) == 0)
        goto LAB44;

LAB46:    t134 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t134) = 1;

LAB47:    t135 = (t24 + 4);
    t136 = (t96 + 4);
    t137 = *((unsigned int *)t96);
    t138 = (~(t137));
    *((unsigned int *)t24) = t138;
    *((unsigned int *)t135) = 0;
    if (*((unsigned int *)t136) != 0)
        goto LAB49;

LAB48:    t143 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t143 & 1U);
    t144 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t144 & 1U);
    t145 = (t24 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t24);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2132);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB10:    *((unsigned int *)t26) = 1;
    goto LAB13;

LAB12:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1380);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t35, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB19;

LAB17:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB19;

LAB18:    *((unsigned int *)t35) = 1;

LAB19:    memset(t36, 0, 8);
    t17 = (t35 + 4);
    t37 = *((unsigned int *)t17);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB23:    t43 = *((unsigned int *)t26);
    t44 = *((unsigned int *)t36);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t19 = (t26 + 4);
    t20 = (t36 + 4);
    t21 = (t42 + 4);
    t46 = *((unsigned int *)t19);
    t47 = *((unsigned int *)t20);
    t48 = (t46 | t47);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t21);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB20:    *((unsigned int *)t36) = 1;
    goto LAB23;

LAB22:    t18 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB24:    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t42) = (t51 | t52);
    t22 = (t26 + 4);
    t23 = (t36 + 4);
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t22);
    t56 = (~(t55));
    t57 = *((unsigned int *)t36);
    t58 = (~(t57));
    t59 = *((unsigned int *)t23);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t65 & t63);
    t66 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t63);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    goto LAB26;

LAB27:    *((unsigned int *)t69) = 1;
    goto LAB30;

LAB29:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB30;

LAB31:    t81 = (t0 + 876U);
    t82 = *((char **)t81);
    t81 = (t0 + 1472);
    t83 = (t81 + 36U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    if (*((unsigned int *)t82) != *((unsigned int *)t84))
        goto LAB36;

LAB34:    t86 = (t82 + 4);
    t87 = (t84 + 4);
    if (*((unsigned int *)t86) != *((unsigned int *)t87))
        goto LAB36;

LAB35:    *((unsigned int *)t85) = 1;

LAB36:    memset(t88, 0, 8);
    t89 = (t85 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t89) != 0)
        goto LAB39;

LAB40:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB33;

LAB37:    *((unsigned int *)t88) = 1;
    goto LAB40;

LAB39:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB40;

LAB41:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB43;

LAB44:    *((unsigned int *)t24) = 1;
    goto LAB47;

LAB49:    t139 = *((unsigned int *)t24);
    t140 = *((unsigned int *)t136);
    *((unsigned int *)t24) = (t139 | t140);
    t141 = *((unsigned int *)t135);
    t142 = *((unsigned int *)t136);
    *((unsigned int *)t135) = (t141 | t142);
    goto LAB48;

LAB50:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB52;

LAB53:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng13)));
    t8 = (t0 + 1380);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng14)));
    t13 = (t0 + 1472);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 876U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng15)));
    xsi_vlogfile_write(1, 0, 0, ng12, 10, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t6, 32, (char)118, t10, 32, (char)118, t12, 32, (char)118, t11, 32, (char)118, t15, 32, (char)118, t17, 32, (char)118, t16, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t25, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB56;

LAB54:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB56;

LAB55:    *((unsigned int *)t25) = 1;

LAB56:    memset(t26, 0, 8);
    t6 = (t25 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t6) != 0)
        goto LAB59;

LAB60:    t8 = (t26 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t8);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB61;

LAB62:    memcpy(t42, t26, 8);

LAB63:    memset(t69, 0, 8);
    t20 = (t42 + 4);
    t71 = *((unsigned int *)t20);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t20) != 0)
        goto LAB76;

LAB77:    t22 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t22);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB78;

LAB79:    memcpy(t96, t69, 8);

LAB80:    memset(t24, 0, 8);
    t95 = (t96 + 4);
    t129 = *((unsigned int *)t95);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB94;

LAB92:    if (*((unsigned int *)t95) == 0)
        goto LAB91;

LAB93:    t100 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t100) = 1;

LAB94:    t101 = (t24 + 4);
    t102 = (t96 + 4);
    t137 = *((unsigned int *)t96);
    t138 = (~(t137));
    *((unsigned int *)t24) = t138;
    *((unsigned int *)t101) = 0;
    if (*((unsigned int *)t102) != 0)
        goto LAB96;

LAB95:    t143 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t143 & 1U);
    t144 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t144 & 1U);
    t110 = (t24 + 4);
    t146 = *((unsigned int *)t110);
    t147 = (~(t146));
    t148 = *((unsigned int *)t24);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB97;

LAB98:
LAB99:    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB57:    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB59:    t7 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB61:    t9 = (t0 + 784U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng14)));
    memset(t35, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t9))
        goto LAB66;

LAB64:    t11 = (t10 + 4);
    t12 = (t9 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB66;

LAB65:    *((unsigned int *)t35) = 1;

LAB66:    memset(t36, 0, 8);
    t13 = (t35 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t13) != 0)
        goto LAB69;

LAB70:    t43 = *((unsigned int *)t26);
    t44 = *((unsigned int *)t36);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t15 = (t26 + 4);
    t16 = (t36 + 4);
    t17 = (t42 + 4);
    t46 = *((unsigned int *)t15);
    t47 = *((unsigned int *)t16);
    t48 = (t46 | t47);
    *((unsigned int *)t17) = t48;
    t49 = *((unsigned int *)t17);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB63;

LAB67:    *((unsigned int *)t36) = 1;
    goto LAB70;

LAB69:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB70;

LAB71:    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t17);
    *((unsigned int *)t42) = (t51 | t52);
    t18 = (t26 + 4);
    t19 = (t36 + 4);
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t36);
    t58 = (~(t57));
    t59 = *((unsigned int *)t19);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t65 & t63);
    t66 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t63);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    goto LAB73;

LAB74:    *((unsigned int *)t69) = 1;
    goto LAB77;

LAB76:    t21 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB77;

LAB78:    t23 = (t0 + 876U);
    t70 = *((char **)t23);
    t23 = ((char*)((ng15)));
    memset(t85, 0, 8);
    if (*((unsigned int *)t70) != *((unsigned int *)t23))
        goto LAB83;

LAB81:    t76 = (t70 + 4);
    t77 = (t23 + 4);
    if (*((unsigned int *)t76) != *((unsigned int *)t77))
        goto LAB83;

LAB82:    *((unsigned int *)t85) = 1;

LAB83:    memset(t88, 0, 8);
    t81 = (t85 + 4);
    t90 = *((unsigned int *)t81);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t81) != 0)
        goto LAB86;

LAB87:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t83 = (t69 + 4);
    t84 = (t88 + 4);
    t86 = (t96 + 4);
    t103 = *((unsigned int *)t83);
    t104 = *((unsigned int *)t84);
    t105 = (t103 | t104);
    *((unsigned int *)t86) = t105;
    t106 = *((unsigned int *)t86);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB80;

LAB84:    *((unsigned int *)t88) = 1;
    goto LAB87;

LAB86:    t82 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB87;

LAB88:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t96) = (t108 | t109);
    t87 = (t69 + 4);
    t89 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t87);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t89);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t124 & t122);
    t125 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB90;

LAB91:    *((unsigned int *)t24) = 1;
    goto LAB94;

LAB96:    t139 = *((unsigned int *)t24);
    t140 = *((unsigned int *)t102);
    *((unsigned int *)t24) = (t139 | t140);
    t141 = *((unsigned int *)t101);
    t142 = *((unsigned int *)t102);
    *((unsigned int *)t101) = (t141 | t142);
    goto LAB95;

LAB97:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB99;

}


extern void work_m_00000000002784878128_2717024220_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000002784878128_2717024220", "isim/test_isim_beh.exe.sim/work/m_00000000002784878128_2717024220.didat");
	xsi_register_executes(pe);
}
