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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002163759346_1091204950_init();
    work_m_00000000000225625937_3224323566_init();
    work_m_00000000002782445530_1213024400_init();
    work_m_00000000003976691679_0886308060_init();
    work_m_00000000002519648259_4254360712_init();
    work_m_00000000000064410189_1785967555_init();
    work_m_00000000000012186535_2012187033_init();
    work_m_00000000003273717699_3092946469_init();
    work_m_00000000001113739535_3975733304_init();
    work_m_00000000000923471680_4159700479_init();
    work_m_00000000003321209654_3877310806_init();
    work_m_00000000002485719795_0156190743_init();
    work_m_00000000000367848866_0053799672_init();
    work_m_00000000001114782239_0286164271_init();
    work_m_00000000001851269976_0832558267_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001851269976_0832558267");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
