#include "esvo_in_data_init.h"

void esvo_in_data_init(esvo_in_data_t* ptr) {
    ptr->counter = 0;

    //2
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_b
    ptr-> mfci_in_b.
        counter = 0;
    //3
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        counter = 0;
    //3
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        counter = 0;
    //3
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_6hz_b_t
    ////////////////////////////////////mfci_in_6hz_b
    ptr->mfci_in_b.
        mfci_in_6hz_b.
        counter = 0;
    //3
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_1hz_b_t
    ////////////////////////////////////mfci_in_1hz_b
    ptr->mfci_in_b.
        mfci_in_1hz_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////bis_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////bis_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bcvm_b_t
    ////////////////////////////////////bcvm_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bcvm_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_6hz_b_t
    ////////////////////////////////////mfci_in_6hz_bis_b_t
    ////////////////////////////////////bis_b
    ptr->mfci_in_b.
        mfci_in_6hz_b.
        bis_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_6hz_b_t
    ////////////////////////////////////mfci_in_6hz_bcvm_b_t
    ////////////////////////////////////bcvm_b
    ptr->mfci_in_b.
        mfci_in_6hz_b.
        bcvm_b.
        counter = 0;
    //4
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_1hz_b_t
    ////////////////////////////////////mfci_in_1hz_bis_b_t
    ////////////////////////////////////bis_b
    ptr->mfci_in_b.
        mfci_in_1hz_b.
        bis_b.
        counter = 0;
    /* //4 */
    /* ////////////////////////////////////esvo_in_data_t */
    /* ////////////////////////////////////mfci_in_b_t */
    /* ////////////////////////////////////mfci_in_1hz_b_t */
    /* ////////////////////////////////////mfci_in_1hz_bcvm_b_t */
    /* ////////////////////////////////////bis_b */
    /* ptr->mfci_in_b. */
    /*     mfci_in_1hz_b. */
    /*     bcvm_b. */
    /*     counter = 0; */
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_1_b_t
    ////////////////////////////////////sa_1_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_1_b.
        counter = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_1_b.
        header_revision = MFCI_IO_REVISION;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_2_b_t
    ////////////////////////////////////sa_2_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_2_b.
        sau_director_x = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_2_b.
        sau_director_y = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_2_b.
        sau_course_selected = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_3_b_t
    ////////////////////////////////////sa_3_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        absu_alpha = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        ark_bearing = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rvm_altitude_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rvm_altitude_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rvb_altitude = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rsbn_delta_y_1 = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rsbn_delta_x_1 = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rsbn_delta_y_2 = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rsbn_delta_x_2 = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        rsbn_delta_rpk = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_abs_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_abs_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_indicated_speed_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_indicated_speed_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_mach_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_mach_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_qnh_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_qnh_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_qfe_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_altitude_qfe_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_vy_k = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        svs_vy_p = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        vim_ils1_delta_x = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        vim_ils1_delta_y = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        vim_ils2_delta_x = 0;


    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_3_b.
        vim_ils2_delta_y = 0;

    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_4_b_t
    ////////////////////////////////////sa_4_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        bcvm_magn_course = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        bcvm_true_course = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        bcvm_true_pu = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        bcvm_magn_pu = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        bcvm_drift_angle = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_roll_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_roll_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_pitch_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_pitch_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_nz = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_ny_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_ny_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_nx = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_true_pu_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_true_pu_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_magn_pu_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_magn_pu_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_magn_course_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_magn_course_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_true_course_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ins_true_course_p = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ans_true_course = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ans_roll = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        ans_pitch = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        svs_true_speed_k = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_4_b.
        svs_true_speed_p = 0;

    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_5_b_t
    ////////////////////////////////////sa_5_b

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_start_time_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_start_time_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_start_time_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_ud_p_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_rud_sku_p_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_5_b.
        dv_n2_p_3 = 0;

    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_25hz_b_t
    ////////////////////////////////////mfci_in_25hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_6_b_t
    ////////////////////////////////////sa_6_b
    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_ud_p_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n1_sku_p_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_k_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_k_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_k_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_p_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_p_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_n_sd_p_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_ud_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_ud_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_ud_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_sku_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_sku_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_tg_sku_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_wedge_angle_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_wedge_angle_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_wedge_angle_3 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_restart_angle_1 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_restart_angle_2 = 0;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_6_b.
        dv_inlet_restart_angle_3 = 0;

    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_7_b_t
    ////////////////////////////////////sa_7_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv1_afterburn_time_land = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv1_afterburn_time_in_air = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n2_max_danger_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n2_max_danger_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n2_max_danger_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_danger_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_danger_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_danger_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n1_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n_sd_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n_sd_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_n_sd_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_ud_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_ud_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_ud_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_sku_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_sku_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_danger_sku_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_tg_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vpo_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vpo_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vpo_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vot_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vot_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vot_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vfk_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vfk_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_7_b.
        dv_vibration_vfk_3 = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_8_b_t
    ////////////////////////////////////sa_8_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv2_afterburn_time_land = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv2_afterburn_time_in_air = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vpo_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vpo_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vpo_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vot_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vot_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vot_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vfk_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vfk_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_vibration_vfk_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_min_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_min_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_pressure_min_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_in_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_oil_temperature_out_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_nozzle_angle_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_nozzle_angle_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_8_b.
        dv_nozzle_angle_3 = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_9_b_t
    ////////////////////////////////////sa_9_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv3_afterburn_time_land = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv3_afterburn_time_in_air = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_pressure_turb_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_pressure_turb_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_pressure_turb_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n1_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n1_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n1_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_sd_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_sd_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_sd_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n2_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n2_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_bearing_temperature_n2_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_min_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_min_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_min_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_max_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_max_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_oil_level_max_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_pressure_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_pressure_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_pressure_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_temperature_tmt_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_temperature_tmt_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_fuel_temperature_tmt_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_temperature_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_temperature_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_9_b.
        dv_air_temperature_3 = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_10_b_t
    ////////////////////////////////////sa_10_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv4_afterburn_time_land = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv4_afterburn_time_in_air = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_wedge_angle_set_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_wedge_angle_set_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_wedge_angle_set_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_restart_angle_set_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_restart_angle_set_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        dv_inlet_restart_angle_set_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ans_latitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ans_latitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ans_longitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ans_longitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ans_w = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_latitude_k_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_latitude_k_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_latitude_p_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_latitude_p_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_longitude_k_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_longitude_k_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_longitude_p_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_longitude_p_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        ins_drift_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        sau_altitude_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        sau_speed_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        sau_vy_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        sau_mach_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        sau_path_angle_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        svs_pressure_qnh = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        svs_pressure_qfe = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_10_b.
        svs_temperature = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_11_b_t
    ////////////////////////////////////sa_11_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        mup1_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        mup2_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        mup1_y = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        mup2_y = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_vpr = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_mvs = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_vpr_edited = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_mvs_edited = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_pressure_qnh_edited = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        pui_pressure_qfe_edited = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        ark_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        rsbn_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        rsbn_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        rsbn_channel_number_np = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        rsbn_channel_number_ms = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        rsbn_distance_ms = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        topl_fuel_total = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_11_b.
        topl_weight = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_12_b_t
    ////////////////////////////////////sa_12_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_speed_max = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_speed_min = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_roll_max = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_ny_max = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_ny_min = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_alpha_max = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_alpha_min = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_path_angle_pot = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_path_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        pkr_mach_max = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_vor1_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_vor1_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_vor2_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_vor2_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_ils1_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        vim_ils2_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        dme1_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        dme1_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        dme2_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        dme2_frequency = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        bcvm_magn_pu_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        bcvm_delta_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        bcvm_waypoint_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        bcvm_azimuth_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_12_b.
        bcvm_echelon = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_13_b_t
    ////////////////////////////////////sa_13_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_altitude_delta = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_runway_course = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_v1_continued = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_v1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_altitude_min = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_wind_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_wind_speed = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_w = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_fuel_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_azimuth_delta = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_latitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_latitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_longitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_longitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_declination = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_dtmsa = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_true_pu_selected = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_landing_speed_40 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_landing_speed_25 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_runway_orto_s = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_runway_orto_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_speed_correction = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_redundant_time = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        bcvm_takeoff_run = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        sns_latitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        sns_latitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        sns_longitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_13_b.
        sns_longitude_low = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_14_b_t
    ////////////////////////////////////sa_14_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        sns_delta_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        sns_delta_y = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        sns_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        sns_channel_num = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_scale = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_true_course = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_latitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_latitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_longitude_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        rls_longitude_low = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_selected_elevation = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_selected_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_selected_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_a_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_a_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_a_callsign = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_a_elevation = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_b_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_b_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_b_callsign = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_b_elevation = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_c_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_c_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_c_callsign = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_c_elevation = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_d_angle = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_d_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_d_callsign = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_14_b.
        group_aircraft_d_elevation = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_15_b_t
    ////////////////////////////////////sa_15_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_01_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_02_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_03_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_04_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_05_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_06_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_07_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_08_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_09_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_10_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_11_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_12_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_13_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_14_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_15_distance_x = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_01_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_02_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_03_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_04_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_05_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_06_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_07_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_08_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_09_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_10_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_11_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_12_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_13_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_14_distance_z = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_15_b.
        group_aircraft_15_distance_z = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_16_b_t
    ////////////////////////////////////sa_16_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_course = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_fire_name_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_fire_name_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_fire_name_recom_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_fire_name_recom_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_attacks_count = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_altitude_km = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_subtypes = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_4 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_5 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_oes_6 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_units_statuses = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_uv_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_rtr_rap_statuses = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_1_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_2_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_3_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_4_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_5_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_6_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_7_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_8_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_9_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_10_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_11_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_12_damaging_range = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_targets_count_sn = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_show = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_16_b.
        rap_ric_flickering = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_17_b_t
    ////////////////////////////////////sa_17_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_1_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_2_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_3_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_4_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_5_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_6_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_7_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_8_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_9_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_10_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_11_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_12_azimuth = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_1_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_2_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_3_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_4_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_5_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_6_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_7_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_8_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_9_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_10_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_11_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_12_distance = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_distance_high = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_ric_vz_noise = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_buttons_word_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_buttons_word_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_buttons_word_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_buttons_word_4 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_menu_item_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_17_b.
        rap_menu_item_2 = 0;
    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_12hz_b_t
    ////////////////////////////////////mfci_in_12hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_18_b_t
    ////////////////////////////////////sa_18_b
    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_4 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_5 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_6 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_7 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_menu_item_8 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_ivz_flags = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_version = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bpk_bpro_version = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bfp_version = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bou_version = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_bu_version_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_bu_version_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_bu_version_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_bu_version_4 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bsv_bu_version_5 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bou_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_unit5_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_1 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_2 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_3 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_4 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_5 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_6 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_bv_weapon_types_7 = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_unit1_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_unit2_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_rap_kzv_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_recv_side_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_recv_rear_status = 0;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        bis_b.
        sa_18_b.
        rap_send_side_status = 0;

    //5
    ////////////////////////////////////esvo_in_data_t
    ////////////////////////////////////mfci_in_b_t
    ////////////////////////////////////mfci_in_6hz_b_t
    ////////////////////////////////////mfci_in_6hz_bis_b_t
    ////////////////////////////////////mfci_in_sa_19_b_t
    ////////////////////////////////////sa_19_b



}

/* ptr->mfci_in_b.blocks_crc_b[CRC_SA_COUNT] = 0; */

void push_button_1(shm_buttons_holder_t* ptr) {
    ptr->data->button_id = ISOI70M_MFCI_BUTTON_LEFT_1;
}

void esvo_in_data_upd(esvo_in_data_t* ptr) {
    ptr->counter++;

    ptr->mfci_in_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_12hz_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_6hz_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_1hz_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_1_b.
        counter++;

    ptr->mfci_in_b.
        mfci_in_25hz_b.
        bis_b.
        sa_1_b.
        signals_word_1_b.
        dv1_turb_overheating = 1;
}

void esvo_in_data_print(esvo_in_data_t* ptr) {

    printf("esvo_in_data counter: %d \n",ptr->counter);

    printf("mfci_in_b counter: %d \n",ptr->mfci_in_b.counter);

    printf("mfci_in_25hz_b.counter counter: %d \n",
           ptr->mfci_in_b.mfci_in_25hz_b.counter);

    printf("mfci_in_12hz_b.counter: %d \n",
           ptr->mfci_in_b.mfci_in_12hz_b.counter);

    printf("mfci_in_6hz_b.counter: %d \n",
           ptr->mfci_in_b.mfci_in_6hz_b.counter);

    printf("mfci_in_1hz_b.counter: %d \n",
           ptr->mfci_in_b.mfci_in_1hz_b.counter);

    printf("25hz_b.bis_b.counter: %d \n",
           ptr->mfci_in_b.mfci_in_25hz_b.bis_b.counter);

    printf("b.sa_1_b.counter: %d \n",
           ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.counter);
}