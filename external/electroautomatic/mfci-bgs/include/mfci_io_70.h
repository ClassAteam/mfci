/*!
 * @file mfci_io_70.h
 * @brief ����������� ������� � �������� ������ ���� � ��� ��� �������� ���-70� � ���-70�-506
 * @author ���� �������
 * @copyright �� ��� "�����������������", ���-1
 * @details
 * #### ����� ����
 *    ���
 * #### �����������
 *    ������� ����������:
 *    ��  ����-3.1 �/� 01-03   - 25 ��   - ���������� ��������� (������������)
 *    ��  ����-3.1 �/� 04      - 25 ��   - ���, ���, ����, ����, ���, ����, ��/�, ��, ���
 *    ��  ����-3.1 �/� 05      - 25 ��   - ��/�, ��, ���
 *    ��  ����-3.1 �/� 06      - 25 ��   - ��/�, ��
 *    ��  ����-3.1 �/� 07-09   - 12.5 �� - ��/�, ��
 *    ��  ����-3.1 �/� 10      - 12.5 �� - ���, ���, ����, ����, ���, ����, ��/�, ��
 *    ��  ����-3.1 �/� 11      - 12.5 �� - ���������� ��������� (���/���)
 *    ��  ����-3.1 �/� 12      - 12.5 �� - ���, ���, ����, ����, ���, ���
 *    ��  ����-3.1 �/� 13      - 12.5 �� - ���, ���, ����, ����, ���
 *    ��  ����-3.1 �/� 14      - 12.5 �� - ���, ���, ���, ����
 *    ��  ����-3.1 �/� 15      - 12.5 �� - ����
 *    ��  ����-3.1 �/� 16-18   - 12.5 �� - ���
 *    ��  ����-3.1 �/� 19      - 6.25 �� - ���
 *    ��  ����-3.1 �/� 20      - 6.25 �� - ���, ���
 *    ��  ����-3.1 �/� 21      - 6.25 �� - ���, ���, ��/�, ����
 *    ��  ����-3.1 �/� 22      - 6.25 �� - ���, ����
 *    ��  ����-3.1 �/� 23      - 6.25 �� - ����, ���
 *    ��  ����-3.1 �/� 24      - 6.25 �� - ���, ���, ��
 *    ��  ����-3.1 �/� 25      - 1 ��    - ���������� ��������� (����� ���)
 *    ��  ����-3.1 �/� 26-28   - 1 ��    - ���/����/�����/��/���/���
 *    ��  ����-3.1 �/� 29-30   - 6.25 �� - ���������� ��������� (���� ������)
 *    ��  ����-3.1 �/� 1-3 ��� - 1 ��    - ������ �� ���� � ���
 *    ��� ����-3.1 �/� 01      - 12.5 �� - ��������� � ����������� �������
 *    ��� ����-3.1 �/� 02-03   - 12.5 �� - ������ � ����������� ����� ��
 *    ��� ����-3.1 �/� 05      - 12.5 �� - ������ ���
 *    ��  ����-3.2 �/� 01-20   - 12.5 �� - ��� (�� ��� ��)
 *    ��  ����-3.2 �/� 21-23   - 12.5 �� - ��� (�� ���� � ���)
 *    ��  ����-3.2 �/� 24      - 6.25 �� - ����
 *    ��  ����-3.2 �/� 25      - 1 ��    - ���
 *    ��  ����-3.2 �/� 26      - 12.5 �� - ����
 *    ��  ����-3.2 �/� 27-29   - 6.25 �� - ���
 *    ��  ����-3.2 �/� 30      - 1 ��    - ���-���� � 19��
 *    ��� ����-3.2 �/� 01      - 12.5 �� - ��������� � ����������� �������
 *    ��� ����-3.2 �/� 04      - 12.5 �� - ���
 *    ��� ����-3.2 �/� 06-07   - 12.5 �� - ���-����
 *    ��� ����-3.2 �/� 08      - 12.5 �� - �� � ������ ���-504/506
 *    ����� ������� �� ����� ���� "��� 504/506": 8
 * #### ���� ���������� ��������� �����
 *    3 ������� 2022 �.
 */
// clang-format off
#pragma once
#if defined(SOI45) || defined(SOI70)
#include <ctypes.h>
#else
#include "addefs.h"
#endif

//! ������� ������������� mfci_io_70.h
#define MFCI_IO_REVISION 12325

#define MFCI_COUNT              11     //!< ���������� ����
#define DV_COUNT                4      //!< ���������� ����������
#define BGS_CPU_COUNT           2      //!< ���������� ��� ���
#define CRC_PO_MAX_COUNT        60     //!< ������������ ����� ����������� �� � ����������
#define CRC_PO_PER_MESSAGE_IN   45     //!< ���������� ������ � ����������� ��, ������������ � ����� ��������� SpaceWire �� ���� ��-100 ���
#define CRC_PO_PER_MESSAGE_OUT  7      //!< ���������� ������ � ����������� ��, ������������ � ����� ��������� SpaceWire � ������ ��-100 ���
#define CRC_SA_COUNT            3      //!< ���������� ����������, ���������� ��� �������� ������ � ����������� ��
#define ASU_SA_COUNT            3      //!< ���������� ����������, ���������� ��� �������� ��������� ������� ���
#define ASU_SEGMENT_SIZE_MAX    48     //!< ������������ ������ �������� ������� ��� � ������
#define ASU_SEGMENT_WORDS_COUNT 24     //!< ���������� ���� ������, ���������� ��� �������� �������� ������� ���
#define ASU_COMMAND_SIZE_MAX    12288  //!< ������������ ������ ������� ���
#define UPR_FLAG_WORD_MASK_1    0xffc0 //!< ����� ���������������� ��������� ����� 1 �������� ��� (upr_flag_word_common_1_b_t)
#define UPR_FLAG_WORD_MASK_2    0xffff //!< ����� ���������������� ��������� ����� 2 �������� ��� (upr_flag_word_common_2_b_t)

#ifdef MFPU_TO_MFCI_MSG1_SIZE
#undef MFPU_TO_MFCI_MSG1_SIZE
#endif
#define MFPU_TO_MFCI_MSG1_SIZE 8 //!< ���������� ���� ������, ������������ �� ����������� ���� � ����������� ���� �� ����-1.1/3.1 (������ �������������� ������� ����� ������)

#ifdef MFPU_TO_MFCI_MSG2_SIZE
#undef MFPU_TO_MFCI_MSG2_SIZE
#endif
#define MFPU_TO_MFCI_MSG2_SIZE 28 //!< ���������� ���� ������, ������������ �� ������������ ���� � ���� �� ����-1.2/3.2 (������ ���)

//! ���� ����
typedef enum mfci_format_t {
   MFCI_FORMAT_ND,         //!< ���� �� ���������
   MFCI_FORMAT_KPI,        //!< ���� "���"
   MFCI_FORMAT_UUAP,       //!< ���� "����"
   MFCI_FORMAT_PNP,        //!< ���� "���"
   MFCI_FORMAT_PLAN,       //!< ���� "����"
   MFCI_FORMAT_KART,       //!< ���� "�����"
   MFCI_FORMAT_KART_NSTR,  //!< ���� "�����:����"
   MFCI_FORMAT_GRUP,       //!< ���� "����"
   MFCI_FORMAT_RLS,        //!< ���� "���"
   MFCI_FORMAT_OAPS,       //!< ���� "����"
   MFCI_FORMAT_KVR,        //!< ���� "���"
   MFCI_FORMAT_ASU,        //!< ���� "���"
   MFCI_FORMAT_RAP,        //!< ���� "���"
   MFCI_FORMAT_SVR,        //!< ���� "���"
   MFCI_FORMAT_DVS,        //!< ���� "��/�"
   MFCI_FORMAT_DV,         //!< ���� "��"
   MFCI_FORMAT_19DA,       //!< ���� "19��"
   MFCI_FORMAT_TOPL,       //!< ���� "����"
   MFCI_FORMAT_SKV,        //!< ���� "���"
   MFCI_FORMAT_SAS,        //!< ���� "���"
   MFCI_FORMAT_UPR,        //!< ���� "���"
   MFCI_FORMAT_GS,         //!< ���� "��"
   MFCI_FORMAT_VSU,        //!< ���� "���"
   MFCI_FORMAT_SOST,       //!< ���� "����"
   MFCI_FORMAT_RLA,        //!< ���� "���"
   MFCI_FORMAT_KKD,        //!< ���� "���"
   MFCI_FORMAT_BASK,       //!< ���� "����"
   MFCI_FORMAT_MSRP,       //!< ���� "����"
   MFCI_FORMAT_BLOCKS,     //!< ���� "�����" - �������� ��������/����� �������� �������/�������� �������
   MFCI_FORMAT_BLOCKS_CRC, //!< ���� "�����" - ����������� �����
   MFCI_FORMAT_BLOCKS_SZI, //!< ���� "�����" - ���
   MFCI_FORMAT_TAR,        //!< ���� "���"
   MFCI_FORMAT_SUO,        //!< ���� "���"
   MFCI_FORMAT_SUO_IIPA,   //!< ���� "���-����"
   MFCI_FORMATS_COUNT      //!< ���������� ������ ����
} mfci_format_t;

//! ������� ����
typedef enum mfci_scale_t {
   MFCI_SCALE_20,    //!< ������� ���� �:20 ��
   MFCI_SCALE_40,    //!< ������� ���� �:40 ��
   MFCI_SCALE_80,    //!< ������� ���� �:80 ��
   MFCI_SCALE_160,   //!< ������� ���� �:160 ��
   MFCI_SCALE_320,   //!< ������� ���� �:320 ��
   MFCI_SCALE_640,   //!< ������� ���� �:640 ��
   MFCI_SCALE_1280,  //!< ������� ���� �:1280 ��
   MFCI_SCALE_2560,  //!< ������� ���� �:2560 ��
   MFCI_SCALE_5120,  //!< ������� ���� �:5120 ��
   MFCI_SCALES_COUNT //!< ���������� ��������� �������� ����
} mfci_scale_t;

//! ������� ���� ��� ����������� ���������� � ������ ��������� � ������
typedef enum mfci_group_scale_t {
   MFCI_GROUP_SCALE_500,   //!< ������� ���� �:500 �
   MFCI_GROUP_SCALE_1,     //!< ������� ���� �:1 ��
   MFCI_GROUP_SCALE_5,     //!< ������� ���� �:5 ��
   MFCI_GROUP_SCALE_10,    //!< ������� ���� �:10 ��
   MFCI_GROUP_SCALE_20,    //!< ������� ���� �:20 ��
   MFCI_GROUP_SCALE_40,    //!< ������� ���� �:40 ��
   MFCI_GROUP_SCALES_COUNT //!< ���������� ��������� �������� ���� ��� ����������� ���������� � ������ ��������� � ������
} mfci_group_scale_t;

//! �������������� ������� ����� "�����"
typedef enum mfci_blocks_system_t {
   MFCI_BLOCKS_SYSTEM_BIS_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_BIS_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_BCVM_1,  //!< �������������� ������� ���� 1
   MFCI_BLOCKS_SYSTEM_BCVM_2,  //!< �������������� ������� ���� 2
   MFCI_BLOCKS_SYSTEM_BVD_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_BVD_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_UKS_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_UKS_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_UKS_3,   //!< �������������� ������� ��� 3
   MFCI_BLOCKS_SYSTEM_UKS_4,   //!< �������������� ������� ��� 4
   MFCI_BLOCKS_SYSTEM_MFPU_1,  //!< �������������� ������� ���� 1
   MFCI_BLOCKS_SYSTEM_MFPU_2,  //!< �������������� ������� ���� 2
   MFCI_BLOCKS_SYSTEM_MFPU_3,  //!< �������������� ������� ���� 3
   MFCI_BLOCKS_SYSTEM_BGS_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_BGS_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_MFCI_1,  //!< �������������� ������� ���� 1
   MFCI_BLOCKS_SYSTEM_MFCI_2,  //!< �������������� ������� ���� 2
   MFCI_BLOCKS_SYSTEM_MFCI_3,  //!< �������������� ������� ���� 3
   MFCI_BLOCKS_SYSTEM_MFCI_4,  //!< �������������� ������� ���� 4
   MFCI_BLOCKS_SYSTEM_MFCI_5,  //!< �������������� ������� ���� 5
   MFCI_BLOCKS_SYSTEM_MFCI_6,  //!< �������������� ������� ���� 6
   MFCI_BLOCKS_SYSTEM_MFCI_7,  //!< �������������� ������� ���� 7
   MFCI_BLOCKS_SYSTEM_MFCI_8,  //!< �������������� ������� ���� 8
   MFCI_BLOCKS_SYSTEM_MFCI_9,  //!< �������������� ������� ���� 9
   MFCI_BLOCKS_SYSTEM_MFCI_10, //!< �������������� ������� ���� 10
   MFCI_BLOCKS_SYSTEM_MFCI_11, //!< �������������� ������� ���� 11
   MFCI_BLOCKS_SYSTEM_PUI_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_PUI_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_MUP_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_MUP_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_KVI_1,   //!< �������������� ������� ��� 1
   MFCI_BLOCKS_SYSTEM_KVI_2,   //!< �������������� ������� ��� 2
   MFCI_BLOCKS_SYSTEM_1P8M_1,  //!< �������������� ������� 1�8� 1
   MFCI_BLOCKS_SYSTEM_1P8M_2,  //!< �������������� ������� 1�8� 2
   MFCI_BLOCKS_SYSTEM_1P2M_1,  //!< �������������� ������� 1�2� 1
   MFCI_BLOCKS_SYSTEM_1P2M_2,  //!< �������������� ������� 1�2� 2
   MFCI_BLOCKS_SYSTEMS_COUNT   //!< ���������� �������������� ������ ����� "�����"
} mfci_blocks_system_t;

//! ����� ������ ����� "�����"
typedef enum mfci_blocks_mode_t {
   MFCI_BLOCKS_MODE_FORMAT,          //!< ����� ������ ����� "�����" - �������� ����
   MFCI_BLOCKS_MODE_CRC,             //!< ����� ������ ����� "�����" - ����������� �����
   MFCI_BLOCKS_MODE_FAILURES,        //!< ����� ������ ����� "�����" - ������� �������� �������
   MFCI_BLOCKS_MODE_REQUEST,         //!< ����� ������ ����� "�����" - ������
   MFCI_BLOCKS_MODE_SZI,             //!< ����� ������ ����� "�����" - ������� ���
   MFCI_BLOCKS_MODE_BUTTONS_TEST,    //!< ����� ������ ����� "�����" - ���� ������
   MFCI_BLOCKS_MODE_BRIGHTNESS_TEST, //!< ����� ������ ����� "�����" - ���� �������
   MFCI_BLOCKS_MODE_CONTRAST_TEST,   //!< ����� ������ ����� "�����" - ���� �������������
   MFCI_BLOCKS_MODE_COUNT            //!< ���������� ��������� ����� "�����"
} mfci_blocks_mode_t;

//! ������������� ����������� ��������� ���
typedef enum uks_tar_parameter_t {
   UKS_TAR_SUR_STAB,            //!< [���-�004] ��������� �������������
   UKS_TAR_SUR_FIN,             //!< [���-�003] ��������� ����
   UKS_TAR_SUR_FLAPERON_LEFT,   //!< [���-�020] ��������� ������ ���������
   UKS_TAR_SUR_FLAPERON_RIGHT,  //!< [���-�021] ��������� ������� ���������
   UKS_TAR_SUR_INTERCEPTOR_R12, //!< [���-�006] ��������� ������ I � II ������ �������������
   UKS_TAR_SUR_INTERCEPTOR_R34, //!< [���-�007] ��������� ������ III � IV ������ �������������
   UKS_TAR_SUR_INTERCEPTOR_R56, //!< [���-�008] ��������� ������ V � VI ������ �������������
   UKS_TAR_SUR_INTERCEPTOR_L12, //!< [���-�009] ��������� ������ I � II ����� �������������
   UKS_TAR_SUR_INTERCEPTOR_L34, //!< [���-�010] ��������� ������ III � IV ����� �������������
   UKS_TAR_SUR_INTERCEPTOR_L56, //!< [���-�011] ��������� ������ V � VI ����� �������������
   UKS_TAR_PARAMETERS_COUNT     //!< ���������� ���������� ���������� ���
} uks_tar_parameter_t;

//! ������� ��� ��� ��-504/506 �� ����
typedef enum iupk_aur_command_t {
   MFCI_AUR_CMD_ISP,  //!< ������� "���" �� ���������� ���� �� �������� 2 ����� ���-504/506
   MFCI_AUR_CMD_TRK,  //!< ������� "���" �� ���������� ���� �� �������� 2 ����� ���-504/506
   MFCI_AUR_CMD_RASCH //!< ������� "����" �� ���������� ���� �� �������� 3 ����� ���-504/506
} iupk_aur_command_t;

#ifndef SUO_VARIANTS
#define SUO_VARIANTS
//! ������� ������� ���
typedef enum suo_variant_t {
   SUO_VARIANT_UNDEF, //!< ������� ������� ��� �� ���������
   SUO_VARIANT_132,   //!< ������� ������� ��� - ������� 132
   SUO_VARIANT_K029,  //!< ������� ������� ��� - �029
   SUO_VARIANT_NASP,  //!< ������� ������� ��� - ����
   SUO_VARIANT_50X,   //!< ������� ������� ��� - ������� ����� 5040/506
   SUO_VARIANTS_COUNT //!< ���������� ��������� ������� ���
} suo_variant_t;
#endif

//! ������������� ��������� ������ ����� ���-504/506
typedef enum mfci_in_suo_50x_sa_type_t {
   MFCI_IN_SUO_50X_SA_PATH = 1,         //!< �������� � ������� ����������� ����������
   MFCI_IN_SUO_50X_SA_PROPOSED_PATH,    //!< �������� � ������� ������������ ����������
   MFCI_IN_SUO_50X_SA_TRK_AP,           //!< �������� � ������� ���������� � ������ ����������� ������
   MFCI_IN_SUO_50X_SA_RVP_INIT,         //!< �������� � ������� ������������� ���
   MFCI_IN_SUO_50X_SA_RVP_POINTS,       //!< �������� � ������� ����� ���
   MFCI_IN_SUO_50X_SA_RVP_POLYGONS,     //!< �������� � ������� �������� ��������� ���
   MFCI_IN_SUO_50X_SA_OSP_INIT,         //!< �������� � ������� ������������ ���
   MFCI_IN_SUO_50X_SA_OSP_OUTER_POINTS, //!< �������� � ������� ����� ������� ���
   MFCI_IN_SUO_50X_SA_OSP_INNER_POINTS, //!< �������� � ������� ����� ������ ������ ������ ���
   MFCI_IN_SUO_50X_SA_AREAS_POINTS,     //!< �������� � ������� ����� ��������� � ������� ���
   MFCI_IN_SUO_50X_SA_AREAS,            //!< �������� � ������� �������� ��������� ��������� � ������� ���
   MFCI_IN_SUO_50X_SA_TYPES_COUNT       //!< ���������� ��������� ���������� ������ ����� ���-504/506
} mfci_in_suo_50x_sa_type_t;

//! C���� � ����� ���������� ���������
typedef struct mfci_text_word_b_t {
   uint16_t symbol_1 : 8; //!< ������ 1 (��������� Win-1251) //(min:0 max:255)
   uint16_t symbol_2 : 8; //!< ������ 2 (��������� Win-1251) //(min:0 max:255)
} mfci_text_word_b_t;

//! ����� 1-2 c ������� ����
typedef struct mfci_formats_word_1_b_t {
   uint32_t format_1   : 6; //!< ���� ���� 1 (mfci_format_t) //(min:0 max:33)
   uint32_t format_2   : 6; //!< ���� ���� 2 (mfci_format_t) //(min:0 max:33)
   uint32_t format_3_1 : 6; //!< ����� ���� ���� 3 (mfci_format_t) //(min:0 max:33)
   uint32_t format_3_2 : 6; //!< ������ ���� ���� 3 (mfci_format_t) //(min:0 max:33)
   uint32_t format_4   : 6; //!< ���� ���� 4 (mfci_format_t) //(min:0 max:33)
   uint32_t            : 2; //!< ������
} mfci_formats_word_1_b_t;

//! ����� 3-4 c ������� ����
typedef struct mfci_formats_word_2_b_t {
   uint32_t format_5   : 6; //!< ���� ���� 5 (mfci_format_t) //(min:0 max:33)
   uint32_t format_6_1 : 6; //!< ����� ���� ���� 6 (mfci_format_t) //(min:0 max:33)
   uint32_t format_6_2 : 6; //!< ������ ���� ���� 6 (mfci_format_t) //(min:0 max:33)
   uint32_t format_7   : 6; //!< ���� ���� 7 (mfci_format_t) //(min:0 max:33)
   uint32_t format_8   : 6; //!< ���� ���� 8 (mfci_format_t) //(min:0 max:33)
   uint32_t            : 2; //!< ������
} mfci_formats_word_2_b_t;

//! ����� 5-6 c ������� ����
typedef struct mfci_formats_word_3_b_t {
   uint32_t format_9    : 6; //!< ���� ���� 9 (mfci_format_t) //(min:0 max:33)
   uint32_t format_10_1 : 6; //!< ����� ���� ���� 10 (mfci_format_t) //(min:0 max:33)
   uint32_t format_10_2 : 6; //!< ������ ���� ���� 10 (mfci_format_t) //(min:0 max:33)
   uint32_t format_11   : 6; //!< ���� ���� 11 (mfci_format_t) //(min:0 max:33)
   uint32_t             : 8; //!< ������
} mfci_formats_word_3_b_t;

//! ����� ����
typedef struct mfci_date_b_t {
   uint16_t day  : 5; //!< ���� //(min:1 max:31)
   uint16_t month: 4; //!< ����� //(min:1 max:12)
   uint16_t year : 7; //!< ��� (��� ��������� �����) //(min:0 max:99)
} mfci_date_b_t;

//! ������� ����� �������
typedef struct mfci_time_high_b_t {
   uint16_t hour   : 5; //!< ��� //(min:0 max:23)
   uint16_t minute : 6; //!< ������ //(min:0 max:59)
   uint16_t        : 5; //!< ������
} mfci_time_high_b_t;

//! ������� ����� �������
typedef struct mfci_time_low_b_t {
   uint16_t second : 6;  //!< ������� //(min:0 max:59)
   uint16_t        : 10; //!< ������
} mfci_time_low_b_t;

//! ����� ������
typedef struct mfci_version_b_t {
   uint16_t version    : 8; //!< ����� ������ //(min:1 max:99)
   uint16_t subversion : 8; //!< ����� ��������� //(min:1 max:99)
} mfci_version_b_t;

//! ����� 1 ������������ ���� (������� ��)
typedef struct mfci_signals_word_1_b_t {
   uint16_t dv1_turb_overheating : 1; //!< [��1-�007] ��1 ����� �������� (��/�)
   uint16_t dv2_turb_overheating : 1; //!< [��2-�007] ��2 ����� �������� (��/�)
   uint16_t dv3_turb_overheating : 1; //!< [��3-�007] ��3 ����� �������� (��/�)
   uint16_t dv4_turb_overheating : 1; //!< [��4-�007] ��4 ����� �������� (��/�)
   uint16_t dv1_cooling_failure  : 1; //!< [��1-�008] ��1 ������ ����� (��/�)
   uint16_t dv2_cooling_failure  : 1; //!< [��2-�008] ��2 ������ ����� (��/�)
   uint16_t dv3_cooling_failure  : 1; //!< [��3-�008] ��3 ������ ����� (��/�)
   uint16_t dv4_cooling_failure  : 1; //!< [��4-�008] ��4 ������ ����� (��/�)
   uint16_t dv1_swarf            : 1; //!< [��1-�015] ��1 ������� � ����� (��/�)
   uint16_t dv2_swarf            : 1; //!< [��2-�015] ��2 ������� � ����� (��/�)
   uint16_t dv3_swarf            : 1; //!< [��3-�015] ��3 ������� � ����� (��/�)
   uint16_t dv4_swarf            : 1; //!< [��4-�015] ��4 ������� � ����� (��/�)
   uint16_t dv1_oil_low          : 1; //!< [��1-�017] ��1 ����� ���� (��/�)
   uint16_t dv2_oil_low          : 1; //!< [��2-�017] ��2 ����� ���� (��/�)
   uint16_t dv3_oil_low          : 1; //!< [��3-�017] ��3 ����� ���� (��/�)
   uint16_t dv4_oil_low          : 1; //!< [��4-�017] ��4 ����� ���� (��/�)
} mfci_signals_word_1_b_t;

//! ����� 2 ������������ ���� (������� ��)
typedef struct mfci_signals_word_2_b_t {
   uint16_t dv1_oil_high            : 1; //!< [��1-�018] ��1 ����� ����� (��/�)
   uint16_t dv2_oil_high            : 1; //!< [��2-�018] ��2 ����� ����� (��/�)
   uint16_t dv3_oil_high            : 1; //!< [��3-�018] ��3 ����� ����� (��/�)
   uint16_t dv4_oil_high            : 1; //!< [��4-�018] ��4 ����� ����� (��/�)
   uint16_t dv1_oil_pressure_in_low : 1; //!< [��1-�019] ��1 ���� ����� ���� (��/�)
   uint16_t dv2_oil_pressure_in_low : 1; //!< [��2-�019] ��2 ���� ����� ���� (��/�)
   uint16_t dv3_oil_pressure_in_low : 1; //!< [��3-�019] ��3 ���� ����� ���� (��/�)
   uint16_t dv4_oil_pressure_in_low : 1; //!< [��4-�019] ��4 ���� ����� ���� (��/�)
   uint16_t dv1_surge               : 1; //!< [��1-�020] ��1 ������ (��/�)
   uint16_t dv2_surge               : 1; //!< [��2-�020] ��2 ������ (��/�)
   uint16_t dv3_surge               : 1; //!< [��3-�020] ��3 ������ (��/�)
   uint16_t dv4_surge               : 1; //!< [��4-�020] ��4 ������ (��/�)
   uint16_t dv1_fuel_pressure_low   : 1; //!< [��1-�021] ��1 ���� ���� ���� (��/�)
   uint16_t dv2_fuel_pressure_low   : 1; //!< [��2-�021] ��2 ���� ���� ���� (��/�)
   uint16_t dv3_fuel_pressure_low   : 1; //!< [��3-�021] ��3 ���� ���� ���� (��/�)
   uint16_t dv4_fuel_pressure_low   : 1; //!< [��4-�021] ��4 ���� ���� ���� (��/�)
} mfci_signals_word_2_b_t;

//! ����� 3 ������������ ���� (������� ��)
typedef struct mfci_signals_word_3_b_t {
   uint16_t dv1_esud_healthy   : 1; //!< [��1-�023] ��1 ���� �������� (��/�)
   uint16_t dv2_esud_healthy   : 1; //!< [��2-�023] ��2 ���� �������� (��/�)
   uint16_t dv3_esud_healthy   : 1; //!< [��3-�023] ��3 ���� �������� (��/�)
   uint16_t dv4_esud_healthy   : 1; //!< [��4-�023] ��4 ���� �������� (��/�)
   uint16_t dv1_clogging       : 1; //!< [��1-�028] ��1 ���� ������ ������� (��/�)
   uint16_t dv2_clogging       : 1; //!< [��2-�028] ��2 ���� ������ ������� (��/�)
   uint16_t dv3_clogging       : 1; //!< [��3-�028] ��3 ���� ������ ������� (��/�)
   uint16_t dv4_clogging       : 1; //!< [��4-�028] ��4 ���� ������ ������� (��/�)
   uint16_t dv1_oil_temp_high  : 1; //!< [��1-�029] ��1 ������ ����� ����� ������ (��/�)
   uint16_t dv2_oil_temp_high  : 1; //!< [��2-�029] ��2 ������ ����� ����� ������ (��/�)
   uint16_t dv3_oil_temp_high  : 1; //!< [��3-�029] ��3 ������ ����� ����� ������ (��/�)
   uint16_t dv4_oil_temp_high  : 1; //!< [��4-�029] ��4 ������ ����� ����� ������ (��/�)
   uint16_t dv1_vibration_high : 1; //!< [��1-�030] ��1 ���� ������� (��/�)
   uint16_t dv2_vibration_high : 1; //!< [��2-�030] ��2 ���� ������� (��/�)
   uint16_t dv3_vibration_high : 1; //!< [��3-�030] ��3 ���� ������� (��/�)
   uint16_t dv4_vibration_high : 1; //!< [��4-�030] ��4 ���� ������� (��/�)
} mfci_signals_word_3_b_t;

//! ����� 4 ������������ ���� (������� ��)
typedef struct mfci_signals_word_4_b_t {
   uint16_t dv1_vna_failure              : 1; //!< [��1-�031] ��1 ������� ��� ����� (��/�)
   uint16_t dv2_vna_failure              : 1; //!< [��2-�031] ��2 ������� ��� ����� (��/�)
   uint16_t dv3_vna_failure              : 1; //!< [��3-�031] ��3 ������� ��� ����� (��/�)
   uint16_t dv4_vna_failure              : 1; //!< [��4-�031] ��4 ������� ��� ����� (��/�)
   uint16_t dv1_bearing_temperature_high : 1; //!< [��1-�032] ��1 ������ ���� ������ (��/�)
   uint16_t dv2_bearing_temperature_high : 1; //!< [��2-�032] ��2 ������ ���� ������ (��/�)
   uint16_t dv3_bearing_temperature_high : 1; //!< [��3-�032] ��3 ������ ���� ������ (��/�)
   uint16_t dv4_bearing_temperature_high : 1; //!< [��4-�032] ��4 ������ ���� ������ (��/�)
   uint16_t dv1_no_correction            : 1; //!< [��1-�033] ��1 ��� ��������� �� (��/�)
   uint16_t dv2_no_correction            : 1; //!< [��2-�033] ��2 ��� ��������� �� (��/�)
   uint16_t dv3_no_correction            : 1; //!< [��3-�033] ��3 ��� ��������� �� (��/�)
   uint16_t dv4_no_correction            : 1; //!< [��4-�033] ��4 ��� ��������� �� (��/�)
   uint16_t dv1_intake_healthy           : 1; //!< [��1-�034] ��1 �� �� �������� (��/�)
   uint16_t dv2_intake_healthy           : 1; //!< [��2-�034] ��2 �� �� �������� (��/�)
   uint16_t dv3_intake_healthy           : 1; //!< [��3-�034] ��3 �� �� �������� (��/�)
   uint16_t dv4_intake_healthy           : 1; //!< [��4-�034] ��4 �� �� �������� (��/�)
} mfci_signals_word_4_b_t;

//! ����� 5 ������������ ���� (������� ��)
typedef struct mfci_signals_word_5_b_t {
   uint16_t dv1_intake_test           : 1; //!< [��1-�035] ��1 �� �� �������� (��/�)
   uint16_t dv2_intake_test           : 1; //!< [��2-�035] ��2 �� �� �������� (��/�)
   uint16_t dv3_intake_test           : 1; //!< [��3-�035] ��3 �� �� �������� (��/�)
   uint16_t dv4_intake_test           : 1; //!< [��4-�035] ��4 �� �� �������� (��/�)
   uint16_t dv1_throttle_afterburning : 1; //!< [��1-�036] ��1 ��������� � �������� (��/�)
   uint16_t dv2_throttle_afterburning : 1; //!< [��2-�036] ��2 ��������� � �������� (��/�)
   uint16_t dv3_throttle_afterburning : 1; //!< [��3-�036] ��3 ��������� � �������� (��/�)
   uint16_t dv4_throttle_afterburning : 1; //!< [��4-�036] ��4 ��������� � �������� (��/�)
   uint16_t dv1_turn_off              : 1; //!< [��1-�037] ��1 ������� (��/�)
   uint16_t dv2_turn_off              : 1; //!< [��2-�037] ��2 ������� (��/�)
   uint16_t dv3_turn_off              : 1; //!< [��3-�037] ��3 ������� (��/�)
   uint16_t dv4_turn_off              : 1; //!< [��4-�037] ��4 ������� (��/�)
   uint16_t dv1_intake_failure        : 1; //!< [��1-�039] ��1 �� �� ������ (��/�)
   uint16_t dv2_intake_failure        : 1; //!< [��2-�039] ��2 �� �� ������ (��/�)
   uint16_t dv3_intake_failure        : 1; //!< [��3-�039] ��3 �� �� ������ (��/�)
   uint16_t dv4_intake_failure        : 1; //!< [��4-�039] ��4 �� �� ������ (��/�)
} mfci_signals_word_5_b_t;

//! ����� 6 ������������ ���� (������� ��)
typedef struct mfci_signals_word_6_b_t {
   uint16_t dv1_wedge_failure            : 1; //!< [��1-�040] ��1 �� ������ ����� (��/�)
   uint16_t dv2_wedge_failure            : 1; //!< [��2-�040] ��2 �� ������ ����� (��/�)
   uint16_t dv3_wedge_failure            : 1; //!< [��3-�040] ��3 �� ������ ����� (��/�)
   uint16_t dv4_wedge_failure            : 1; //!< [��4-�040] ��4 �� ������ ����� (��/�)
   uint16_t dv1_valve_failure            : 1; //!< [��1-�041] ��1 �� ������� ����� (��/�)
   uint16_t dv2_valve_failure            : 1; //!< [��2-�041] ��2 �� ������� ����� (��/�)
   uint16_t dv3_valve_failure            : 1; //!< [��3-�041] ��3 �� ������� ����� (��/�)
   uint16_t dv4_valve_failure            : 1; //!< [��4-�041] ��4 �� ������� ����� (��/�)
   uint16_t dv1_n_sd_high                : 1; //!< [��1-�042] ��1 ������� �� ������� (��/�)
   uint16_t dv2_n_sd_high                : 1; //!< [��2-�042] ��2 ������� �� ������� (��/�)
   uint16_t dv3_n_sd_high                : 1; //!< [��3-�042] ��3 ������� �� ������� (��/�)
   uint16_t dv4_n_sd_high                : 1; //!< [��4-�042] ��4 ������� �� ������� (��/�)
   uint16_t dv1_oil_temperature_out_high : 1; //!< [��1-�044] ��1 ������ ����� ������ ������ (��/�)
   uint16_t dv2_oil_temperature_out_high : 1; //!< [��2-�044] ��2 ������ ����� ������ ������ (��/�)
   uint16_t dv3_oil_temperature_out_high : 1; //!< [��3-�044] ��3 ������ ����� ������ ������ (��/�)
   uint16_t dv4_oil_temperature_out_high : 1; //!< [��4-�044] ��4 ������ ����� ������ ������ (��/�)
} mfci_signals_word_6_b_t;

//! ����� 7 ������������ ���� (������� ��)
typedef struct mfci_signals_word_7_b_t {
   uint16_t dv1_no_afterburning       : 1; //!< [��1-�045] ��1 ��� �������/ ������� ������ (��/�)
   uint16_t dv2_no_afterburning       : 1; //!< [��2-�045] ��2 ��� �������/ ������� ������ (��/�)
   uint16_t dv3_no_afterburning       : 1; //!< [��3-�045] ��3 ��� �������/ ������� ������ (��/�)
   uint16_t dv4_no_afterburning       : 1; //!< [��4-�045] ��4 ��� �������/ ������� ������ (��/�)
   uint16_t dv1_oil_pressure_gp22_low : 1; //!< [��1-�046] ��1 ���� ����� �� ���� (��/�)
   uint16_t dv2_oil_pressure_gp22_low : 1; //!< [��2-�046] ��2 ���� ����� �� ���� (��/�)
   uint16_t dv3_oil_pressure_gp22_low : 1; //!< [��3-�046] ��3 ���� ����� �� ���� (��/�)
   uint16_t dv4_oil_pressure_gp22_low : 1; //!< [��4-�046] ��4 ���� ����� �� ���� (��/�)
   uint16_t dv1_hydraulic_lock        : 1; //!< [��1-�047] ��1 ��������� ������� (��/�)
   uint16_t dv2_hydraulic_lock        : 1; //!< [��2-�047] ��2 ��������� ������� (��/�)
   uint16_t dv3_hydraulic_lock        : 1; //!< [��3-�047] ��3 ��������� ������� (��/�)
   uint16_t dv4_hydraulic_lock        : 1; //!< [��4-�047] ��4 ��������� ������� (��/�)
   uint16_t dv1_oil_pressure_gsbk_low : 1; //!< [��1-�049] ��1 ���� ����� ���� ���� (��/�)
   uint16_t dv2_oil_pressure_gsbk_low : 1; //!< [��2-�049] ��2 ���� ����� ���� ���� (��/�)
   uint16_t dv3_oil_pressure_gsbk_low : 1; //!< [��3-�049] ��3 ���� ����� ���� ���� (��/�)
   uint16_t dv4_oil_pressure_gsbk_low : 1; //!< [��4-�049] ��4 ���� ����� ���� ���� (��/�)
} mfci_signals_word_7_b_t;

//! ����� 8 ������������ ���� (������� ��)
typedef struct mfci_signals_word_8_b_t {
   uint16_t dv1_fuel_temperature_tmt_high : 1; //!< [��1-�055] ��1 ������ ���� ������ (��/�)
   uint16_t dv2_fuel_temperature_tmt_high : 1; //!< [��2-�055] ��2 ������ ���� ������ (��/�)
   uint16_t dv3_fuel_temperature_tmt_high : 1; //!< [��3-�055] ��3 ������ ���� ������ (��/�)
   uint16_t dv4_fuel_temperature_tmt_high : 1; //!< [��4-�055] ��4 ������ ���� ������ (��/�)
   uint16_t dv1_starter_high              : 1; //!< [��1-�056] ��1 ������� �������� ������� (��/�)
   uint16_t dv2_starter_high              : 1; //!< [��2-�056] ��2 ������� �������� ������� (��/�)
   uint16_t dv3_starter_high              : 1; //!< [��3-�056] ��3 ������� �������� ������� (��/�)
   uint16_t dv4_starter_high              : 1; //!< [��4-�056] ��4 ������� �������� ������� (��/�)
   uint16_t dv1_vpt_pressure_low          : 1; //!< [��1-�057] ��1 ���� ��� ���� (��/�)
   uint16_t dv2_vpt_pressure_low          : 1; //!< [��2-�057] ��2 ���� ��� ���� (��/�)
   uint16_t dv3_vpt_pressure_low          : 1; //!< [��3-�057] ��3 ���� ��� ���� (��/�)
   uint16_t dv4_vpt_pressure_low          : 1; //!< [��4-�057] ��4 ���� ��� ���� (��/�)
   uint16_t dv1_breather_pressure_high    : 1; //!< [��1-�058] ��1 ���� ������ ������� (��/�)
   uint16_t dv2_breather_pressure_high    : 1; //!< [��2-�058] ��2 ���� ������ ������� (��/�)
   uint16_t dv3_breather_pressure_high    : 1; //!< [��3-�058] ��3 ���� ������ ������� (��/�)
   uint16_t dv4_breather_pressure_high    : 1; //!< [��4-�058] ��4 ���� ������ ������� (��/�)
} mfci_signals_word_8_b_t;

//! ����� 9 ������������ ���� (������� ��)
typedef struct mfci_signals_word_9_b_t {
   uint16_t dv1_start_failure_on_land    : 1; //!< [��1-�061] ��1 ���� ������ (��� ��� �����, ����)
   uint16_t dv2_start_failure_on_land    : 1; //!< [��2-�061] ��2 ���� ������ (��� ��� �����, ����)
   uint16_t dv3_start_failure_on_land    : 1; //!< [��3-�061] ��3 ���� ������ (��� ��� �����, ����)
   uint16_t dv4_start_failure_on_land    : 1; //!< [��4-�061] ��4 ���� ������ (��� ��� �����, ����)
   uint16_t dv1_start_failure_in_air     : 1; //!< [��1-�062] ��1 ���� ������ (��� ���� �����, ����)
   uint16_t dv2_start_failure_in_air     : 1; //!< [��2-�062] ��2 ���� ������ (��� ���� �����, ����)
   uint16_t dv3_start_failure_in_air     : 1; //!< [��3-�062] ��3 ���� ������ (��� ���� �����, ����)
   uint16_t dv4_start_failure_in_air     : 1; //!< [��4-�062] ��4 ���� ������ (��� ���� �����, ����)
   uint16_t dv1_gas_temp_control_failure : 1; //!< [��1-�063] ��1 ���� ������ (����� �� �����, ����)
   uint16_t dv2_gas_temp_control_failure : 1; //!< [��2-�063] ��2 ���� ������ (����� �� �����, ����)
   uint16_t dv3_gas_temp_control_failure : 1; //!< [��3-�063] ��3 ���� ������ (����� �� �����, ����)
   uint16_t dv4_gas_temp_control_failure : 1; //!< [��4-�063] ��4 ���� ������ (����� �� �����, ����)
   uint16_t dv1_n2_control_failure       : 1; //!< [��1-�064] ��1 ���� ������ (����� �� �����, ����)
   uint16_t dv2_n2_control_failure       : 1; //!< [��2-�064] ��2 ���� ������ (����� �� �����, ����)
   uint16_t dv3_n2_control_failure       : 1; //!< [��3-�064] ��3 ���� ������ (����� �� �����, ����)
   uint16_t dv4_n2_control_failure       : 1; //!< [��4-�064] ��4 ���� ������ (����� �� �����, ����)
} mfci_signals_word_9_b_t;

//! ����� 10 ������������ ���� (������� ��)
typedef struct mfci_signals_word_10_b_t {
   uint16_t dv1_n1_control_failure           : 1; //!< [��1-�065] ��1 ���� ������ (������ �� �����, ����)
   uint16_t dv2_n1_control_failure           : 1; //!< [��2-�065] ��2 ���� ������ (������ �� �����, ����)
   uint16_t dv3_n1_control_failure           : 1; //!< [��3-�065] ��3 ���� ������ (������ �� �����, ����)
   uint16_t dv4_n1_control_failure           : 1; //!< [��4-�065] ��4 ���� ������ (������ �� �����, ����)
   uint16_t dv1_afterburning_control_failure : 1; //!< [��1-�066] ��1 ���� ������ (��� �������� �����, ����)
   uint16_t dv2_afterburning_control_failure : 1; //!< [��2-�066] ��2 ���� ������ (��� �������� �����, ����)
   uint16_t dv3_afterburning_control_failure : 1; //!< [��3-�066] ��3 ���� ������ (��� �������� �����, ����)
   uint16_t dv4_afterburning_control_failure : 1; //!< [��4-�066] ��4 ���� ������ (��� �������� �����, ����)
   uint16_t dv1_antisurge_control_failure    : 1; //!< [��1-�067] ��1 ���� ������ (��� �����, ����)
   uint16_t dv2_antisurge_control_failure    : 1; //!< [��2-�067] ��2 ���� ������ (��� �����, ����)
   uint16_t dv3_antisurge_control_failure    : 1; //!< [��3-�067] ��3 ���� ������ (��� �����, ����)
   uint16_t dv4_antisurge_control_failure    : 1; //!< [��4-�067] ��4 ���� ������ (��� �����, ����)
   uint16_t dv1_cooling_control_failure      : 1; //!< [��1-�068] ��1 ��� ��� ������� ����� (����)
   uint16_t dv2_cooling_control_failure      : 1; //!< [��2-�068] ��2 ��� ��� ������� ����� (����)
   uint16_t dv3_cooling_control_failure      : 1; //!< [��3-�068] ��3 ��� ��� ������� ����� (����)
   uint16_t dv4_cooling_control_failure      : 1; //!< [��4-�068] ��4 ��� ��� ������� ����� (����)
} mfci_signals_word_10_b_t;

//! ����� 11 ������������ ���� (������� ��)
typedef struct mfci_signals_word_11_b_t {
   uint16_t dv1_lock_control_failure       : 1; //!< [��1-�069] ��1 ���� ������ (��� ��������� �����, ����)
   uint16_t dv2_lock_control_failure       : 1; //!< [��2-�069] ��2 ���� ������ (��� ��������� �����, ����)
   uint16_t dv3_lock_control_failure       : 1; //!< [��3-�069] ��3 ���� ������ (��� ��������� �����, ����)
   uint16_t dv4_lock_control_failure       : 1; //!< [��4-�069] ��4 ���� ������ (��� ��������� �����, ����)
   uint16_t dv1_kpv_control_failure        : 1; //!< [��1-�070] ��1 ��� ��� �� ����� (����)
   uint16_t dv2_kpv_control_failure        : 1; //!< [��2-�070] ��2 ��� ��� �� ����� (����)
   uint16_t dv3_kpv_control_failure        : 1; //!< [��3-�070] ��3 ��� ��� �� ����� (����)
   uint16_t dv4_kpv_control_failure        : 1; //!< [��4-�070] ��4 ��� ��� �� ����� (����)
   uint16_t dv1_nozzle_control_failure     : 1; //!< [��1-�071] ��1 ���� ������ (��� ������ �����, ����)
   uint16_t dv2_nozzle_control_failure     : 1; //!< [��2-�071] ��2 ���� ������ (��� ������ �����, ����)
   uint16_t dv3_nozzle_control_failure     : 1; //!< [��3-�071] ��3 ���� ������ (��� ������ �����, ����)
   uint16_t dv4_nozzle_control_failure     : 1; //!< [��4-�071] ��4 ���� ������ (��� ������ �����, ����)
   uint16_t dv1_start_failed_main_switcher : 1; //!< [��1-�072] ��1 ������ ��������� (��� ������� ����, ��/�)
   uint16_t dv2_start_failed_main_switcher : 1; //!< [��2-�072] ��2 ������ ��������� (��� ������� ����, ��/�)
   uint16_t dv3_start_failed_main_switcher : 1; //!< [��3-�072] ��3 ������ ��������� (��� ������� ����, ��/�)
   uint16_t dv4_start_failed_main_switcher : 1; //!< [��4-�072] ��4 ������ ��������� (��� ������� ����, ��/�)
} mfci_signals_word_11_b_t;

//! ����� 12 ������������ ���� (������� ��)
typedef struct mfci_signals_word_12_b_t {
   uint16_t dv1_start_failed_starter       : 1; //!< [��1-�073] ��1 ������ ��������� (������� �������� ������, ��/�)
   uint16_t dv2_start_failed_starter       : 1; //!< [��2-�073] ��2 ������ ��������� (������� �������� ������, ��/�)
   uint16_t dv3_start_failed_starter       : 1; //!< [��3-�073] ��3 ������ ��������� (������� �������� ������, ��/�)
   uint16_t dv4_start_failed_starter       : 1; //!< [��4-�073] ��4 ������ ��������� (������� �������� ������, ��/�)
   uint16_t dv1_start_failed_stop_switcher : 1; //!< [��1-�074] ��1 ������ ��������� (����-���� �� ������, ��/�)
   uint16_t dv2_start_failed_stop_switcher : 1; //!< [��2-�074] ��2 ������ ��������� (����-���� �� ������, ��/�)
   uint16_t dv3_start_failed_stop_switcher : 1; //!< [��3-�074] ��3 ������ ��������� (����-���� �� ������, ��/�)
   uint16_t dv4_start_failed_stop_switcher : 1; //!< [��4-�074] ��4 ������ ��������� (����-���� �� ������, ��/�)
   uint16_t dv1_start_failed_kpv           : 1; //!< [��1-�075] ��1 ������ ��������� (��� �� �� ����, ��/�)
   uint16_t dv2_start_failed_kpv           : 1; //!< [��2-�075] ��2 ������ ��������� (��� �� �� ����, ��/�)
   uint16_t dv3_start_failed_kpv           : 1; //!< [��3-�075] ��3 ������ ��������� (��� �� �� ����, ��/�)
   uint16_t dv4_start_failed_kpv           : 1; //!< [��4-�075] ��4 ������ ��������� (��� �� �� ����, ��/�)
   uint16_t dv1_start_failed_supply_115    : 1; //!< [��1-�076] ��1 ������ ��������� (115� �� � �����, ��/�)
   uint16_t dv2_start_failed_supply_115    : 1; //!< [��2-�076] ��2 ������ ��������� (115� �� � �����, ��/�)
   uint16_t dv3_start_failed_supply_115    : 1; //!< [��3-�076] ��3 ������ ��������� (115� �� � �����, ��/�)
   uint16_t dv4_start_failed_supply_115    : 1; //!< [��4-�076] ��4 ������ ��������� (115� �� � �����, ��/�)
} mfci_signals_word_12_b_t;

//! ����� 13 ������������ ���� (������� ��)
typedef struct mfci_signals_word_13_b_t {
   uint16_t dv1_start_failed_control  : 1; //!< [��1-�077] ��1 ������ ��������� (���� �����, ��/�)
   uint16_t dv2_start_failed_control  : 1; //!< [��2-�077] ��2 ������ ��������� (���� �����, ��/�)
   uint16_t dv3_start_failed_control  : 1; //!< [��3-�077] ��3 ������ ��������� (���� �����, ��/�)
   uint16_t dv4_start_failed_control  : 1; //!< [��4-�077] ��4 ������ ��������� (���� �����, ��/�)
   uint16_t dv1_start_failed_spinup   : 1; //!< [��1-�078] ��1 ������ ��������� (��� ���������, ��/�)
   uint16_t dv2_start_failed_spinup   : 1; //!< [��2-�078] ��2 ������ ��������� (��� ���������, ��/�)
   uint16_t dv3_start_failed_spinup   : 1; //!< [��3-�078] ��3 ������ ��������� (��� ���������, ��/�)
   uint16_t dv4_start_failed_spinup   : 1; //!< [��4-�078] ��4 ������ ��������� (��� ���������, ��/�)
   uint16_t dv1_start_failed_gas_temp : 1; //!< [��1-�079] ��1 ������ ��������� (������ ���� �������, ��/�)
   uint16_t dv2_start_failed_gas_temp : 1; //!< [��2-�079] ��2 ������ ��������� (������ ���� �������, ��/�)
   uint16_t dv3_start_failed_gas_temp : 1; //!< [��3-�079] ��3 ������ ��������� (������ ���� �������, ��/�)
   uint16_t dv4_start_failed_gas_temp : 1; //!< [��4-�079] ��4 ������ ��������� (������ ���� �������, ��/�)
   uint16_t dv1_start_failed_handup   : 1; //!< [��1-�080] ��1 ������ ��������� (����� ��� ������, ��/�)
   uint16_t dv2_start_failed_handup   : 1; //!< [��2-�080] ��2 ������ ��������� (����� ��� ������, ��/�)
   uint16_t dv3_start_failed_handup   : 1; //!< [��3-�080] ��3 ������ ��������� (����� ��� ������, ��/�)
   uint16_t dv4_start_failed_handup   : 1; //!< [��4-�080] ��4 ������ ��������� (����� ��� ������, ��/�)
} mfci_signals_word_13_b_t;

//! ����� 14 ������������ ���� (������� ��)
typedef struct mfci_signals_word_14_b_t {
   uint16_t dv1_start_failed_ignition : 1; //!< [��1-�081] ��1 ������ ��������� (��� �������, ��/�)
   uint16_t dv2_start_failed_ignition : 1; //!< [��2-�081] ��2 ������ ��������� (��� �������, ��/�)
   uint16_t dv3_start_failed_ignition : 1; //!< [��3-�081] ��3 ������ ��������� (��� �������, ��/�)
   uint16_t dv4_start_failed_ignition : 1; //!< [��4-�081] ��4 ������ ��������� (��� �������, ��/�)
   uint16_t dv1_kpv_undefined         : 1; //!< [��1-�001] ��1 �������� ����� (��/�)
   uint16_t dv2_kpv_undefined         : 1; //!< [��2-�001] ��2 �������� ����� (��/�)
   uint16_t dv3_kpv_undefined         : 1; //!< [��3-�001] ��3 �������� ����� (��/�)
   uint16_t dv4_kpv_undefined         : 1; //!< [��4-�001] ��4 �������� ����� (��/�)
   uint16_t dv1_esud_failure          : 1; //!< [��1-�002] ��1 ���� ������ (��/�)
   uint16_t dv2_esud_failure          : 1; //!< [��2-�002] ��2 ���� ������ (��/�)
   uint16_t dv3_esud_failure          : 1; //!< [��3-�002] ��3 ���� ������ (��/�)
   uint16_t dv4_esud_failure          : 1; //!< [��4-�002] ��4 ���� ������ (��/�)
   uint16_t dv1_gas_temp_high_danger  : 1; //!< [��1-�003] ��1 ������ ���� ������� (��/�)
   uint16_t dv2_gas_temp_high_danger  : 1; //!< [��2-�003] ��2 ������ ���� ������� (��/�)
   uint16_t dv3_gas_temp_high_danger  : 1; //!< [��3-�003] ��3 ������ ���� ������� (��/�)
   uint16_t dv4_gas_temp_high_danger  : 1; //!< [��4-�003] ��4 ������ ���� ������� (��/�)
} mfci_signals_word_14_b_t;

//! ����� 15 ������������ ���� (������� ��)
typedef struct mfci_signals_word_15_b_t {
   uint16_t dv1_n1_high          : 1; //!< [��1-�004] ��1 ������� �� ������� (��/�)
   uint16_t dv2_n1_high          : 1; //!< [��2-�004] ��2 ������� �� ������� (��/�)
   uint16_t dv3_n1_high          : 1; //!< [��3-�004] ��3 ������� �� ������� (��/�)
   uint16_t dv4_n1_high          : 1; //!< [��4-�004] ��4 ������� �� ������� (��/�)
   uint16_t dv1_n2_high          : 1; //!< [��1-�005] ��1 ������� �� ������� (��/�)
   uint16_t dv2_n2_high          : 1; //!< [��2-�005] ��2 ������� �� ������� (��/�)
   uint16_t dv3_n2_high          : 1; //!< [��3-�005] ��3 ������� �� ������� (��/�)
   uint16_t dv4_n2_high          : 1; //!< [��4-�005] ��4 ������� �� ������� (��/�)
   uint16_t dv1_reserve_controls : 1; //!< [��1-�006] ��1 ������� �� �� (��/�)
   uint16_t dv2_reserve_controls : 1; //!< [��2-�006] ��2 ������� �� �� (��/�)
   uint16_t dv3_reserve_controls : 1; //!< [��3-�006] ��3 ������� �� �� (��/�)
   uint16_t dv4_reserve_controls : 1; //!< [��4-�006] ��4 ������� �� �� (��/�)
   uint16_t dv1_gas_temp_high    : 1; //!< [��1-�007] ��1 ������ ���� ������� (��/�)
   uint16_t dv2_gas_temp_high    : 1; //!< [��2-�007] ��2 ������ ���� ������� (��/�)
   uint16_t dv3_gas_temp_high    : 1; //!< [��3-�007] ��3 ������ ���� ������� (��/�)
   uint16_t dv4_gas_temp_high    : 1; //!< [��4-�007] ��4 ������ ���� ������� (��/�)
} mfci_signals_word_15_b_t;

//! ����� 16 ������������ ���� (������� ��, ����)
typedef struct mfci_signals_word_16_b_t {
   uint16_t dv1_esud_untested   : 1; //!< [��1-�008] ��1 ���� ������� (��/�)
   uint16_t dv2_esud_untested   : 1; //!< [��2-�008] ��2 ���� ������� (��/�)
   uint16_t dv3_esud_untested   : 1; //!< [��3-�008] ��3 ���� ������� (��/�)
   uint16_t dv4_esud_untested   : 1; //!< [��4-�008] ��4 ���� ������� (��/�)
   uint16_t dv1_intake_untested : 1; //!< [��1-�009] ��1 �� �� ������� (��/�)
   uint16_t dv2_intake_untested : 1; //!< [��2-�009] ��2 �� �� ������� (��/�)
   uint16_t dv3_intake_untested : 1; //!< [��3-�009] ��3 �� �� ������� (��/�)
   uint16_t dv4_intake_untested : 1; //!< [��4-�009] ��4 �� �� ������� (��/�)
   uint16_t dv1_dv_active       : 1; //!< [��1-�027] ��������� ��������
   uint16_t dv2_dv_active       : 1; //!< [��2-�027] ��������� ��������
   uint16_t dv3_dv_active       : 1; //!< [��3-�027] ��������� ��������
   uint16_t dv4_dv_active       : 1; //!< [��4-�027] ��������� ��������
   uint16_t topl_dz_on          : 1; //!< [����-�001] ���� ��� �������� ��� (��/�)
   uint16_t topl_dz_failure     : 1; //!< [����-�002] ���� ��� �������� ����� (��/�)
   uint16_t topl_failure_left   : 1; //!< [����-�003] ���� ����� ��� ����� ����� (��/�)
   uint16_t topl_failure_right  : 1; //!< [����-�004] ���� ����� ���� ����� ����� (��/�)
} mfci_signals_word_16_b_t;

//! ����� 17 ������������ ���� (������� ����)
typedef struct mfci_signals_word_17_b_t {
   uint16_t dz_lock               : 1; //!< [����-�005] ���������� ������ (��/�)
   uint16_t topl_discharge_front  : 1; //!< [����-�006] ���� ���� ���� ������ ����� (��/�)
   uint16_t topl_discharge_rear   : 1; //!< [����-�007] ���� ���� ���� ���� ����� (��/�)
   uint16_t topl_pump_b1l_failure : 1; //!< [����-�256] ���� ������ �1� ����� (��/�)
   uint16_t topl_pump_b1r_failure : 1; //!< [����-�257] ���� ������ �1� ����� (��/�)
   uint16_t topl_pump_b2l_failure : 1; //!< [����-�258] ���� ������ �2� ����� (��/�)
   uint16_t topl_pump_b2r_failure : 1; //!< [����-�259] ���� ������ �2� ����� (��/�)
   uint16_t topl_pump_b3l_failure : 1; //!< [����-�260] ���� ������ �3� ����� (��/�)
   uint16_t topl_pump_b3r_failure : 1; //!< [����-�261] ���� ������ �3� ����� (��/�)
   uint16_t topl_pump_b4l_failure : 1; //!< [����-�262] ���� ������ �4� ����� (��/�)
   uint16_t topl_pump_b4r_failure : 1; //!< [����-�263] ���� ������ �4� ����� (��/�)
   uint16_t topl_pump_b5_failure  : 1; //!< [����-�264] ���� ������ �5 ����� (��/�)
   uint16_t topl_pump_b6_failure  : 1; //!< [����-�265] ���� ������ �6 ����� (��/�)
   uint16_t topl_pump_rb1_failure : 1; //!< [����-�266] ���� ������ ��1 ����� (��/�)
   uint16_t topl_pump_rb2_failure : 1; //!< [����-�267] ���� ������ ��2 ����� (��/�)
   uint16_t topl_pump_rb3_failure : 1; //!< [����-�268] ���� ������ ��3 ����� (��/�)
} mfci_signals_word_17_b_t;

//! ����� 18 ������������ ���� (������� ����)
typedef struct mfci_signals_word_18_b_t {
   uint16_t topl_pump_rb4_failure         : 1; //!< [����-�269] ���� ������ ��4 ����� (��/�)
   uint16_t topl_pump_b1l_balance_failure : 1; //!< [����-�270] ���� ������ ������ �1� ����� (��/�)
   uint16_t topl_pump_b1r_balance_failure : 1; //!< [����-�271] ���� ������ ������ �1� ����� (��/�)
   uint16_t topl_pump_b5_balance_failure  : 1; //!< [����-�272] ���� ������ ������ �5 ����� (��/�)
   uint16_t topl_pump_b6_balance_failure  : 1; //!< [����-�273] ���� ������ ������ �6 ����� (��/�)
   uint16_t topl_centering_failure        : 1; //!< [����-�274] ���� ��� ��������� ����� (��/�)
   uint16_t topl_consump_failure          : 1; //!< [����-�275] ���� ��� ������� ����� (��/�)
   uint16_t dz_supply_on                  : 1; //!< [����-�276] ��������� ������� ����� ����������
   uint16_t force_fueling                 : 1; //!< [����-�285] �������������� ��������
   uint16_t dz_valve                      : 1; //!< [����-�287] ������ ������ (��/�)
   uint16_t dz_valve_opened               : 1; //!< [����-�288] ������ ������ (��/�)
   uint16_t topl_centering_rear_lim       : 1; //!< [����-�291] ���� ��������� ���� ������ (��/�)
   uint16_t topl_centering_front_lim      : 1; //!< [����-�292] ���� ��������� ������ ������ (��/�)
   uint16_t topl_venting_on               : 1; //!< [����-�293] ���� ����� ������� ��� (��/�)
   uint16_t topl_venting_active           : 1; //!< [����-�294] ���� ������ � ���� (��/�)
   uint16_t topl_12t                      : 1; //!< [����-�002] ���� ������� 12 � (��/�)
} mfci_signals_word_18_b_t;

//! ����� 19 ������������ ���� (������� ����)
typedef struct mfci_signals_word_19_b_t {
   uint16_t topl_rb1_pump1_fail      : 1; //!< [����-�_�1��1_�����] ���� ����� 1 ��1 ����� (��/�)
   uint16_t topl_rb1_pump2_fail      : 1; //!< [����-�_�2��1_�����] ���� ����� 2 ��1 ����� (��/�)
   uint16_t topl_rb1_pump3_fail      : 1; //!< [����-�_�3��1_�����] ���� ����� 3 ��1 ����� (��/�)
   uint16_t topl_rb2_pump1_fail      : 1; //!< [����-�_�1��2_�����] ���� ����� 1 ��2 ����� (��/�)
   uint16_t topl_rb2_pump2_fail      : 1; //!< [����-�_�2��2_�����] ���� ����� 2 ��2 ����� (��/�)
   uint16_t topl_rb2_pump3_fail      : 1; //!< [����-�_�3��2_�����] ���� ����� 3 ��2 ����� (��/�)
   uint16_t topl_rb3_pump1_fail      : 1; //!< [����-�_�1��3_�����] ���� ����� 1 ��3 ����� (��/�)
   uint16_t topl_rb3_pump2_fail      : 1; //!< [����-�_�2��3_�����] ���� ����� 2 ��3 ����� (��/�)
   uint16_t topl_rb3_pump3_fail      : 1; //!< [����-�_�3��3_�����] ���� ����� 3 ��3 ����� (��/�)
   uint16_t topl_rb4_pump1_fail      : 1; //!< [����-�_�1��4_�����] ���� ����� 1 ��4 ����� (��/�)
   uint16_t topl_rb4_pump2_fail      : 1; //!< [����-�_�2��4_�����] ���� ����� 2 ��4 ����� (��/�)
   uint16_t topl_rb4_pump3_fail      : 1; //!< [����-�_�3��4_�����] ���� ����� 3 ��4 ����� (��/�)
   uint16_t topl_valve_pk1_closed_kv : 1; //!< [����-�141] �� ���� ��������� ����� ��1 (��� �������� �������� �����)
   uint16_t topl_valve_pk2_closed_kv : 1; //!< [����-�145] �� ���� ��������� ����� ��2 (��� �������� �������� �����)
   uint16_t topl_valve_pk3_closed_kv : 1; //!< [����-�149] �� ���� ��������� ����� ��3 (��� �������� �������� �����)
   uint16_t topl_valve_pk4_closed_kv : 1; //!< [����-�153] �� ���� ��������� ����� ��4 (��� �������� �������� �����)
} mfci_signals_word_19_b_t;

//! ����� 20 ������������ ���� (������� ����, ���)
typedef struct mfci_signals_word_20_b_t {
   uint16_t topl_check_rb1  : 1; //!< [����-�277] ������� ������� ��1 (��������� ���>72� ������������, ��� ���� ����������)
   uint16_t topl_check_rb2  : 1; //!< [����-�278] ������� ������� ��2 (��������� ���>72� ������������, ��� ���� ����������)
   uint16_t topl_check_rb3  : 1; //!< [����-�279] ������� ������� ��3 (��������� ���>72� ������������, ��� ���� ����������)
   uint16_t topl_check_rb4  : 1; //!< [����-�280] ������� ������� ��4 (��������� ���>72� ������������, ��� ���� ����������)
   uint16_t topl_check      : 1; //!< [����-�001] ���� ������� (��/�)
   uint16_t speed_high      : 1; //!< [���-�001] �������� ������ (��/�)
   uint16_t speed_low       : 1; //!< [���-�002] �������� ���� (��/�)
   uint16_t ny_high         : 1; //!< [���-�003] Ny ������ (���������� ���� ������������, ��/�)
   uint16_t ny_low          : 1; //!< [���-�004] Ny ������ (���������� ���� �����������, ��/�)
   uint16_t roll_left_high  : 1; //!< [���-�005] ���� ����� (�����, ��/�)
   uint16_t roll_right_high : 1; //!< [���-�006] ���� ����� (������, ��/�)
   uint16_t alpha_high      : 1; //!< [���-�007] ����� ������ (���� ����� ���� �������������, ��/�)
   uint16_t alpha_low       : 1; //!< [���-�008] ����� ������ (���� ����� ���� ������������, ��/�)
   uint16_t altitude_appr_1 : 1; //!< [���-�009] ������ ������ (��/�)
   uint16_t altitude_appr_2 : 1; //!< [���-�012] �������� ������ ������ (��/�)
   uint16_t pkr_failure     : 1; //!< [���-�017] ������� ��� ����� (��/�)
} mfci_signals_word_20_b_t;

//! ����� 21 ������������ ���� (������� ���, ���)
typedef struct mfci_signals_word_21_b_t {
   uint16_t pkr_alpha_off       : 1; //!< [���-�018] ��� ��� �������� ���� ����� (����)
   uint16_t pkr_speed_min_off   : 1; //!< [���-�019] ��� ��� �������� �������� ��� (����)
   uint16_t pkr_speed_max_off   : 1; //!< [���-�020] ��� ��� �������� �������� ���� (����)
   uint16_t pkr_ny_off          : 1; //!< [���-�021] ��� ��� �������� ���������� (����)
   uint16_t pkr_roll_off        : 1; //!< [���-�022] ��� ��� �������� ����� (����)
   uint16_t pkr_altitude_off_1  : 1; //!< [���-�023] ��� ��� �������� ��������� ������� (����)
   uint16_t pkr_altitude_off_2  : 1; //!< [���-�024] ��� ��� �������� �������� ������ (����)
   uint16_t check_altitude      : 1; //!< [���-�001] ������ ������ ������� (��/�)
   uint16_t ap_failure          : 1; //!< [���-�022] �� ����� (��/�)
   uint16_t azp_failure         : 1; //!< [���-�023] ��� �������� (��/�)
   uint16_t ap_off              : 1; //!< [���-�024] �� �������� (��/�)
   uint16_t ap_mode_changed     : 1; //!< [���-�025] �� ����� ������� (��/�)
   uint16_t at_control          : 1; //!< [���-�026] ����� �������� (��/�)
   uint16_t landing_cathegory_1 : 1; //!< [���-�042] ������� �����1 (����)
   uint16_t landing_cathegory_2 : 1; //!< [���-�043] ������� �����2 (����)
   uint16_t sau_manual          : 1; //!< [���] ������� �� ������� (��/�)
} mfci_signals_word_21_b_t;

//! ����� 22 ������������ ���� (������� ���, ����)
typedef struct mfci_signals_word_22_b_t {
   uint16_t unlock_rud               : 1; //!< [���] ��� ���������� (��/�)
   uint16_t dv1_at_off               : 1; //!< [���] ��1 �� �������� (��/�)
   uint16_t dv2_at_off               : 1; //!< [���] ��2 �� �������� (��/�)
   uint16_t dv3_at_off               : 1; //!< [���] ��3 �� �������� (��/�)
   uint16_t dv4_at_off               : 1; //!< [���] ��4 �� �������� (��/�)
   uint16_t dz_pitch                 : 1; //!< [����-�024] ���� �� ������ (��/�)
   uint16_t assu_pitch_failure       : 1; //!< [����-�019] ���� ������ ����� (��/�)
   uint16_t assu_interc_failure      : 1; //!< [����-�020] ������ ����� (��/�)
   uint16_t assu_fin_failure         : 1; //!< [����-�021] ���� ����� (��/�)
   uint16_t absu_dmp_pitch_failure   : 1; //!< [����-�037] ���� ������� ������� ����� (����)
   uint16_t absu_dmp_roll_failure    : 1; //!< [����-�038] ���� ������� ����� ����� (����)
   uint16_t absu_dmp_heading_failure : 1; //!< [����-�039] ���� ������� ����� ����� (����)
   uint16_t absu_ny_invalid          : 1; //!< [����-�040] ���� ����������� �� ny ����� (����)
   uint16_t absu_roll_invalid        : 1; //!< [����-�041] ���� ����������� ����� ����� (����)
   uint16_t absu_stab_off            : 1; //!< [����-�042] ���� ���� �������� (����)
   uint16_t absu_fin_off             : 1; //!< [����-�043] ���� ���� �������� (����)
} mfci_signals_word_22_b_t;

//! ����� 23 ������������ ���� (������� ����)
typedef struct mfci_signals_word_23_b_t {
   uint16_t absu_interc_off           : 1; //!< [����-�044] ���� ������ ��������� (����)
   uint16_t absu_flaperon_off         : 1; //!< [����-�045] ���� ���� ��������� (����)
   uint16_t dmp_ra_off_1              : 1; //!< [����-�046] ���� ������� �� 1� ��������� (����)
   uint16_t dmp_ra_off_2              : 1; //!< [����-�047] ���� ������� �� 2� ��������� (����)
   uint16_t dmp_ra_off_3              : 1; //!< [����-�048] ���� ������� �� 3� ��������� (����)
   uint16_t dmp_ra_off_4              : 1; //!< [����-�049] ���� ������� �� 4� ��������� (����)
   uint16_t dau_left_heating_failure  : 1; //!< [����-�050] ��� ��� �������� ��� (����)
   uint16_t dau_right_heating_failure : 1; //!< [����-�051] ��� ���� �������� ��� (����)
   uint16_t mb_pitch1_failure         : 1; //!< [����-�052] ���� �� ���� ��� 1 ����� (����)
   uint16_t mb_pitch2_failure         : 1; //!< [����-�053] ���� �� ���� ��� 2 ����� (����)
   uint16_t mr3_1_failure             : 1; //!< [����-�056] ���� ��� ��� 1 ����� (����)
   uint16_t mr3_2_failure             : 1; //!< [����-�057] ���� ��� ��� 2 ����� (����)
   uint16_t assu_flaperon_failure     : 1; //!< [����-�022] ���� ���� ����� (��/�)
   uint16_t interc                    : 1; //!< [����-�065] ����� �������� (�� ����� � ��˨��)
   uint16_t absu_weight_failure       : 1; //!< [����-�066] ���� ��� ������ �� ���� (����)
   uint16_t absu_vsp_failure          : 1; //!< [����-�067] ���� ��� ������ �� ��� (����)
} mfci_signals_word_23_b_t;

//! ����� 24 ������������ ���� (������� ����)
typedef struct mfci_signals_word_24_b_t {
   uint16_t absu_flap_failure          : 1; //!< [����-�068] ���� ��� ������ �� ��������� (����)
   uint16_t absu_chi_failure           : 1; //!< [����-�069] ���� ��� ������ �� �������������� (����)
   uint16_t absu_alpha_failure         : 1; //!< [����-�070] ���� ��� ������ �� ���� ����� (����)
   uint16_t trimmer_roll_failure       : 1; //!< [����-�071] ������� ����� ����� (��/�)
   uint16_t trimmer_course_failure     : 1; //!< [����-�072] ������� ����� ����� (��/�)
   uint16_t trimmer_pitch_failure      : 1; //!< [����-�073] ������� ������� ����� (��/�)
   uint16_t absu_nx_failure            : 1; //!< [����-�078] ���� ����������� �� N� ����� (����)
   uint16_t absu_stab_no_reserve       : 1; //!< [����-�001] �� ���� ������� ��� (��/�)
   uint16_t absu_fin_no_reserve        : 1; //!< [����-�002] �� ���� ������� ��� (��/�)
   uint16_t absu_flaperon_l_no_reserve : 1; //!< [����-�003] �� ���� ��� ������� ��� (��/�)
   uint16_t absu_flaperon_r_no_reserve : 1; //!< [����-�004] �� ���� ���� ������� ��� (��/�)
   uint16_t absu_interc_l_no_reserve   : 1; //!< [����-�005] �� ������ ��� ������� ��� (��/�)
   uint16_t absu_interc_r_no_reserve   : 1; //!< [����-�006] �� ������ ���� ������� ��� (��/�)
   uint16_t absu_limit                 : 1; //!< [����-�007] �������� �����, ny, ����� (��/�)
   uint16_t balance_failure            : 1; //!< [����-�008] A��������� ����� (��/�)
   uint16_t set_m09_chi35              : 1; //!< [����-�009] ������� �<0.9 ��<35 (��/�)
} mfci_signals_word_24_b_t;

//! ����� 25 ������������ ���� (������� ����, ���)
typedef struct mfci_signals_word_25_b_t {
   uint16_t roll_careful            : 1; //!< [����-�010] �������� ������ ������ (��/�)
   uint16_t set_v900                : 1; //!< [����-�011] ������� �� V<900 (��/�)
   uint16_t absu_landing_flap_15    : 1; //!< [����-�012] ������� ������ 15, V>300 (��/�)
   uint16_t flap_unstable           : 1; //!< [����-�013] ������ ������� (��/�)
   uint16_t bad_side_controls       : 1; //!< [����-�014] ��� ������ ������� (��/�)
   uint16_t vt_failure              : 1; //!< [����-�015] ���� ���� ����� (��/�)
   uint16_t pedals_failure          : 1; //!< [����-�016] ������ �������� ����� (��/�)
   uint16_t roll_no_neutral         : 1; //!< [����-�017] ���� �������� ��� (��/�)
   uint16_t heading_no_neutral      : 1; //!< [����-�018] ���� �������� ��� (��/�)
   uint16_t flap_failure            : 1; //!< [���-�001] ������ ����� (��/�)
   uint16_t slat_failure            : 1; //!< [���-�002] ������ ����� (��/�)
   uint16_t flap_correction_failure : 1; //!< [���-�003] �����-������ ��������� ����� (��/�)
   uint16_t flap_track_mode_failure : 1; //!< [���-�005] ������-������ ������ ����� ����� (��/�)
   uint16_t flap_async              : 1; //!< [���-�007] ������ ������� (��/�)
   uint16_t slat_async              : 1; //!< [���-�008] ������ ������� (��/�)
   uint16_t flap_not_ready          : 1; //!< [���-�009] ������ ������� (�� ����� � ��˨��)
} mfci_signals_word_25_b_t;

//! ����� 26 ������������ ���� (������� ���, ��, ����)
typedef struct mfci_signals_word_26_b_t {
   uint16_t flap_left_slow            : 1; //!< [���-�010] ����� ��� ������ (��/�)
   uint16_t flap_right_slow           : 1; //!< [���-�011] ����� ���� ������ (��/�)
   uint16_t wing_track_mode_failure   : 1; //!< [���-�012] ����� ������ ����� ����� (��/�)
   uint16_t wing_failure              : 1; //!< [���-�013] ����� ����� (��/�)
   uint16_t wing_async                : 1; //!< [���-�015] ����� ������� (��/�)
   uint16_t seat_pilot_1_moved_back   : 1; //!< [��-�001] ������ ��������� ����� (��/�)
   uint16_t seat_pilot_2_moved_back   : 1; //!< [��-�002] ������ ��������� ����� (��/�)
   uint16_t main_brakes_failure_1     : 1; //!< [����-�401] ���� ��� ����� (��/�)
   uint16_t emerg_brakes_failure      : 1; //!< [����-�601] ���� ������ ����� (��/�)
   uint16_t emerg_brakes_on           : 1; //!< [����-�603] ���� ������ ������� (��/�)
   uint16_t brakes_low_accum_pressure : 1; //!< [����-�620] ���� ���� �/��� ���� (��/�)
   uint16_t emergency_braking         : 1; //!< [����-�622] ���������� ��������� (��/�)
   uint16_t auto_brakes_off           : 1; //!< [����-�002] ���� ��� ��������� (��/�)
   uint16_t gear_on_brakes            : 1; //!< [����-�004] ������ ����������� (��/�)
   uint16_t start_braking             : 1; //!< [����-�005] ����� ���� ������� (��/�)
   uint16_t parking_brake_on          : 1; //!< [����-�007] ����� ���� ������� (��/�)
} mfci_signals_word_26_b_t;

//! ����� 27 ������������ ���� (������� ����, ���)
typedef struct mfci_signals_word_27_b_t {
   uint16_t auto_brakes_slight       : 1; //!< [����-�008] ���������� ��� ����� (��/�)
   uint16_t auto_brakes_low          : 1; //!< [����-�009] ���������� ��� ����� (��/�)
   uint16_t auto_brakes_normal       : 1; //!< [����-�010] ���������� ��� ���� (��/�)
   uint16_t brakes_pair_failure      : 1; //!< [����-�011] ���� ���� ���� ����� (����)
   uint16_t main_brakes_failure_3    : 1; //!< [����-�012] ���� ��� ����� (��/�)
   uint16_t sas_115v_gen1_not_active : 1; //!< [���-�201] ��� 115� ���1 �� �������� (����)
   uint16_t sas_115v_gen2_not_active : 1; //!< [���-�202] ��� 115� ���2 �� �������� (����)
   uint16_t sas_115v_gen3_not_active : 1; //!< [���-�203] ��� 115� ���3 �� �������� (����)
   uint16_t sas_115v_gen4_not_active : 1; //!< [���-�204] ��� 115� ���4 �� �������� (����)
   uint16_t sas_115v_gen1_overload   : 1; //!< [���-�209] ��� 115� ���1 ���������� (����)
   uint16_t sas_115v_gen2_overload   : 1; //!< [���-�210] ��� 115� ���2 ���������� (����)
   uint16_t sas_115v_gen3_overload   : 1; //!< [���-�211] ��� 115� ���3 ���������� (����)
   uint16_t sas_115v_gen4_overload   : 1; //!< [���-�212] ��� 115� ���4 ���������� (����)
   uint16_t sas_115v_partial_left    : 1; //!< [���-�231] ��� 115� ���� ��� ������ ����� (����)
   uint16_t sas_115v_partial_right   : 1; //!< [���-�232] ��� 115� ���� ���� ������ ����� (����)
   uint16_t sas_115v_connected       : 1; //!< [���-�233] ��� 115� ���� ��������� (����)
} mfci_signals_word_27_b_t;

//! ����� 28 ������������ ���� (������� ���)
typedef struct mfci_signals_word_28_b_t {
   uint16_t sas_115v_brzu_gen1_failure : 1; //!< [���-�006] ��� 115� ���� ���1 ����� (����)
   uint16_t sas_115v_brzu_gen2_failure : 1; //!< [���-�007] ��� 115� ���� ���2 ����� (����)
   uint16_t sas_115v_brzu_gen3_failure : 1; //!< [���-�008] ��� 115� ���� ���3 ����� (����)
   uint16_t sas_115v_brzu_gen4_failure : 1; //!< [���-�009] ��� 115� ���� ���4 ����� (����)
   uint16_t sas_115v_brzu_vsu_failure  : 1; //!< [���-�010] ��� 115� ���� ��� ��� ����� (����)
   uint16_t sas_115v_transd1_failure   : 1; //!< [���-�011] ��� 115� ������1 �� �������� (����)
   uint16_t sas_115v_transd3_failure   : 1; //!< [���-�013] ��� 115� ������3 �� �������� (����)
   uint16_t sas_115v_turn_off_ppo_gen1 : 1; //!< [���-�018] ��� 115� ��� ���1 ������� (����)
   uint16_t sas_115v_turn_off_ppo_gen2 : 1; //!< [���-�019] ��� 115� ��� ���2 ������� (����)
   uint16_t sas_115v_turn_off_ppo_gen3 : 1; //!< [���-�020] ��� 115� ��� ���3 ������� (����)
   uint16_t sas_115v_turn_off_ppo_gen4 : 1; //!< [���-�021] ��� 115� ��� ���4 ������� (����)
   uint16_t sas_27v_connected          : 1; //!< [���-�325] ��� 27� ���� ��������� (����)
   uint16_t sas_27v_gen1_not_active    : 1; //!< [���-�301] ��� 27� �1 �� �������� (����)
   uint16_t sas_27v_gen2_not_active    : 1; //!< [���-�302] ��� 27� �2 �� �������� (����)
   uint16_t sas_27v_gen3_not_active    : 1; //!< [���-�303] ��� 27� �3 �� �������� (����)
   uint16_t sas_27v_gen4_not_active    : 1; //!< [���-�304] ��� 27� �4 �� �������� (����)
} mfci_signals_word_28_b_t;

//! ����� 29 ������������ ���� (������� ���)
typedef struct mfci_signals_word_29_b_t {
   uint16_t sas_27v_gen1_overload     : 1; //!< [���-�309] ��� 27� �1 ���������� (����)
   uint16_t sas_27v_gen2_overload     : 1; //!< [���-�310] ��� 27� �2 ���������� (����)
   uint16_t sas_27v_gen3_overload     : 1; //!< [���-�311] ��� 27� �3 ���������� (����)
   uint16_t sas_27v_gen4_overload     : 1; //!< [���-�312] ��� 27� �4 ���������� (����)
   uint16_t sas_27v_left_on_battery   : 1; //!< [���-�321] ��� 27� ���� ��� �� ��� (����)
   uint16_t sas_27v_right_on_battery  : 1; //!< [���-�322] ��� 27� ���� ���� �� ��� (����)
   uint16_t sas_27v_left_partial      : 1; //!< [���-�323] ��� 27� ���� ��� ������ ����� (����)
   uint16_t sas_27v_right_partial     : 1; //!< [���-�324] ��� 27� ���� ���� ������ ����� (����)
   uint16_t sas_27v_turn_off_battery1 : 1; //!< [���-�014] ��� 27� ���1 ������� (����)
   uint16_t sas_27v_turn_off_battery2 : 1; //!< [���-�015] ��� 27� ���2 ������� (����)
   uint16_t sas_27v_battery1_off      : 1; //!< [���-�016] ��� 27� ���1 �������� (����)
   uint16_t sas_27v_battery2_off      : 1; //!< [���-�017] ��� 27� ���2 �������� (����)
   uint16_t sas_27v_turn_off_gen1     : 1; //!< [���-�022] ��� 27� �1 ������� (����)
   uint16_t sas_27v_turn_off_gen2     : 1; //!< [���-�023] ��� 27� �2 ������� (����)
   uint16_t sas_27v_turn_off_gen3     : 1; //!< [���-�024] ��� 27� �3 ������� (����)
   uint16_t sas_27v_turn_off_gen4     : 1; //!< [���-�025] ��� 27� �4 ������� (����)
} mfci_signals_word_29_b_t;

//! ����� 30 ������������ ���� (������� ��)
typedef struct mfci_signals_word_30_b_t {
   uint16_t gs_crossfeeding        : 1; //!< [��-�033] �� ����� ����� ��� (�� ����� � ��˨��)
   uint16_t gs_tgt_circuit_failure : 1; //!< [��-�034] ������ ��� ����� (��/�)
   uint16_t gs_tgt_pump_failure    : 1; //!< [��-�035] ����� ��� ����� (��/�)
   uint16_t gs1_failure            : 1; //!< [��-�005] ��1 ����� (��/�)
   uint16_t gs2_failure            : 1; //!< [��-�006] ��2 ����� (��/�)
   uint16_t gs3_failure            : 1; //!< [��-�007] ��3 ����� (��/�)
   uint16_t gs4_failure            : 1; //!< [��-�008] ��4 ����� (��/�)
   uint16_t gs2_pump1_off          : 1; //!< [��-�047] ��2 �1 �������� (��/�)
   uint16_t gs1_pump2_off          : 1; //!< [��-�048] ��1 �2 �������� (��/�)
   uint16_t gs2_pump3_off          : 1; //!< [��-�049] ��2 �3 �������� (��/�)
   uint16_t gs1_pump4_off          : 1; //!< [��-�050] ��1 �4 �������� (��/�)
   uint16_t gs4_pump5_off          : 1; //!< [��-�051] ��4 �5 �������� (��/�)
   uint16_t gs3_pump6_off          : 1; //!< [��-�052] ��3 �6 �������� (��/�)
   uint16_t gs4_pump7_off          : 1; //!< [��-�053] ��4 �7 �������� (��/�)
   uint16_t gs3_pump8_off          : 1; //!< [��-�054] ��3 �8 �������� (��/�)
   uint16_t dv_pumps_failure       : 1; //!< [��-�020] �/������ �� ���� (�� ����� � ��˨��)
} mfci_signals_word_30_b_t;

//! ����� 31 ������������ ���� (������� ���)
typedef struct mfci_signals_word_31_b_t {
   uint16_t vsu_oil_pressure_low     : 1; //!< [���-�001] �������� ����� ������ (���)
   uint16_t vsu_tg_high              : 1; //!< [���-�002] ������ ���� ������ (���)
   uint16_t vsu_n_high               : 1; //!< [���-�003] ������� ������ (���)
   uint16_t vsu_clogging             : 1; //!< [���-�007] ���� ������ ������� (���)
   uint16_t vsu_swarf                : 1; //!< [���-�008] ������� � ����� (���)
   uint16_t vsu_fuel_pressure_normal : 1; //!< [���-�009] �������� ������� (���)
   uint16_t vsu_air_bleed            : 1; //!< [���-�010] ����� ������ (���)
   uint16_t vsu_ready                : 1; //!< [���-�012] ������ ����� (���)
   uint16_t vsu_oil_level_low        : 1; //!< [���-�013] ����� ���� (���)
   uint16_t vsu_mode_active          : 1; //!< [���-�014] ����� (���, ��/�, ����)
   uint16_t vsu_unsafe               : 1; //!< [���-�018] ������ ��������� (���)
   uint16_t vsu_test                 : 1; //!< [���-�019] �������� (���)
   uint16_t vsu_oil_temperature_high : 1; //!< [���-�020] ������ ����� ������ (���)
   uint16_t vsu_warning              : 1; //!< [���-�002] ��� ������������� (����)
   uint16_t vsu_failure              : 1; //!< [���-�003] ��� ����� (����)
   uint16_t vsu_turned_off           : 1; //!< [���-�004] ��� ��������� ������� (��/�, ����)
} mfci_signals_word_31_b_t;

//! ����� 32 ������������ ���� (������� ���, ���)
typedef struct mfci_signals_word_32_b_t {
   uint16_t vsu_n_high               : 1; //!< [���-�005] ������� ������ (���)
   uint16_t vsu_tg_high              : 1; //!< [���-�006] ������ ���� ������ (���)
   uint16_t vsu_oil_pressure_low     : 1; //!< [���-�007] �������� ����� ���� (���)
   uint16_t vsu_shutters_opened      : 1; //!< [���-�008] ������� ������� (���, ��/�, ����)
   uint16_t skv_line_left_failure    : 1; //!< [���-�024] ��� ���������� ��� ����� (����)
   uint16_t skv_line_right_failure   : 1; //!< [���-�025] ��� ���������� ���� ����� (����)
   uint16_t skv_dv_left_failure      : 1; //!< [���-�026] ��� ����� ������ ����� ����� (����)
   uint16_t skv_dv_right_failure     : 1; //!< [���-�027] ��� ����� ������� ����� ����� (����)
   uint16_t skv_thu1_failure         : 1; //!< [���-�028] ��� ���1 ������ ����� (����)
   uint16_t skv_thu2_failure         : 1; //!< [���-�029] ��� ���2 ������ �� ����� (����)
   uint16_t skv_thu3_failure         : 1; //!< [���-�030] ��� ���3 ����� �� ���, ������ �� ����� (����)
   uint16_t skv_thu4_failure         : 1; //!< [���-�031] ��� ���4 ����� �� ����, ���� �� ����� (����)
   uint16_t skv_thu_failure          : 1; //!< [���-�032] ��� ��� ����� / ��� ������ ����� (����)
   uint16_t skv_pressure_low         : 1; //!< [���-�033] ��� ������ ��� (����)
   uint16_t skv_vsu_heating_failure  : 1; //!< [���-�036] ��� ������� ������ ��� ����� (����, ���)
   uint16_t skv_zto_temperature_high : 1; //!< [���-�037] ��� ���� �� �������� (����)
} mfci_signals_word_32_b_t;

//! ����� 33 ������������ ���� (������� ���, ���)
typedef struct mfci_signals_word_33_b_t {
   uint16_t cabin_high_pressure      : 1; //!< [���-�300] ������ ���� ������ (��/�, ����)
   uint16_t cabin_loss_pressure      : 1; //!< [���-�301] ������ ���� ���� (��/�, ����)
   uint16_t rtr_sap_cooling_failure  : 1; //!< [���-�035] ��� � ��� ������ ����� (����)
   uint16_t compare_heading          : 1; //!< [���-�051] ���� ������ (��/�, ����)
   uint16_t compare_roll             : 1; //!< [���-�052] ���� ������ (��/�)
   uint16_t compare_pitch            : 1; //!< [���-�053] ������ ������ (��/�)
   uint16_t compare_indicated_speed  : 1; //!< [���-�055] ������ ��������� �������� (��/�)
   uint16_t compare_altitude         : 1; //!< [���-�056] ������ ���������� (��/�)
   uint16_t map_failure              : 1; //!< [���-�064] ����� ����� (����)
   uint16_t bgs1_failure             : 1; //!< [���] ������ ������� 1 ����� (����)
   uint16_t bgs2_failure             : 1; //!< [���] ������ ������� 2 ����� (����)
   uint16_t bgs_reserve_failure      : 1; //!< [���-�065] ��� ������� ��� (����)
   uint16_t bis1_failure             : 1; //!< [���] ���1 ����� (����)
   uint16_t bis2_failure             : 1; //!< [���] ���2 ����� (����)
   uint16_t bis_reserve_failure      : 1; //!< [���-�066] ��� ������� ��� (����)
   uint16_t                          : 1; //!< ������
} mfci_signals_word_33_b_t;

//! ����� 34 ������������ ���� (������� ���, ���, ���)
typedef struct mfci_signals_word_34_b_t {
   uint16_t ins1_not_nav_mode    : 1; //!< [���-�006] ���1 �� ���������� (����)
   uint16_t ins2_not_nav_mode    : 1; //!< [���-�007] ���2 �� ���������� (����)
   uint16_t ins3_not_nav_mode    : 1; //!< [���-�008] ���3 �� ���������� (����)
   uint16_t ins1_failure         : 1; //!< [���-�001] ���1 ����� (����)
   uint16_t ins2_failure         : 1; //!< [���-�002] ���2 ����� (����)
   uint16_t ins3_failure         : 1; //!< [���-�003] ���3 ����� (����)
   uint16_t ins12_failure        : 1; //!< [���-�004] ���12 ����� (����)
   uint16_t ins13_failure        : 1; //!< [���-�005] ���13 ����� (����)
   uint16_t ins23_failure        : 1; //!< [���-�006] ���23 ����� (����)
   uint16_t ins_failure          : 1; //!< [���-�007] ��� ����� (��/�, ����, ����)
   uint16_t ins_reserve_failure  : 1; //!< [���-�008] ��� ������� ��� (��/�, ����)
   uint16_t ins_not_nav_mode     : 1; //!< [���-�102] ��� �� ������� (��/�, ����)
   uint16_t ans_not_nav_mode     : 1; //!< [���-�002] ��� �� ������� (����)
   uint16_t ppd1_heating_failure : 1; //!< [���-�004] ��� 1 �������� ��� (����)
   uint16_t ppd2_heating_failure : 1; //!< [���-�005] ��� 2 �������� ��� (����)
   uint16_t ppd3_heating_failure : 1; //!< [���-�006] ��� 3 �������� ��� (����)
} mfci_signals_word_34_b_t;

//! ����� 35 ������������ ���� (������� ���)
typedef struct mfci_signals_word_35_b_t {
   uint16_t svs1_no_correction        : 1; //!< [���-�007] ���1 ��� ��������� �� ������ � �������� (����)
   uint16_t svs2_no_correction        : 1; //!< [���-�008] ���2 ��� ��������� �� ������ � �������� (����)
   uint16_t svs3_no_correction        : 1; //!< [���-�009] ���3 ��� ��������� �� ������ � �������� (����)
   uint16_t dau_left_heating_failure  : 1; //!< [���-����] ��� ��� �������� ���
   uint16_t dau_right_heating_failure : 1; //!< [���-����] ��� ���� �������� ���
   uint16_t svs1_failure              : 1; //!< [���-�001] ���1 ����� (����)
   uint16_t svs2_failure              : 1; //!< [���-�002] ���2 ����� (����)
   uint16_t svs3_failure              : 1; //!< [���-�003] ���3 ����� (����)
   uint16_t svs12_failure             : 1; //!< [���-�004] ���12 ����� (����)
   uint16_t svs13_failure             : 1; //!< [���-�005] ���13 ����� (����)
   uint16_t svs23_failure             : 1; //!< [���-�006] ���23 ����� (����)
   uint16_t svs_failure               : 1; //!< [���-�007] ��� ����� (��/�, ����, ����)
   uint16_t ppd_heating_failure_1     : 1; //!< [���-�008] ��� �������� ��� (�� ����� � ��˨��)
   uint16_t ppd_heating_failure_2     : 1; //!< [���-�009] ��� �������� ��� (��/�)
   uint16_t svs_reserve_failure       : 1; //!< [���-�010] ��� ������� ��� (��/�, ����)
   uint16_t svs_no_correction         : 1; //!< [���-�011] ��� ��� ��������� �� ������ � �������� (��/�, ����)
} mfci_signals_word_35_b_t;

//! ����� 36 ������������ ���� (������� ����)
typedef struct mfci_signals_word_36_b_t {
   uint16_t oxygen_50                : 1; //!< [����-�001] �������� < 50% (��/�)
   uint16_t oxygen_20                : 1; //!< [����-�002] �������� < 20% (��/�, ����)
   uint16_t oxygen_failure_1         : 1; //!< [����-�003] �������� ����� (��/�, ����)
   uint16_t oxygen_failure_2         : 1; //!< [����-�004] �������� ����� (��/�)
   uint16_t use_oxygen               : 1; //!< [����-�005] �������� ��������� (��/�, ����)
   uint16_t oxygen_pilot1_low        : 1; //!< [����-�006] ��������� ��������� ��� (��/�)
   uint16_t oxygen_pilot2_low        : 1; //!< [����-�007] ��������� ��������� ��� (��/�)
   uint16_t oxygen_operator_low      : 1; //!< [����-�008] ��������� ��������� ��� (��/�, ����)
   uint16_t oxygen_navigator_low     : 1; //!< [����-�009] ��������� �������� ��� (��/�, ����)
   uint16_t oxygen_pilot1_failure    : 1; //!< [����-�010] �������� ��������� ����� (��/�)
   uint16_t oxygen_pilot2_failure    : 1; //!< [����-�011] �������� ��������� ����� (��/�)
   uint16_t oxygen_operator_failure  : 1; //!< [����-�012] �������� ��������� ����� (��/�, ����)
   uint16_t oxygen_navigator_failure : 1; //!< [����-�013] �������� �������� ����� (��/�, ����)
   uint16_t charge_oxygen            : 1; //!< [����-�014] �������� ������ (��/�)
   uint16_t oxygen_on                : 1; //!< [����-�015] �������� ��� (����)
   uint16_t oxygen_off               : 1; //!< [����-�001] �������� ���� (��/�)
} mfci_signals_word_36_b_t;

//! ����� 37 ������������ ���� (������� ����, ����, ���)
typedef struct mfci_signals_word_37_b_t {
   uint16_t oxygen_pilot1_pressure_normal    : 1; //!< [����-�017] �������� ������� - �������� �����
   uint16_t oxygen_pilot1_feeding            : 1; //!< [����-�019] �������� ������� - ������ �� �������
   uint16_t oxygen_pilot2_pressure_normal    : 1; //!< [����-�020] �������� ��������� - �������� �����
   uint16_t oxygen_pilot2_feeding            : 1; //!< [����-�022] �������� ��������� - ������ �� �������
   uint16_t oxygen_operator_pressure_normal  : 1; //!< [����-�023] �������-�������� - �������� �����
   uint16_t oxygen_operator_feeding          : 1; //!< [����-�025] �������-�������� - ������ �� �������
   uint16_t oxygen_navigator_pressure_normal : 1; //!< [����-�026] �������-��������� - �������� �����
   uint16_t oxygen_navigator_feeding         : 1; //!< [����-�028] �������-��������� - ������ �� �������
   uint16_t gear_front_pressure_low          : 1; //!< [����-�016] ����� ������ ���� ���� (����)
   uint16_t gear_left_pressure_low           : 1; //!< [����-�017] ����� ��� ���� ���� (����)
   uint16_t gear_right_pressure_low          : 1; //!< [����-�018] ����� ���� ���� ���� (����)
   uint16_t gear_pressure_low                : 1; //!< [����-�003] ����� ���� ���� (��/�)
   uint16_t gear_check                       : 1; //!< [����-�004] ����� ������� (��/�)
   uint16_t gear_down                        : 1; //!< [����-�005] ����� ������� (��/�)
   uint16_t gear_locked                      : 1; //!< [����-�006] ����� ������ ���������� ����� ������ (��/�)
   uint16_t icing                            : 1; //!< [���-�001] ����������� (��/�, ����)
} mfci_signals_word_37_b_t;

//! ����� 38 ������������ ���� (������� ����)
typedef struct mfci_signals_word_38_b_t {
   uint16_t nav_lzp_changed        : 1; //!< [����-�007] ��� ����� ��� (��/�, ����)
   uint16_t nav_fuel_low           : 1; //!< [����-�009] ��� ������ ����� ������� ���� ���������� (��/�, ����)
   uint16_t nav_go_around          : 1; //!< [����-�010] ��� ���� �� 2 ���� (��/�, ����)
   uint16_t br                     : 1; //!< [����] ������ ����� (��/�, ����)
   uint16_t nav_reserve_failure    : 1; //!< [����-�018] ��� ������� ������� ��� (����)
   uint16_t nav_route_failure      : 1; //!< [����-�019] ��� ������� ����� (����)
   uint16_t nav_return             : 1; //!< [����-�027] ��� ������� (��/�, ����)
   uint16_t nav_failure            : 1; //!< [����-�028] ��� ������� ����� (��/�, ����)
   uint16_t bvd1_failure           : 1; //!< [����] ���1 ����� (����)
   uint16_t bvd2_failure           : 1; //!< [����] ���2 ����� (����)
   uint16_t dangerous_approach     : 1; //!< [��� ��-�001] ���� ��������� ������� (��/�, ����)
   uint16_t ur_failure             : 1; //!< [����-�001] ���� �� ����� (��/�, ����)
   uint16_t ur_reserve_failure     : 1; //!< [����-�002] ���� �� ������� ��� (����)
   uint16_t unit_task_corr_failure : 1; //!< [����-�063] ���� ������� ��� ����� (����)
   uint16_t bcvm1_bp_failure       : 1; //!< [����] ����1 �� �����
   uint16_t bcvm2_bp_failure       : 1; //!< [����] ����2 �� �����
} mfci_signals_word_38_b_t;

//! ����� 38 ������������ ���� (������� ����, ���)
typedef struct mfci_signals_word_39_b_t {
   uint16_t bcvm1_unit_task_corr_failure : 1; //!< [����] ����1 ���� ������� �����
   uint16_t bcvm2_unit_task_corr_failure : 1; //!< [����] ����2 ���� ������� �����
   uint16_t bcvm1_kans_failure           : 1; //!< [����] ����1 ���� �����
   uint16_t bcvm2_kans_failure           : 1; //!< [����] ����2 ���� �����
   uint16_t rap_attack_left              : 1; //!< [���-�007] ��� ����� ����� (��/�)
   uint16_t rap_attack_right             : 1; //!< [���-�005] ��� ����� ������ (��/�)
   uint16_t rap_attack_below             : 1; //!< [���-�003] ��� ����� ����� (��/�)
   uint16_t rap_attack_above             : 1; //!< [���-�004] ��� ����� ������ (��/�)
   uint16_t rap_attack_front             : 1; //!< [���-�004] ��� ����� ������� (��/�)
   uint16_t rap_attack_rear              : 1; //!< [���-�006] ��� ����� ����� (��/�)
   uint16_t rap_guidance                 : 1; //!< [���-�011] ��� ���������
   uint16_t rap_tracking                 : 1; //!< [���-�010] ��� �������������
   uint16_t rap_failure                  : 1; //!< [���-�753] ��� ����� (��/�, ����)
   uint16_t rap_finder_failure           : 1; //!< [���-�007] ��� ��������������� ����� (����)
   uint16_t rap_lazer_failure            : 1; //!< [���-�008] ��� �������� ������� ����� (����)
   uint16_t rap_uv_valves_failure        : 1; //!< [����-�001] ��� ������� ��-5 ����� (����)
} mfci_signals_word_39_b_t;

//! ����� 40 ������������ ���� (������� ���, �070)
typedef struct mfci_signals_word_40_b_t {
   uint16_t rap_uv_failure         : 1; //!< [���-�009] ��� �� ����� (����)
   uint16_t rap_recv_failure       : 1; //!< [���-�010] ��� �������� ��� ����� (����)
   uint16_t rap_sender_failure     : 1; //!< [���-�756] ��� ���������� ����� (����)
   uint16_t rap_recv_left_failure  : 1; //!< [���-�768] ��� ��� �������� ���� ����� (����)
   uint16_t rap_recv_right_failure : 1; //!< [���-�777] ��� ���� �������� ���� ����� (����)
   uint16_t rap_recv_rear_failure  : 1; //!< [���-�786] ��� ���� �������� ���� ����� (����)
   uint16_t rap_send_front_failure : 1; //!< [���-�794] ��� ������ ���������� ���� ����� (����)
   uint16_t rap_send_left_failure  : 1; //!< [���-�799] ��� ��� ���������� ���� ����� (����)
   uint16_t rap_send_right_failure : 1; //!< [���-�811] ��� ���� ���������� ���� ����� (����)
   uint16_t rap_send_rear_failure  : 1; //!< [���-�823] ��� ���� ���������� ���� ����� (����)
   uint16_t rap_unit1_failure      : 1; //!< [���-�703] ��� ���1 ����� (����)
   uint16_t rap_unit2_failure      : 1; //!< [���-�722] ��� ���2 ����� (����)
   uint16_t rap_unit5_failure      : 1; //!< [���-�737] ��� ���5 ����� (����)
   uint16_t fire_emergency         : 1; //!< [�070-�001] ������ ���� �������� (��/�, ����)
   uint16_t tsp_spec_on            : 1; //!< [�070-�002] ���/���� ������ (��/�, ����)
   uint16_t tsp_spec_off           : 1; //!< [�070-�003] ���/���� ������� (��/�, ����)
} mfci_signals_word_40_b_t;

//! ����� 41 ������������ ���� (������� �070, ����, ����, 19��)
typedef struct mfci_signals_word_41_b_t {
   uint16_t open_go                 : 1; //!< [�070-�004] ������� ��� � ��� ������ ������� (����)
   uint16_t close_go                : 1; //!< [�070-�005] ������� ��� � ��� ������ ������� (����)
   uint16_t suo_failure             : 1; //!< [�070-�006] ��� ����� (��/�, ����)
   uint16_t kav_failure             : 1; //!< [�070-�007] ��� ����� (��/�, ����)
   uint16_t suo_landing_not_ready_1 : 1; //!< [���-�006] ��� ������� ���������, ��������� ������� (��/�)
   uint16_t suo_landing_not_ready_2 : 1; //!< [���-�007] ��� ������� ���������, ������� ������� (��/�)
   uint16_t asu_message             : 1; //!< [���-�001] ��� ��������� ����� (��/�, ����)
   uint16_t asu_failure             : 1; //!< [���-�003] ��� ����� (��/�, ����)
   uint16_t asu_check_route         : 1; //!< [���-�008] ��� ������� ������� (��/�, ����)
   uint16_t asu_check_bz            : 1; //!< [���-�006] ��� �� ������� (��/�, ����)
   uint16_t asu_lock_weapon         : 1; //!< [���-�007] ��� ���������� ������ (��/�, ����)
   uint16_t asu_report              : 1; //!< [���-�011] ��� ��������� ������ (��/�, ����)
   uint16_t urpz_onbz_preparing     : 1; //!< [����-�001] ���� ������������ ����, ����� - XX:XX (��/�, ����)
   uint16_t contrail_check          : 1; //!< [����-�001] ����� ������� (��/�)
   uint16_t bks_weapon_enabled      : 1; //!< [�505-�001] ������������� ������ (��/�, ����)
   uint16_t                         : 1; //!< ������
} mfci_signals_word_41_b_t;

//! ����� 42 ������������ ���� (������� ���)
typedef struct mfci_signals_word_42_b_t {
   uint16_t mfi01_reserve : 1; //!< [���-�001] ���1 ������ ����� (����)
   uint16_t mfi02_reserve : 1; //!< [���-�002] ���2 ������ ����� (����)
   uint16_t mfi03_reserve : 1; //!< [���-�003] ���3 ������ ����� (����)
   uint16_t mfi04_reserve : 1; //!< [���-�004] ���4 ������ ����� (����)
   uint16_t mfi05_reserve : 1; //!< [���-�005] ���5 ������ ����� (����)
   uint16_t mfi06_reserve : 1; //!< [���-�006] ���6 ������ ����� (����)
   uint16_t mfi07_reserve : 1; //!< [���-�007] ���7 ������ ����� (����)
   uint16_t mfi08_reserve : 1; //!< [���-�008] ���8 ������ ����� (����)
   uint16_t mfi09_reserve : 1; //!< [���-�009] ���9 ������ ����� (����)
   uint16_t mfi10_reserve : 1; //!< [���-�010] ���10 ������ ����� (����)
   uint16_t mfi11_reserve : 1; //!< [���-�011] ���11 ������ ����� (����)
   uint16_t mfi01_failure : 1; //!< [���-�012] ���1 ����� (����)
   uint16_t mfi02_failure : 1; //!< [���-�013] ���2 ����� (����)
   uint16_t mfi03_failure : 1; //!< [���-�014] ���3 ����� (����)
   uint16_t mfi04_failure : 1; //!< [���-�015] ���4 ����� (����)
   uint16_t mfi05_failure : 1; //!< [���-�016] ���5 ����� (����)
} mfci_signals_word_42_b_t;

//! ����� 43 ������������ ���� (������� ���, ����, ����)
typedef struct mfci_signals_word_43_b_t {
   uint16_t mfi06_failure    : 1; //!< [���-�017] ���6 ����� (����)
   uint16_t mfi07_failure    : 1; //!< [���-�018] ���7 ����� (����)
   uint16_t mfi08_failure    : 1; //!< [���-�019] ���8 ����� (����)
   uint16_t mfi09_failure    : 1; //!< [���-�020] ���9 ����� (����)
   uint16_t mfi10_failure    : 1; //!< [���-�021] ���10 ����� (����)
   uint16_t mfi11_failure    : 1; //!< [���-�022] ���11 ����� (����)
   uint16_t mfpu1_failure    : 1; //!< [����1-�001] ����1 ����� (����)
   uint16_t mfpu2_failure    : 1; //!< [����2-�001] ����2 ����� (����)
   uint16_t mfpu3_failure    : 1; //!< [����3-�001] ����3 ����� (����)
   uint16_t depressurization : 1; //!< [����-�001*] ���� ������ ����� (��/�, ����)
   uint16_t canopy_1         : 1; //!< [����-�001] ������ ������ (�� ����� � ��˨��, ����)
   uint16_t canopy_pilot_1   : 1; //!< [����-�002] ������ �� ������ (����)
   uint16_t canopy_pilot_2   : 1; //!< [����-�003] ������ ��� ������ (����)
   uint16_t canopy_navigator : 1; //!< [����-�004] ������ �� ������ (����)
   uint16_t canopy_operator  : 1; //!< [����-�005] ������ �� ������ (����)
   uint16_t canopy_2         : 1; //!< [����-�006] ������ ������ (��/�)
} mfci_signals_word_43_b_t;

//! ����� 44 ������������ ���� (������ ������)
typedef struct mfci_signals_word_44_b_t {
   uint16_t pui1_failure     : 1; //!< [���1-�001] ���1 ����� (����)
   uint16_t pui2_failure     : 1; //!< [���2-�001] ���2 ����� (����)
   uint16_t mup1_failure     : 1; //!< [���1-�001] ���1 ����� (����)
   uint16_t mup2_failure     : 1; //!< [���2-�001] ���2 ����� (����)
   uint16_t vim1_failure     : 1; //!< [VIM1-�001] VIM1: ILS, VOR ����� (����)
   uint16_t vim2_failure     : 1; //!< [VIM2-�001] VIM2: ILS, VOR ����� (����)
   uint16_t rvm1_failure     : 1; //!< [���1-�001] ���1 ����� (����)
   uint16_t rvm2_failure     : 1; //!< [���2-�001] ���2 ����� (����)
   uint16_t rvb_failure      : 1; //!< [���-�001] ��� ����� (����)
   uint16_t sd75_1_failure   : 1; //!< [DME1-�001] ���������1 ����� (����)
   uint16_t sd75_2_failure   : 1; //!< [DME2-�001] ���������2 ����� (����)
   uint16_t ans_failure      : 1; //!< [���-�001] ��� ����� (����)
   uint16_t ans_true_heading : 1; //!< [���-�001] ��� ���� �������� �� ��� (��/�, ����)
   uint16_t diss_failure     : 1; //!< [����] ���� ����� (����)
   uint16_t diss_memory      : 1; //!< [����-�001] ���� ������ (����)
   uint16_t                  : 1; //!< ������
} mfci_signals_word_44_b_t;

//! ����� 45 ������������ ���� (������ ������)
typedef struct mfci_signals_word_45_b_t {
   uint16_t ark_failure                  : 1; //!< [���-�001]  ��� ����� (����)
   uint16_t sev_failure                  : 1; //!< [���-�001]  ��� ����� (����)
   uint16_t abd_failure                  : 1; //!< [���-�001]  ��� ����� (����)
   uint16_t bask_failure                 : 1; //!< [����-�001] ���� ����� (����)
   uint16_t rls_failure                  : 1; //!< [���-�001]  ��� ����� (��/�, ����)
   uint16_t msrp_zbn1_failure            : 1; //!< [����-�001] ���� ���1 ����� (����)
   uint16_t msrp_zbn2_failure            : 1; //!< [����-�002] ���� ���2 ����� (����)
   uint16_t msrp_bspi_failure            : 1; //!< [����-�003] ���� ���� ����� (����)
   uint16_t msrp_pusn_failure            : 1; //!< [����-�004] ���� �� �� ����� (����)
   uint16_t svr_failure                  : 1; //!< [���-�001]  ��� ����� (����)
   uint16_t kvr_failure                  : 1; //!< [���] ��� ����� (��/�, ����)
   uint16_t front_shield_heating_failure : 1; //!< [����-�001] ������ ������� ����� ������� ������� (��/�)
   uint16_t right_shield_heating_failure : 1; //!< [����-�002] ������ ������ ����� ������� ������� (��/�)
   uint16_t left_shield_heating_failure  : 1; //!< [����-�003] ������ ����� ����� ������� ������� (��/�)
   uint16_t raft_failure                 : 1; //!< [����-�001] ���� ����� (����)
   uint16_t radiation                    : 1; //!< [���-�001] �������� (��/�, ����)
} mfci_signals_word_45_b_t;

//! ����� 46 ������������ ���� (������ ������)
typedef struct mfci_signals_word_46_b_t {
   uint16_t bis_kans_failure         : 1; //!< [���-�001] ��� ���� ����� (����)
   uint16_t ubvr_ems_failure         : 1; //!< [����-�019] ���� ����������� ��� ����� (����)
   uint16_t uks1_failure             : 1; //!< [���-�003] ������������ �������� 1 ����� (����)
   uint16_t uks2_failure             : 1; //!< [���-�004] ������������ �������� 2 ����� (����)
   uint16_t uks3_failure             : 1; //!< [���-�005] ������������ �������� 3 ����� (����)
   uint16_t uks4_failure             : 1; //!< [���-�006] ������������ �������� 4 ����� (����)
   uint16_t uks_analog_failure       : 1; //!< [���-�007] ������������ ������ �������� ����� (����)
   uint16_t uks_rk_failure           : 1; //!< [���-�008] ������������ ������� ������ ����� (����)
   uint16_t uks_unreserved           : 1; //!< [���-�009] ������������ �������� ������� ��� (��/�)
   uint16_t uks_parametric_failure   : 1; //!< [���-�010] ������������ �������� ������ ����� (��/�)
   uint16_t uks_tar_available        : 1; //!< [���] ����������� ��������� ���
   uint16_t front_boost_pressure_low : 1; //!< [���-�001] ������ ������ ���� ���� ������ (����)
   uint16_t rear_boost_pressure_low  : 1; //!< [���-�002] ������ ������ ���� ���� ���� (����)
   uint16_t chute_failure            : 1; //!< [����-�001] ������� ����� (��/�)
   uint16_t chute_cut                : 1; //!< [����-�002] ������� ������� (��/�)
   uint16_t chute_dragged            : 1; //!< [����-�003] ������� ������� (��/�)
} mfci_signals_word_46_b_t;

//! ����� 47 ������������ ���� (������� ���)
typedef struct mfci_signals_word_47_b_t {
   uint16_t dv1_fire             : 1; //!< [���-�005] ��1 ����� (��/�, ����)
   uint16_t dv1_overheating      : 1; //!< [���-�001] ��1 �������� (��/�, ����)
   uint16_t dv1_rud_low_down     : 1; //!< [���] ��1 �����/��������, �������� ��� ��1 �� �� (��/�)
   uint16_t dv1_close_stop_valve : 1; //!< [���] ��1 �����/��������, ������ ����-���� ��1 (��/�)
   uint16_t dv1_close_fire_cock  : 1; //!< [���] ��1 �����/��������, ������ ��1 (��/�)
   uint16_t dv1_press_dvig       : 1; //!< [���] ��1 �����/��������, ����� ����1 (��/�)
   uint16_t dv1_press_strike_1   : 1; //!< [���] ��1 �����/��������, ����� ������� 1 (��/�)
   uint16_t dv1_press_strike_2   : 1; //!< [���] ��1 �����/��������, ����� ������� 2 (��/�)
   uint16_t dv1_press_strike_3   : 1; //!< [���] ��1 �����/��������, ����� ������� 3 (��/�)
   uint16_t dv1_turn_off_gen_1   : 1; //!< [���] ��1 �����/��������, ������� ���������� 1 (��/�)
   uint16_t dv1_turn_off_gen_2   : 1; //!< [���] ��1 �����/��������, ������� ���������� 1 (����)
   uint16_t dv1_turn_off_bleed_1 : 1; //!< [���] ��1 �����/��������, ������� ����� �� ��1 (��/�)
   uint16_t dv1_turn_off_bleed_2 : 1; //!< [���] ��1 �����/��������, ������� ����� �� ��1 (����)
   uint16_t dv2_fire             : 1; //!< [���-�006] ��2 ����� (��/�, ����)
   uint16_t dv2_overheating      : 1; //!< [���-�002] ��2 �������� (��/�, ����)
   uint16_t dv2_rud_low_down     : 1; //!< [���] ��2 �����/��������, �������� ��� ��2 �� �� (��/�)
} mfci_signals_word_47_b_t;

//! ����� 48 ������������ ���� (������� ���)
typedef struct mfci_signals_word_48_b_t {
   uint16_t dv2_close_stop_valve : 1; //!< [���] ��2 �����/��������, ������ ����-���� ��2 (��/�)
   uint16_t dv2_close_fire_cock  : 1; //!< [���] ��2 �����/��������, ������ ��2 (��/�)
   uint16_t dv2_press_dvig       : 1; //!< [���] ��2 �����/��������, ����� ����2 (��/�)
   uint16_t dv2_press_strike_1   : 1; //!< [���] ��2 �����/��������, ����� ������� 1 (��/�)
   uint16_t dv2_press_strike_2   : 1; //!< [���] ��2 �����/��������, ����� ������� 2 (��/�)
   uint16_t dv2_press_strike_3   : 1; //!< [���] ��2 �����/��������, ����� ������� 3 (��/�)
   uint16_t dv2_turn_off_gen_1   : 1; //!< [���] ��2 �����/��������, ������� ���������� 2 (��/�)
   uint16_t dv2_turn_off_gen_2   : 1; //!< [���] ��2 �����/��������, ������� ���������� 2 (����)
   uint16_t dv2_turn_off_bleed_1 : 1; //!< [���] ��2 �����/��������, ������� ����� �� ��2 (��/�)
   uint16_t dv2_turn_off_bleed_2 : 1; //!< [���] ��2 �����/��������, ������� ����� �� ��2 (����)
   uint16_t dv3_fire             : 1; //!< [���-�007] ��3 ����� (��/�, ����)
   uint16_t dv3_overheating      : 1; //!< [���-�003] ��3 �������� (��/�, ����)
   uint16_t dv3_rud_low_down     : 1; //!< [���] ��3 �����/��������, �������� ��� ��3 �� �� (��/�)
   uint16_t dv3_close_stop_valve : 1; //!< [���] ��3 �����/��������, ������ ����-���� ��3 (��/�)
   uint16_t dv3_close_fire_cock  : 1; //!< [���] ��3 �����/��������, ������ ��3 (��/�)
   uint16_t dv3_press_dvig       : 1; //!< [���] ��3 �����/��������, ����� ����3 (��/�)
} mfci_signals_word_48_b_t;

//! ����� 49 ������������ ���� (������� ���)
typedef struct mfci_signals_word_49_b_t {
   uint16_t dv3_press_strike_1   : 1; //!< [���] ��3 �����/��������, ����� ������� 1 (��/�)
   uint16_t dv3_press_strike_2   : 1; //!< [���] ��3 �����/��������, ����� ������� 2 (��/�)
   uint16_t dv3_press_strike_3   : 1; //!< [���] ��3 �����/��������, ����� ������� 3 (��/�)
   uint16_t dv3_turn_off_gen_1   : 1; //!< [���] ��3 �����/��������, ������� ���������� 3 (��/�)
   uint16_t dv3_turn_off_gen_2   : 1; //!< [���] ��3 �����/��������, ������� ���������� 3 (����)
   uint16_t dv3_turn_off_bleed_1 : 1; //!< [���] ��3 �����/��������, ������� ����� �� ��3 (��/�)
   uint16_t dv3_turn_off_bleed_2 : 1; //!< [���] ��3 �����/��������, ������� ����� �� ��3 (����)
   uint16_t dv4_fire             : 1; //!< [���-�008] ��4 ����� (��/�, ����)
   uint16_t dv4_overheating      : 1; //!< [���-�004] ��4 �������� (��/�, ����)
   uint16_t dv4_rud_low_down     : 1; //!< [���] ��4 �����/��������, �������� ��� ��4 �� �� (��/�)
   uint16_t dv4_close_stop_valve : 1; //!< [���] ��4 �����/��������, ������ ����-���� ��4 (��/�)
   uint16_t dv4_close_fire_cock  : 1; //!< [���] ��4 �����/��������, ������ ��4 (��/�)
   uint16_t dv4_press_dvig       : 1; //!< [���] ��4 �����/��������, ����� ����4 (��/�)
   uint16_t dv4_press_strike_1   : 1; //!< [���] ��4 �����/��������, ����� ������� 1 (��/�)
   uint16_t dv4_press_strike_2   : 1; //!< [���] ��4 �����/��������, ����� ������� 2 (��/�)
   uint16_t dv4_press_strike_3   : 1; //!< [���] ��4 �����/��������, ����� ������� 3 (��/�)
} mfci_signals_word_49_b_t;

//! ����� 50 ������������ ���� (������� ���, ���, ����, ��)
typedef struct mfci_signals_word_50_b_t {
   uint16_t dv4_turn_off_gen_1   : 1; //!< [���] ��4 �����/��������, ������� ���������� 4 (��/�)
   uint16_t dv4_turn_off_gen_2   : 1; //!< [���] ��4 �����/��������, ������� ���������� 4 (����)
   uint16_t dv4_turn_off_bleed_1 : 1; //!< [���] ��4 �����/��������, ������� ����� �� ��4 (��/�)
   uint16_t dv4_turn_off_bleed_2 : 1; //!< [���] ��4 �����/��������, ������� ����� �� ��4 (����)
   uint16_t vsu_fire             : 1; //!< [���-�009] ��� ����� (��/�, ����)
   uint16_t vsu_press_stop       : 1; //!< [���] ��� �����, ����� ������� ��� (����)
   uint16_t vsu_turn_off_gen     : 1; //!< [���] ��� �����, ������� ��������� ��� (����)
   uint16_t vsu_press_strike_1   : 1; //!< [���] ��� �����, ����� ������� 1 (����)
   uint16_t vsu_press_strike_2   : 1; //!< [���] ��� �����, ����� ������� 2 (����)
   uint16_t vsu_press_strike_3   : 1; //!< [���] ��� �����, ����� ������� 3 (����)
   uint16_t bcvm_sel_course      : 1; //!< [����-�006] �� ���� (����)
   uint16_t bcvm_to_point        : 1; //!< [����-�011] ����� �� (����)
   uint16_t bcvm_route_shift     : 1; //!< [����-�012] ���� ���� (����)
   uint16_t bcvm_orbit_left      : 1; //!< [����-�013] ������ ��� (����)
   uint16_t bcvm_orbit_right     : 1; //!< [����-�014] ������ ���� (����)
   uint16_t bcvm_waiting_zone    : 1; //!< [����-�015] ���� �� (����)
} mfci_signals_word_50_b_t;

//! ����� 51 ������������ ���� (������� ����, ��)
typedef struct mfci_signals_word_51_b_t {
   uint16_t bcvm_reverse_route     : 1; //!< [����-�023] ������ ���� (����)
   uint16_t bcvm_teardrop          : 1; //!< [����-�029] ������� �� �� (����)
   uint16_t bcvm_azimuth_to_rsbn   : 1; //!< [����-�031] ������ �� ���� (����)
   uint16_t bcvm_azimuth_from_rsbn : 1; //!< [����-�032] ������ �� ���� (����)
   uint16_t bcvm_azimuth_to_vor1   : 1; //!< [����-�033] ������ �� VOR1 (����)
   uint16_t bcvm_azimuth_from_vor1 : 1; //!< [����-�034] ������ �� VOR1 (����)
   uint16_t bcvm_azimuth_to_vor2   : 1; //!< [����-�035] ������ �� VOR2 (����)
   uint16_t bcvm_azimuth_from_vor2 : 1; //!< [����-�036] ������ �� VOR2 (����)
   uint16_t bcvm_sel_track_angle   : 1; //!< [����-�037] ��� ���� (����)
   uint16_t bcvm_sel_time_maneuver : 1; //!< [����-�038] ��� ���� (��������� dt, ����)
   uint16_t bcvm_sel_roll_right    : 1; //!< [����-�039] ����� ���� (����)
   uint16_t bcvm_turn              : 1; //!< [����-�040] ����� ���� (����)
   uint16_t bcvm_inverted_turn     : 1; //!< [����-�041] ��� ����� ���� (����)
   uint16_t bcvm_tacking           : 1; //!< [����-�042] ������������ (����)
   uint16_t bcvm_shuttle           : 1; //!< [����-�043] ������ (����)
   uint16_t bcvm_landing_pattern   : 1; //!< [����-�044] �� (����)
} mfci_signals_word_51_b_t;

//! ����� 52 ������������ ���� (������� ����, ��, ���)
typedef struct mfci_signals_word_52_b_t {
   uint16_t bcvm_sel_roll_left     : 1; //!< [����-�045] ����� ��� (����)
   uint16_t bcvm_takeoff_rud_65    : 1; //!< [����-�050] ����� ����� ��� = 65 (��/�)
   uint16_t bcvm_takeoff_rud_72    : 1; //!< [����-�051] ����� ����� ��� = 72 (��/�)
   uint16_t bcvm_takeoff_rud_85    : 1; //!< [����-�052] ����� ����� ��� = 85 (��/�)
   uint16_t bcvm_takeoff_rud_95    : 1; //!< [����-�053] ����� ����� ��� = 95 (��/�)
   uint16_t bcvm_takeoff_rud_115   : 1; //!< [����-�054] ����� ����� ��� = 115 (��/�)
   uint16_t bvd_compare_pbd        : 1; //!< [���] ��� ������ (����)
   uint16_t bvd_compare_nd1        : 1; //!< [���] ��1 ������ (����)
   uint16_t bvd_compare_nd2        : 1; //!< [���] ��2 ������ (����)
   uint16_t bvd_compare_nd3        : 1; //!< [���] ��3 ������ (����)
   uint16_t bvd_compare_nd4        : 1; //!< [���] ��4 ������ (����)
   uint16_t                        : 5; //!< ������
} mfci_signals_word_52_b_t;

//! ����� 53 ������������ ���� (������� ��, ���, ����, ����)
typedef struct mfci_signals_word_53_b_t {
   uint16_t tanks_pressure_low         : 1; //!< [��-�001] �������� ����� ������ (��/�)
   uint16_t pressurization_high        : 1; //!< [��-�002] ������ ����� ����� (��/�)
   uint16_t pressurization_low         : 1; //!< [��-�003] ������ ����� ��� (��/�)
   uint16_t pressurization_failure     : 1; //!< [��-�004] ������ ����� ����� (��/�)
   uint16_t nitrogen_low               : 1; //!< [��-�005] ���� ����� ��� (��/�)
   uint16_t sns_failure                : 1; //!< [���-�002] ���� ����� (����)
   uint16_t sns_glns_failure           : 1; //!< [���-�003] ���� ���� ����� (����)
   uint16_t sns_srns_failure           : 1; //!< [���-�004] ���� ���� ����� (����)
   uint16_t sns_ifrns_failure          : 1; //!< [���-�005] ���� ����� ����� (����)
   uint16_t rsbn_failure               : 1; //!< [����-�001] ���� ����� (����)
   uint16_t rsbn_failure_nl            : 1; //!< [����-�002] ���� ��� � ��� ����� (����)
   uint16_t rsbn_failure_msn           : 1; //!< [����-�003] ���� ��� ����� (����)
   uint16_t steering_no_conrol         : 1; //!< [����-�001] ������� ����� ���������� (��/�)
   uint16_t taxing                     : 1; //!< [����-�002] ������ ������� (��/�, �� ����� � ��˨��)
   uint16_t steering_channel_1_failure : 1; //!< [����-�003] ������� ����� ����� 1 ����� (����)
   uint16_t steering_channel_2_failure : 1; //!< [����-�004] ������� ����� ����� 2 ����� (����)
} mfci_signals_word_53_b_t;

//! ����� 54 ������������ ���� (������� ���/���)
typedef struct mfci_signals_word_54_b_t {
   uint16_t ius_sound_failure          : 1; //!< [���-�004] ��� ���� ���� ����� (��/�, ����)
   uint16_t ius_cso_failure            : 1; //!< [���-�005] ��� ��� ����� (��/�, ����)
   uint16_t ius_sound_reserve_failure  : 1; //!< [���-�006] ��� ��� ���� ���� ������� ��� (����)
   uint16_t ius_cso_reserve_failure    : 1; //!< [���-�007] ��� ��� ��� ������� ��� (����)
   uint16_t sas_failure_pilot_1        : 1; //!< [���-�001] ��� ��������� ���� ������������ (����)
   uint16_t sas_failure_pilot_2        : 1; //!< [���-�002] ��� ��������� ���� ������������ (����)
   uint16_t sas_failure_operator       : 1; //!< [���-�003] ��� ��������� ���� ������������ (����)
   uint16_t sas_failure_navigator      : 1; //!< [���-�009] ��� �������� ���� ������������ (����)
   uint16_t sas_clear_pilot_1          : 1; //!< [���] ����� ��� � 1 �� (��� ������� 1 ������)
   uint16_t sas_clear_pilot_2          : 1; //!< [���] ����� ��� � 2 ��� (��� ������� 2 ������)
   uint16_t sas_clear_operator         : 1; //!< [���] ����� ��� � 3 �� (��� ��������-��������� ������)
   uint16_t sas_clear_navigator        : 1; //!< [���] ����� ��� � 4 �� (��� ��������-���������� ������)
   uint16_t                            : 4; //!< ������
} mfci_signals_word_54_b_t;

//! ����� 1 �������� 19-��
typedef struct u19_flag_word_1_b_t {
   uint16_t healthy           : 1; //!< ������� ����������� ������ �� 19-��
   uint16_t rear_mpu_position : 3; //!< ����� ������ ������� � ������ ����������� �� ��� //(min:1 max:6)
   uint16_t unit1_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 1 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit2_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 2 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit3_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 3 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit4_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 4 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit5_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 5 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit6_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 6 (� ������ �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
} u19_flag_word_1_b_t;

//! ����� 2 �������� 19-��
typedef struct u19_flag_word_2_b_t {
   uint16_t front_mpu_position : 4; //!< ����� ������ ������� � �������� ����������� �� ��� //(min:7 max:12)
   uint16_t unit7_status       : 2; //!< ��������� ������������� ������� �� ����� ������� 7 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit8_status       : 2; //!< ��������� ������������� ������� �� ����� ������� 8 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit9_status       : 2; //!< ��������� ������������� ������� �� ����� ������� 9 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit10_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 10 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit11_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 11 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
   uint16_t unit12_status      : 2; //!< ��������� ������������� ������� �� ����� ������� 12 (� �������� �����������, 0 - ��� ������, 1 - �������������, 2 - ��������������) //(min:0 max:2)
} u19_flag_word_2_b_t;

//! ����� 3 �������� 19-��
typedef struct u19_flag_word_3_b_t {
   uint16_t weapon_enabled : 1;  //!< [19��] ��������������
   uint16_t tsp            : 1;  //!< [19��] ��� �����
   uint16_t                : 14; //!< ������
} u19_flag_word_3_b_t;

//! ����� 1 �������� ����
typedef struct absu_flag_word_1_b_t {
   uint16_t fin_fail_1        : 1; //!< [����-�001] ������� �������� ���� ����� 1 �����
   uint16_t fin_fail_2        : 1; //!< [����-�002] ������� �������� ���� ����� 2 �����
   uint16_t fin_fail_3        : 1; //!< [����-�003] ������� �������� ���� ����� 3 �����
   uint16_t fin_fail_4        : 1; //!< [����-�004] ������� �������� ���� ����� 4 �����
   uint16_t stab_fail_1       : 1; //!< [����-�005] ������� �������� ������������� ����� 1 �����
   uint16_t stab_fail_2       : 1; //!< [����-�006] ������� �������� ������������� ����� 2 �����
   uint16_t stab_fail_3       : 1; //!< [����-�007] ������� �������� ������������� ����� 3 �����
   uint16_t stab_fail_4       : 1; //!< [����-�008] ������� �������� ������������� ����� 4 �����
   uint16_t spoiler_l_fail_1  : 1; //!< [����-�009] ������� �������� ����� ������������� ����� 1 �����
   uint16_t spoiler_l_fail_2  : 1; //!< [����-�010] ������� �������� ����� ������������� ����� 2 �����
   uint16_t spoiler_l_fail_3  : 1; //!< [����-�011] ������� �������� ����� ������������� ����� 3 �����
   uint16_t spoiler_r_fail_1  : 1; //!< [����-�012] ������� �������� ������ ������������� ����� 1 �����
   uint16_t spoiler_r_fail_2  : 1; //!< [����-�013] ������� �������� ������ ������������� ����� 2 �����
   uint16_t spoiler_r_fail_3  : 1; //!< [����-�014] ������� �������� ������ ������������� ����� 3 �����
   uint16_t flaperon_l_fail_1 : 1; //!< [����-�015] ������� �������� ������ ��������� ����� 1 �����
   uint16_t flaperon_l_fail_2 : 1; //!< [����-�016] ������� �������� ������ ��������� ����� 2 �����
} absu_flag_word_1_b_t;

//! ����� 2 �������� ����
typedef struct absu_flag_word_2_b_t {
   uint16_t flaperon_l_fail_3       : 1; //!< [����-�017] ������� �������� ������ ��������� ����� 3 �����
   uint16_t flaperon_r_fail_1       : 1; //!< [����-�018] ������� �������� ������� ��������� ����� 1 �����
   uint16_t flaperon_r_fail_2       : 1; //!< [����-�019] ������� �������� ������� ��������� ����� 2 �����
   uint16_t flaperon_r_fail_3       : 1; //!< [����-�020] ������� �������� ������� ��������� ����� 3 �����
   uint16_t neutral_course          : 1; //!< [����-�021] �������� �� �����
   uint16_t neutral_roll            : 1; //!< [����-�022] �������� �� �����
   uint16_t dz_off                  : 1; //!< [����-�025] ���������� ��������������� ����������� �������
   uint16_t rut_valid               : 1; //!< [����-�061] ������������� ������� ��������� ���
   uint16_t pedals_position_failure : 1; //!< [����-�062] ����� ������� ��������� �������
   uint16_t srb_opened              : 1; //!< [����-�064] ������ ��� �������
   uint16_t interc_rus_valid        : 1; //!< [����-�074] ������������� ������� ��������� ��� ��� �������������
   uint16_t flaperon_rus_valid      : 1; //!< [����-�075] ������������� ������� ��������� ��� ��� ����������
   uint16_t pedals_position_valid   : 1; //!< [����-�076] ������������� ������� ��������� �������
   uint16_t braking_failed          : 1; //!< [����-�077] ����� ���������� ��������������
   uint16_t                         : 2; //!< ������
} absu_flag_word_2_b_t;

//! ��������� ��� (����� ������ 1)
typedef struct asu_header_word_1_b_t {
   uint16_t segment_crc_low; //!< ������� ����� ����������� ����� �������� (CRC-32) //(min:0 max:4294967295 bits:4..19 lsb:1)
} asu_header_word_1_b_t;

//! ��������� ��� (����� ������ 2)
typedef struct asu_header_word_2_b_t {
   uint16_t segment_crc_high; //!< ������� ����� ����������� ����� �������� (CRC-32) //(min:0 max:4294967295 bits:4..19 lsb:1)
} asu_header_word_2_b_t;

//! ��������� ��� (����� ������ 3)
typedef struct asu_header_word_3_b_t {
   uint16_t sender_id    : 6; //!< ���������� ����������������� ����� ������� ����������� (2-��� ����, 6-��� ���) //(min:1 max:17)
   uint16_t receiver_id  : 6; //!< ���������� ����������������� ����� ������� ���������� (2-��� ����, 6-��� ���) //(min:1 max:17)
   uint16_t unit_id      : 3; //!< ���������� ����������������� ����� ������� ����������� (2-����, 6-����1070, 7-����1570) //(min:1 max:7)
   uint16_t last_segment : 1; //!< ������� ���������� ��������
} asu_header_word_3_b_t;

//! ��������� ��� (����� ������ 4)
typedef struct asu_header_word_4_b_t {
   uint16_t ga_module      : 4; //!< ����� ��� ����������� //(min:0 max:10)
   uint16_t number_contour : 2; //!< ����� ������� //(min:0 max:3)
   uint16_t mfpu_linked    : 1; //!< ������� ����������� ���� � ���� (��������� �� ���� � ����)
   uint16_t                : 1; //!< ������
   uint16_t data_type      : 8; //!< ��� ������ (3-�������������� ��� � ����) //(min:0 max:8)
} asu_header_word_4_b_t;

//! ��������� ��� (����� ������ 5)
typedef struct asu_header_word_5_b_t {
   uint16_t segment_number; //!< ����� ������������� �������� (��������� � ����) //(min:0 max:255 bits:4..19 lsb:1)
} asu_header_word_5_b_t;

//! ��������� ��� (����� ������ 6)
typedef struct asu_header_word_6_b_t {
   uint16_t message_id; //!< ������������� ��������� //(min:1 max:65535 bits:4..19 lsb:1)
} asu_header_word_6_b_t;

//! ��������� ��� (����� ������ 7, ������� ��� �������� ������ �� ���� � ����)
typedef struct asu_header_word_7_in_b_t {
   uint16_t mfpu_linked_1  : 1; //!< ������� ����������� ���� � ���� � 1
   uint16_t mfpu_linked_2  : 1; //!< ������� ����������� ���� � ���� � 2
   uint16_t mfpu_linked_3  : 1; //!< ������� ����������� ���� � ���� � 3
   uint16_t mfpu_linked_4  : 1; //!< ������� ����������� ���� � ���� � 4
   uint16_t mfpu_linked_5  : 1; //!< ������� ����������� ���� � ���� � 5
   uint16_t mfpu_linked_6  : 1; //!< ������� ����������� ���� � ���� � 6
   uint16_t mfpu_linked_7  : 1; //!< ������� ����������� ���� � ���� � 7
   uint16_t mfpu_linked_8  : 1; //!< ������� ����������� ���� � ���� � 8
   uint16_t mfpu_linked_9  : 1; //!< ������� ����������� ���� � ���� � 9
   uint16_t mfpu_linked_10 : 1; //!< ������� ����������� ���� � ���� � 10
   uint16_t mfpu_linked_11 : 1; //!< ������� ����������� ���� � ���� � 11
   uint16_t                : 5; //!< ������
} asu_header_word_7_in_b_t;

//! ��������� ��� (����� ������ 7, ������� ��� �������� ������ �� ���� � ����)
typedef struct asu_header_word_7_out_b_t {
   uint16_t segments_count; //!< ���������� ��������� //(min:0 max:255 bits:4..19 lsb:1)
} asu_header_word_7_out_b_t;

//! ��������� ��� (����� ������ 8)
typedef struct asu_header_word_8_b_t {
   uint16_t segment_size; //!< ������ �������� //(min:1 max:48 bits:4..19 lsb:1)
} asu_header_word_8_b_t;

//! ����� 1 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_1_b_t {
   uint16_t hit_time_low; //!< [��-504/506-�001] �������� ����� �����, ������� 16 �������� //(min:0 max:86399 lsb:1 �)
} bp_50x_aur1_flag_word_1_b_t;

//! ����� 2 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_2_b_t {
   uint16_t hit_time_high         : 1; //!< [��-504/506-�001] �������� ����� �����, ������� 17-� ������
   uint16_t show_hit_time         : 1; //!< [��-504/506-�001] ���������� �������� ����� �����
   uint16_t show_enter_time       : 1; //!< [��-504/506-�003] ���������� �������� ����� ������� ��������� �������� ������� ���/����
   uint16_t show_prepare_time_rem : 1; //!< [��-504/506-�006] ���������� ���������� ����� �� ������� �������� ������� ���/����
   uint16_t standalone_path       : 1; //!< [��-504/506-�010] ���������� ����������� ������
   uint16_t route_loaded          : 1; //!< [��-504/506-�013] ������ ������� ���������
   uint16_t fire_mode             : 3; //!< [��-504/506-�014] ����� ���������� ������� (1-������, 2-��������, 3-���, 4-�������� �� �����) //(min:0 max:4)
   uint16_t prepare_mode          : 3; //!< [��-504/506-�015] ������� �������� ������� (1-������/����, 2-������/���, 3-������� ���, 4-���.����, 5-���.���. 6-������ � �������) //(min:0 max:6)
   uint16_t show_speed_correction : 1; //!< [��-504/506-�018] ���������� ������������� ��������� ��������� �������� ��� ������ � ���/����
   uint16_t show_redundant_time   : 1; //!< [��-504/506-�022] ���������� ������� ������� ��� ������ � ���/����
   uint16_t track_angle_active    : 1; //!< [��-504/506-�029.1] ����� ���
   uint16_t course_active         : 1; //!< [��-504/506-�029.2] ����� ��
} bp_50x_aur1_flag_word_2_b_t;

//! ����� 3 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_3_b_t {
   uint16_t enter_time_low; //!< [��-504/506-�003] �������� ����� ������� ��������� �������� ������� ���/����, ������� 16 �������� //(min:0 max:86399 lsb:1 �)
} bp_50x_aur1_flag_word_3_b_t;

//! ����� 4 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_4_b_t {
   uint16_t enter_time_high    : 1; //!< [��-504/506-�003] �������� ����� ������� ��������� �������� ������� ���/����, ������� 17-� ������
   uint16_t rear_mpu_position  : 3; //!< [��-504/506-�036.1] ����� ������ ������� � ������ ����������� �� ��� //(min:1 max:6)
   uint16_t front_mpu_position : 4; //!< [��-504/506-�036.2] ����� ������ ������� � �������� ����������� �� ��� //(min:7 max:12)
   uint16_t main_message       : 3; //!< [��-504/506-�038] ��������� "�������" (1-��� ���� �� ��������, 2-������ ������� (��������), 3-������ ��� (��������), 4-������� ���, 5-������� �������) //(min:0 max:5)
   uint16_t unit_1_status      : 5; //!< [��-504/506-�037.1] ��������� ������� 1 (0 - ��� �������) //(min:0 max:21)
} bp_50x_aur1_flag_word_4_b_t;

//! ����� 5 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_5_b_t {
   uint16_t unit_2_status : 5; //!< [��-504/506-�037.2] ��������� ������� 2 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_3_status : 5; //!< [��-504/506-�037.3] ��������� ������� 3 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_4_status : 5; //!< [��-504/506-�037.4] ��������� ������� 4 (0 - ��� �������) //(min:0 max:21)
   uint16_t               : 1; //!< ������
} bp_50x_aur1_flag_word_5_b_t;

//! ����� 6 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_6_b_t {
   uint16_t unit_5_status : 5; //!< [��-504/506-�037.5] ��������� ������� 5 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_6_status : 5; //!< [��-504/506-�037.6] ��������� ������� 6 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_7_status : 5; //!< [��-504/506-�037.7] ��������� ������� 7 (0 - ��� �������) //(min:0 max:21)
   uint16_t               : 1; //!< ������
} bp_50x_aur1_flag_word_6_b_t;

//! ����� 7 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_7_b_t {
   uint16_t unit_8_status  : 5; //!< [��-504/506-�037.8] ��������� ������� 8 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_9_status  : 5; //!< [��-504/506-�037.9] ��������� ������� 9 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_10_status : 5; //!< [��-504/506-�037.10] ��������� ������� 10 (0 - ��� �������) //(min:0 max:21)
   uint16_t                : 1; //!< ������
} bp_50x_aur1_flag_word_7_b_t;

//! ����� 8 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_8_b_t {
   uint16_t unit_11_status   : 5; //!< [��-504/506-�037.11] ��������� ������� 11 (0 - ��� �������) //(min:0 max:21)
   uint16_t unit_12_status   : 5; //!< [��-504/506-�037.12] ��������� ������� 12 (0 - ��� �������) //(min:0 max:21)
   uint16_t enter_accuracy   : 3; //!< [��-504/506-�049] �������� ����� � ���/���� (1-�������� � ����, 2-������� �����, 3-������� ������, 4-�����, 5-������ �����, 6-������ ������) //(min:0 max:6)
   uint16_t align_scale_type : 3; //!< [��-504/506-�060] ��� ����� ������������� �������� (0-���, 1-��, 2-���, 3-���, 4-������, 5-���, 6-���., 7-������ � �������) //(min:0 max:7)
} bp_50x_aur1_flag_word_8_b_t;

//! ����� 9 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_9_b_t {
   uint16_t rzp_coords_message : 1; //!< [��-504/506-�050] ������� ��������� ��� (0-���, 1-���������� ���)
   uint16_t message_1l         : 2; //!< [��-504/506-�054.1] ������ 1 ����� (0-���, 1-��������, 2-��������, 3-�������) //(min:0 max:3)
   uint16_t message_1m         : 3; //!< [��-504/506-�055.1] ������ 1 �� ������ (0-���, 1/4-���.�����, 2-���� ����, 3-����� ��, 5-������ ��, 6-������ ���) //(min:0 max:6)
   uint16_t message_1r         : 2; //!< [��-504/506-�056] ������ 1 ������ (0-���, 1-�� �����������, 2-��� ����������, 3-�� �����������) //(min:0 max:3)
   uint16_t message_2l         : 2; //!< [��-504/506-�057.1] ������ 2 ����� (0-���, 1-������� ���, 2-������� ��� (��������), 3-�� �������������) //(min:0 max:3)
   uint16_t message_2m         : 3; //!< [��-504/506-�058.1] ������ 2 �� ������ (0-���, 1-�� �������, 2-�� ��������, 3-��������, 4-���� ��) //(min:0 max:4)
   uint16_t message_2r         : 2; //!< [��-504/506-�059] ������ 2 ������ (0-���, 1-������� ���, 2-������� ��� (��������), 3-������ ����������) //(min:0 max:3)
   uint16_t                    : 1; //!< ������
} bp_50x_aur1_flag_word_9_b_t;

//! ����� 10 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_10_b_t {
   uint16_t asu_hit_time_low; //!< [��-504/506-�068.2] ����� ����� � ��������� ���� 3 ���. 1 "������� ��", ������� 16 �������� //(min:0 max:86399 lsb:1 �)
} bp_50x_aur1_flag_word_10_b_t;

//! ����� 11 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_11_b_t {
   uint16_t asu_hit_time_high   : 1;  //!< [��-504/506-�068.2] ����� ����� � ��������� ���� 3 ���. 1 "������� ��", ������� 17-� ������
   uint16_t message_2m_time_rem : 13; //!< [��-504/506-�058.2] ���������� ����� ��� ������ 2 �� ������ //(min:0 max:5999 lsb:1 �)
   uint16_t show_rzp            : 1;  //!< [��-504/506-�112] ���������� ���/����
   uint16_t                     : 1;  //!< ������
} bp_50x_aur1_flag_word_11_b_t;

//! ����� 12 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_12_b_t {
   uint16_t message_2l_hit_time_low; //!< [��-504/506-�057.2] ������������� ����� �����, ������� 16 �������� //(min:0 max:86399 lsb:1 �)
} bp_50x_aur1_flag_word_12_b_t;

//! ����� 13 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_13_b_t {
   uint16_t message_2l_hit_time_high : 1; //!< [��-504/506-�057.2] ������������� ����� �����, ������� 17-� ������
   uint16_t align_value_bz_rvp       : 7; //!< [��-504/506-�061.1] ��������� �������� �� / ������� �� � ��� (%) //(min:0 max:100)
   uint16_t align_value_mark         : 7; //!< [��-504/506-�062] ��������� ����� ���������� ��� �� ����� ��� (%) //(min:0 max:100)
   uint16_t                          : 1; //!< ������
} bp_50x_aur1_flag_word_13_b_t;

//! ����� 14 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_14_b_t {
   uint16_t mach_value      : 7; //!< [��-504/506-�068.3] ����� ���� � ��������� ���� 3 �������� 1 "������� �" //(min:0.4 max:0.78 lsb:0.01)
   uint16_t select_bz       : 1; //!< [��-504/506-�068.1] ������� �� (���)
   uint16_t select_hit_time : 1; //!< [��-504/506-�068.2] ������� ����� ����� (���)
   uint16_t bz_cancelled    : 1; //!< [��-504/506-�068.3] ������ �� (���)
   uint16_t bz_missed       : 1; //!< [��-504/506-�068.4] � �� ��� �� (���)
   uint16_t mpu_locked      : 1; //!< [��-504/506-�068.5] ������ ��������� ��� �� 5 �����
   uint16_t set_roll_5      : 1; //!< [��-504/506-�068.6] ������� ���� �� 5�
   uint16_t set_pitch_5     : 1; //!< [��-504/506-�068.7] �������� ������ �� -5� �� +15�
   uint16_t set_mach_08     : 1; //!< [��-504/506-�068.8] ������� ����� ���� �� 0.8
   uint16_t mach            : 1; //!< [��-504/506-�068.9] ������� ����� ����
} bp_50x_aur1_flag_word_14_b_t;

//! ����� 15 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_15_b_t {
   uint16_t alt_up           : 1; //!< [��-504/506-�068.10] ������� ������
   uint16_t alt_down         : 1; //!< [��-504/506-�068.11] ������� ������
   uint16_t wrong_unit_type  : 1; //!< [��-504/506-�068.12] ��� ������� �� ������������� ��
   uint16_t drop_fail        : 1; //!< [��-504/506-�068.13] �������
   uint16_t emergency_drop   : 1; //!< [��-504/506-�068.14] ��������� ����� ������� �������
   uint16_t pz_cancelled     : 1; //!< [��-504/506-�068.15] ������ ���������� �� (���)
   uint16_t rear_spus_fail   : 1; //!< [��-504/506-�068.16] ����� ���� ������� �����������
   uint16_t front_spus_fail  : 1; //!< [��-504/506-�068.17] ����� ���� ��������� �����������
   uint16_t rear_fail        : 1; //!< [��-504/506-�068.18] ����� ������� �����������
   uint16_t front_fail       : 1; //!< [��-504/506-�068.19] ����� ��������� �����������
   uint16_t rear_mpu_fail    : 1; //!< [��-504/506-�068.20] ����� ��� ������� �����������
   uint16_t front_mpu_fail   : 1; //!< [��-504/506-�068.21] ����� ��� ��������� �����������
   uint16_t rear_skv_manual  : 1; //!< [��-504/506-�068.22] ������ ���������� ��� ������� �����������
   uint16_t front_skv_manual : 1; //!< [��-504/506-�068.23] ������ ���������� ��� ��������� �����������
   uint16_t wrong_bz         : 1; //!< [��-504/506-�068.24] ������������ ��
   uint16_t bz_loading_fail  : 1; //!< [��-504/506-�068.25] ���� �������� ��
} bp_50x_aur1_flag_word_15_b_t;

//! ����� 16 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_16_b_t {
   uint16_t load_route         : 1; //!< [��-504/506-�068.26] ����� ��
   uint16_t check_units        : 1; //!< [��-504/506-�068.27] ������� ��������� �������
   uint16_t set_hit_time       : 1; //!< [��-504/506-�068.28] ����� ����� �����
   uint16_t set_orzp           : 1; //!< [��-504/506-�068.29] ������� ���� ����� ������� ���
   uint16_t set_align_mode     : 1; //!< [��-504/506-�068.30] ������ ����� ����������
   uint16_t rear_spus_res      : 1; //!< [��-504/506-�068.31] ��������� ����� ���� ������� �����������
   uint16_t front_spus_res     : 1; //!< [��-504/506-�068.32] ��������� ����� ���� ��������� �����������
   uint16_t mode_finished      : 1; //!< [��-504/506-�068.33] ����� ������
   uint16_t bz_loading_message : 1; //!< [��-504/506-�066.1] ��������� � �������� �� � ��� (0-���, 1-�������� ��)
   uint16_t bz_loading_percent : 7; //!< [��-504/506-�066.2] ������� �������� �� � ��� (0�100 %)
} bp_50x_aur1_flag_word_16_b_t;

//! ����� 17 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_17_b_t {
   uint16_t unit_type_bz : 2; //!< [��-504/506-�069] ��� �������, ����������� � �� (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_1_type  : 2; //!< [��-504/506-�070.1] ��� ������� 1 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_2_type  : 2; //!< [��-504/506-�070.2] ��� ������� 2 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_3_type  : 2; //!< [��-504/506-�070.3] ��� ������� 3 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_4_type  : 2; //!< [��-504/506-�070.4] ��� ������� 4 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_5_type  : 2; //!< [��-504/506-�070.5] ��� ������� 5 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_6_type  : 2; //!< [��-504/506-�070.6] ��� ������� 6 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_7_type  : 2; //!< [��-504/506-�070.7] ��� ������� 7 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
} bp_50x_aur1_flag_word_17_b_t;

//! ����� 18 �������� ��-504/506 (�� ������� 1 ���)
typedef struct bp_50x_aur1_flag_word_18_b_t {
   uint16_t unit_8_type     : 2; //!< [��-504/506-�070.8] ��� ������� 8 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_9_type     : 2; //!< [��-504/506-�070.9] ��� ������� 9 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_10_type    : 2; //!< [��-504/506-�070.10] ��� ������� 10 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_11_type    : 2; //!< [��-504/506-�070.11] ��� ������� 11 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t unit_12_type    : 2; //!< [��-504/506-�070.12] ��� ������� 12 (0-�� ���������, 1-504, 2-506) //(min:0 max:2)
   uint16_t rzp_points_type : 2; //!< [��-504/506-�071] ������� ������ � ����������� ����� "A" � "B" ���/���� (0-���, 1-���, 2-����) //(min:0 max:2)
   uint16_t show_trk_button : 1; //!< [��-504/506-�100] ����������� ������ "���"
   uint16_t inside_zone     : 1; //!< [��-504/506-�101] ��������� "� ����"
   uint16_t                 : 2; //!< ������
} bp_50x_aur1_flag_word_18_b_t;

//! ����� 1 �������� ������������� �����������/������������ ���������� ��-504/506 (�� ������� 1 ���)
typedef struct mfci_in_suo_50x_path_flag_word_1_b_t {
   uint16_t path_type                  : 2; //!< [��-504/506-�124.1/�125.1] ��� ���������� (0-���, 1-���, 2-���) //(min:0 max:2)
   uint16_t distance_type              : 2; //!< [��-504/506-�124.13/�125.13] ��� ������������� ���������� (1-S�, 2-Z) //(min:0 max:2)
   uint16_t points_count               : 4; //!< [��-504/506-�124.3/�125.3] ���������� ����� //(min:0 max:15)
   uint16_t prepare_start_point_number : 4; //!< [��-504/506-�124.7/�125.7] ����� ������ ������ �������� (0-���) //(min:0 max:15)
   uint16_t ready_point_number         : 4; //!< [��-504/506-�124.8/�125.8] ����� ������ ���������� ������� (0-���) //(min:0 max:15)
} mfci_in_suo_50x_path_flag_word_1_b_t;

//! ����� 2 �������� ������������� �����������/������������ ���������� ��-504/506 (�� ������� 1 ���)
typedef struct mfci_in_suo_50x_path_flag_word_2_b_t {
   uint16_t tnr_point_number              : 4; //!< [��-504/506-�124.9/�125.9] ����� ����� ��� (0-���) //(min:0 max:15)
   uint16_t nbp_point_number              : 4; //!< [��-504/506-�124.10/�125.10] ����� ������ ������� ���� ��� (0-���) //(min:0 max:15)
   uint16_t show_rzp_start_point_distance : 1; //!< [��-504/506-�124/�125] ������������� ���������� �� �������� ������� ��� ("�")
   uint16_t show_redundant_values_rzp     : 1; //!< [��-504/506-�103] ������������� �������������� ��������� �������� � ������� ��� ������ � ���/���� (������ ��� ������������ ���)
   uint16_t hit_time_fail                 : 1; //!< [��-504/506-�115] ������������ ������� ����� (������ ��� ������������ ���)
   uint16_t                               : 5; //!< ������
} mfci_in_suo_50x_path_flag_word_2_b_t;

//! ����� �������� ���������� � ������ ����������� ������ ���-504/506 (�� ������� 1 ���)
typedef struct mfci_in_suo_50x_trk_ap_flag_word_b_t {
   uint16_t show_waypoint_distance : 1;  //!< [��-504/506-�138] ������������� ���������� �� ���������� ���
   uint16_t show_delta_z           : 1;  //!< [��-504/506-�140] ������������� ��������� �������� ��������� �� ����� ��������� ����
   uint16_t                        : 14; //!< ������
} mfci_in_suo_50x_trk_ap_flag_word_b_t;

//! ����� �������� ������������� ��� ����� ���-504/506 (�� ������� 2 ���)
typedef struct mfci_in_suo_50x_rvp_init_flag_word_b_t {
   uint16_t rvp_loading : 1;  //!< [��-504/506-�208.3] ������������ ���
   uint16_t             : 15; //!< ������
} mfci_in_suo_50x_rvp_init_flag_word_b_t;

//! ����� �������� �������� ������ ����� ��� ����� ���-504/506 (�� ������� 2 ���)
typedef struct mfci_in_suo_50x_rvp_points_flag_word_b_t {
   uint16_t rvp_loading  : 1;  //!< [��-504/506-�208.3] ������������ ���
   uint16_t start_number : 11; //!< ����� ������� �������� � ������� ����� ��� points_b //(min:1 max:1500)
   uint16_t              : 4;  //!< ������
} mfci_in_suo_50x_rvp_points_flag_word_b_t;

//! ����� �������� �������� ������ �������� ��������� ��� ����� ���-504/506 (�� ������� 2 ���)
typedef struct mfci_in_suo_50x_rvp_polygons_flag_word_b_t {
   uint16_t rvp_loading  : 1; //!< [��-504/506-�208.3] ������������ ���
   uint16_t start_number : 9; //!< ����� ������� �������� � ������� �������� ��������� ��� polygons_b //(min:1 max:375)
   uint16_t              : 6; //!< ������
} mfci_in_suo_50x_rvp_polygons_flag_word_b_t;

//! ����� 1 �������� ��-504/506 (�� ������� 2 ���)
typedef struct bp_50x_aur2_flag_word_1_b_t {
   uint16_t bp_point_start_number : 8; //!< [��-504/506-�201.1] ����� ��� ������ ������� ������� � �������� �� ��� �� //(min:1 max:150)
   uint16_t bp_point_end_number   : 8; //!< [��-504/506-�201.2] ����� ��� ��������� ������� ������� � �������� �� ��� �� //(min:1 max:150)
} bp_50x_aur2_flag_word_1_b_t;

//! ����� 2 �������� ��-504/506 (�� ������� 2 ���)
typedef struct bp_50x_aur2_flag_word_2_b_t {
   uint16_t rvp_proj_valid           : 1; //!< [��-504/506-�200] ������������� ���������� ������������� �������� � ����� 3
   uint16_t rvp_valid                : 1; //!< [��-504/506-�208.1] ��� ���������
   uint16_t rvp_side                 : 1; //!< [��-504/506-�208.2] ������������ ��� (0-�����, 1-������)
   uint16_t cursor_type              : 1; //!< [��-504/506-�215.1] ���������� �������� �� ���� (0 - �� ����, 1 - �� ����)
   uint16_t ti_reset                 : 1; //!< [��-504/506-�215.2] ����� �� � ��������� �� ���������
   uint16_t prepare_end_point_number : 8; //!< [��-504/506-�216.1] ����� ��� � �������� �� ��� ��, ����� �������� ���������� ����� �������� ������� ��� //(min:1 max:150)
   uint16_t show_prepare_end_point   : 1; //!< [��-504/506-�216] ���������� ����� �������� ������� ��� �� ���.3
   uint16_t orzp_shifts_type         : 2; //!< [��-504/506-�218] ��� ����������� ���� ������� (0-���, 1-�����, 2-�� ������ ����) //(min:0 max:2)
} bp_50x_aur2_flag_word_2_b_t;

//! �����-������������� ������������ ������ �������� ���������� ��-504/506
typedef struct bp_path_id_b_t {
   uint16_t start_number : 4; //!< ����� ������� �������� � ������� ������������ ������ �������� ���������� //(min:1 max:15 lsb:1)
   uint16_t leg_1_type   : 2; //!< [��-504/506-�124/�125.6] ��� ������� 1 (0-������, 1-���� ������ �������, 2-���� �� �������) //(min:0 max:2)
   uint16_t leg_2_type   : 2; //!< [��-504/506-�124/�125.6] ��� ������� 2 (0-������, 1-���� ������ �������, 2-���� �� �������) //(min:0 max:2)
   uint16_t leg_3_type   : 2; //!< [��-504/506-�124/�125.6] ��� ������� 3 (0-������, 1-���� ������ �������, 2-���� �� �������) //(min:0 max:2)
   uint16_t leg_4_type   : 2; //!< [��-504/506-�124/�125.6] ��� ������� 4 (0-������, 1-���� ������ �������, 2-���� �� �������) //(min:0 max:2)
   uint16_t leg_5_type   : 2; //!< [��-504/506-�124/�125.6] ��� ������� 5 (0-������, 1-���� ������ �������, 2-���� �� �������) //(min:0 max:2)
   uint16_t              : 2; //!< ������
} bp_path_id_b_t;

//! ����� ���������� ��� ��-504/506 (�� ������� 2 ���)
typedef struct mfci_in_suo_50x_osp_init_flag_word_b_t {
   uint16_t osp_outer_points_count : 8; //!< [��-504/506-�117] ���������� ����� ������� ��� //(min:0 max:135)
   uint16_t osp_inner_points_count : 6; //!< [��-504/506-�117.4] ���������� ����� ������ ������ ������ ��� //(min:0 max:45)
   uint16_t                        : 2; //!< ������
} mfci_in_suo_50x_osp_init_flag_word_b_t;

//! ����� 1 ���������� ��� � ������ ������� ��� ��-504/506 (�� ������� 2 ���)
typedef struct bp_50x_osp_units_count_1_b_t {
   uint16_t count_1 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 1 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t count_2 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 2 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t count_3 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 3 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t count_4 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 4 ��������� ������� ����� ������� ��� //(min:0 max:11)
} bp_50x_osp_units_count_1_b_t;

//! ����� 2 ���������� ��� � ������ ������� ��� ��-504/506 (�� ������� 2 ���)
typedef struct bp_50x_osp_units_count_2_b_t {
   uint16_t count_5 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 5 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t count_6 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 6 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t count_7 : 4; //!< [��-504/506-�117.3] ���������� ��� � ����� 7 ��������� ������� ����� ������� ��� //(min:0 max:11)
   uint16_t         : 4; //!< ������
} bp_50x_osp_units_count_2_b_t;

//! ���������� �������������� ����� ��-504/506
typedef struct mfci_bp_coord_b_t {
   uint16_t lat_high; //!< ������, ������� ����� //(min:-324000 max:324000 signed:4 bits:5..19 lsb:0.001")
   uint16_t lat_low;  //!< ������, ������� �����
   uint16_t lon_high; //!< �������, ������� ����� //(min:-648000 max:648000 signed:4 bits:5..19 lsb:0.001")
   uint16_t lon_low;  //!< �������, ������� �����
} mfci_bp_coord_b_t;

//! �������� ��������� ��� ������� ���� ��-504/506
typedef struct mfci_bp_area_b_t {
   uint16_t last_point_number : 9; //!< [��-504/506-�129.2] ����� ��������� ������� ���� (0-���������� ������� ���) //(min:1 max:256)
   uint16_t type              : 1; //!< [��-504/506-�129] ��� ���� (0-���������, 1-�������)
   uint16_t                   : 6; //!< ������
} mfci_bp_area_b_t;

//! ���������� ����� ��� �� ����� ������������� �������� ��-504/506
typedef struct mfci_bp_rvp_point_b_t {
   uint16_t x; //!< ���������� �� ��� x �������� (���, ��� ����������) //(min:-32767 max:32767 signed:4 bits:5..19 lsb:1)
   uint16_t y; //!< ���������� �� ��� y �������� (���, ��� ����������) //(min:-32767 max:32767 signed:4 bits:5..19 lsb:1)
} mfci_bp_rvp_point_b_t;

//! �������� �������� ��� ��-504/506
typedef struct mfci_bp_rvp_polygon_b_t {
   uint16_t last_point_number : 11; //!< [��-504/506-�208.2] ����� ��������� ������� �������� (0-���������� ������� ���������) //(min:1 max:1500)
   uint16_t color             : 4;  //!< [��-504/506-�208.3] ���� �������� (0-������, 1-�������, 3-������, 11-�����, 12-���������) //(min:0 max:12)
   uint16_t                   : 1;  //!< ������
} mfci_bp_rvp_polygon_b_t;

//! ����� 1 �������� ����
typedef struct bcvm_flag_word_1_b_t {
   uint16_t magn_course_selected  : 1; //!< [����-�001] ������ ��������� ����
   uint16_t vnav_active           : 1; //!< [����-�002] ����� ������������ ��������� �����������
   uint16_t true_course_selected  : 1; //!< [����-�003] ������ �������� ����
   uint16_t grid_course_selected  : 1; //!< [����-�004] ������ ������� ����
   uint16_t route                 : 1; //!< [����-�017] ����� �� ��������� ��������
   uint16_t show_orto_coords      : 1; //!< [����-�030] ��������� ����� �������� � ������������� ������� ��������� ������������ ����� ��� ������ (�������)
   uint16_t koi_nav_mode          : 1; //!< [����-�046] ����� ����������� ��������� ���������� (���)
   uint16_t ir_nav_mode           : 1; //!< [����-�047] ������������ ����� ��������� ������������� ���������� (��)
   uint16_t idr_nav_mode          : 1; //!< [����-�048] �����������-������������� ����� ��������� ������������� ���������� (���)
   uint16_t air_nav_mode          : 1; //!< [����-�049] ����������������� ����� ��������� ������������� ���������� (���)
   uint16_t time_msk              : 1; //!< [����-�045] ������� �������� ������� - ����������
   uint16_t time_utc              : 1; //!< [����-�045] ������� �������� ������� - UTC
   uint16_t time_local            : 1; //!< [����-�045] ������� �������� ������� - ������� �������
   uint16_t mfpu_landing_sys_prmg : 1; //!< [����] �� ���� ������� �� ����
   uint16_t mfpu_landing_sys_ils  : 1; //!< [����] �� ���� ������� �� ILS
   uint16_t mfpu_landing_sys_sns  : 1; //!< [����] �� ���� ������� �� ���
} bcvm_flag_word_1_b_t;

//! ����� 2-3 �������� ����
typedef struct bcvm_flag_words_2_3_b_t {
   uint32_t route_number         : 20; //!< [����-�034] ����� �������� //(min:0 max:999999 bits:4..19 lsb:1)
   uint32_t waypoint_time_hour   : 5;  //!< [����-�011] ����� ������� ���������� ���, ��� //(min:0 max:23)
   uint32_t waypoint_time_minute : 6;  //!< [����-�011] ����� ������� ���������� ���, ������ //(min:0 max:59)
   uint32_t                      : 1;  //!< ������
} bcvm_flag_words_2_3_b_t;

//! ����� 4-5 �������� ����
typedef struct bcvm_flag_words_4_5_b_t {
   uint32_t waypoint_time_second : 6; //!< [����-�011] ����� ������� ���������� ���, ������� //(min:0 max:59)
   uint32_t fuel_time_hour       : 5; //!< [����-�026] �����, ���������� �� ������ �������, ��� //(min:0 max:23)
   uint32_t fuel_time_minute     : 6; //!< [����-�026] �����, ���������� �� ������ �������, ������ //(min:0 max:59)
   uint32_t fuel_time_second     : 6; //!< [����-�026] �����, ���������� �� ������ �������, ������� //(min:0 max:59)
   uint32_t waypoint_time_e_hour : 5; //!< [����-�033] ����� ������, ���������� �� ���������� ���, ��� //(min:0 max:23)
   uint32_t                      : 4;  //!< ������
} bcvm_flag_words_4_5_b_t;

//! ����� 6-7 �������� ����
typedef struct bcvm_flag_words_6_7_b_t {
   uint32_t waypoint_time_e_minute : 6; //!< [����-�033] ����� ������, ���������� �� ���������� ���, ������ //(min:0 max:59)
   uint32_t waypoint_time_e_second : 6; //!< [����-�033] ����� ������, ���������� �� ���������� ���, ������� //(min:0 max:59)
   uint32_t current_time_hour      : 5; //!< [����-�036] ������� �����, ��� //(min:0 max:23)
   uint32_t current_time_minute    : 6; //!< [����-�036] ������� �����, ������ //(min:0 max:59)
   uint32_t current_time_second    : 6; //!< [����-�036] ������� �����, ������� //(min:0 max:59)
   uint32_t                        : 3; //!< ������
} bcvm_flag_words_6_7_b_t;

//! ����� �������� � �������������� ���
typedef struct vsu_flag_valid_word_b_t {
   uint16_t oil_pressure_low          : 1; //!< [���-�004] ���������� �������� ����� �� ����� ��
   uint16_t tg_high                   : 1; //!< [���-�005] ���������� ����������� ���� �� �������� ��
   uint16_t n_high                    : 1; //!< [���-�006] ���������� ������� ������ N
   uint16_t shutters_opened           : 1; //!< [���-�011] ������� �������
   uint16_t                           : 4; //!< ������
   uint16_t n_valid                   : 1; //!< �[���-�001] ������������� �������� �������� ������ ���
   uint16_t n_max_2_valid             : 1; //!< �[���-�002] ������������� ����������� �������� �������� ������ ���
   uint16_t n_max_1_valid             : 1; //!< �[���-�003] ������������� ����������� �������� �������� ������ ���
   uint16_t tg_valid                  : 1; //!< �[���-�004] ������������� ����������� ���� �� �������� ���
   uint16_t tg_max_2_valid            : 1; //!< �[���-�005] ������������� ���������� ����������� ���� �� �������� ���
   uint16_t tg_max_1_valid            : 1; //!< �[���-�007] ������������� ���������� ����������� ���� �� �������� ���
   uint16_t oil_temperature_valid     : 1; //!< �[���-�008] ������������� ����������� ����� � ��������� ���
   uint16_t oil_temperature_max_valid : 1; //!< �[���-�009] ������������� ���������� ����������� ����� � ��������� ���
} vsu_flag_valid_word_b_t;

//! ����� �������� ���
typedef struct rls_flag_word_b_t {
   uint16_t rli_type : 2;  //!< ��� ����������������� ����������� (0 - ��� ���, 1 - 10-��������, 2 - 15-��������) //(min:0 max:2)
   uint16_t          : 14; //!< ������
} rls_flag_word_b_t;

//! ����� �������� ���
typedef struct rap_flag_word_b_t {
   uint16_t volume         : 4;  //!< [���-�054] ��������� ��������� �������� ��� "���������" � "�������������" //(min:0 max:11 bits:4..19 lsb:1)
   uint16_t bsv_bu_loading : 1;  //!< ���������� �������� ���������� ����� �� � ��
   uint16_t                : 11; //!< ������
} rap_flag_word_b_t;

//! ����� 1 �������� ��� �� � ������� ������� �����
typedef struct group_flag_word_1_b_t {
   uint16_t callsign                  : 12; //!< [��� ��-�016] �������� ������������ �������� //(min:0 max:999)
   uint16_t callsign_valid            : 1;  //!< �[��� ��-�016] ������� ���������� � �������� ������������ ��������
   uint16_t selected_elevation_valid  : 1;  //!< �[��� ��-�093] ������� ���������� � �������� ���������� dh ����� ����� � �������� ������� ���������
   uint16_t selected_distance_z_valid : 1;  //!< �[��� ��-�094] ������� ���������� � �������� ��������� i ����� ����� � �������� ������� ���������
   uint16_t selected_distance_x_valid : 1;  //!< �[��� ��-�095] ������� ���������� � �������� ��������� d ����� ����� � �������� ������� ���������
} group_flag_word_1_b_t;

//! ����� 2 �������� ��� �� � ������� ������� �����
typedef struct group_flag_word_2_b_t {
   uint16_t position      : 5;  //!< [��� ��] ������� ������������ �������� ����� ������� ����� (0 - �� ��������) //(min:0 max:16)
   uint16_t safe_distance : 11; //!< [��� ��-�062] ���������� ��������� //(min:0 max:500)
} group_flag_word_2_b_t;

//! ����� 3 �������� ��� �� � ������� ������� �����
typedef struct group_flag_word_3_b_t {
   uint16_t safe_distance_valid : 1; //!< �[��� ��-�062] ������� ���������� � ���������� ���������
   uint16_t data_01_valid       : 1; //!< ������� ���������� � �������� 1 ������� �����
   uint16_t data_02_valid       : 1; //!< ������� ���������� � �������� 2 ������� �����
   uint16_t data_03_valid       : 1; //!< ������� ���������� � �������� 3 ������� �����
   uint16_t data_04_valid       : 1; //!< ������� ���������� � �������� 4 ������� �����
   uint16_t data_05_valid       : 1; //!< ������� ���������� � �������� 5 ������� �����
   uint16_t data_06_valid       : 1; //!< ������� ���������� � �������� 6 ������� �����
   uint16_t data_07_valid       : 1; //!< ������� ���������� � �������� 7 ������� �����
   uint16_t data_08_valid       : 1; //!< ������� ���������� � �������� 8 ������� �����
   uint16_t data_09_valid       : 1; //!< ������� ���������� � �������� 9 ������� �����
   uint16_t data_10_valid       : 1; //!< ������� ���������� � �������� 10 ������� �����
   uint16_t data_11_valid       : 1; //!< ������� ���������� � �������� 11 ������� �����
   uint16_t data_12_valid       : 1; //!< ������� ���������� � �������� 12 ������� �����
   uint16_t data_13_valid       : 1; //!< ������� ���������� � �������� 13 ������� �����
   uint16_t data_14_valid       : 1; //!< ������� ���������� � �������� 14 ������� �����
   uint16_t data_15_valid       : 1; //!< ������� ���������� � �������� 15 ������� �����
} group_flag_word_3_b_t;

//! ������ ��������� ������� �����, ���������� � ������� ����������
typedef struct group_aircraft_numbers_b_t {
   uint16_t aircraft_a_number : 4; //!< [��� ��] ����� �������� ������� �����, ���������� � ������� ���������� //(min:1 max:15)
   uint16_t aircraft_b_number : 4; //!< [��� ��] ����� �������� ������� �����, ���������� � ������� ���������� //(min:1 max:15)
   uint16_t aircraft_c_number : 4; //!< [��� ��] ����� �������� ������� �����, ���������� � ������� ���������� //(min:1 max:15)
   uint16_t aircraft_d_number : 4; //!< [��� ��] ����� �������� ������� �����, ���������� � ������� ���������� //(min:1 max:15)
} group_aircraft_numbers_b_t;

//! ����� 1 �������� ��
typedef struct dv_flag_word_1_b_t {
   uint16_t dv1_start_ready_on_land : 1; //!< [��1-�001] ������ �� ����� �����
   uint16_t dv2_start_ready_on_land : 1; //!< [��2-�001] ������ �� ����� �����
   uint16_t dv3_start_ready_on_land : 1; //!< [��3-�001] ������ �� ����� �����
   uint16_t dv4_start_ready_on_land : 1; //!< [��4-�001] ������ �� ����� �����
   uint16_t dv1_start_ready_in_air  : 1; //!< [��1-�002] ������ � ������� �����
   uint16_t dv2_start_ready_in_air  : 1; //!< [��2-�002] ������ � ������� �����
   uint16_t dv3_start_ready_in_air  : 1; //!< [��3-�002] ������ � ������� �����
   uint16_t dv4_start_ready_in_air  : 1; //!< [��4-�002] ������ � ������� �����
   uint16_t dv1_afterburning        : 1; //!< [��1-�003] ������ �������
   uint16_t dv2_afterburning        : 1; //!< [��2-�003] ������ �������
   uint16_t dv3_afterburning        : 1; //!< [��3-�003] ������ �������
   uint16_t dv4_afterburning        : 1; //!< [��4-�003] ������ �������
   uint16_t dv1_wet_start_ready     : 1; //!< [��1-�004] ������ ������ �����
   uint16_t dv2_wet_start_ready     : 1; //!< [��2-�004] ������ ������ �����
   uint16_t dv3_wet_start_ready     : 1; //!< [��3-�004] ������ ������ �����
   uint16_t dv4_wet_start_ready     : 1; //!< [��4-�004] ������ ������ �����
} dv_flag_word_1_b_t;

//! ����� 2 �������� ��
typedef struct dv_flag_word_2_b_t {
   uint16_t dv1_dry_motoring_ready : 1; //!< [��1-�005] �������� ��������� ������
   uint16_t dv2_dry_motoring_ready : 1; //!< [��2-�005] �������� ��������� ������
   uint16_t dv3_dry_motoring_ready : 1; //!< [��3-�005] �������� ��������� ������
   uint16_t dv4_dry_motoring_ready : 1; //!< [��4-�005] �������� ��������� ������
   uint16_t dv1_start_land         : 1; //!< [��1-�009] ������ �� �����
   uint16_t dv2_start_land         : 1; //!< [��2-�009] ������ �� �����
   uint16_t dv3_start_land         : 1; //!< [��3-�009] ������ �� �����
   uint16_t dv4_start_land         : 1; //!< [��4-�009] ������ �� �����
   uint16_t dv1_start_in_air       : 1; //!< [��1-�010] ������ � �������
   uint16_t dv2_start_in_air       : 1; //!< [��2-�010] ������ � �������
   uint16_t dv3_start_in_air       : 1; //!< [��3-�010] ������ � �������
   uint16_t dv4_start_in_air       : 1; //!< [��4-�010] ������ � �������
   uint16_t dv1_dry_motoring       : 1; //!< [��1-�011] �������� ���������
   uint16_t dv2_dry_motoring       : 1; //!< [��2-�011] �������� ���������
   uint16_t dv3_dry_motoring       : 1; //!< [��3-�011] �������� ���������
   uint16_t dv4_dry_motoring       : 1; //!< [��4-�011] �������� ���������
} dv_flag_word_2_b_t;

//! ����� 3 �������� ��
typedef struct dv_flag_word_3_b_t {
   uint16_t dv1_wet_start       : 1; //!< [��1-�012] ������ ������
   uint16_t dv2_wet_start       : 1; //!< [��2-�012] ������ ������
   uint16_t dv3_wet_start       : 1; //!< [��3-�012] ������ ������
   uint16_t dv4_wet_start       : 1; //!< [��4-�012] ������ ������
   uint16_t dv1_emergency_start : 1; //!< [��1-�013] ��������� ������ � �������
   uint16_t dv2_emergency_start : 1; //!< [��2-�013] ��������� ������ � �������
   uint16_t dv3_emergency_start : 1; //!< [��3-�013] ��������� ������ � �������
   uint16_t dv4_emergency_start : 1; //!< [��4-�013] ��������� ������ � �������
   uint16_t dv1_kpp_opened      : 1; //!< [��1-�022] ������� ��������� �� �������
   uint16_t dv2_kpp_opened      : 1; //!< [��2-�022] ������� ��������� �� �������
   uint16_t dv3_kpp_opened      : 1; //!< [��3-�022] ������� ��������� �� �������
   uint16_t dv4_kpp_opened      : 1; //!< [��4-�022] ������� ��������� �� �������
   uint16_t dv1_kpv_not_closed  : 1; //!< [��1-�025] ���������� ��� ��
   uint16_t dv2_kpv_not_closed  : 1; //!< [��2-�025] ���������� ��� ��
   uint16_t dv3_kpv_not_closed  : 1; //!< [��3-�025] ���������� ��� ��
   uint16_t dv4_kpv_not_closed  : 1; //!< [��4-�025] ���������� ��� ��
} dv_flag_word_3_b_t;

//! ����� 4 �������� ��
typedef struct dv_flag_word_4_b_t {
   uint16_t dv1_vna_heating  : 1; //!< [��1-�051] ������� ��� �������
   uint16_t dv2_vna_heating  : 1; //!< [��2-�051] ������� ��� �������
   uint16_t dv3_vna_heating  : 1; //!< [��3-�051] ������� ��� �������
   uint16_t dv4_vna_heating  : 1; //!< [��4-�051] ������� ��� �������
   uint16_t dv1_takeoff_mode : 1; //!< [��1-�059] ����� ������ "�����"
   uint16_t dv2_takeoff_mode : 1; //!< [��2-�059] ����� ������ "�����"
   uint16_t dv3_takeoff_mode : 1; //!< [��3-�059] ����� ������ "�����"
   uint16_t dv4_takeoff_mode : 1; //!< [��4-�059] ����� ������ "�����"
   uint16_t dv1_in_air_mode  : 1; //!< [��1-�060] ����� ������ "�����"
   uint16_t dv2_in_air_mode  : 1; //!< [��2-�060] ����� ������ "�����"
   uint16_t dv3_in_air_mode  : 1; //!< [��3-�060] ����� ������ "�����"
   uint16_t dv4_in_air_mode  : 1; //!< [��4-�060] ����� ������ "�����"
   uint16_t dv1_cooling_on   : 1; //!< [��1-�082] ���������� ��������
   uint16_t dv2_cooling_on   : 1; //!< [��2-�082] ���������� ��������
   uint16_t dv3_cooling_on   : 1; //!< [��3-�082] ���������� ��������
   uint16_t dv4_cooling_on   : 1; //!< [��4-�082] ���������� ��������
} dv_flag_word_4_b_t;

//! ����� �������� ����
typedef struct msrp_flag_word_b_t {
   uint16_t flag_1  : 1;  //!< [����-�001] ������
   uint16_t flag_2  : 1;  //!< [����-�002] ������
   uint16_t flag_3  : 1;  //!< [����-�003] ������
   uint16_t flag_4  : 1;  //!< [����-�004] ������
   uint16_t barring : 1;  //!< [����-�005] ������ ������ ������ (���������� ����������, ���� �� ������ ��� �� � ������ ������������)
   uint16_t         : 11; //!< ������
} msrp_flag_word_b_t;

//! ����� �������� ���
typedef struct pkr_flag_word_b_t {
   uint16_t echelon_far      : 1; //!< [���-�010] ������������ ���������� �� �������
   uint16_t echelon_danger   : 1; //!< [���-�011] ������� ���������� �� �������
   uint16_t altitude_far     : 1; //!< [���-�013] ������������ ���������� �� �������� ������
   uint16_t altitude_control : 1; //!< [���-�014] ������� �������� �� ����������� �� �������/�������� ������
   uint16_t echelon_check    : 1; //!< [���-�015] ������������ �������� ����������� � ��������� ������� ������ 2 �/�
   uint16_t altitude_check   : 1; //!< [���-�016] ������������ �������� ����������� � �������� ������ ������ 2 �/�
   uint16_t mach_high        : 1; //!< [���-�025] ���������� ����������� ����������� ����� ����
   uint16_t                  : 9; //!< ������
} pkr_flag_word_b_t;

//! ����� 1 �������� ���
typedef struct pui_flag_word_1_b_t {
   uint16_t vpr                     : 1; //!< [���-�012] ������� ����� ��������� ���/���
   uint16_t mvs                     : 1; //!< [���-�013] ������� ����� ��������� ���
   uint16_t vpr_selecting           : 1; //!< [���-�017] ������� ����� �������� ���/��� (����� �� ����������� ������� ����)
   uint16_t mvs_selecting           : 1; //!< [���-�018] ������� ����� �������� ��� (����� �� ����������� ������� ����)
   uint16_t baro_type               : 2; //!< [���-�014����-�016] ����� ��������� ������������� ��� ������ ���/����/��� (1-���, 2-QFE, 3-QNH)
   uint16_t baro_type_kpi           : 2; //!< [���-�014����-�016*] ����� ��������� ������������� ��� ����� ��� (1-���, 2-QFE, 3-QNH)
   uint16_t baro_type_kpi_selecting : 2; //!< [���-�019����-�025] ����� �������� ������������� ��� ����� ��� (0-�� �������, 1-���, 2-QFE, 3-QNH)
   uint16_t confirm_pressures       : 1; //!< [���-�026] �������� ������������� ������������ ������������� � ������� ���
   uint16_t enter_pressures         : 1; //!< [���] ������������� �� �������
   uint16_t zero_alt_available      : 1; //!< [���] ����������� �������������� �������� ������� ���������� QFE �� ������ "H=0"
   uint16_t unreserved_pui1         : 1; //!< [���] ���������� ������������� ����� � ���1
   uint16_t unreserved_pui2         : 1; //!< [���] ���������� ������������� ����� � ���2
   uint16_t                         : 1; //!< ������
} pui_flag_word_1_b_t;

//! ����� 2 �������� ���
typedef struct pui_flag_word_2_b_t {
   uint16_t pui1_mfci1        : 1; //!< ����� ��������� ��� 1 � ����� ���� 1
   uint16_t pui1_mfci2        : 1; //!< ����� ��������� ��� 1 � ����� ���� 2
   uint16_t pui1_mfci3        : 1; //!< ����� ��������� ��� 1 � ����� ���� 3
   uint16_t pui1_button_topl  : 1; //!< ������� �� ������ "����" �� ��� 1
   uint16_t pui1_button_upr   : 1; //!< ������� �� ������ "���" �� ��� 1
   uint16_t pui1_button_asu   : 1; //!< ������� �� ������ "���" �� ��� 1
   uint16_t pui1_button_suo   : 1; //!< ������� �� ������ "���" �� ��� 1
   uint16_t pui1_button_plan  : 1; //!< ������� �� ������ "����" �� ��� 1
   uint16_t pui1_button_dvs   : 1; //!< ������� �� ������ "��/�" �� ��� 1
   uint16_t pui1_button_pnp   : 1; //!< ������� �� ������ "���" �� ��� 1
   uint16_t pui1_button_kpi   : 1; //!< ������� �� ������ "���" �� ��� 1
   uint16_t pui1_button_menu  : 1; //!< ������� �� ������ "����" �� ��� 1
   uint16_t pui1_cursor_left  : 1; //!< ���������� ��������� ��� 1 �����
   uint16_t pui1_cursor_right : 1; //!< ���������� ��������� ��� 1 ������
   uint16_t pui1_cursor_up    : 1; //!< ���������� ��������� ��� 1 �����
   uint16_t pui1_cursor_down  : 1; //!< ���������� ��������� ��� 1 ����
} pui_flag_word_2_b_t;

//! ����� 3 �������� ���
typedef struct pui_flag_word_3_b_t {
   uint16_t pui2_mfci3        : 1; //!< ����� ��������� ��� 2 � ����� ���� 3
   uint16_t pui2_mfci4        : 1; //!< ����� ��������� ��� 2 � ����� ���� 4
   uint16_t pui2_mfci5        : 1; //!< ����� ��������� ��� 2 � ����� ���� 5
   uint16_t pui2_button_topl  : 1; //!< ������� �� ������ "����" �� ��� 2
   uint16_t pui2_button_upr   : 1; //!< ������� �� ������ "���" �� ��� 2
   uint16_t pui2_button_asu   : 1; //!< ������� �� ������ "���" �� ��� 2
   uint16_t pui2_button_suo   : 1; //!< ������� �� ������ "���" �� ��� 2
   uint16_t pui2_button_plan  : 1; //!< ������� �� ������ "����" �� ��� 2
   uint16_t pui2_button_dvs   : 1; //!< ������� �� ������ "��/�" �� ��� 2
   uint16_t pui2_button_pnp   : 1; //!< ������� �� ������ "���" �� ��� 2
   uint16_t pui2_button_kpi   : 1; //!< ������� �� ������ "���" �� ��� 2
   uint16_t pui2_button_menu  : 1; //!< ������� �� ������ "����" �� ��� 2
   uint16_t pui2_cursor_left  : 1; //!< ���������� ��������� ��� 2 �����
   uint16_t pui2_cursor_right : 1; //!< ���������� ��������� ��� 2 ������
   uint16_t pui2_cursor_up    : 1; //!< ���������� ��������� ��� 2 �����
   uint16_t pui2_cursor_down  : 1; //!< ���������� ��������� ��� 2 ����
} pui_flag_word_3_b_t;

//! ����� 4 �������� ���
typedef struct pui_flag_word_4_b_t {
   uint16_t pui1_button_choise       : 1;  //!< ������� �� ������ "�����" �� ��� 1
   uint16_t pui2_button_choise       : 1;  //!< ������� �� ������ "�����" �� ��� 2
   uint16_t vpr_warning              : 1;  //!< [���-�002] ���������� ������ �������� �������
   uint16_t danger_altitude_warning  : 1;  //!< [���-�003] ���������� ������� ������
   uint16_t vpr_danger_altitude_flag : 1;  //!< [���1-A001 < ���-A001 + ���2-A001 < ���-A001] ������ �� ������ ��� ������ ������ �������� ������� (������� ������)
   uint16_t                          : 11; //!< ������
} pui_flag_word_4_b_t;

//! ����� �������� ����/VIM/DME
typedef struct rsbn_vim_dme_flag_word_b_t {
   uint16_t rsbn_navigation       : 1; //!< [����-�001] ����� ������ ���� "���������"
   uint16_t rsbn_landing          : 1; //!< [����-�002] ����� ������ ���� "�������"
   uint16_t rsbn_measure          : 1; //!< [����-�003] ����� ������ ���� "�������-���������"
   uint16_t rsbn_transmit         : 1; //!< [����-�004] ����� ������ ���� "�������-������������"
   uint16_t rsbn_measure_transmit : 1; //!< [����-�005] ����� ������ ���� "�������-���������-������������"
   uint16_t vim_dprm              : 1; //!< [VIM-�001] ���� (������ ������� ���������� ����� �������� 400 ��)
   uint16_t vim_sprm              : 1; //!< [VIM-�002] ���� (������ ������� ���������� ����� �������� 1300 ��)
   uint16_t vim_bprm              : 1; //!< [VIM-�003] ���� (������ ������� ���������� ����� �������� 3000 ��)
   uint16_t vim1_ils_mode         : 1; //!< [VIM-�004] ����� ������ ILS/VOR VIM1 (1-ILS, 0-VOR)
   uint16_t vim2_ils_mode         : 1; //!< [VIM-�004] ����� ������ ILS/VOR VIM2 (1-ILS, 0-VOR)
   uint16_t dme1_nm_mode          : 1; //!< [DME] ����� ��������� ��������� � ������� ����� DME1
   uint16_t dme2_nm_mode          : 1; //!< [DME] ����� ��������� ��������� � ������� ����� DME2
   uint16_t                       : 4; //!< ������
} rsbn_vim_dme_flag_word_b_t;

//! ����� 1 �������� ���
typedef struct sau_flag_word_1_b_t {
   uint16_t gnav_active             : 1; //!< [���-�001] ����� "�������������� ���������" ����������� (��� ���)
   uint16_t course_active           : 1; //!< [���-�002] ������� "������������ �����" � ������ "����������� ����������" ����������� (����)
   uint16_t roll_active             : 1; //!< [���-�003] ������� "������������ �����" � ������ "����������� ����������" ����������� (����)
   uint16_t zk_active               : 1; //!< [���-�004] ����� "��" ����������� (��)
   uint16_t zpu_active              : 1; //!< [���-�005] ����� "���" ����������� (���)
   uint16_t stab_course_active      : 1; //!< [���-�006] ������������ �������� ��������� ���� ����������� (���� �)
   uint16_t stab_track_angle_active : 1; //!< [���-�007] ������������ �������� ���� ����������� (���� ��)
   uint16_t course_zone_active      : 1; //!< [���-�008] ������� "���������� �� �������� ����" � ������� "�������� ����" ��� "�������" ����������� (��� ���)
   uint16_t go_around_x_active      : 1; //!< [���-�009] ����� "���� �� 2-�� ����" � ������� ������ ����������� (����)
   uint16_t stab_h_active           : 1; //!< [���-�010] ����� "������������ ������" ����������� (���� �)
   uint16_t path_angle_active       : 1; //!< [���-�011] ������� ������������ ���� ������� ���������� � ������ "����������� ����������" ����������� (���)
   uint16_t h_active                : 1; //!< [���-�012] ����� "����� �� ������ �������" ����������� (��� �)
   uint16_t vy_active               : 1; //!< [���-�013] ����� "Vy" ����������� (� ����)
   uint16_t gliss_active            : 1; //!< [���-�014] ���������� �� �������� � ������ "�������" ����������� (����)
   uint16_t go_around_y_active      : 1; //!< [���-�015] ����� "����" � ������ ������� ����������� (����)
   uint16_t gnav_ready              : 1; //!< [���-�016] ����� "�������������� ���������" ����������� (��� ���)
} sau_flag_word_1_b_t;

//! ����� 2 �������� ���
typedef struct sau_flag_word_2_b_t {
   uint16_t course_zone_ready : 1; //!< [���-�017] ������� "���������� �� �������� ����" � ������� "�������� ����" ��� "�������" ������������ (��� ���)
   uint16_t gliss_ready       : 1; //!< [���-�018] ���������� �� �������� � ������ "�������" ������������ (����)
   uint16_t stab_h_ready      : 1; //!< [���-�019] ����� "������������ ������" ����������� (���� �)
   uint16_t ap_on             : 1; //!< [���-�020] ������� �������������� ����� ���������� (��)
   uint16_t director          : 1; //!< [���-�021] ������� ����������� ����� ���������� (���)
   uint16_t speed_active      : 1; //!< [���-�027] ����� "������������ � ���������� ��������� ���������" ����������� (����)
   uint16_t mach_active       : 1; //!< [���-�028] ����� "������������ � ���������� ������ � ������" ����������� (�)
   uint16_t pitch_active      : 1; //!< [���-�029] ������� "������������ ������� � ������ "����������� ����������" ����������� (����)
   uint16_t fzd_active        : 1; //!< [���-�030] ������� "������ ��������� �� ��������" ����������� (���)
   uint16_t horizon_x_active  : 1; //!< [���-�031] ������� "���������� � ��������� � ������� ������" ����������� (�������)
   uint16_t horizon_y_active  : 1; //!< [���-�032] ������� "���������� � ��������� � ���������� ������" ����������� (�������)
   uint16_t landing_high      : 1; //!< [���-�033] ���������� ����� �� ��������� �������� ������
   uint16_t landing_low       : 1; //!< [���-�034] ���������� ���� �� ��������� �������� ������
   uint16_t landing_right     : 1; //!< [���-�035] ���������� ������ �� ����� ������� ������
   uint16_t landing_left      : 1; //!< [���-�036] ���������� ����� �� ����� ������� ������
   uint16_t stab_t            : 1; //!< [���-�037] ����������� ����� "������������ ����������� ����" (���� �)
} sau_flag_word_2_b_t;

//! ����� 3 �������� ���
typedef struct sau_flag_word_3_b_t {
   uint16_t go_around_active     : 1; //!< [���-�038] ����������� ����� "���� �� ������ ����"
   uint16_t landing_cathegory_1  : 1; //!< [���-�039] ������������ ������������ ����� �� ������� �� ��������� 1 (��� 1)
   uint16_t landing_cathegory_2  : 1; //!< [���-�040] ������������ ������������ ����� �� ������� �� ��������� 2 (��� 2)
   uint16_t at_ready             : 1; //!< [���-�041] ����� ���� ����� � ������ � �������������� ������� (��)
   uint16_t vnav_ready           : 1; //!< [���-�044] ����� "������������ ���������" ����������� (� ���)
   uint16_t vnav_active          : 1; //!< [���-�045] ����� "������������ ���������" ����������� (� ���)
   uint16_t director_right_on    : 1; //!< [���-�046] ������ �������� �������
   uint16_t director_left_on     : 1; //!< [���-�047] ����� �������� �������
   uint16_t show_director_x      : 1; //!< [���-�048] ������������� ����������� ����������� ������ �������� ������
   uint16_t show_director_y      : 1; //!< [���-�049] ������������� ����������� ����������� ������ ����������� ������
   uint16_t course_zone_approach : 1; //!< [���-�050] ����� �� �������� ���� � ������� �����������
   uint16_t gliss_approach       : 1; //!< [���-�051] ����� �� �������� � ������� �����������
   uint16_t at_active            : 1; //!< [���-�052] �� (�������������� ���������� � ������ ���� �����������)
   uint16_t                      : 3; //!< ������
} sau_flag_word_3_b_t;

//! ����� �������� ���
typedef struct svr_flag_word_b_t {
   uint16_t date_entered  : 1; //!< [���-�039] ���� ������ �������
   uint16_t time_entered  : 1; //!< [���-�040] ����� ������ �������
   uint16_t event_entered : 1; //!< [���-�041] ����� ������� ������ ������
   uint16_t test_failed   : 1; //!< [���-�043] true-"�������� ��������. ��� �����", false-"�������� ��������. ��� ��������"
   uint16_t check_date    : 1; //!< [���-�044] ������� ������ ������ (����)
   uint16_t check_time    : 1; //!< [���-�045] ������� ������ ������ (�����/�������)
   uint16_t test_active   : 1; //!< [���] �������� �������
   uint16_t test_passed   : 1; //!< [���] �������� ��������
   uint16_t play_active   : 1; //!< [���] ������� ��������������� ���������� ���������� (����� ��������� ���������� ���������� ������� �� "��� ���������������")
   uint16_t watch_active  : 1; //!< [���] ������� �������� ������� ����������
   uint16_t               : 6; //!< ������
} svr_flag_word_b_t;

//! ����� 1 �������� ���/����/��/���
typedef struct skv_gs_flag_word_1_b_t {
   uint16_t kisl_pressure_l_valid        : 1; //!< �[����-�001] ������������� �������� ��������� ����� ����
   uint16_t kisl_pressure_r_valid        : 1; //!< �[����-�002] ������������� �������� ��������� ������ ����
   uint16_t skv_temperature_pilots_valid : 1; //!< �[���-�001] ������������� ����������� � ������ �������
   uint16_t skv_temperature_pgo_valid    : 1; //!< �[���-�002] ������������� ����������� � �������� �������� ������
   uint16_t skv_temperature_zgo_valid    : 1; //!< �[���-�003] ������������� ����������� � ������ �������� ������
   uint16_t skv_temperature_zto_valid    : 1; //!< �[���-�004] ������������� ����������� � ������ ����������� ������
   uint16_t skv_dv1_air_bleed_closed     : 1; //!< [���-�001] ����� �� ��������� 1 ������
   uint16_t skv_dv2_air_bleed_closed     : 1; //!< [���-�002] ����� �� ��������� 2 ������
   uint16_t skv_dv3_air_bleed_closed     : 1; //!< [���-�003] ����� �� ��������� 3 ������
   uint16_t skv_dv4_air_bleed_closed     : 1; //!< [���-�004] ����� �� ��������� 4 ������
   uint16_t skv_air_crossfeed_opened_l   : 1; //!< [���-�006] �������� ����������� ������� ������� �����
   uint16_t skv_air_crossfeed_opened_r   : 1; //!< [���-�007] �������� ����������� ������� ������� ������
   uint16_t skv_line1_off                : 1; //!< [���-�008] ���������� 1 (�����) ���������
   uint16_t skv_line2_off                : 1; //!< [���-�009] ���������� 2 (������) ���������
   uint16_t skv_line_crossfeed_opened_l  : 1; //!< [���-�010] �������� ����������� ����������� 1, 2 ������� �����
   uint16_t skv_line_crossfeed_opened_r  : 1; //!< [���-�011] �������� ����������� ����������� 1, 2 ������� ������
} skv_gs_flag_word_1_b_t;

//! ����� 2 �������� ���/����/��/���
typedef struct skv_gs_flag_word_2_b_t {
   uint16_t skv_thu1_off                 : 1; //!< [���-�012] ���������������� ��������� ���1 ���������
   uint16_t skv_thu2_off                 : 1; //!< [���-�013] ���������������� ��������� ���2 ���������
   uint16_t skv_thu3_off                 : 1; //!< [���-�014] ���������������� ��������� ���3 ���������
   uint16_t skv_thu4_off                 : 1; //!< [���-�015] ���������������� ��������� ���4 ���������
   uint16_t skv_zsa_on                   : 1; //!< [���-�016] ��� ��� ��������
   uint16_t skv_nto_thu2_cooling_closed  : 1; //!< [���-�017] �������� ������ ������� � ��� �� ���2 �������
   uint16_t skv_nto_thu1_cooling_closed  : 1; //!< [���-�018] �������� ������ ������� � ��� �� ���1 �������
   uint16_t skv_thu34_crossfeed_opened   : 1; //!< [���-�019] �������� ����� ����������� ���3 � ���4 �������
   uint16_t skv_vsu_heating_closed       : 1; //!< [���-�020] �������� �������� ������ ��� �������
   uint16_t skv_zsa_failure              : 1; //!< [���-�034] ����� ��� ���
   uint16_t skv_temperature_pilots_undef : 1; //!< [���-�091] ����������� � ������ �������, ��� ������
   uint16_t skv_temperature_pgo_undef    : 1; //!< [���-�092] ����������� � �������� �������� ������, ��� ������
   uint16_t skv_temperature_zgo_undef    : 1; //!< [���-�093] ����������� � ������ �������� ������, ��� ������
   uint16_t skv_temperature_zto_undef    : 1; //!< [���-�094] ����������� � ������ ����������� ������, ��� ������
   uint16_t skv_dv1_air_bleed_failure    : 1; //!< [���-�102] ����� ���������� ������ �� ��������� 1
   uint16_t skv_dv2_air_bleed_failure    : 1; //!< [���-�103] ����� ���������� ������ �� ��������� 2
} skv_gs_flag_word_2_b_t;

//! ����� 3 �������� ���/����/��/���
typedef struct skv_gs_flag_word_3_b_t {
   uint16_t skv_dv3_air_bleed_failure         : 1; //!< [���-�118] ����� ���������� ������ �� ��������� 3
   uint16_t skv_dv4_air_bleed_failure         : 1; //!< [���-�119] ����� ���������� ������ �� ��������� 4
   uint16_t                                   : 1; //!< ������
   uint16_t skv_test                          : 1; //!< [���-�302] ����� "�������� ����������� ��������"
   uint16_t skv_zsa_cooling_undef             : 1; //!< [���-�308] ��� ������ ���������� ������� ������� � ��� ��
   uint16_t skv_nto_thu2_cooling_undef        : 1; //!< [���-�309] ��� ������ ���������� ������� ������� � ��� �� ���2
   uint16_t skv_pto_cooling_undef             : 1; //!< [���-�310] ��� ������ ���������� ������� ������� � ���
   uint16_t skv_temperature_ctrl_zgo_undef    : 1; //!< [���-�311] ��� ������ ������������� ����������� � ���
   uint16_t skv_zto_thu_crossfeed_undef       : 1; //!< [���-�312] ��� ������ ����������� ����������� � ��� � �������� ����������� ���
   uint16_t skv_sto_zgo_cooling_undef         : 1; //!< [���-�313] ��� ������ ���������� ������� ������� � ��� ���
   uint16_t skv_temperature_ctrl_pgo_undef    : 1; //!< [���-�314] ��� ������ ������������� ����������� � ���
   uint16_t skv_sto_thu_crossfeed_undef       : 1; //!< [���-�315] ��� ������ �������� ����������� ��� ���
   uint16_t skv_sto_pgo_cooling_undef         : 1; //!< [���-�316] ��� ������ ���������� ������� ������� � ��� ���
   uint16_t skv_temperature_ctrl_pilots_undef : 1; //!< [���-�317] ��� ������ ������������� ����������� � ������ �������
   uint16_t skv_nto_thu1_cooling_undef        : 1; //!< [���-�318] ��� ������ ���������� ������� ������� � ��� �� ���1
   uint16_t skv_pilots_cooling_undef          : 1; //!< [���-�319] ��� ������ ���������� ������� ������� � ������ �������
} skv_gs_flag_word_3_b_t;

//! ����� 4 �������� ���/����/��/���
typedef struct skv_gs_flag_word_4_b_t {
   uint16_t skv_rid4_line_crossfeed_undef  : 1; //!< [���-�320] ��� ������ ���������� ���4 � ��������� ����� ����������� ����������� 1 � 2
   uint16_t skv_air_crossfeed_undef        : 1; //!< [���-�321] ��� ������ �������� ������ �������� ����������� ������� � �������� �������� ������
   uint16_t skv_line2_rid3_cooling_undef   : 1; //!< [���-�322] ��� ������ ���������� ������� � ���������� 2 � ���3
   uint16_t skv_rid2_tvt12_crossfeed_undef : 1; //!< [���-�323] ��� ������ ���������� ���2 � ���������� ����� ����������� ���1 � ���2
   uint16_t skv_vsu_cooling_undef          : 1; //!< [���-�324] ��� ������ ���������� ������� � ����� ��� � ����� ��������� ����������� �������
   uint16_t skv_line1_rid1_cooling_undef   : 1; //!< [���-�325] ��� ������ ���������� ������� � ���������� 1 � ���1
   uint16_t skv_temperature_ctrl_pgo_on    : 1; //!< [���-�326] ������������� � ��� ��������
   uint16_t skv_temperature_ctrl_zgo_on    : 1; //!< [���-�327] ������������� � ��� ��������
   uint16_t mpu1_cooling_closed            : 1; //!< [���-�101] �������� ���������� ���1 �������
   uint16_t mpu1_unit_flag                 : 1; //!< [���-�102] ������� ����� �� ���1
   uint16_t mpu2_cooling_closed            : 1; //!< [���-�103] �������� ���������� ���2 �������
   uint16_t mpu2_unit_flag                 : 1; //!< [���-�104] ������� ����� �� ���2
   uint16_t mpu_bukv1_failure              : 1; //!< [���-�105] ����� ����-1 � 1
   uint16_t mpu_bukv2_failure              : 1; //!< [���-�106] ����� ����-1 � 2
   uint16_t gs_pressure_1_valid            : 1; //!< �[��-�001] ������������� �������� � ��1
   uint16_t gs_pressure_2_valid            : 1; //!< �[��-�002] ������������� �������� � ��2
} skv_gs_flag_word_4_b_t;

//! ����� 5 �������� ���/����/��/���
typedef struct skv_gs_flag_word_5_b_t {
   uint16_t gs_pressure_3_valid        : 1; //!< �[��-�003] ������������� �������� � ��3
   uint16_t gs_pressure_4_valid        : 1; //!< �[��-�004] ������������� �������� � ��4
   uint16_t gs_pressure_acc_1_valid    : 1; //!< �[��-�005] ������������� �������� ����������������� ��1
   uint16_t gs_pressure_acc_2_valid    : 1; //!< �[��-�006] ������������� �������� ����������������� ��2
   uint16_t gs_pressure_acc_3_valid    : 1; //!< �[��-�007] ������������� �������� ����������������� ��3
   uint16_t gs_pressure_acc_4_valid    : 1; //!< �[��-�008] ������������� �������� ����������������� ��4
   uint16_t gs_oil_level_1_valid       : 1; //!< �[��-�009] ������������� ������� ������� �������� � ���� ��1
   uint16_t gs_oil_level_2_valid       : 1; //!< �[��-�010] ������������� ������� ������� �������� � ���� ��2
   uint16_t gs_oil_level_3_valid       : 1; //!< �[��-�011] ������������� ������� ������� �������� � ���� ��3
   uint16_t gs_oil_level_4_valid       : 1; //!< �[��-�012] ������������� ������� ������� �������� � ���� ��4
   uint16_t gs_oil_temperature_1_valid : 1; //!< �[��-�013] ������������� ����������� ������� �������� � ���� ��1
   uint16_t gs_oil_temperature_2_valid : 1; //!< �[��-�015] ������������� ����������� ������� �������� � ���� ��2
   uint16_t gs_oil_temperature_3_valid : 1; //!< �[��-�017] ������������� ����������� ������� �������� � ���� ��3
   uint16_t gs_oil_temperature_4_valid : 1; //!< �[��-�019] ������������� ����������� ������� �������� � ���� ��4
   uint16_t gs_pressure_bulb_1_valid   : 1; //!< �[��-�021] ������������� �������� � ������� ������� � 1
   uint16_t gs_pressure_bulb_2_valid   : 1; //!< �[��-�022] ������������� �������� � ������� ������� � 2
} skv_gs_flag_word_5_b_t;

//! ����� 6 �������� ���/����/��/���
typedef struct skv_gs_flag_word_6_b_t {
   uint16_t gs_pressure_insuff_1_valid : 1; //!< �[��-�023] ������������� �������� ������� � ���� ��1
   uint16_t gs_pressure_insuff_2_valid : 1; //!< �[��-�024] ������������� �������� ������� � ���� ��2
   uint16_t gs_pressure_insuff_3_valid : 1; //!< �[��-�025] ������������� �������� ������� � ���� ��3
   uint16_t gs_pressure_insuff_4_valid : 1; //!< �[��-�026] ������������� �������� ������� � ���� ��4
   uint16_t gs_pressure_1_130          : 1; //!< [��-�001] �������� � ��1 ���� (������ 130 ���/��.��)
   uint16_t gs_pressure_2_130          : 1; //!< [��-�002] �������� � ��2 ���� (������ 130 ���/��.��)
   uint16_t gs_pressure_3_130          : 1; //!< [��-�003] �������� � ��3 ���� (������ 130 ���/��.��)
   uint16_t gs_pressure_4_130          : 1; //!< [��-�004] �������� � ��4 ���� (������ 130 ���/��.��)
   uint16_t gs_oil_level_1_min         : 1; //!< [��-�005] ����������� ������� �������� � ���� ��1
   uint16_t gs_oil_level_2_min         : 1; //!< [��-�006] ����������� ������� �������� � ���� ��2
   uint16_t gs_oil_level_3_min         : 1; //!< [��-�007] ����������� ������� �������� � ���� ��3
   uint16_t gs_oil_level_4_min         : 1; //!< [��-�008] ����������� ������� �������� � ���� ��4
   uint16_t gs_tnuk_1_active           : 1; //!< [��-�009] ���� ��1 ��������
   uint16_t gs_tnuk_2_active           : 1; //!< [��-�010] ���� ��2 ��������
   uint16_t gs_tnuk_3_active           : 1; //!< [��-�011] ���� ��3 ��������
   uint16_t gs_tnuk_4_active           : 1; //!< [��-�012] ���� ��4 ��������
} skv_gs_flag_word_6_b_t;

//! ����� 7 �������� ���/����/��/���
typedef struct skv_gs_flag_word_7_b_t {
   uint16_t gs_pump_1_not_active : 1; //!< [��-�017] ����� �1 �� ��������
   uint16_t gs_pump_2_not_active : 1; //!< [��-�018] ����� �2 �� ��������
   uint16_t gs_pump_3_not_active : 1; //!< [��-�019] ����� �3 �� ��������
   uint16_t gs_pump_4_not_active : 1; //!< [��-�020] ����� �4 �� ��������
   uint16_t gs_pump_5_not_active : 1; //!< [��-�021] ����� �5 �� ��������
   uint16_t gs_pump_6_not_active : 1; //!< [��-�022] ����� �6 �� ��������
   uint16_t gs_pump_7_not_active : 1; //!< [��-�023] ����� �7 �� ��������
   uint16_t gs_pump_8_not_active : 1; //!< [��-�024] ����� �8 �� ��������
   uint16_t gs_pump_1_off        : 1; //!< [��-�025] ����� �1 ��������
   uint16_t gs_pump_2_off        : 1; //!< [��-�026] ����� �2 ��������
   uint16_t gs_pump_3_off        : 1; //!< [��-�027] ����� �3 ��������
   uint16_t gs_pump_4_off        : 1; //!< [��-�028] ����� �4 ��������
   uint16_t gs_pump_5_off        : 1; //!< [��-�029] ����� �5 ��������
   uint16_t gs_pump_6_off        : 1; //!< [��-�030] ����� �6 ��������
   uint16_t gs_pump_7_off        : 1; //!< [��-�031] ����� �7 ��������
   uint16_t gs_pump_8_off        : 1; //!< [��-�032] ����� �8 ��������
} skv_gs_flag_word_7_b_t;

//! ����� 1 �������� ���/����
typedef struct smk_supk_flag_word_1_b_t {
   uint16_t flap_fail            : 1; //!< [���-�001] ����� ���������
   uint16_t slat_fail            : 1; //!< [���-�002] ����� �����������
   uint16_t flap_jam             : 1; //!< [���-�003] ������������ ����������� ���������
   uint16_t slat_jam             : 1; //!< [���-�004] ������������ ����������� �����������
   uint16_t flap_corr_fail       : 1; //!< [���-�005] ����� ��������� ���������
   uint16_t flap_slat_track      : 1; //!< [���-�006] �������� ����� ���������-�����������
   uint16_t flap_slat_track_fail : 1; //!< [���-�007] ����� ��������� ������ ���������-�����������
   uint16_t flap_slat_reserve    : 1; //!< [���-�008] ��������� ����� ���������-�����������
   uint16_t flap_async           : 1; //!< [���-�009] ���������������� ���������
   uint16_t slat_async           : 1; //!< [���-�010] ���������������� �����������
   uint16_t flap_increase_active : 1; //!< [���-�011] ������ ���������
   uint16_t flap_decrease_active : 1; //!< [���-�012] ������ ���������
   uint16_t slat_increase_active : 1; //!< [���-�013] ������ �����������
   uint16_t slat_decrease_active : 1; //!< [���-�014] ������ �����������
   uint16_t flap_not_ready       : 1; //!< [���-�015] �������� �� �� �������� ���������
   uint16_t wing_fail            : 1; //!< [���-�016] ����� ���������� ��������� �����
} smk_supk_flag_word_1_b_t;

//! ����� 2 �������� ���/����
typedef struct smk_supk_flag_word_2_b_t {
   uint16_t wing_track_fail      : 1; //!< [���-�017] ����� ��������� ������ �����
   uint16_t wing_jam             : 1; //!< [���-�018] ������������ ����������� �������� �����
   uint16_t wing_reserve         : 1; //!< [���-�019] ��������� ����� �����
   uint16_t wing_async           : 1; //!< [���-�020] ���������������� �������� �����
   uint16_t wing_increase_active : 1; //!< [���-�021] ������ �������� �����
   uint16_t wing_decrease_active : 1; //!< [���-�022] ������ �������� �����
   uint16_t flag_23              : 1; //!< [���-�023] ������
   uint16_t flap_l_slow          : 1; //!< [���-�024] ������������ ������� ����� ���������
   uint16_t flap_r_slow          : 1; //!< [���-�025] ������������ ������� ������ ���������
   uint16_t spk_failure          : 1; //!< [���] ��� ���������� �� ���
   uint16_t spmk_failure         : 1; //!< [���] ��� ���������� �� ����
   uint16_t steering_valid       : 1; //!< [����-�001/����-�002] ������� ����� (����� 1/2), �����������
   uint16_t taxing               : 1; //!< [����-�003/����-�004] ������ ������� (����� 1/2)
   uint16_t supk_failure         : 1; //!< [��-�001/��-�002] ���������� ���������� �� ������ 1/2 ���� (����� ���������, ��� ����� ��� ������ �����)
   uint16_t                      : 2; //!< ������
} smk_supk_flag_word_2_b_t;

//! ����� 1 �������� ���
typedef struct sas_flag_word_1_b_t {
   uint16_t u115_gen1_on               : 1; //!< [���-�205] ���� 115�: ��������� 1 �������
   uint16_t u115_gen2_on               : 1; //!< [���-�206] ���� 115�: ��������� 2 �������
   uint16_t u115_gen3_on               : 1; //!< [���-�207] ���� 115�: ��������� 3 �������
   uint16_t u115_gen4_on               : 1; //!< [���-�208] ���� 115�: ��������� 4 �������
   uint16_t u115_vsu_active            : 1; //!< [���-�213] ���� 115�: ��������� ��� ��������
   uint16_t u115_brzu_gen1_failure     : 1; //!< [���-�214] ���� 115�: ������������� ���� ���������� 1
   uint16_t u115_brzu_gen2_failure     : 1; //!< [���-�215] ���� 115�: ������������� ���� ���������� 2
   uint16_t u115_brzu_gen3_failure     : 1; //!< [���-�216] ���� 115�: ������������� ���� ���������� 3
   uint16_t u115_brzu_gen4_failure     : 1; //!< [���-�217] ���� 115�: ������������� ���� ���������� 4
   uint16_t u115_brzu_vsu_failure      : 1; //!< [���-�218] ���� 115�: ������������� ���� ���������� ���
   uint16_t u115_ppo_gen1_failure      : 1; //!< [��і�219] ���� 115�: ������������� ��� ���������� 1
   uint16_t u115_ppo_gen2_failure      : 1; //!< [��і�220] ���� 115�: ������������� ��� ���������� 2
   uint16_t u115_ppo_gen3_failure      : 1; //!< [��і�221] ���� 115�: ������������� ��� ���������� 3
   uint16_t u115_ppo_gen4_failure      : 1; //!< [��і�222] ���� 115�: ������������� ��� ���������� 4
   uint16_t u115_ppo_gen1_low_pressure : 1; //!< [��і�227] ���� 115�: ��� ���������� 1 (� ����) �������
   uint16_t u115_ppo_gen2_low_pressure : 1; //!< [��і�228] ���� 115�: ��� ���������� 2 (� ����) �������
} sas_flag_word_1_b_t;

//! ����� 2 �������� ���
typedef struct sas_flag_word_2_b_t {
   uint16_t u115_ppo_gen3_low_pressure : 1; //!< [��і�229] ���� 115�: ��� ���������� 3 (� ����) �������
   uint16_t u115_ppo_gen4_low_pressure : 1; //!< [��і�230] ���� 115�: ��� ���������� 4 (� ����) �������
   uint16_t u115_rap_on                : 1; //!< [���-�234] ���� 115�: ��� �������
   uint16_t u115_vsu_on                : 1; //!< [���-�235] ���� 115�: ��������� ��� �������
   uint16_t u115_conv1_on              : 1; //!< [���-�236] ���� 115�: ��������������� 1 �������
   uint16_t u115_conv3_on              : 1; //!< [���-�238] ���� 115�: ��������������� 3 �������
   uint16_t u115_conv1_connected       : 1; //!< [���-�239] ���� 115�: ��������������� 1 ��������� � ���� ��������������� 1
   uint16_t u115_conv3_connected_l     : 1; //!< [���-�241] ���� 115�: ��������������� 3 ��������� � ���� ��������������� 3 �����
   uint16_t u115_conv3_connected_r     : 1; //!< [���-�242] ���� 115�: ��������������� 3 ��������� � ���� ��������������� 3 ������
   uint16_t u115_emrg_connected_l      : 1; //!< [���-�243] ���� 115�: ��������� ����� ���� ����������
   uint16_t u115_emrg_connected_r      : 1; //!< [���-�244] ���� 115�: ��������� ������ ���� ����������
   uint16_t u115_gen1_turned_off       : 1; //!< [���-�001] ���� 115�: ����������� ������� ���������� ���������� 1 ��� ��� ������
   uint16_t u115_gen2_turned_off       : 1; //!< [���-�002] ���� 115�: ����������� ������� ���������� ���������� 2 ��� ��� ������
   uint16_t u115_gen3_turned_off       : 1; //!< [���-�003] ���� 115�: ����������� ������� ���������� ���������� 3 ��� ��� ������
   uint16_t u115_gen4_turned_off       : 1; //!< [���-�004] ���� 115�: ����������� ������� ���������� ���������� 4 ��� ��� ������
   uint16_t u115_vsu_turned_off        : 1; //!< [���-�005] ���� 115�: ����������� ������� ���������� ���������� ��� ��� ��� ������
} sas_flag_word_2_b_t;

//! ����� 3 �������� ���
typedef struct sas_flag_word_3_b_t {
   uint16_t u27_gen1_on         : 1; //!< [���-�305] ���� 27�: ��������� 1 �������
   uint16_t u27_gen2_on         : 1; //!< [���-�306] ���� 27�: ��������� 2 �������
   uint16_t u27_gen3_on         : 1; //!< [���-�307] ���� 27�: ��������� 3 �������
   uint16_t u27_gen4_on         : 1; //!< [���-�308] ���� 27�: ��������� 4 �������
   uint16_t u27_turn_off_gen1   : 1; //!< [���-�313] ���� 27�: ��������� 1 �������
   uint16_t u27_turn_off_gen2   : 1; //!< [���-�314] ���� 27�: ��������� 2 �������
   uint16_t u27_turn_off_gen3   : 1; //!< [���-�315] ���� 27�: ��������� 3 �������
   uint16_t u27_turn_off_gen4   : 1; //!< [���-�316] ���� 27�: ��������� 4 �������
   uint16_t u27_batt1_overheat  : 1; //!< [���-�317] ���� 27�: ������������ 1 ��������
   uint16_t u27_batt2_overheat  : 1; //!< [���-�318] ���� 27�: ������������ 2 ��������
   uint16_t u27_batt1_on        : 1; //!< [���-�319] ���� 27�: ����������� 1 �������
   uint16_t u27_batt2_on        : 1; //!< [���-�320] ���� 27�: ����������� 2 �������
   uint16_t u27_rap1_on         : 1; //!< [���-�326] ���� 27�: ���1 �������
   uint16_t u27_rap2_on         : 1; //!< [���-�327] ���� 27�: ���2 �������
   uint16_t u27_vsu_on          : 1; //!< [���-�328] ���� 27�: ��������� ��� �������
   uint16_t u27_vsu_active      : 1; //!< [���-�329] ���� 27�: ��������� ��� ��������
} sas_flag_word_3_b_t;

//! ����� 4 �������� ���
typedef struct sas_flag_word_4_b_t {
   uint16_t u27_main1_connected    : 1; //!< [���-�330] ���� 27�: �������� ���� 1 ����������
   uint16_t u27_main2_connected    : 1; //!< [���-�331] ���� 27�: �������� ���� 2 ����������
   uint16_t u27_emrg_connected     : 1; //!< [���-�332] ���� 27�: ��������� ���� ����������
   uint16_t u27_onoff1_connected_l : 1; //!< [���-�333] ���� 27�: ����������� ���� 1 ������ ����� ����������
   uint16_t u27_onoff2_connected_l : 1; //!< [���-�334] ���� 27�: ����������� ���� 2 ������ ����� ����������
   uint16_t u27_onoff1_connected_r : 1; //!< [���-�335] ���� 27�: ����������� ���� 1 ������� ����� ����������
   uint16_t u27_onoff2_connected_r : 1; //!< [���-�336] ���� 27�: ����������� ���� 2 ������� ����� ����������
   uint16_t u27_bus_disconnected   : 1; //!< [���-�337] ���� 27�: �������� � ��������� ���� ����� � ������ ���� ���������
   uint16_t u27_ground_mode        : 1; //!< [���-�346] ���� 27�: ����� "�����"
   uint16_t                        : 7; //!< ������
} sas_flag_word_4_b_t;

//! ����� 1 �������� ����
typedef struct torm_flag_word_1_b_t {
   uint16_t flag_401              : 1; //!< [����-�401] ������
   uint16_t brakes_pair_failure   : 1; //!< [����-�402] ���� ���� �������� ����� ��� ���������� �������� ��������
   uint16_t brakes_on             : 1; //!< [����-�403] ������� �������� ��������
   uint16_t brakes_start_on       : 1; //!< [����-�404] ��������� ������ �������
   uint16_t brakes_slight_off     : 1; //!< [����-�405] �������������� ���������� �����, ���������� �������� ������� �� ��������
   uint16_t brakes_slight_on      : 1; //!< [����-�406] �������������� ���������� �����, �������� �������
   uint16_t brakes_low_off        : 1; //!< [����-�407] �������������� ���������� �����, ���������� �������� ������� �� ��������
   uint16_t brakes_low_on         : 1; //!< [����-�408] �������������� ���������� �����, �������� �������
   uint16_t brakes_normal_off     : 1; //!< [����-�409] �������������� ���������� ����, ���������� �������� ������� �� ��������
   uint16_t brakes_normal_on      : 1; //!< [����-�410] �������������� ���������� ����, �������� �������
   uint16_t brakes_auto_off       : 1; //!< [����-�411] �������������� ���������� ��������� �� �������� �������
   uint16_t forcing_ready         : 1; //!< [����-�418] ���������� � ��������� �������������� ����������, �������� �������
   uint16_t forcing_on            : 1; //!< [����-�419] ������������� ���������� ��������, �������� �������
   uint16_t main_brakes_failure_2 : 1; //!< [����-�420] ����� �������� ������� �������� (����� ����������)
   uint16_t                       : 2; //!< ������
} torm_flag_word_1_b_t;

//! ����� 2 �������� ����
typedef struct torm_flag_word_2_b_t {
   uint16_t flag_601            : 1; //!< [����-�601] ������
   uint16_t brakes_pair_failure : 1; //!< [����-�602] ���� ���� �������� ����� ��� ���������� ��������� ��������
   uint16_t flag_603            : 1; //!< [����-�603] ������
   uint16_t parking_on          : 1; //!< [����-�604] ���������� ������ �������
   uint16_t brakes_slight_off   : 1; //!< [����-�605] �������������� ���������� �����, ���������� ��������� ������� �� ��������
   uint16_t brakes_slight_on    : 1; //!< [����-�606] �������������� ���������� �����, ��������� �������
   uint16_t brakes_low_off      : 1; //!< [����-�607] �������������� ���������� �����, ���������� ��������� ������� �� ��������
   uint16_t brakes_low_on       : 1; //!< [����-�608] �������������� ���������� �����, ��������� �������
   uint16_t brakes_normal_off   : 1; //!< [����-�609] �������������� ���������� ����, ���������� ��������� ������� �� ��������
   uint16_t brakes_normal_on    : 1; //!< [����-�610] �������������� ���������� ����, ��������� �������
   uint16_t brakes_auto_off     : 1; //!< [����-�611] �������������� ���������� ��������� �� ��������� �������
   uint16_t forcing_ready       : 1; //!< [����-�618] ���������� � ��������� �������������� ����������, ��������� �������
   uint16_t forcing_on          : 1; //!< [����-�619] ������������� ���������� ��������, ��������� �������
   uint16_t                     : 3; //!< ������
} torm_flag_word_2_b_t;

//! ����� 1 �������� ����
typedef struct topl_flag_word_1_b_t {
   uint16_t valve_b1l_opened         : 1; //!< [����-�008] �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_closed         : 1; //!< [����-�009] �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_fail_open      : 1; //!< [����-�010] ������ �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_fail_close     : 1; //!< [����-�011] ������ �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_fail_vis_open  : 1; //!< [����-�012] ������ ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_fail_vis_close : 1; //!< [����-�013] ������ ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_not_vis_open   : 1; //!< [����-�014] ����� ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1l_not_vis_close  : 1; //!< [����-�015] ����� ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_opened         : 1; //!< [����-�016] �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_closed         : 1; //!< [����-�017] �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_fail_open      : 1; //!< [����-�018] ������ �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_fail_close     : 1; //!< [����-�019] ������ �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_fail_vis_open  : 1; //!< [����-�020] ������ ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_fail_vis_close : 1; //!< [����-�021] ������ ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_not_vis_open   : 1; //!< [����-�022] ����� ��������� �������� ������������ ����� ���� �1�
   uint16_t valve_b1r_not_vis_close  : 1; //!< [����-�023] ����� ��������� �������� ������������ ����� ���� �1�
} topl_flag_word_1_b_t;

//! ����� 2 �������� ����
typedef struct topl_flag_word_2_b_t {
   uint16_t valve_b2l_opened         : 1; //!< [����-�024] �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_closed         : 1; //!< [����-�025] �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_fail_open      : 1; //!< [����-�026] ������ �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_fail_close     : 1; //!< [����-�027] ������ �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_fail_vis_open  : 1; //!< [����-�028] ������ ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_fail_vis_close : 1; //!< [����-�029] ������ ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_not_vis_open   : 1; //!< [����-�030] ����� ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2l_not_vis_close  : 1; //!< [����-�031] ����� ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_opened         : 1; //!< [����-�032] �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_closed         : 1; //!< [����-�033] �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_fail_open      : 1; //!< [����-�034] ������ �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_fail_close     : 1; //!< [����-�035] ������ �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_fail_vis_open  : 1; //!< [����-�036] ������ ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_fail_vis_close : 1; //!< [����-�037] ������ ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_not_vis_open   : 1; //!< [����-�038] ����� ��������� �������� ������������ ����� ���� �2�
   uint16_t valve_b2r_not_vis_close  : 1; //!< [����-�039] ����� ��������� �������� ������������ ����� ���� �2�
} topl_flag_word_2_b_t;

//! ����� 3 �������� ����
typedef struct topl_flag_word_3_b_t {
   uint16_t valve_b3l_opened         : 1; //!< [����-�040] �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_closed         : 1; //!< [����-�041] �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_fail_open      : 1; //!< [����-�042] ������ �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_fail_close     : 1; //!< [����-�043] ������ �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_fail_vis_open  : 1; //!< [����-�044] ������ ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_fail_vis_close : 1; //!< [����-�045] ������ ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_not_vis_open   : 1; //!< [����-�046] ����� ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3l_not_vis_close  : 1; //!< [����-�047] ����� ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_opened         : 1; //!< [����-�048] �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_closed         : 1; //!< [����-�049] �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_fail_open      : 1; //!< [����-�050] ������ �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_fail_close     : 1; //!< [����-�051] ������ �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_fail_vis_open  : 1; //!< [����-�052] ������ ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_fail_vis_close : 1; //!< [����-�053] ������ ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_not_vis_open   : 1; //!< [����-�054] ����� ��������� �������� ������������ ����� ���� �3�
   uint16_t valve_b3r_not_vis_close  : 1; //!< [����-�055] ����� ��������� �������� ������������ ����� ���� �3�
} topl_flag_word_3_b_t;

//! ����� 4 �������� ����
typedef struct topl_flag_word_4_b_t {
   uint16_t valve_b4l_opened         : 1; //!< [����-�056] �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_closed         : 1; //!< [����-�057] �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_fail_open      : 1; //!< [����-�058] ������ �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_fail_close     : 1; //!< [����-�059] ������ �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_fail_vis_open  : 1; //!< [����-�060] ������ ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_fail_vis_close : 1; //!< [����-�061] ������ ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_not_vis_open   : 1; //!< [����-�062] ����� ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4l_not_vis_close  : 1; //!< [����-�063] ����� ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_opened         : 1; //!< [����-�064] �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_closed         : 1; //!< [����-�065] �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_fail_open      : 1; //!< [����-�066] ������ �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_fail_close     : 1; //!< [����-�067] ������ �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_fail_vis_open  : 1; //!< [����-�068] ������ ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_fail_vis_close : 1; //!< [����-�069] ������ ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_not_vis_open   : 1; //!< [����-�070] ����� ��������� �������� ������������ ����� ���� �4�
   uint16_t valve_b4r_not_vis_close  : 1; //!< [����-�071] ����� ��������� �������� ������������ ����� ���� �4�
} topl_flag_word_4_b_t;

//! ����� 5 �������� ����
typedef struct topl_flag_word_5_b_t {
   uint16_t valve_b5_opened          : 1; //!< [����-�072] �������� ������������ ����� ���� �5
   uint16_t valve_b5_closed          : 1; //!< [����-�073] �������� ������������ ����� ���� �5
   uint16_t valve_b5_fail_open       : 1; //!< [����-�074] ������ �������� ������������ ����� ���� �5
   uint16_t valve_b5_fail_close      : 1; //!< [����-�075] ������ �������� ������������ ����� ���� �5
   uint16_t valve_b5_fail_vis_open   : 1; //!< [����-�076] ������ ��������� �������� ������������ ����� ���� �5
   uint16_t valve_b5_fail_vis_close  : 1; //!< [����-�077] ������ ��������� �������� ������������ ����� ���� �5
   uint16_t valve_b5_not_vis_open    : 1; //!< [����-�078] ����� ��������� �������� ������������ ����� ���� �5
   uint16_t valve_b5_not_vis_close   : 1; //!< [����-�079] ����� ��������� �������� ������������ ����� ���� �5
   uint16_t valve_b6_opened          : 1; //!< [����-�080] �������� ������������ ����� ���� �6
   uint16_t valve_b6_closed          : 1; //!< [����-�081] �������� ������������ ����� ���� �6
   uint16_t valve_b6_fail_open       : 1; //!< [����-�082] ������ �������� ������������ ����� ���� �6
   uint16_t valve_b6_fail_close      : 1; //!< [����-�083] ������ �������� ������������ ����� ���� �6
   uint16_t valve_b6_fail_vis_open   : 1; //!< [����-�084] ������ ��������� �������� ������������ ����� ���� �6
   uint16_t valve_b6_fail_vis_close  : 1; //!< [����-�085] ������ ��������� �������� ������������ ����� ���� �6
   uint16_t valve_b6_not_vis_open    : 1; //!< [����-�086] ����� ��������� �������� ������������ ����� ���� �6
   uint16_t valve_b6_not_vis_close   : 1; //!< [����-�087] ����� ��������� �������� ������������ ����� ���� �6
} topl_flag_word_5_b_t;

//! ����� 6 �������� ����
typedef struct topl_flag_word_6_b_t {
   uint16_t valve_rb1_opened         : 1; //!< [����-�088] �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_closed         : 1; //!< [����-�089] �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_fail_open      : 1; //!< [����-�090] ������ �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_fail_close     : 1; //!< [����-�091] ������ �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_fail_vis_open  : 1; //!< [����-�092] ������ ��������� �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_fail_vis_close : 1; //!< [����-�093] ������ ��������� �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_not_vis_open   : 1; //!< [����-�094] ����� ��������� �������� ������������ ����� ���� ��1
   uint16_t valve_rb1_not_vis_close  : 1; //!< [����-�095] ����� ��������� �������� ������������ ����� ���� ��1
   uint16_t valve_rb2_opened         : 1; //!< [����-�096] �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_closed         : 1; //!< [����-�097] �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_fail_open      : 1; //!< [����-�098] ������ �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_fail_close     : 1; //!< [����-�099] ������ �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_fail_vis_open  : 1; //!< [����-�100] ������ ��������� �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_fail_vis_close : 1; //!< [����-�101] ������ ��������� �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_not_vis_open   : 1; //!< [����-�102] ����� ��������� �������� ������������ ����� ���� ��2
   uint16_t valve_rb2_not_vis_close  : 1; //!< [����-�103] ����� ��������� �������� ������������ ����� ���� ��2
} topl_flag_word_6_b_t;

//! ����� 7 �������� ����
typedef struct topl_flag_word_7_b_t {
   uint16_t valve_rb3_opened         : 1; //!< [����-�104] �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_closed         : 1; //!< [����-�105] �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_fail_open      : 1; //!< [����-�106] ������ �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_fail_close     : 1; //!< [����-�107] ������ �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_fail_vis_open  : 1; //!< [����-�108] ������ ��������� �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_fail_vis_close : 1; //!< [����-�109] ������ ��������� �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_not_vis_open   : 1; //!< [����-�110] ����� ��������� �������� ������������ ����� ���� ��3
   uint16_t valve_rb3_not_vis_close  : 1; //!< [����-�111] ����� ��������� �������� ������������ ����� ���� ��3
   uint16_t valve_rb4_opened         : 1; //!< [����-�112] �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_closed         : 1; //!< [����-�113] �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_fail_open      : 1; //!< [����-�114] ������ �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_fail_close     : 1; //!< [����-�115] ������ �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_fail_vis_open  : 1; //!< [����-�116] ������ ��������� �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_fail_vis_close : 1; //!< [����-�117] ������ ��������� �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_not_vis_open   : 1; //!< [����-�118] ����� ��������� �������� ������������ ����� ���� ��4
   uint16_t valve_rb4_not_vis_close  : 1; //!< [����-�119] ����� ��������� �������� ������������ ����� ���� ��4
} topl_flag_word_7_b_t;

//! ����� 8 �������� ����
typedef struct topl_flag_word_8_b_t {
   uint16_t valve_kml_opened      : 1; //!< [����-�120] �������� ����� ���
   uint16_t valve_kml_fail_open   : 1; //!< [����-�121] ������ �������� ����� ���
   uint16_t valve_kml_fail_close  : 1; //!< [����-�122] ������ �������� ����� ���
   uint16_t valve_kmr_opened      : 1; //!< [����-�123] �������� ����� ���
   uint16_t valve_kmr_fail_open   : 1; //!< [����-�124] ������ �������� ����� ���
   uint16_t valve_kmr_fail_close  : 1; //!< [����-�125] ������ �������� ����� ���
   uint16_t valve_kpp1_opened     : 1; //!< [����-�126] �������� ����� ������������� ������� ���1
   uint16_t valve_kpp1_fail_open  : 1; //!< [����-�127] ������ �������� ����� ������������� ������� ���1
   uint16_t valve_kpp1_fail_close : 1; //!< [����-�128] ������ �������� ����� ������������� ������� ���1
   uint16_t valve_kpp2_opened     : 1; //!< [����-�129] �������� ����� ������������� ������� ���2
   uint16_t valve_kpp2_fail_open  : 1; //!< [����-�130] ������ �������� ����� ������������� ������� ���2
   uint16_t valve_kpp2_fail_close : 1; //!< [����-�131] ������ �������� ����� ������������� ������� ���2
   uint16_t valve_kpp3_opened     : 1; //!< [����-�132] �������� ����� ������������� ������� ���3
   uint16_t valve_kpp3_fail_open  : 1; //!< [����-�133] ������ �������� ����� ������������� ������� ���3
   uint16_t valve_kpp3_fail_close : 1; //!< [����-�134] ������ �������� ����� ������������� ������� ���3
   uint16_t valve_kpp4_opened     : 1; //!< [����-�135] �������� ����� ������������� ������� ���4
} topl_flag_word_8_b_t;

//! ����� 9 �������� ����
typedef struct topl_flag_word_9_b_t {
   uint16_t valve_kpp4_fail_open  : 1; //!< [����-�136] ������ �������� ����� ������������� ������� ���4
   uint16_t valve_kpp4_fail_close : 1; //!< [����-�137] ������ �������� ����� ������������� ������� ���4
   uint16_t valve_pk1_opened_kv   : 1; //!< [����-�140] �� ���� ��������� ����� ��1
   uint16_t valve_pk2_opened_kv   : 1; //!< [����-�144] �� ���� ��������� ����� ��2
   uint16_t valve_pk3_opened_kv   : 1; //!< [����-�148] �� ���� ��������� ����� ��3
   uint16_t valve_pk4_opened_kv   : 1; //!< [����-�152] �� ���� ��������� ����� ��4
   uint16_t b1l_pump1_on_press    : 1; //!< [����-�154] ������� �������� �� ������� �1 ���� �1�
   uint16_t b1l_pump1_fail_start  : 1; //!< [����-�155] ������ ��������� ������ �1 ���� �1�.
   uint16_t b1l_pump1_not_started : 1; //!< [����-�156] ����������� ������ �1 ���� �1�.
   uint16_t b1l_pump2_on_press    : 1; //!< [����-�157] ������� �������� �� ������� �2 ���� �1�
   uint16_t b1l_pump2_fail_start  : 1; //!< [����-�158] ������ ��������� ������ �2 ���� �1�
   uint16_t b1l_pump2_not_started : 1; //!< [����-�159] ����������� ������ �2 ���� �1�
   uint16_t b1r_pump1_on_press    : 1; //!< [����-�160] ������� �������� �� ������� �1 ���� �1�
   uint16_t b1r_pump1_fail_start  : 1; //!< [����-�161] ������ ��������� ������ �1 ���� �1�
   uint16_t b1r_pump1_not_started : 1; //!< [����-�162] ����������� ������ �1 ���� �1�
   uint16_t b1r_pump2_on_press    : 1; //!< [����-�163] ������� �������� �� ������� �2 ���� �1�
} topl_flag_word_9_b_t;

//! ����� 10 �������� ����
typedef struct topl_flag_word_10_b_t {
   uint16_t b1r_pump2_fail_start  : 1; //!< [����-�164] ������ ��������� ������ �2 ���� �1�
   uint16_t b1r_pump2_not_started : 1; //!< [����-�165] ����������� ������ �2 ���� �1�
   uint16_t b2l_pump1_on_press    : 1; //!< [����-�166] ������� �������� �� ������� �1 ���� �2�
   uint16_t b2l_pump1_fail_start  : 1; //!< [����-�167] ������ ��������� ������ �1 ���� �2�
   uint16_t b2l_pump1_not_started : 1; //!< [����-�168] ����������� ������ �1 ���� �2�
   uint16_t b2l_pump2_on_press    : 1; //!< [����-�169] ������� �������� �� ������� �2 ���� �2�
   uint16_t b2l_pump2_fail_start  : 1; //!< [����-�170] ������ ��������� ������ �2 ���� �2�
   uint16_t b2l_pump2_not_started : 1; //!< [����-�171] ����������� ������ �2 ���� �2�
   uint16_t b2r_pump1_on_press    : 1; //!< [����-�172] ������� �������� �� ������� �1 ���� �2�
   uint16_t b2r_pump1_fail_start  : 1; //!< [����-�173] ������ ��������� ������ �1 ���� �2�
   uint16_t b2r_pump1_not_started : 1; //!< [����-�174] ����������� ������ �1 ���� �2�
   uint16_t b2r_pump2_on_press    : 1; //!< [����-�175] ������� �������� �� ������� �2 ���� �2�
   uint16_t b2r_pump2_fail_start  : 1; //!< [����-�176] ������ ��������� ������ �2 ���� �2�
   uint16_t b2r_pump2_not_started : 1; //!< [����-�177] ����������� ������ �2 ���� �2�
   uint16_t b3l_pump1_on_press    : 1; //!< [����-�178] ������� �������� �� ������� �1 ���� �3�
   uint16_t b3l_pump1_fail_start  : 1; //!< [����-�179] ������ ��������� ������ �1 ���� �3�
} topl_flag_word_10_b_t;

//! ����� 11 �������� ����
typedef struct topl_flag_word_11_b_t {
   uint16_t b3l_pump1_not_started : 1; //!< [����-�180] ����������� ������ �1 ���� �3�
   uint16_t b3l_pump2_on_press    : 1; //!< [����-�181] ������� �������� �� ������� �2 ���� �3�
   uint16_t b3l_pump2_fail_start  : 1; //!< [����-�182] ������ ��������� ������ �2 ���� �3�
   uint16_t b3l_pump2_not_started : 1; //!< [����-�183] ����������� ������ �2 ���� �3�
   uint16_t b3l_pump3_on_press    : 1; //!< [����-�184] ������� �������� �� ������� �3 ���� �3�
   uint16_t b3l_pump3_fail_start  : 1; //!< [����-�185] ������ ��������� ������ �3 ���� �3�
   uint16_t b3l_pump3_not_started : 1; //!< [����-�186] ����������� ������ �3 ���� �3�
   uint16_t b3r_pump1_on_press    : 1; //!< [����-�187] ������� �������� �� ������� �1 ���� �3�
   uint16_t b3r_pump1_fail_start  : 1; //!< [����-�188] ������ ��������� ������ �1 ���� �3�
   uint16_t b3r_pump1_not_started : 1; //!< [����-�189] ����������� ������ �1 ���� �3�
   uint16_t b3r_pump2_on_press    : 1; //!< [����-�190] ������� �������� �� ������� �2 ���� �3�
   uint16_t b3r_pump2_fail_start  : 1; //!< [����-�191] ������ ��������� ������ �2 ���� �3�
   uint16_t b3r_pump2_not_started : 1; //!< [����-�192] ����������� ������ �2 ���� �3�
   uint16_t b3r_pump3_on_press    : 1; //!< [����-�193] ������� �������� �� ������� �3 ���� �3�
   uint16_t b3r_pump3_fail_start  : 1; //!< [����-�194] ������ ��������� ������ �3 ���� �3�
   uint16_t b3r_pump3_not_started : 1; //!< [����-�195] ����������� ������ �3 ���� �3�
} topl_flag_word_11_b_t;

//! ����� 12 �������� ����
typedef struct topl_flag_word_12_b_t {
   uint16_t b4l_pump1_on_press    : 1; //!< [����-�196] ������� �������� �� ������� �1 ���� �4�
   uint16_t b4l_pump1_fail_start  : 1; //!< [����-�197] ������ ��������� ������ �1 ���� �4�
   uint16_t b4l_pump1_not_started : 1; //!< [����-�198] ����������� ������ �1 ���� �4�
   uint16_t b4l_pump2_on_press    : 1; //!< [����-�199] ������� �������� �� ������� �2 ���� �4�
   uint16_t b4l_pump2_fail_start  : 1; //!< [����-�200] ������ ��������� ������ �2 ���� �4�
   uint16_t b4l_pump2_not_started : 1; //!< [����-�201] ����������� ������ �2 ���� �4�
   uint16_t b4r_pump1_on_press    : 1; //!< [����-�202] ������� �������� �� ������� �1 ���� �4�
   uint16_t b4r_pump1_fail_start  : 1; //!< [����-�203] ������ ��������� ������ �1 ���� �4�
   uint16_t b4r_pump1_not_started : 1; //!< [����-�204] ����������� ������ �1 ���� �4�
   uint16_t b4r_pump2_on_press    : 1; //!< [����-�205] ������� �������� �� ������� �2 ���� �4�
   uint16_t b4r_pump2_fail_start  : 1; //!< [����-�206] ������ ��������� ������ �2 ���� �4�
   uint16_t b4r_pump2_not_started : 1; //!< [����-�207] ����������� ������ �2 ���� �4�
   uint16_t b5_pump1_on_press     : 1; //!< [����-�208] ������� �������� �� ������� �1 ���� �5
   uint16_t b5_pump1_fail_start   : 1; //!< [����-�209] ������ ��������� ������ �1 ���� �5
   uint16_t b5_pump1_not_started  : 1; //!< [����-�210] ����������� ������ �1 ���� �5
   uint16_t b5_pump2_on_press     : 1; //!< [����-�211] ������� �������� �� ������� �2 ���� �5
} topl_flag_word_12_b_t;

//! ����� 13 �������� ����
typedef struct topl_flag_word_13_b_t {
   uint16_t b5_pump2_fail_start   : 1; //!< [����-�212] ������ ��������� ������ �2 ���� �5
   uint16_t b5_pump2_not_started  : 1; //!< [����-�213] ����������� ������ �2 ���� �5
   uint16_t b6_pump1_on_press     : 1; //!< [����-�214] ������� �������� �� ������� �1 ���� �6
   uint16_t b6_pump1_fail_start   : 1; //!< [����-�215] ������ ��������� ������ �1 ���� �6
   uint16_t b6_pump1_not_started  : 1; //!< [����-�216] ����������� ������ �1 ���� �6
   uint16_t b6_pump2_on_press     : 1; //!< [����-�217] ������� �������� �� ������� �2 ���� �6
   uint16_t b6_pump2_fail_start   : 1; //!< [����-�218] ������ ��������� ������ �2 ���� �6
   uint16_t b6_pump2_not_started  : 1; //!< [����-�219] ����������� ������ �2 ���� �6
   uint16_t rb1_pump1_on_press    : 1; //!< [����-�220] ������� �������� �� ������� �1 ���� ��1
   uint16_t rb1_pump1_fail_start  : 1; //!< [����-�221] ������ ��������� ������ �1 ���� ��1
   uint16_t rb1_pump1_not_started : 1; //!< [����-�222] ����������� ������ �1 ���� ��1
   uint16_t rb1_pump2_on_press    : 1; //!< [����-�223] ������� �������� �� ������� �2 ���� ��1
   uint16_t rb1_pump2_fail_start  : 1; //!< [����-�224] ������ ��������� ������ �2 ���� ��1
   uint16_t rb1_pump2_not_started : 1; //!< [����-�225] ����������� ������ �2 ���� ��1
   uint16_t rb2_pump1_on_press    : 1; //!< [����-�226] ������� �������� �� ������� �1 ���� ��2
   uint16_t rb2_pump1_fail_start  : 1; //!< [����-�227] ������ ��������� ������ �1 ���� ��2
} topl_flag_word_13_b_t;

//! ����� 14 �������� ����
typedef struct topl_flag_word_14_b_t {
   uint16_t rb2_pump1_not_started : 1; //!< [����-�228] ����������� ������ �1 ���� ��2
   uint16_t rb2_pump2_on_press    : 1; //!< [����-�229] ������� �������� �� ������� �2 ���� ��2
   uint16_t rb2_pump2_fail_start  : 1; //!< [����-�230] ������ ��������� ������ �2 ���� ��2
   uint16_t rb2_pump2_not_started : 1; //!< [����-�231] ����������� ������ �2 ���� ��2
   uint16_t rb3_pump1_on_press    : 1; //!< [����-�232] ������� �������� �� ������� �1 ���� ��3
   uint16_t rb3_pump1_fail_start  : 1; //!< [����-�233] ������ ��������� ������ �1 ���� ��3
   uint16_t rb3_pump1_not_started : 1; //!< [����-�234] ����������� ������ �1 ���� ��3
   uint16_t rb3_pump2_on_press    : 1; //!< [����-�235] ������� �������� �� ������� �2 ���� ��3
   uint16_t rb3_pump2_fail_start  : 1; //!< [����-�236] ������ ��������� ������ �2 ���� ��3
   uint16_t rb3_pump2_not_started : 1; //!< [����-�237] ����������� ������ �2 ���� ��3
   uint16_t rb4_pump1_on_press    : 1; //!< [����-�238] ������� �������� �� ������� �1 ���� ��4
   uint16_t rb4_pump1_fail_start  : 1; //!< [����-�239] ������ ��������� ������ �1 ���� ��4
   uint16_t rb4_pump1_not_started : 1; //!< [����-�240] ����������� ������ �1 ���� ��4
   uint16_t rb4_pump2_on_press    : 1; //!< [����-�241] ������� �������� �� ������� �2 ���� ��4
   uint16_t rb4_pump2_fail_start  : 1; //!< [����-�242] ������ ��������� ������ �2 ���� ��4
   uint16_t rb4_pump2_not_started : 1; //!< [����-�243] ����������� ������ �2 ���� ��4
} topl_flag_word_14_b_t;

//! ����� 15 �������� ����
typedef struct topl_flag_word_15_b_t {
   uint16_t b1l_pump1_bal_on_press : 1; //!< [����-�244] ������� �������� �� ��������������� ������� �1 ���� �1�
   uint16_t b1l_pump2_bal_on_press : 1; //!< [����-�245] ������� �������� �� ��������������� ������� �2 ���� �1�
   uint16_t b1l_pump3_bal_on_press : 1; //!< [����-�246] ������� �������� �� ��������������� ������� �3 ���� �1�
   uint16_t b1r_pump1_bal_on_press : 1; //!< [����-�247] ������� �������� �� ��������������� ������� �1 ���� �1�
   uint16_t b1r_pump2_bal_on_press : 1; //!< [����-�248] ������� �������� �� ��������������� ������� �2 ���� �1�
   uint16_t b1r_pump3_bal_on_press : 1; //!< [����-�249] ������� �������� �� ��������������� ������� �3 ���� �1�
   uint16_t b5_pump1_bal_on_press  : 1; //!< [����-�250] ������� �������� �� ��������������� ������� �1 ���� �5
   uint16_t b5_pump2_bal_on_press  : 1; //!< [����-�251] ������� �������� �� ��������������� ������� �2 ���� �5
   uint16_t b5_pump3_bal_on_press  : 1; //!< [����-�252] ������� �������� �� ��������������� ������� �3 ���� �5
   uint16_t b6_pump1_bal_on_press  : 1; //!< [����-�253] ������� �������� �� ��������������� ������� �1 ���� �6
   uint16_t b6_pump2_bal_on_press  : 1; //!< [����-�254] ������� �������� �� ��������������� ������� �2 ���� �6
   uint16_t b6_pump3_bal_on_press  : 1; //!< [����-�255] ������� �������� �� ��������������� ������� �3 ���� �6
   uint16_t level12_rb1            : 1; //!< [����-�281] ������� ������� 12� ��1
   uint16_t level12_rb2            : 1; //!< [����-�282] ������� ������� 12� ��2
   uint16_t level12_rb3            : 1; //!< [����-�283] ������� ������� 12� ��3
   uint16_t level12_rb4            : 1; //!< [����-�284] ������� ������� 12� ��4
} topl_flag_word_15_b_t;

//! ����� 16 �������� ����
typedef struct topl_flag_word_16_b_t {
   uint16_t valve_rod_take_control : 1; //!< [����-�286] ������� ��������
   uint16_t rod_out                : 1; //!< [����-�289] ������ ��������
   uint16_t rod_off                : 1; //!< [����-�290] ������ ������
   uint16_t air_switcher_on        : 1; //!< [����-�295] ������������� �������� � ��������� "������"
   uint16_t rb1_pump3_on_press     : 1; //!< [����-�296] ������� �������� �� ������� � 3 ���� ��1
   uint16_t rb1_pump3_fail_start   : 1; //!< [����-�297] ������ ��������� ������ � 3 ���� ��1
   uint16_t rb1_pump3_not_started  : 1; //!< [����-�298] ����������� ������ � 3 ���� ��1
   uint16_t rb2_pump3_on_press     : 1; //!< [����-�299] ������� �������� �� ������� � 3 ���� ��2
   uint16_t rb2_pump3_fail_start   : 1; //!< [����-�300] ������ ��������� ������ � 3 ���� ��2
   uint16_t rb2_pump3_not_started  : 1; //!< [����-�301] ����������� ������ � 3 ���� ��2
   uint16_t rb3_pump3_on_press     : 1; //!< [����-�302] ������� �������� �� ������� � 3 ���� ��3
   uint16_t rb3_pump3_fail_start   : 1; //!< [����-�303] ������ ��������� ������ � 3 ���� ��3
   uint16_t rb3_pump3_not_started  : 1; //!< [����-�304] ����������� ������ � 3 ���� ��3
   uint16_t rb4_pump3_on_press     : 1; //!< [����-�305] ������� �������� �� ������� � 3 ���� ��4
   uint16_t rb4_pump3_fail_start   : 1; //!< [����-�306] ������ ��������� ������ � 3 ���� ��4
   uint16_t rb4_pump3_not_started  : 1; //!< [����-�307] ����������� ������ � 3 ���� ��4
} topl_flag_word_16_b_t;

//! ����� �������� �����
typedef struct gears_flag_word_b_t {
   uint16_t comp_r1   : 1; //!< [����-�001] ����� ������ ������ (����� 1)
   uint16_t comp_r2   : 1; //!< [����-�002] ����� ������ ������ (����� 2)
   uint16_t out_r     : 1; //!< [����-�003] ����� ������ �������� �� �������
   uint16_t out_r_mbs : 1; //!< [����-�004] ����� ������ �������� �� ���
   uint16_t off_r     : 1; //!< [����-�005] ����� ������ ������
   uint16_t closed_r  : 1; //!< [����-�006] ������� ������ ����� �������
   uint16_t comp_l1   : 1; //!< [����-�007] ����� ����� ������ (����� 1)
   uint16_t comp_l2   : 1; //!< [����-�008] ����� ����� ������ (����� 2)
   uint16_t out_l     : 1; //!< [����-�009] ����� ����� �������� �� �������
   uint16_t out_l_mbs : 1; //!< [����-�010] ����� ����� �������� �� ���
   uint16_t off_l     : 1; //!< [����-�011] ����� ����� ������
   uint16_t closed_l  : 1; //!< [����-�012] ������� ����� ����� �������
   uint16_t out_f     : 1; //!< [����-�013] ����� �������� ��������
   uint16_t off_f     : 1; //!< [����-�014] ����� �������� ������
   uint16_t closed_f  : 1; //!< [����-�015] ������� �������� ����� �������
   uint16_t imitation : 1; //!< [����-�019] �������� "����� �� ������" (������ ��/�)
} gears_flag_word_b_t;

//! ������ ������������ ���/���
typedef struct ins_svs_numbers_b_t {
   uint16_t ins_number_k : 2; //!< [���-�002] ����� ������������ ��� ��� ��������� � ���������� (0 - ��� ������) //(min:0 max:3)
   uint16_t ins_number_p : 2; //!< [���-�002] ����� ������������ ��� ��� ��������� � ��������� (0 - ��� ������) //(min:0 max:3)
   uint16_t svs_number_k : 2; //!< [���-�003] ����� ������������ ��� ��� ��������� � ���������� (0 - ��� ������) //(min:0 max:3)
   uint16_t svs_number_p : 2; //!< [���-�003] ����� ������������ ��� ��� ��������� � ��������� (0 - ��� ������) //(min:0 max:3)
   uint16_t              : 8; //!< ������
} ins_svs_numbers_b_t;

//! ����� 1 �������������� ���/����/���
typedef struct svs_absu_rts_valid_word_1_b_t {
   uint16_t absu_alpha            : 1; //!< �[����-�001] ������������� ���� ����� ���������
   uint16_t svs_altitude_abs_k    : 1; //!< �[���-�001] ������������� ������ ���������� ���� ��� ��������� � ����������
   uint16_t svs_altitude_abs_p    : 1; //!< �[���-�001] ������������� ������ ���������� ���� ��� ��������� � ���������
   uint16_t svs_indicated_speed_k : 1; //!< �[���-�002] ������������� ��������� �������� ��� ��������� � ����������
   uint16_t svs_indicated_speed_p : 1; //!< �[���-�002] ������������� ��������� �������� ��� ��������� � ���������
   uint16_t svs_mach_k            : 1; //!< �[���-�003] ������������� ����� ���� ��� ��������� � ����������
   uint16_t svs_mach_p            : 1; //!< �[���-�003] ������������� ����� ���� ��� ��������� � ���������
   uint16_t svs_altitude_qnh_k    : 1; //!< �[���-�004] ������������� ������ ������������� �QNH ��� ��������� � ����������
   uint16_t svs_altitude_qnh_p    : 1; //!< �[���-�004] ������������� ������ ������������� �QNH ��� ��������� � ���������
   uint16_t svs_altitude_qfe_k    : 1; //!< �[���-�005] ������������� ������ ������������� �QFE ��� ��������� � ����������
   uint16_t svs_altitude_qfe_p    : 1; //!< �[���-�005] ������������� ������ ������������� �QFE ��� ��������� � ���������
   uint16_t svs_pressure_qnh      : 1; //!< �[���-�006] ������������� ������������� QNH
   uint16_t svs_pressure_qfe      : 1; //!< �[���-�007] ������������� ������������� QFE
   uint16_t svs_vy_k              : 1; //!< �[���-�008] ������������� ������������ �������� ��� ��������� � ����������
   uint16_t svs_vy_p              : 1; //!< �[���-�008] ������������� ������������ �������� ��� ��������� � ���������
   uint16_t svs_temperature       : 1; //!< �[���-�010] ������������� ����������� ��������� �������
} svs_absu_rts_valid_word_1_b_t;

//! ����� 2 �������������� ���/����/���
typedef struct svs_absu_rts_valid_word_2_b_t {
   uint16_t svs_true_speed_k       : 1; //!< �[���-�011] ������������� �������� ��������� �������� ��� ��������� � ����������
   uint16_t svs_true_speed_p       : 1; //!< �[���-�011] ������������� �������� ��������� �������� ��� ��������� � ���������
   uint16_t vor1_azimuth           : 1; //!< �[VIM-�001] ������������� ������� �� ���� VOR1 ����������
   uint16_t vor1_frequency         : 1; //!< �[VIM-�002] ������������� ������� ��������� �� ���� VOR1
   uint16_t vor2_azimuth           : 1; //!< �[VIM-�003] ������������� ������� �� ���� VOR2 ����������
   uint16_t vor2_frequency         : 1; //!< �[VIM-�004] ������������� ������� ��������� �� ���� VOR2
   uint16_t ils1_frequency         : 1; //!< �[VIM-�005] ������������� ������� ��������� ILS1
   uint16_t ils1_delta_x           : 1; //!< �[VIM-�006] ������������� ���������� �� ����� ������� ILS1
   uint16_t ils1_delta_y           : 1; //!< �[VIM-�007] ������������� ���������� �� �������� �������� ILS1
   uint16_t ils2_frequency         : 1; //!< �[VIM-�005] ������������� ������� ��������� ILS2
   uint16_t ils2_delta_x           : 1; //!< �[VIM-�006] ������������� ���������� �� ����� ������� ILS2
   uint16_t ils2_delta_y           : 1; //!< �[VIM-�007] ������������� ���������� �� �������� �������� ILS2
   uint16_t dme1_distance          : 1; //!< �[DME-�001] ������������� ��������� �� ���������� DME1
   uint16_t dme1_frequency         : 1; //!< �[DME-�002] ������������� ������� ��������� ���������� DME1
   uint16_t dme2_distance          : 1; //!< �[DME-�003] ������������� ��������� �� ���������� DME2
   uint16_t dme2_frequency         : 1; //!< �[DME-�004] ������������� ������� ��������� ���������� DME2
} svs_absu_rts_valid_word_2_b_t;

//! ����� 3 �������������� ���/����/���
typedef struct svs_absu_rts_valid_word_3_b_t {
   uint16_t ark_bearing            : 1; //!< �[���-�001] ������������� ��������� ���� ������������ ���
   uint16_t ark_frequency          : 1; //!< �[���-�002] ������������� ������� ��������� ���
   uint16_t rvm_altitude_k         : 1; //!< �[���-�001] ������������� ����������� ����� ����� ��� ��������� � ����������
   uint16_t rvm_altitude_p         : 1; //!< �[���-�001] ������������� ����������� ����� ����� ��� ��������� � ���������
   uint16_t rvb_altitude           : 1; //!< �[���-�001] ������������� ����������� ������� �����
   uint16_t rsbn_delta_y_1         : 1; //!< �[����-�002] ������������� ���������� �� �������� �������� (����� 1)
   uint16_t rsbn_delta_x_1         : 1; //!< �[����-�003] ������������� ���������� �� ����� ������� (����� 1)
   uint16_t rsbn_delta_y_2         : 1; //!< �[����-�002] ������������� ���������� �� �������� �������� (����� 2)
   uint16_t rsbn_delta_x_2         : 1; //!< �[����-�003] ������������� ���������� �� ����� ������� (����� 2)
   uint16_t rsbn_distance          : 1; //!< �[����-�004] ������������� ��������� �������� �� ����
   uint16_t rsbn_azimuth           : 1; //!< �[����-�005] ������������� ������� �� ���� ���� ���������
   uint16_t rsbn_channel_number_np : 1; //!< �[����-�006] ������������� ������ ��������-�������� ������ ���� ��
   uint16_t rsbn_channel_number_ms : 1; //!< �[����-�006] ������������� ������ ��������-�������� ������ ���� ��
   uint16_t rsbn_delta_rpk         : 1; //!< �[����-�007] ������������� ���������� �� ������� �� ������������������ ��
   uint16_t rsbn_distance_ms       : 1; //!< �[����-�008] ������������� ��������� �� ������������������ ��
   uint16_t                        : 1; //!< ������
} svs_absu_rts_valid_word_3_b_t;

//! ����� 1 �������������� ����
typedef struct bcvm_valid_word_1_b_t {
   uint16_t magn_course       : 1; //!< �[����-�003] ������������� ���������� �����
   uint16_t true_course       : 1; //!< �[����-�004] ������������� ��������� �����
   uint16_t magn_pu_selected  : 1; //!< �[����-�005] ������������� ���������� ��������� �������� ���� ��� ��������� �����
   uint16_t true_pu           : 1; //!< �[����-�007] ������������� ��������� �������� ����
   uint16_t delta_z           : 1; //!< �[����-�008] ������������� ���
   uint16_t magn_pu           : 1; //!< �[����-�009] ������������� ���������� �������� ����
   uint16_t waypoint_distance : 1; //!< �[����-�010] ������������� ���������� �� ���������� ���
   uint16_t waypoint_time     : 1; //!< �[����-�011] ������������� ������� ������� ���������� ���
   uint16_t azimuth_selected  : 1; //!< �[����-�012] ������������� ��������� ������� VOR (����������) ��� ���� (���������)
   uint16_t echelon           : 1; //!< �[����-�013] ������������� ������ �������
   uint16_t altitude_delta    : 1; //!< �[����-�014] ������������� ���������� �� �������� ������ ������
   uint16_t runway_course     : 1; //!< �[����-�015] ������������� ����� ���
   uint16_t v1_continued      : 1; //!< �[����-�016] ������������� �������� �������� ������� �� ������� V1 (������������)
   uint16_t v1                : 1; //!< �[����-�017] ������������� �������� �������� ������� �� ������� V1 (����������)
   uint16_t vr                : 1; //!< �[����-�018] ������������� �������� ������ ������� �������� ������ ����� VR
   uint16_t v2                : 1; //!< �[����-�019] ������������� ���������� �������� �� ������ V2
} bcvm_valid_word_1_b_t;

//! ����� 2 �������������� ����
typedef struct bcvm_valid_word_2_b_t {
   uint16_t altitude_min      : 1; //!< �[����-�021] ������������� ���������� ���������� ������
   uint16_t wind_angle        : 1; //!< �[����-�022] ������������� ������������������ ����������� �����
   uint16_t wind_speed        : 1; //!< �[����-�023] ������������� �������� �����
   uint16_t w                 : 1; //!< �[����-�024] ������������� �������� �������
   uint16_t fuel_distance     : 1; //!< �[����-�025] ������������� ����������, ����������� �� ������ �������
   uint16_t fuel_time_e       : 1; //!< �[����-�026] ������������� �������, ����������� �� ������ �������
   uint16_t azimuth_delta     : 1; //!< �[����-�027] ������������� ���������� �� ����� ��������� ������� VOR/����
   uint16_t drift_angle       : 1; //!< �[����-�028] ������������� ���� �����
   uint16_t waypoint_name     : 1; //!< �[����-�029] ������������� �������������� ���������� ���
   uint16_t latitude          : 1; //!< �[����-�030] ������������� �������������� ������ �������������� �������
   uint16_t longitude         : 1; //!< �[����-�031] ������������� �������������� ������� �������������� �������
   uint16_t waypoint_time_est : 1; //!< �[����-�033] ������������� ������� ������, ����������� �� ���������� ���
   uint16_t route_number      : 1; //!< �[����-�034] ������������� ������ ��������
   uint16_t grid_course       : 1; //!< �[����-�035] ������������� �������� �����
   uint16_t current_time      : 1; //!< �[����-�036] ������������� ������� ��������
   uint16_t declination       : 1; //!< �[����-�037] ������������� ���������� ���������
} bcvm_valid_word_2_b_t;

//! ����� 3 �������������� ����
typedef struct bcvm_valid_word_3_b_t {
   uint16_t dtmsa                 : 1; //!< �[����-�039] ������������� ���������� �� ��������� ��������� �� �����������
   uint16_t true_pu_selected      : 1; //!< �[����-�040] ������������� ��������� ��������� �������� ���� ��� ��������� �����
   uint16_t landing_speed_40      : 1; //!< �[����-�041] ������������� �������� �������� �� �������� � ���������� 40�
   uint16_t landing_speed_25      : 1; //!< �[����-�042] ������������� �������� �������� �� �������� � ���������� 25�
   uint16_t runway_orto_s         : 1; //!< �[����-�043] ������������� ��������������� ��������� �� ����� ��� ������ (�������)
   uint16_t runway_orto_z         : 1; //!< �[����-�044] ������������� �������� ���������� �� ������ ������ �� ����� ��� ������ (�������)
   uint16_t speed_correction      : 1; //!< �[����-�046] ������������� ��������� �������� ��� ������ � �������� ����� � �������� �����
   uint16_t redundant_time        : 1; //!< �[����-�047] ������������� ��������� ������� ��� ������ � �������� ����� � �������� �����
   uint16_t takeoff_run           : 1; //!< �[����-�048] ������������� ��������� ����� ������� �� ������
   uint16_t landing_run_tp        : 1; //!< �[����-�049] ������������� ��������� ����� ������� ��� ������� � ��������� ���������
   uint16_t landing_run           : 1; //!< �[����-�050] ������������� ��������� ����� ������� ��� ������� ��� ���������� ��������
   uint16_t landing_runway_length : 1; //!< �[����-�051] ������������� ����� ��� �������
   uint16_t takeoff_runway_length : 1; //!< �[����-�052] ������������� ����� ��� ������
   uint16_t                       : 3; //!< ������
} bcvm_valid_word_3_b_t;

//! ����� 1 �������������� �� (�� ������ ���������)
typedef struct dv_valid_word_1_b_t {
   uint16_t start_time            : 1; //!< �[��-�001] ������������� ������� ������� ���������
   uint16_t afterburn_time_land   : 1; //!< �[��-�002] ������������� ����������� ������� ������ ������� �� ������
   uint16_t afterburn_time_in_air : 1; //!< �[��-�003] ������������� ����������� ������� ������ ������� � ������
   uint16_t rud_ud_k              : 1; //!< �[��-�004] ������������� ��������� ��� �� �� ��� ��������� � ����������
   uint16_t rud_ud_p              : 1; //!< �[��-�004] ������������� ��������� ��� �� �� ��� ��������� � ���������
   uint16_t rud_sku_k             : 1; //!< �[��-�005] ������������� ��������� ��� �� ��� ��� ��������� � ����������
   uint16_t rud_sku_p             : 1; //!< �[��-�005] ������������� ��������� ��� �� ��� ��� ��������� � ���������
   uint16_t n2_k                  : 1; //!< �[��-�006] ������������� �������� �������� ������ �� ��� ��������� � ����������
   uint16_t n2_p                  : 1; //!< �[��-�006] ������������� �������� �������� ������ �� ��� ��������� � ���������
   uint16_t n2_max_danger         : 1; //!< �[��-�007] ������������� �������� �������� �������� ������ ��
   uint16_t n1_ud_k               : 1; //!< �[��-�008] ������������� �������� �������� ������ �� (�� ��) ��� ��������� � ����������
   uint16_t n1_ud_p               : 1; //!< �[��-�008] ������������� �������� �������� ������ �� (�� ��) ��� ��������� � ����������
   uint16_t n1_sku_k              : 1; //!< �[��-�009] ������������� �������� �������� ������ �� (�� ���) ��� ��������� � ���������
   uint16_t n1_sku_p              : 1; //!< �[��-�009] ������������� �������� �������� ������ �� (�� ���) ��� ��������� � ���������
   uint16_t n1_max_danger         : 1; //!< �[��-�010] ������������� �������� �������� �������� ������ ��
   uint16_t tg_ud                 : 1; //!< �[��-�012] ������������� ����������� ���� � ������� (�� ��)
} dv_valid_word_1_b_t;

//! ����� 2 �������������� �� (�� ������ ���������)
typedef struct dv_valid_word_2_b_t {
   uint16_t tg_sku              : 1; //!< �[��-�013] ������������� ����������� ���� � ������� (�� ���)
   uint16_t tg_max_danger_ud    : 1; //!< �[��-�014] ������������� ������� ����������� ���� � ������� (�� ��)
   uint16_t tg_max              : 1; //!< �[��-�015] ������������� ���������� ����������� ���� � �������
   uint16_t n_sd_k              : 1; //!< �[��-�017] ������������� �������� �������� ������ �� ��� ��������� � ����������
   uint16_t n_sd_p              : 1; //!< �[��-�017] ������������� �������� �������� ������ �� ��� ��������� � ���������
   uint16_t n_sd_max            : 1; //!< �[��-�018] ������������� ����������� �������� �������� ������ ��
   uint16_t inlet_wedge_angle   : 1; //!< �[��-�019] ������������� ��������� ������� ����� ��
   uint16_t inlet_restart_angle : 1; //!< �[��-�020] ������������� ��������� ������� ��������� ��
   uint16_t vibration_vpo       : 1; //!< �[��-�021] ������������� �������� �������� �����
   uint16_t vibration_vot       : 1; //!< �[��-�022] ������������� �������� ����� �������
   uint16_t vibration_vfk       : 1; //!< �[��-�023] ������������� �������� ��������� ������
   uint16_t vibration_vpo_max   : 1; //!< �[��-�024] ������������� ���������� �������� �������� �����
   uint16_t vibration_vot_max   : 1; //!< �[��-�025] ������������� ���������� �������� ����� �������
   uint16_t vibration_vfk_max   : 1; //!< �[��-�026] ������������� ���������� �������� ��������� ������
   uint16_t oil_pressure        : 1; //!< �[��-�027] ������������� �������� ����� �� ����� � ���������
   uint16_t oil_pressure_min    : 1; //!< �[��-�028] ������������� ����������� �������� ����� �� ����� � ���������
} dv_valid_word_2_b_t;

//! ����� 3 �������������� �� (�� ������ ���������)
typedef struct dv_valid_word_3_b_t {
   uint16_t oil_temperature_in      : 1; //!< �[��-�030] ������������� ����������� ����� �� ����� � ���������
   uint16_t oil_temperature_in_max  : 1; //!< �[��-�031] ������������� ���������� ����������� ����� �� ����� � ���������
   uint16_t oil_temperature_out     : 1; //!< �[��-�032] ������������� ����������� ����� �� ������ �� ����� �������
   uint16_t oil_temperature_out_max : 1; //!< �[��-�033] ������������� ���������� ����������� ����� �� ������ �� ����� �������
   uint16_t nozzle_angle            : 1; //!< �[��-�034] ������������� ��������� ����������� �����
   uint16_t air_pressure_turb       : 1; //!< �[��-�035] ������������� �������� � ������������ ������� ���� �������
   uint16_t n1_max                  : 1; //!< �[��-�036] ������������� ����������� �������� �������� ������ ��
   uint16_t bearing_temperature_n1  : 1; //!< �[��-�037] ������������� ����������� ����������� ������ ��
   uint16_t bearing_temperature_sd  : 1; //!< �[��-�038] ������������� ����������� ����������� ������ C�
   uint16_t bearing_temperature_n2  : 1; //!< �[��-�039] ������������� ����������� ����������� ������ ��
   uint16_t oil_level               : 1; //!< �[��-�040] ������������� ���������� ����� � ���������
   uint16_t oil_level_min           : 1; //!< �[��-�041] ������������� ����������� ���������� ����� � ���������
   uint16_t oil_level_max           : 1; //!< �[��-�042] ������������� ����������� ���������� ����� � ���������
   uint16_t fuel_pressure           : 1; //!< �[��-�043] ������������� �������� ������� ����� ���������� �������� ��
   uint16_t fuel_temperature_tmt    : 1; //!< �[��-�044] ������������� ����������� ������� �� ���
   uint16_t tg_max_danger_sku       : 1; //!< �[��-�045] ������������� ������� ����������� ���� � ������� (�� ���)
} dv_valid_word_3_b_t;

//! ����� 4 �������������� ��
typedef struct dv_valid_word_4_b_t {
   uint16_t dv1_inlet_wedge_angle_set   : 1; //!< �[��1-�046] ������������� ������������ ��������� �����
   uint16_t dv1_inlet_restart_angle_set : 1; //!< �[��1-�047] ������������� ������������ ��������� �������
   uint16_t dv1_air_temperature         : 1; //!< �[��1-�048/��1-�049] ������������� ����������� ������� �� ����� � ��/��
   uint16_t dv1_sku_failure             : 1; //!< [��1] ��� ������ �� ���-32���
   uint16_t dv2_inlet_wedge_angle_set   : 1; //!< �[��2-�046] ������������� ������������ ��������� �����
   uint16_t dv2_inlet_restart_angle_set : 1; //!< �[��2-�047] ������������� ������������ ��������� �������
   uint16_t dv2_air_temperature         : 1; //!< �[��2-�048/��2-�049] ������������� ����������� ������� �� ����� � ��/��
   uint16_t dv2_sku_failure             : 1; //!< [��2] ��� ������ �� ���-32���
   uint16_t dv3_inlet_wedge_angle_set   : 1; //!< �[��3-�046] ������������� ������������ ��������� �����
   uint16_t dv3_inlet_restart_angle_set : 1; //!< �[��3-�047] ������������� ������������ ��������� �������
   uint16_t dv3_air_temperature         : 1; //!< �[��3-�048/��3-�049] ������������� ����������� ������� �� ����� � ��/��
   uint16_t dv3_sku_failure             : 1; //!< [��3] ��� ������ �� ���-32���
   uint16_t dv4_inlet_wedge_angle_set   : 1; //!< �[��4-�046] ������������� ������������ ��������� �����
   uint16_t dv4_inlet_restart_angle_set : 1; //!< �[��4-�047] ������������� ������������ ��������� �������
   uint16_t dv4_air_temperature         : 1; //!< �[��4-�048/��4-�049] ������������� ����������� ������� �� ����� � ��/��
   uint16_t dv4_sku_failure             : 1; //!< [��4] ��� ������ �� ���-32���
} dv_valid_word_4_b_t;

//! ����� 1 �������������� ���/���
typedef struct ins_ans_valid_word_1_b_t {
   uint16_t ins_roll_k      : 1; //!< �[���-�001] ������������� ���� ����� ��� ��������� � ����������
   uint16_t ins_roll_p      : 1; //!< �[���-�001] ������������� ���� ����� ��� ��������� � ���������
   uint16_t ins_pitch_k     : 1; //!< �[���-�002] ������������� ���� ������� ��� ��������� � ����������
   uint16_t ins_pitch_p     : 1; //!< �[���-�002] ������������� ���� ������� ��� ��������� � ���������
   uint16_t ins_nz          : 1; //!< �[���-�003] ������������� ��������� ����� ���������� ��� ������� (������� ����������)
   uint16_t ins_ny_k        : 1; //!< �[���-�004] ������������� ����������� ��������� (���������� ����������) ��� ��������� � ����������
   uint16_t ins_ny_p        : 1; //!< �[���-�004] ������������� ����������� ��������� (���������� ����������) ��� ��������� � ���������
   uint16_t ins_nx          : 1; //!< �[���-�009] ������������� ��������������� ��������� ����� ���������� ��������
   uint16_t ins_latitude_k  : 1; //!< �[���-�010] ������������� �������������� ������ �������������� ������� ��� ��������� � ����������
   uint16_t ins_latitude_p  : 1; //!< �[���-�010] ������������� �������������� ������ �������������� ������� ��� ��������� � ���������
   uint16_t ins_longitude_k : 1; //!< �[���-�011] ������������� �������������� ������� �������������� ������� ��� ��������� � ����������
   uint16_t ins_longitude_p : 1; //!< �[���-�011] ������������� �������������� ������� �������������� ������� ��� ��������� � ���������
   uint16_t ins_true_pu_k   : 1; //!< �[���-�012] ������������� �������� ���� ��������� ��� ��������� � ����������
   uint16_t ins_true_pu_p   : 1; //!< �[���-�012] ������������� �������� ���� ��������� ��� ��������� � ���������
   uint16_t ins_magn_pu_k   : 1; //!< �[���-�013] ������������� �������� ���� ���������� ��� ��������� � ����������
   uint16_t ins_magn_pu_p   : 1; //!< �[���-�013] ������������� �������� ���� ���������� ��� ��������� � ���������
} ins_ans_valid_word_1_b_t;

//! ����� 2 �������������� ���/���
typedef struct ins_ans_valid_word_2_b_t {
   uint16_t ins_magn_course_k : 1; //!< �[���-�014] ������������� ����� ���������� ��� ��������� � ����������
   uint16_t ins_magn_course_p : 1; //!< �[���-�014] ������������� ����� ���������� ��� ��������� � ���������
   uint16_t ins_true_course_k : 1; //!< �[���-�015] ������������� ����� ��������� ��� ��������� � ����������
   uint16_t ins_true_course_p : 1; //!< �[���-�015] ������������� ����� ��������� ��� ��������� � ���������
   uint16_t ins_drift_angle   : 1; //!< �[���-�016] ������������� ���� �����
   uint16_t ans_latitude      : 1; //!< �[���-�001] ������������� �������������� ������ �������������� �������
   uint16_t ans_longitude     : 1; //!< �[���-�002] ������������� �������������� ������� �������������� �������
   uint16_t ans_true_course   : 1; //!< �[���-�003] ������������� ����� ���������
   uint16_t ans_roll          : 1; //!< �[���-�004] ������������� ���� �����
   uint16_t ans_pitch         : 1; //!< �[���-�005] ������������� ���� �������
   uint16_t ans_w             : 1; //!< �[���-�006] ������������� ������� ��������
   uint16_t                   : 5; //!< ������
} ins_ans_valid_word_2_b_t;

//! ����� �������������� ���
typedef struct pkr_valid_word_b_t {
   uint16_t speed_max      : 1; //!< �[���-�001] ������������� ����������� ���������� ��������� ��������
   uint16_t speed_min      : 1; //!< �[���-�002] ������������� ���������� ���������� ��������� ��������
   uint16_t roll_max       : 1; //!< �[���-�003] ������������� ����������� ���� �����
   uint16_t ny_max         : 1; //!< �[���-�004] ������������� ����������� ���������� ���������� ����������
   uint16_t ny_min         : 1; //!< �[���-�005] ������������� ���������� ���������� ���������� ����������
   uint16_t alpha_max      : 1; //!< �[���-�006] ������������� ����������� ����������� ���� �����
   uint16_t alpha_min      : 1; //!< �[���-�007] ������������� ���������� ����������� ���� �����
   uint16_t path_angle_pot : 1; //!< �[���-�008] ������������� �������������� ���� ������� ����������
   uint16_t path_angle     : 1; //!< �[���-�009] ������������� ���� ������� ����������
   uint16_t mach_max       : 1; //!< �[���-�010] ������������� ����������� ����������� ����� ����
   uint16_t                : 6; //!< ������
} pkr_valid_word_b_t;

//! ����� �������������� ���
typedef struct pui_valid_word_b_t {
   uint16_t vpr                 : 1;  //!< �[���-�001] ������������� ������ �������� �������/������ �������
   uint16_t mvs                 : 1;  //!< �[���-�002] ������������� ����������� ������ ��������
   uint16_t vpr_edited          : 1;  //!< �[���-�003] ������������� ������ �������� �������/������ ������� ������������
   uint16_t mvs_edited          : 1;  //!< �[���-�004] ������������� ����������� ������ �������� ������������
   uint16_t pressure_qnh_edited : 1;  //!< �[���-�005] ������������� ������������� QNH ������������
   uint16_t pressure_qfe_edited : 1;  //!< �[���-�006] ������������� ������������� QFE ������������
   uint16_t                     : 10; //!< ������
} pui_valid_word_b_t;

//! ����� �������������� ���/���
typedef struct sau_smk_valid_word_b_t {
   uint16_t sau_director_x          : 1; //!< �[���-�001] ������������� ������� ����������� �� �����
   uint16_t sau_director_y          : 1; //!< �[���-�002] ������������� ������� ����������� �� �������
   uint16_t sau_course_selected     : 1; //!< �[���-�003] ������������� ��������� �����/�������� ����
   uint16_t sau_altitude_selected   : 1; //!< �[���-�004] ������������� �������� ��������������� ������
   uint16_t sau_speed_selected      : 1; //!< �[���-�005] ������������� �������� ��������� ��������
   uint16_t sau_vy_selected         : 1; //!< �[���-�006] ������������� �������� ������������ ��������
   uint16_t sau_mach_selected       : 1; //!< �[���-�007] ������������� ��������� ����� ����
   uint16_t sau_path_angle_selected : 1; //!< �[���-�008] ������������� ��������� ���� ������� ����������
   uint16_t smk_wing                : 1; //!< �[���-�013] ������������� ��������� ����������� �������� �����
   uint16_t smk_flap_right          : 1; //!< �[���-�014] ������������� ��������� ������� ��������
   uint16_t smk_flap_left           : 1; //!< �[���-�015] ������������� ��������� ������ ��������
   uint16_t smk_ruk                 : 1; //!< �[���-�016] ������������� ��������� �������� ���������� ������
   uint16_t smk_slat_right          : 1; //!< �[���-�018] ������������� ��������� ������� ����������
   uint16_t smk_slat_left           : 1; //!< �[���-�019] ������������� ��������� ������ ����������
   uint16_t smk_wing_left           : 1; //!< �[���-�120] ������������� ��������� ����� ������� �����
   uint16_t smk_wing_right          : 1; //!< �[���-�121] ������������� ��������� ������ ������� �����
} sau_smk_valid_word_b_t;

//! ����� �������� � �������������� ���
typedef struct sns_flag_valid_word_b_t {
   uint16_t landing           : 1; //!< [���-�001] ����� ������ ��� - �������
   uint16_t delta_x_valid     : 1; //!< �[���-�001] ������������� ���������� �� ����� �������
   uint16_t delta_y_valid     : 1; //!< �[���-�002] ������������� ���������� �� �������� ��������
   uint16_t latitude_valid    : 1; //!< �[���-�003] ������������� �������������� ������ �������������� �������
   uint16_t longitude_valid   : 1; //!< �[���-�004] ������������� �������������� ������� �������������� �������
   uint16_t distance_valid    : 1; //!< �[���-�005] ������������� �������������� ��������� �� ������ ��� �������
   uint16_t channel_num_valid : 1; //!< �[���-�006] ������������� ���� ���������� ������
   uint16_t                   : 9; //!< ������
} sns_flag_valid_word_b_t;

//! ����� �������������� ���
typedef struct sur_valid_word_b_t {
   uint16_t course_balance  : 1; //!< �[���-�001] ������������� ������� ������������ �� �����
   uint16_t pitch_balance   : 1; //!< �[���-�002] ������������� ���������� ������� ������������ �� �������
   uint16_t fin             : 1; //!< �[���-�003] ������������� ��������� ����
   uint16_t stab            : 1; //!< �[���-�004] ������������� ��������� �������������
   uint16_t interceptor_r12 : 1; //!< �[���-�006] ������������� ��������� ������ I � II ������ �������������
   uint16_t interceptor_r34 : 1; //!< �[���-�007] ������������� ��������� ������ III � IV ������ �������������
   uint16_t interceptor_r56 : 1; //!< �[���-�008] ������������� ��������� ������ V � VI ������ �������������
   uint16_t interceptor_l12 : 1; //!< �[���-�009] ������������� ��������� ������ I � II  ������ ������������
   uint16_t interceptor_l34 : 1; //!< �[���-�010] ������������� ��������� ������ III � IV ������ ������������
   uint16_t interceptor_l56 : 1; //!< �[���-�011] ������������� ��������� ������ V � VI ������ ������������
   uint16_t flaperon_left   : 1; //!< �[���-�020] ������������� ��������� ������ ���������
   uint16_t flaperon_right  : 1; //!< �[���-�021] ������������� ��������� ������� ���������
   uint16_t roll_balance    : 1; //!< �[���-�022] ������������� ������� ������������ �� �����
   uint16_t                 : 3; //!< ������
} sur_valid_word_b_t;

//! ����� 1 �������������� ���
typedef struct sas_valid_word_1_b_t {
   uint16_t u115_voltage_gen1_1 : 1; //!< �[���-�201] ���� 115�: ������������� ���������� ���� ���������� 1, ���� A
   uint16_t u115_voltage_gen1_2 : 1; //!< �[���-�202] ���� 115�: ������������� ���������� ���� ���������� 1, ���� B
   uint16_t u115_voltage_gen1_3 : 1; //!< �[���-�203] ���� 115�: ������������� ���������� ���� ���������� 1, ���� C
   uint16_t u115_voltage_gen2_1 : 1; //!< �[���-�204] ���� 115�: ������������� ���������� ���� ���������� 2, ���� A
   uint16_t u115_voltage_gen2_2 : 1; //!< �[���-�205] ���� 115�: ������������� ���������� ���� ���������� 2, ���� B
   uint16_t u115_voltage_gen2_3 : 1; //!< �[���-�206] ���� 115�: ������������� ���������� ���� ���������� 2, ���� C
   uint16_t u115_voltage_gen3_1 : 1; //!< �[���-�207] ���� 115�: ������������� ���������� ���� ���������� 3, ���� A
   uint16_t u115_voltage_gen3_2 : 1; //!< �[���-�208] ���� 115�: ������������� ���������� ���� ���������� 3, ���� B
   uint16_t u115_voltage_gen3_3 : 1; //!< �[���-�209] ���� 115�: ������������� ���������� ���� ���������� 3, ���� C
   uint16_t u115_voltage_gen4_1 : 1; //!< �[���-�210] ���� 115�: ������������� ���������� ���� ���������� 4, ���� A
   uint16_t u115_voltage_gen4_2 : 1; //!< �[���-�211] ���� 115�: ������������� ���������� ���� ���������� 4, ���� B
   uint16_t u115_voltage_gen4_3 : 1; //!< �[���-�212] ���� 115�: ������������� ���������� ���� ���������� 4, ���� C
   uint16_t u115_current_rap_1  : 1; //!< �[���-�213] ���� 115�: ������������� ���� ���, ���� A
   uint16_t u115_current_rap_2  : 1; //!< �[���-�214] ���� 115�: ������������� ���� ���, ���� B
   uint16_t u115_current_rap_3  : 1; //!< �[���-�215] ���� 115�: ������������� ���� ���, ���� C
   uint16_t u115_current_vsu_1  : 1; //!< �[���-�216] ���� 115�: ������������� ���� ���������� ���, ���� A
} sas_valid_word_1_b_t;

//! ����� 2 �������������� ���
typedef struct sas_valid_word_2_b_t {
   uint16_t u115_current_vsu_2   : 1; //!< �[���-�217] ���� 115�: ������������� ���� ���������� ���, ���� B
   uint16_t u115_current_vsu_3   : 1; //!< �[���-�218] ���� 115�: ������������� ���� ���������� ���, ���� C
   uint16_t u115_frequency_gen1  : 1; //!< �[���-�219] ���� 115�: ������������� ������� ���� ���������� 1
   uint16_t u115_frequency_gen2  : 1; //!< �[���-�220] ���� 115�: ������������� ������� ���� ���������� 2
   uint16_t u115_frequency_gen3  : 1; //!< �[���-�221] ���� 115�: ������������� ������� ���� ���������� 3
   uint16_t u115_frequency_gen4  : 1; //!< �[���-�222] ���� 115�: ������������� ������� ���� ���������� 4
   uint16_t u115_voltage_emrg1_1 : 1; //!< �[���-�223] ���� 115�: ������������� ���������� ��������� ���� 1, ���� A
   uint16_t u115_voltage_emrg1_2 : 1; //!< �[���-�224] ���� 115�: ������������� ���������� ��������� ���� 1, ���� �
   uint16_t u115_voltage_emrg1_3 : 1; //!< �[���-�225] ���� 115�: ������������� ���������� ��������� ���� 1, ���� �
   uint16_t u115_voltage_emrg2_1 : 1; //!< �[���-�226] ���� 115�: ������������� ���������� ��������� ���� 2, ���� �
   uint16_t u115_voltage_emrg2_2 : 1; //!< �[���-�227] ���� 115�: ������������� ���������� ��������� ���� 2, ���� �
   uint16_t u115_voltage_emrg2_3 : 1; //!< �[���-�228] ���� 115�: ������������� ���������� ��������� ���� 2, ���� �
   uint16_t u115_frequency_emrg1 : 1; //!< �[���-�229] ���� 115�: ������������� ������� ��������� ���� 1
   uint16_t u115_frequency_emrg2 : 1; //!< �[���-�230] ���� 115�: ������������� ������� ��������� ���� 2
   uint16_t                      : 2; //!< ������
} sas_valid_word_2_b_t;

//! ����� 3 �������������� ���
typedef struct sas_valid_word_3_b_t {
   uint16_t u115_voltage_conv1_1    : 1; //!< �[���-�231] ���� 115�: ������������� ���������� �� ���� ��������������� 1, ���� �
   uint16_t u115_voltage_conv1_2    : 1; //!< �[���-�232] ���� 115�: ������������� ���������� �� ���� ��������������� 1, ���� �
   uint16_t u115_voltage_conv1_3    : 1; //!< �[���-�233] ���� 115�: ������������� ���������� �� ���� ��������������� 1, ���� �
   uint16_t u115_flag_234           : 1; //!< �[���-�234] ���� 115�: ������
   uint16_t u115_flag_235           : 1; //!< �[���-�235] ���� 115�: ������
   uint16_t u115_flag_236           : 1; //!< �[���-�236] ���� 115�: ������
   uint16_t u115_voltage_conv3l_1   : 1; //!< �[���-�237] ���� 115�: ������������� ���������� �� ���� ��������������� 3 �����, ���� �
   uint16_t u115_voltage_conv3r_1   : 1; //!< �[���-�238] ���� 115�: ������������� ���������� �� ���� ��������������� 3 ������, ���� �
   uint16_t u115_frequency_conv1    : 1; //!< �[���-�239] ���� 115�: ������������� ������� �� ���� ��������������� 1
   uint16_t u115_flag_240           : 1; //!< �[���-�240] ���� 115�: ������
   uint16_t u115_frequency_conv3    : 1; //!< �[���-�241] ���� 115�: ������������� ������� �� ���� ��������������� 3
   uint16_t u115_converter1_voltage : 1; //!< �[���-�242] ���� 115�: ������������� ���������� ��������������� 1
   uint16_t u115_flag_243           : 1; //!< �[���-�243] ���� 115�: ������
   uint16_t u115_converter3_voltage : 1; //!< �[���-�244] ���� 115�: ������������� ���������� ��������������� 3
   uint16_t                         : 2; //!< ������
} sas_valid_word_3_b_t;

//! ����� 4 �������������� ���
typedef struct sas_valid_word_4_b_t {
   uint16_t u27_current_battery_rap_1 : 1; //!< �[���-�301] ���� 27�: ������������� ���� ������������ 1, ���1
   uint16_t u27_current_battery_rap_2 : 1; //!< �[���-�302] ���� 27�: ������������� ���� ������������ 2, ���2
   uint16_t u27_voltage_battery_1     : 1; //!< �[���-�303] ���� 27�: ������������� ���������� ������������ 1
   uint16_t u27_voltage_battery_2     : 1; //!< �[���-�304] ���� 27�: ������������� ���������� ������������ 2
   uint16_t u27_current_vsu           : 1; //!< �[���-�305] ���� 27�: ������������� ���� ���������� ���
   uint16_t u27_flag_306              : 1; //!< �[���-�306] ���� 27�: ������
   uint16_t u27_flag_307              : 1; //!< �[���-�307] ���� 27�: ������
   uint16_t u27_voltage_l_main1       : 1; //!< �[���-�308] ���� 27�: ������������� ���������� ���� �������� 1 ����� ����
   uint16_t u27_voltage_l_main2       : 1; //!< �[���-�309] ���� 27�: ������������� ���������� ���� �������� 2 ����� ����
   uint16_t u27_voltage_l_emrg1       : 1; //!< �[���-�310] ���� 27�: ������������� ���������� ���� ��������� 1 ����� ����
   uint16_t u27_voltage_r_main1       : 1; //!< �[���-�311] ���� 27�: ������������� ���������� ���� �������� 1 ������ ����
   uint16_t u27_voltage_r_main2       : 1; //!< �[���-�312] ���� 27�: ������������� ���������� ���� �������� 2 ������ ����
   uint16_t u27_voltage_r_emrg2       : 1; //!< �[���-�313] ���� 27�: ������������� ���������� ���� ��������� 2 ������ ����
   uint16_t                           : 3; //!< ������
} sas_valid_word_4_b_t;

//! ����� �������������� ����
typedef struct torm_valid_word_b_t {
   uint16_t pressure_lf_1      : 1; //!< �[����-�401] ������������� �������� � �������� �������� ���� ����� ������� (�������� ����������)
   uint16_t pressure_lm_1      : 1; //!< �[����-�402] ������������� �������� � �������� ������� ���� ����� ������� (�������� ����������)
   uint16_t pressure_lr_1      : 1; //!< �[����-�403] ������������� �������� � �������� ������ ���� ����� ������� (�������� ����������)
   uint16_t pressure_rf_1      : 1; //!< �[����-�404] ������������� �������� � �������� �������� ���� ������ ������� (�������� ����������)
   uint16_t pressure_rm_1      : 1; //!< �[����-�405] ������������� �������� � �������� ������� ���� ������ ������� (�������� ����������)
   uint16_t pressure_rr_1      : 1; //!< �[����-�406] ������������� �������� � �������� ������ ���� ������ ������� (�������� ����������)
   uint16_t pressure_lf_2      : 1; //!< �[����-�601] ������������� �������� � �������� �������� ���� ����� ������� (��������� ����������)
   uint16_t pressure_lm_2      : 1; //!< �[����-�602] ������������� �������� � �������� ������� ���� ����� ������� (��������� ����������)
   uint16_t pressure_lr_2      : 1; //!< �[����-�603] ������������� �������� � �������� ������ ���� ����� ������� (��������� ����������)
   uint16_t pressure_rf_2      : 1; //!< �[����-�604] ������������� �������� � �������� �������� ���� ������ ������� (��������� ����������)
   uint16_t pressure_rm_2      : 1; //!< �[����-�605] ������������� �������� � �������� ������� ���� ������ ������� (��������� ����������)
   uint16_t pressure_rr_2      : 1; //!< �[����-�606] ������������� �������� � �������� ������ ���� ������ ������� (��������� ����������)
   uint16_t pressure_acc_fluid : 1; //!< �[����-�607] ������������� �������� �������� � �����������������
   uint16_t pressure_acc_nitro : 1; //!< �[����-�608] ������������� �������� ����� � �����������������
   uint16_t                    : 2; //!< ������
} torm_valid_word_b_t;

//! ����� 1 �������������� ����
typedef struct topl_valid_word_1_b_t {
   uint16_t fuel_selected      : 1; //!< �[����-�001] ������������� �������� �� ��������� ��������
   uint16_t centering_selected : 1; //!< �[����-�002] ������������� �������� ���������
   uint16_t centering          : 1; //!< �[����-�003] ������������� ����������� ��������� ��������
   uint16_t fuel_total         : 1; //!< �[����-�004] ������������� ������ ���������� ������� �� ���� �����
   uint16_t fuel_1l            : 1; //!< �[����-�005] ������������� ���������� ������� � ���� �1�
   uint16_t fuel_1r            : 1; //!< �[����-�006] ������������� ���������� ������� � ���� �1�
   uint16_t fuel_2l            : 1; //!< �[����-�007] ������������� ���������� ������� � ���� �2�
   uint16_t fuel_2r            : 1; //!< �[����-�008] ������������� ���������� ������� � ���� �2�
   uint16_t fuel_4             : 1; //!< �[����-�009] ������������� ���������� ������� � ���� �4
   uint16_t fuel_3l            : 1; //!< �[����-�010] ������������� ���������� ������� � ���� �3�
   uint16_t fuel_3r            : 1; //!< �[����-�011] ������������� ���������� ������� � ���� �3�
   uint16_t fuel_5             : 1; //!< �[����-�012] ������������� ���������� ������� � ���� �5
   uint16_t fuel_6             : 1; //!< �[����-�013] ������������� ���������� ������� � ���� �6
   uint16_t fuel_rb1           : 1; //!< �[����-�014] ������������� ���������� ������� � ���� ��1
   uint16_t fuel_rb2           : 1; //!< �[����-�015] ������������� ���������� ������� � ���� ��2
   uint16_t fuel_rb3           : 1; //!< �[����-�016] ������������� ���������� ������� � ���� ��3
} topl_valid_word_1_b_t;

//! ����� 2 �������������� ����
typedef struct topl_valid_word_2_b_t {
   uint16_t fuel_rb4            : 1; //!< �[����-�017] ������������� ���������� ������� � ���� ��4
   uint16_t fuel_pressure       : 1; //!< �[����-�018] ������������� �������� � ��������� ������� (��������)
   uint16_t weight              : 1; //!< �[����-�019] ������������� ��������� ����� ��������
   uint16_t fuel_total_dz_start : 1; //!< �[����-�021] ������������� ������ ���������� ������� � ������ ������ ��������
   uint16_t fuel_3l_reserve     : 1; //!< �[����-�022] ������������� ������ ������� � ��������� ������ ���� �3�
   uint16_t fuel_3r_reserve     : 1; //!< �[����-�023] ������������� ������ ������� � ��������� ������ ���� �3�
   uint16_t fuel_rb1_reserve    : 1; //!< �[����-�024] ������������� ������ ������� � ��������� ������ ���� ��1
   uint16_t fuel_rb2_reserve    : 1; //!< �[����-�025] ������������� ������ ������� � ��������� ������ ���� ��2
   uint16_t fuel_rb3_reserve    : 1; //!< �[����-�026] ������������� ������ ������� � ��������� ������ ���� ��3
   uint16_t fuel_rb4_reserve    : 1; //!< �[����-�027] ������������� ������ ������� � ��������� ������ ���� ��4
   uint16_t                     : 6; //!< ������
} topl_valid_word_2_b_t;

//! ����� �������������� ����
typedef struct fovb_valid_word_b_t {
   uint16_t speed_min : 1;  //!< [����-�001] ������������� ������������� ��������� �������� �����������
   uint16_t speed_max : 1;  //!< [����-�002] ������������� ������������� ��������� �������� ������������
   uint16_t rate_min  : 1;  //!< [����-�003] ������������� ������������� ������������ �������� �����������
   uint16_t rate_max  : 1;  //!< [����-�004] ������������� ������������� ������������ �������� ������������
   uint16_t           : 12; //!< ������
} fovb_valid_word_b_t;

//! ����� ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mkio_status_word_b_t {
   uint16_t mkio1_1_valid : 1; //!< ������� ������ � ��������� ����-1.1 (��� ��1)
   uint16_t mkio1_2_valid : 1; //!< ������� ������ � ��������� ����-1.2 (���� ��2)
   uint16_t mkio2_valid   : 1; //!< ������� ������ � ��������� ����-2 (����1 ��1)
   uint16_t mkio3_1_valid : 1; //!< ������� ������ � ��������� ����-3.1 (��� ��6)
   uint16_t mkio3_2_valid : 1; //!< ������� ������ � ��������� ����-3.2 (���� ��2)
   uint16_t mkio4_1_valid : 1; //!< ������� ������ � ��������� ����-4.1 (���)
   uint16_t mkio4_2_valid : 1; //!< ������� ������ � ��������� ����-4.2 (���)
   uint16_t mkio5_valid   : 1; //!< ������� ������ � ��������� ����-5 (��� ��2)
   uint16_t mkio6_valid   : 1; //!< ������� ������ � ��������� ����-6 (��� ��5)
   uint16_t mkio7_valid   : 1; //!< ������� ������ � ��������� ����-7 (��� ��3)
   uint16_t mkio8_valid   : 1; //!< ������� ������ � ��������� ����-8 (��� ��4)
   uint16_t mkio9_valid   : 1; //!< ������� ������ � ��������� ����-9 (��� ��3)
   uint16_t mkio10_valid  : 1; //!< ������� ������ � ��������� ����-10 (��� ��4)
   uint16_t               : 3; //!< ������
} mfci_in_blocks_mkio_status_word_b_t;

//! ����� 1 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_1_b_t {
   uint16_t integral : 2; //!< ������������ ��������� //(min:0 max:3)
   uint16_t unit01   : 2; //!< ��������� ������ � 1 (��100-02-12 ���1) //(min:0 max:3)
   uint16_t unit02   : 2; //!< ��������� ������ � 2 (��100-01) //(min:0 max:3)
   uint16_t unit03   : 2; //!< ��������� ������ � 3 (��101-01 ��1) //(min:0 max:3)
   uint16_t unit04   : 2; //!< ��������� ������ � 4 (��101-01 ��2) //(min:0 max:3)
   uint16_t unit05   : 2; //!< ��������� ������ � 5 (��101-01 ��3) //(min:0 max:3)
   uint16_t unit06   : 2; //!< ��������� ������ � 6 (��101-01 ��4) //(min:0 max:3)
   uint16_t unit07   : 2; //!< ��������� ������ � 7 (��101-01 ��5) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_1_b_t;

//! ����� 2 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_2_b_t {
   uint16_t unit08 : 2; //!< ��������� ������ � 8 (��101-01 ��6) //(min:0 max:3)
   uint16_t unit09 : 2; //!< ��������� ������ � 9 (��100-01) //(min:0 max:3)
   uint16_t unit10 : 2; //!< ��������� ������ � 10 (��100-02-12 ���2) //(min:0 max:3)
   uint16_t unit11 : 2; //!< ��������� ������ � 11 (��102) //(min:0 max:3)
   uint16_t unit12 : 2; //!< ��������� ������ � 12 (��102) //(min:0 max:3)
   uint16_t unit13 : 2; //!< ��������� ������ � 13 (��100) //(min:0 max:3)
   uint16_t unit14 : 2; //!< ��������� ������ � 14 (��100) //(min:0 max:3)
   uint16_t pkr    : 2; //!< ��������� ���-70 //(min:0 max:3)
} mfci_in_blocks_bis_status_word_2_b_t;

//! ����� 3 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_3_b_t {
   uint16_t mmp1_bis_spacewire   : 2; //!< ��������� ����� � ������ ��� SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bcvm1_spacewire : 2; //!< ��������� ����� � ����-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bcvm2_spacewire : 2; //!< ��������� ����� � ����-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_kvi1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_kvi2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bgs1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bgs2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_sbi_spacewire   : 2; //!< ��������� ����� � ��� SpaceWire (�� ���1) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_3_b_t;

//! ����� 4 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_4_b_t {
   uint16_t mmp2_bis_spacewire   : 2; //!< ��������� ����� � ������ ��� SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bcvm1_spacewire : 2; //!< ��������� ����� � ����-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bcvm2_spacewire : 2; //!< ��������� ����� � ����-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_kvi1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_kvi2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bgs1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bgs2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_sbi_spacewire   : 2; //!< ��������� ����� � ��� SpaceWire (�� ���2) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_4_b_t;

//! ����� 5 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_5_b_t {
   uint16_t koi                    : 2; //!< ��������� �� (���) //(min:0 max:3)
   uint16_t sv                     : 2; //!< ��������� �� (��) //(min:0 max:3)
   uint16_t bigs                   : 2; //!< ��������� ���� (����1) //(min:0 max:3)
   uint16_t mfpu1_mkio1_1_bus1     : 1; //!< ����������� ����� � �� ����-1 ����-1.1A (��1)
   uint16_t mfpu1_mkio1_1_bus2     : 1; //!< ����������� ����� � �� ����-1 ����-1.1B (��1)
   uint16_t mfpu2_mkio1_1_bus1     : 1; //!< ����������� ����� � �� ����-2 ����-1.1A (��1)
   uint16_t mfpu2_mkio1_1_bus2     : 1; //!< ����������� ����� � �� ����-2 ����-1.1B (��1)
   uint16_t mfpu3_mkio1_1_bus1     : 1; //!< ����������� ����� � �� ����-3 ����-1.1A (��1)
   uint16_t mfpu3_mkio1_1_bus2     : 1; //!< ����������� ����� � �� ����-3 ����-1.1B (��1)
   uint16_t bcvm1_mkio1_1_bus1     : 1; //!< ����������� ����� � �� ����-1 ����-1.1A (��1)
   uint16_t bcvm1_mkio1_1_bus2     : 1; //!< ����������� ����� � �� ����-1 ����-1.1B (��1)
   uint16_t bcvm2_mkio1_1_bus1     : 1; //!< ����������� ����� � �� ����-2 ����-1.1A (��1)
   uint16_t bcvm2_mkio1_1_bus2     : 1; //!< ����������� ����� � �� ����-2 ����-1.1B (��1)
} mfci_in_blocks_bis_status_word_5_b_t;

//! ����� 6 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_6_b_t {
   uint16_t bvd1_mkio1_1_bus1   : 1; //!< ����������� ����� � �� ���-1 ����-1.1A (��1)
   uint16_t bvd1_mkio1_1_bus2   : 1; //!< ����������� ����� � �� ���-1 ����-1.1B (��1)
   uint16_t bvd2_mkio1_1_bus1   : 1; //!< ����������� ����� � �� ���-2 ����-1.1A (��1)
   uint16_t bvd2_mkio1_1_bus2   : 1; //!< ����������� ����� � �� ���-2 ����-1.1B (��1)
   uint16_t bgs1_mkio3_1_bus1   : 1; //!< ����������� ����� � �� ���-1 ����-3.1A (��6)
   uint16_t bgs1_mkio3_1_bus2   : 1; //!< ����������� ����� � �� ���-1 ����-3.1B (��6)
   uint16_t bgs2_mkio3_1_bus1   : 1; //!< ����������� ����� � �� ���-2 ����-3.1A (��6)
   uint16_t bgs2_mkio3_1_bus2   : 1; //!< ����������� ����� � �� ���-2 ����-3.1B (��6)
   uint16_t mfci01_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-1 ����-3.1A (��6)
   uint16_t mfci01_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-1 ����-3.1B (��6)
   uint16_t mfci02_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-2 ����-3.1A (��6)
   uint16_t mfci02_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-2 ����-3.1B (��6)
   uint16_t mfci03_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-3 ����-3.1A (��6)
   uint16_t mfci03_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-3 ����-3.1B (��6)
   uint16_t mfci04_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-4 ����-3.1A (��6)
   uint16_t mfci04_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-4 ����-3.1B (��6)
} mfci_in_blocks_bis_status_word_6_b_t;

//! ����� 7 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_7_b_t {
   uint16_t mfci05_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-5 ����-3.1A (��6)
   uint16_t mfci05_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-5 ����-3.1B (��6)
   uint16_t mfci06_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-6 ����-3.1A (��6)
   uint16_t mfci06_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-6 ����-3.1B (��6)
   uint16_t mfci07_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-7 ����-3.1A (��6)
   uint16_t mfci07_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-7 ����-3.1B (��6)
   uint16_t mfci08_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-8 ����-3.1A (��6)
   uint16_t mfci08_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-8 ����-3.1B (��6)
   uint16_t mfci09_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-9 ����-3.1A (��6)
   uint16_t mfci09_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-9 ����-3.1B (��6)
   uint16_t mfci10_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-10 ����-3.1A (��6)
   uint16_t mfci10_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-10 ����-3.1B (��6)
   uint16_t mfci11_mkio3_1_bus1 : 1; //!< ����������� ����� � �� ����-11 ����-3.1A (��6)
   uint16_t mfci11_mkio3_1_bus2 : 1; //!< ����������� ����� � �� ����-11 ����-3.1B (��6)
   uint16_t                     : 2; //!< ������
} mfci_in_blocks_bis_status_word_7_b_t;

//! ����� 8 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_8_b_t {
   uint16_t absu1_mkio5_bus1   : 1; //!< ����������� ����� � �� ����-�1 ����-5A (��2)
   uint16_t absu1_mkio5_bus2   : 1; //!< ����������� ����� � �� ����-�1 ����-5B (��2)
   uint16_t absu3_mkio5_bus1   : 1; //!< ����������� ����� � �� ����-�3 ����-5A (��2)
   uint16_t absu3_mkio5_bus2   : 1; //!< ����������� ����� � �� ����-�3 ����-5B (��2)
   uint16_t a312_np_mkio5_bus1 : 1; //!< ����������� ����� � �� ���� �-312-043� ����-5A (��2)
   uint16_t a312_np_mkio5_bus2 : 1; //!< ����������� ����� � �� ���� �-312-043� ����-5B (��2)
   uint16_t a312_ms_mkio5_bus1 : 1; //!< ����������� ����� � �� ���� �-312-054 ����-5A (��2)
   uint16_t a312_ms_mkio5_bus2 : 1; //!< ����������� ����� � �� ���� �-312-054 ����-5B (��2)
   uint16_t bins1_mkio5_bus1   : 1; //!< ����������� ����� � �� ����-1 ����-5A (��2)
   uint16_t bins1_mkio5_bus2   : 1; //!< ����������� ����� � �� ����-1 ����-5B (��2)
   uint16_t bins3_mkio5_bus1   : 1; //!< ����������� ����� � �� ����-3 ����-5A (��2)
   uint16_t bins3_mkio5_bus2   : 1; //!< ����������� ����� � �� ����-3 ����-5B (��2)
   uint16_t sns_mkio5_bus1     : 1; //!< ����������� ����� � �� ����-��� ����-5A (��2)
   uint16_t sns_mkio5_bus2     : 1; //!< ����������� ����� � �� ����-��� ����-5B (��2)
   uint16_t pui1_mkio5_bus1    : 1; //!< ����������� ����� � �� ���-1 ����-5A (��2)
   uint16_t pui1_mkio5_bus2    : 1; //!< ����������� ����� � �� ���-1 ����-5B (��2)
} mfci_in_blocks_bis_status_word_8_b_t;

//! ����� 9 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_9_b_t {
   uint16_t absu2_mkio6_bus1 : 1; //!< ����������� ����� � �� ����-�2 ����-6A (��5)
   uint16_t absu2_mkio6_bus2 : 1; //!< ����������� ����� � �� ����-�2 ����-6B (��5)
   uint16_t absu4_mkio6_bus1 : 1; //!< ����������� ����� � �� ����-�4 ����-6A (��5)
   uint16_t absu4_mkio6_bus2 : 1; //!< ����������� ����� � �� ����-�4 ����-6B (��5)
   uint16_t bins2_mkio6_bus1 : 1; //!< ����������� ����� � �� ����-2 ����-6A (��5)
   uint16_t bins2_mkio6_bus2 : 1; //!< ����������� ����� � �� ����-2 ����-6B (��5)
   uint16_t ans_mkio6_bus1   : 1; //!< ����������� ����� � �� ��� ����-6A (��5)
   uint16_t ans_mkio6_bus2   : 1; //!< ����������� ����� � �� ��� ����-6B (��5)
   uint16_t diss_mkio6_bus1  : 1; //!< ����������� ����� � �� ���� ����-6A (��5)
   uint16_t diss_mkio6_bus2  : 1; //!< ����������� ����� � �� ���� ����-6B (��5)
   uint16_t pui2_mkio6_bus1  : 1; //!< ����������� ����� � �� ���-2 ����-6A (��5)
   uint16_t pui2_mkio6_bus2  : 1; //!< ����������� ����� � �� ���-2 ����-6B (��5)
   uint16_t                  : 4; //!< ������
} mfci_in_blocks_bis_status_word_9_b_t;

//! ����� 10 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_10_b_t {
   uint16_t svr_mkio7_bus1   : 1; //!< ����������� ����� � �� ��� ����-7A (��3)
   uint16_t svr_mkio7_bus2   : 1; //!< ����������� ����� � �� ��� ����-7B (��3)
   uint16_t msrp_mkio7_bus1  : 1; //!< ����������� ����� � �� ���� ����-7A (��3)
   uint16_t msrp_mkio7_bus2  : 1; //!< ����������� ����� � �� ���� ����-7B (��3)
   uint16_t bask1_mkio7_bus1 : 1; //!< ����������� ����� � �� ���� ���-1 ����-7A (��3)
   uint16_t bask1_mkio7_bus2 : 1; //!< ����������� ����� � �� ���� ���-1 ����-7B (��3)
   uint16_t bask2_mkio7_bus1 : 1; //!< ����������� ����� � �� ���� ���-2 ����-7A (��3)
   uint16_t bask2_mkio7_bus2 : 1; //!< ����������� ����� � �� ���� ���-2 ����-7B (��3)
   uint16_t bks_mkio7_bus1   : 1; //!< ����������� ����� � �� ��� �-505 ����-7A (��3)
   uint16_t bks_mkio7_bus2   : 1; //!< ����������� ����� � �� ��� �-505 ����-7B (��3)
   uint16_t kvr_mkio8_bus1   : 1; //!< ����������� ����� � �� ��� ����-8A (��4)
   uint16_t kvr_mkio8_bus2   : 1; //!< ����������� ����� � �� ��� ����-8B (��4)
   uint16_t vs_mkio8_bus1    : 1; //!< ����������� ����� � �� �� ��-3416 ����-8A (��4)
   uint16_t vs_mkio8_bus2    : 1; //!< ����������� ����� � �� �� ��-3416 ����-8B (��4)
   uint16_t nv70_mkio8_bus1  : 1; //!< ����������� ����� � �� ��-70-3406 ����-8A (��4)
   uint16_t nv70_mkio8_bus2  : 1; //!< ����������� ����� � �� ��-70-3406 ����-8B (��4)
} mfci_in_blocks_bis_status_word_10_b_t;

//! ����� 11 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_11_b_t {
   uint16_t l500_mkio8_bus1 : 1; //!< ����������� ����� � �� �-500 ����-8A (��4)
   uint16_t l500_mkio8_bus2 : 1; //!< ����������� ����� � �� �-500 ����-8B (��4)
   uint16_t ubvr_mkio8_bus1 : 1; //!< ����������� ����� � �� ���� �134 ����-8A (��4)
   uint16_t ubvr_mkio8_bus2 : 1; //!< ����������� ����� � �� ���� �134 ����-8B (��4)
   uint16_t mup1_mkio8_bus1 : 1; //!< ����������� ����� � �� ���-1 ����-8A (��4)
   uint16_t mup1_mkio8_bus2 : 1; //!< ����������� ����� � �� ���-1 ����-8B (��4)
   uint16_t mup2_mkio8_bus1 : 1; //!< ����������� ����� � �� ���-2 ����-8A (��4)
   uint16_t mup2_mkio8_bus2 : 1; //!< ����������� ����� � �� ���-2 ����-8B (��4)
   uint16_t uks1_mkio9_bus1 : 1; //!< ����������� ����� � �� ���-1 ����-9A (��3)
   uint16_t uks1_mkio9_bus2 : 1; //!< ����������� ����� � �� ���-1 ����-9B (��3)
   uint16_t uks2_mkio9_bus1 : 1; //!< ����������� ����� � �� ���-2 ����-9A (��3)
   uint16_t uks2_mkio9_bus2 : 1; //!< ����������� ����� � �� ���-2 ����-9B (��3)
   uint16_t uks3_mkio9_bus1 : 1; //!< ����������� ����� � �� ���-3 ����-9A (��3)
   uint16_t uks3_mkio9_bus2 : 1; //!< ����������� ����� � �� ���-3 ����-9B (��3)
   uint16_t uks4_mkio9_bus1 : 1; //!< ����������� ����� � �� ���-4 ����-9A (��3)
   uint16_t uks4_mkio9_bus2 : 1; //!< ����������� ����� � �� ���-4 ����-9B (��3)
} mfci_in_blocks_bis_status_word_11_b_t;

//! ����� 12 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_12_b_t {
   uint16_t kskv2_mkio9_bus1      : 1; //!< ����������� ����� � �� ����-�2 ����-9A (��3)
   uint16_t kskv2_mkio9_bus2      : 1; //!< ����������� ����� � �� ����-�2 ����-9B (��3)
   uint16_t bupt245_1_mkio9_bus1  : 1; //!< ����������� ����� � �� ����-245�-1 ����-9A (��3)
   uint16_t bupt245_1_mkio9_bus2  : 1; //!< ����������� ����� � �� ����-245�-1 ����-9B (��3)
   uint16_t kskv1_mkio10_bus1     : 1; //!< ����������� ����� � �� ����-�1 ����-10A (��4)
   uint16_t kskv1_mkio10_bus2     : 1; //!< ����������� ����� � �� ����-�1 ����-10B (��4)
   uint16_t bupt245_2_mkio10_bus1 : 1; //!< ����������� ����� � �� ����-245�-2 ����-10A (��4)
   uint16_t bupt245_2_mkio10_bus2 : 1; //!< ����������� ����� � �� ����-245�-2 ����-10B (��4)
   uint16_t uks1_mkio10_bus1      : 1; //!< ����������� ����� � �� ���-1 ����-10A (��4)
   uint16_t uks1_mkio10_bus2      : 1; //!< ����������� ����� � �� ���-1 ����-10B (��4)
   uint16_t uks2_mkio10_bus1      : 1; //!< ����������� ����� � �� ���-2 ����-10A (��4)
   uint16_t uks2_mkio10_bus2      : 1; //!< ����������� ����� � �� ���-2 ����-10B (��4)
   uint16_t uks3_mkio10_bus1      : 1; //!< ����������� ����� � �� ���-3 ����-10A (��4)
   uint16_t uks3_mkio10_bus2      : 1; //!< ����������� ����� � �� ���-3 ����-10B (��4)
   uint16_t uks4_mkio10_bus1      : 1; //!< ����������� ����� � �� ���-4 ����-10A (��4)
   uint16_t uks4_mkio10_bus2      : 1; //!< ����������� ����� � �� ���-4 ����-10B (��4)
} mfci_in_blocks_bis_status_word_12_b_t;

//! ����� 13 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_13_b_t {
   uint16_t bau_mkio10_bus1 : 1; //!< ����������� ����� � �� ���-�3 ����-10A (��4)
   uint16_t bau_mkio10_bus2 : 1; //!< ����������� ����� � �� ���-�3 ����-10B (��4)
   uint16_t sev1_a429       : 2; //!< ��������� ����� � ��� �-021-05 �1 Arinc-429 (��1) //(min:0 max:3)
   uint16_t esud2_ud1_a429  : 2; //!< ��������� ����� � ����-2 �� �1 Arinc-429 (��1) //(min:0 max:3)
   uint16_t esud2_sku1_a429 : 2; //!< ��������� ����� � ����-2 ��� �1 Arinc-429 (��1) //(min:0 max:3)
   uint16_t esud4_ud1_a429  : 2; //!< ��������� ����� � ����-4 �� �1 Arinc-429 (��1) //(min:0 max:3)
   uint16_t esud4_sku1_a429 : 2; //!< ��������� ����� � ����-4 ��� �1 Arinc-429 (��1) //(min:0 max:3)
   uint16_t vim1_a429       : 2; //!< ��������� ����� � VIM-1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t kutc1_a429      : 2; //!< ��������� ����� � ���� �1 Arinc-429 (��2) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_13_b_t;

//! ����� 14 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_14_b_t {
   uint16_t a053_1_a429     : 2; //!< ��������� ����� � �-053-1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t ab14m_a429      : 2; //!< ��������� ����� � ��-14� Arinc-429 (��2) //(min:0 max:3)
   uint16_t svs1_a429       : 2; //!< ��������� ����� � ���-1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t sd75m1_a429     : 2; //!< ��������� ����� � ��-75-1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t esud1_ud1_a429  : 2; //!< ��������� ����� � ����-1 �� �1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t esud1_sku1_a429 : 2; //!< ��������� ����� � ����-1 ��� �1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t esud3_ud1_a429  : 2; //!< ��������� ����� � ����-3 �� �1 Arinc-429 (��2) //(min:0 max:3)
   uint16_t esud3_sku1_a429 : 2; //!< ��������� ����� � ����-3 ��� �1 Arinc-429 (��2) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_14_b_t;

//! ����� 15 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_15_b_t {
   uint16_t svs3_a429   : 2; //!< ��������� ����� � ���-3 Arinc-429 (��3) //(min:0 max:3)
   uint16_t ng3240_a429 : 2; //!< ��������� ����� � ��-3240 Arinc-429 (��3) //(min:0 max:3)
   uint16_t sus1_a429   : 2; //!< ��������� ����� � ���-14�-1 Arinc-429 (��3) //(min:0 max:3)
   uint16_t sus2_a429   : 2; //!< ��������� ����� � ���-14�-2 Arinc-429 (��3) //(min:0 max:3)
   uint16_t spmk1_a429  : 2; //!< ��������� ����� � ����-1 Arinc-429 (��3) //(min:0 max:3)
   uint16_t spmk2_a429  : 2; //!< ��������� ����� � ����-2 Arinc-429 (��3) //(min:0 max:3)
   uint16_t spk1_a429   : 2; //!< ��������� ����� � ���-1 Arinc-429 (��3) //(min:0 max:3)
   uint16_t spk2_a429   : 2; //!< ��������� ����� � ���-2 Arinc-429 (��3) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_15_b_t;

//! ����� 16 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_16_b_t {
   uint16_t esud2_ud2_a429  : 2; //!< ��������� ����� � ����-2 �� �2 Arinc-429 (��4) //(min:0 max:3)
   uint16_t esud2_sku2_a429 : 2; //!< ��������� ����� � ����-2 ��� �2 Arinc-429 (��4) //(min:0 max:3)
   uint16_t esud4_ud2_a429  : 2; //!< ��������� ����� � ����-4 �� �2 Arinc-429 (��4) //(min:0 max:3)
   uint16_t esud4_sku2_a429 : 2; //!< ��������� ����� � ����-4 ��� �2 Arinc-429 (��4) //(min:0 max:3)
   uint16_t esud1_ud2_a429  : 2; //!< ��������� ����� � ����-1 �� �2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t esud1_sku2_a429 : 2; //!< ��������� ����� � ����-1 ��� �2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t esud3_ud2_a429  : 2; //!< ��������� ����� � ����-3 �� �2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t esud3_sku2_a429 : 2; //!< ��������� ����� � ����-3 ��� �2 Arinc-429 (��5) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_16_b_t;

//! ����� 17 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bis_status_word_17_b_t {
   uint16_t vim2_a429   : 2; //!< ��������� ����� � VIM-2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t kutc2_a429  : 2; //!< ��������� ����� � ���� �2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t sd75m2_a429 : 2; //!< ��������� ����� � ��-75-2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t svs2_a429   : 2; //!< ��������� ����� � ���-2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t a053_2_a429 : 2; //!< ��������� ����� � �-053-2 Arinc-429 (��5) //(min:0 max:3)
   uint16_t a075_a429   : 2; //!< ��������� ����� � �-075 Arinc-429 (��5) //(min:0 max:3)
   uint16_t ark_a429    : 2; //!< ��������� ����� � ��� Arinc-429 (��5) //(min:0 max:3)
   uint16_t sev2_a429   : 2; //!< ��������� ����� � ��� �-021-05 �2 Arinc-429 (��6) //(min:0 max:3)
} mfci_in_blocks_bis_status_word_17_b_t;

//! ����� 1 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_1_b_t {
   uint16_t integral : 2; //!< ������������ ��������� //(min:0 max:3)
   uint16_t unit01   : 2; //!< ��������� ������ � 1 (��100-02-11 ���1) //(min:0 max:3)
   uint16_t unit02   : 2; //!< ��������� ������ � 2 (��102-01) //(min:0 max:3)
   uint16_t unit03   : 2; //!< ��������� ������ � 3 (��100-01) //(min:0 max:3)
   uint16_t unit04   : 2; //!< ��������� ������ � 4 (��100-01) //(min:0 max:3)
   uint16_t unit05   : 2; //!< ��������� ������ � 5 (��101-01 ��1) //(min:0 max:3)
   uint16_t unit06   : 2; //!< ��������� ������ � 6 (��101-01 ��2) //(min:0 max:3)
   uint16_t unit07   : 2; //!< ��������� ������ � 7 (��100-01) //(min:0 max:3)
} mfci_in_blocks_bcvm_status_word_1_b_t;

//! ����� 2 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_2_b_t {
   uint16_t unit08         : 2; //!< ��������� ������ � 8 (��101-01) //(min:0 max:3)
   uint16_t unit09         : 2; //!< ��������� ������ � 9 (��100-01) //(min:0 max:3)
   uint16_t unit10         : 2; //!< ��������� ������ � 10 (��100-02-11 ���2) //(min:0 max:3)
   uint16_t unit11         : 2; //!< ��������� ������ � 11 (��102) //(min:0 max:3)
   uint16_t unit12         : 2; //!< ��������� ������ � 12 (��102) //(min:0 max:3)
   uint16_t unit13         : 2; //!< ��������� ������ � 13 (��100) //(min:0 max:3)
   uint16_t unit14         : 2; //!< ��������� ������ � 14 (��100) //(min:0 max:3)
   uint16_t bks_mkio2_bus1 : 1; //!< ����������� ����� � �� ��� �-505 ����-2A (��1)
   uint16_t bks_mkio2_bus2 : 1; //!< ����������� ����� � �� ��� �-505 ����-2B (��1)
} mfci_in_blocks_bcvm_status_word_2_b_t;

//! ����� 3 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_3_b_t {
   uint16_t mmp1_bcvm_spacewire : 2; //!< ��������� ����� c ������ ���� SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bis1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bis2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_kvi1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_kvi2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bgs1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bgs2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_sbi_spacewire  : 2; //!< ��������� ����� c ��� SpaceWire (�� ���1) //(min:0 max:3)
} mfci_in_blocks_bcvm_status_word_3_b_t;

//! ����� 4 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_4_b_t {
   uint16_t mmp2_bcvm_spacewire : 2; //!< ��������� ����� c ������ ���� SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bis1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bis2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_kvi1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_kvi2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bgs1_spacewire : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bgs2_spacewire : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_sbi_spacewire  : 2; //!< ��������� ����� c ��� SpaceWire (�� ���2) //(min:0 max:3)
} mfci_in_blocks_bcvm_status_word_4_b_t;

//! ����� 5 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_5_b_t {
   uint16_t mmp1_bvd1_spacewire    : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bvd2_spacewire    : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp2_bvd1_spacewire    : 2; //!< ��������� ����� c ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bvd2_spacewire    : 2; //!< ��������� ����� c ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mfpu1_mkio1_2_bus1     : 1; //!< ����������� ����� � �� ����-1 ����-1.2A (��2)
   uint16_t mfpu1_mkio1_2_bus2     : 1; //!< ����������� ����� � �� ����-1 ����-1.2B (��2)
   uint16_t mfpu2_mkio1_2_bus1     : 1; //!< ����������� ����� � �� ����-2 ����-1.2A (��2)
   uint16_t mfpu2_mkio1_2_bus2     : 1; //!< ����������� ����� � �� ����-2 ����-1.2B (��2)
   uint16_t mfpu3_mkio1_2_bus1     : 1; //!< ����������� ����� � �� ����-3 ����-1.2A (��2)
   uint16_t mfpu3_mkio1_2_bus2     : 1; //!< ����������� ����� � �� ����-3 ����-1.2B (��2)
   uint16_t board19da_mkio1_2_bus1 : 1; //!< ����������� ����� � �� 19-�� ����-1.2A (��2)
   uint16_t board19da_mkio1_2_bus2 : 1; //!< ����������� ����� � �� 19-�� ����-1.2B (��2)
} mfci_in_blocks_bcvm_status_word_5_b_t;

//! ����� 6 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_6_b_t {
   uint16_t bis1_mkio1_2_bus1 : 1; //!< ����������� ����� � �� ���-1 ����-1.2A (��2)
   uint16_t bis1_mkio1_2_bus2 : 1; //!< ����������� ����� � �� ���-1 ����-1.2B (��2)
   uint16_t bis2_mkio1_2_bus1 : 1; //!< ����������� ����� � �� ���-2 ����-1.2A (��2)
   uint16_t bis2_mkio1_2_bus2 : 1; //!< ����������� ����� � �� ���-2 ����-1.2B (��2)
   uint16_t bis1_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-1 ����-2A (��1)
   uint16_t bis1_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-1 ����-2B (��1)
   uint16_t bis2_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-2 ����-2A (��1)
   uint16_t bis2_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-2 ����-2B (��1)
   uint16_t kvi1_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-1 ����-2A (��1)
   uint16_t kvi1_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-1 ����-2B (��1)
   uint16_t kvi2_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-2 ����-2A (��1)
   uint16_t kvi2_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-2 ����-2B (��1)
   uint16_t bvd1_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-1 ����-2A (��1)
   uint16_t bvd1_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-1 ����-2B (��1)
   uint16_t bvd2_mkio2_bus1   : 1; //!< ����������� ����� � �� ���-2 ����-2A (��1)
   uint16_t bvd2_mkio2_bus2   : 1; //!< ����������� ����� � �� ���-2 ����-2B (��1)
} mfci_in_blocks_bcvm_status_word_6_b_t;

//! ����� 7 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_7_b_t {
   uint16_t board19da_mkio2_bus1 : 1; //!< ����������� ����� � �� 19-�� ����-2A (��1)
   uint16_t board19da_mkio2_bus2 : 1; //!< ����������� ����� � �� 19-�� ����-2B (��1)
   uint16_t bgs1_mkio3_2_bus1    : 1; //!< ����������� ����� � �� ���-1 ����-3.2A (��2)
   uint16_t bgs1_mkio3_2_bus2    : 1; //!< ����������� ����� � �� ���-1 ����-3.2B (��2)
   uint16_t bgs2_mkio3_2_bus1    : 1; //!< ����������� ����� � �� ���-2 ����-3.2A (��2)
   uint16_t bgs2_mkio3_2_bus2    : 1; //!< ����������� ����� � �� ���-2 ����-3.2B (��2)
   uint16_t mfci01_mkio3_2_bus1  : 1; //!< ����������� ����� � �� ����-1 ����-3.2A (��2)
   uint16_t mfci01_mkio3_2_bus2  : 1; //!< ����������� ����� � �� ����-1 ����-3.2B (��2)
   uint16_t mfci02_mkio3_2_bus1  : 1; //!< ����������� ����� � �� ����-2 ����-3.2A (��2)
   uint16_t mfci02_mkio3_2_bus2  : 1; //!< ����������� ����� � �� ����-2 ����-3.2B (��2)
   uint16_t mfci03_mkio3_2_bus1  : 1; //!< ����������� ����� � �� ����-3 ����-3.2A (��2)
   uint16_t mfci03_mkio3_2_bus2  : 1; //!< ����������� ����� � �� ����-3 ����-3.2B (��2)
   uint16_t mfci04_mkio3_2_bus1  : 1; //!< ����������� ����� � �� ����-4 ����-3.2A (��2)
   uint16_t mfci04_mkio3_2_bus2  : 1; //!< ����������� ����� � �� ����-4 ����-3.2B (��2)
   uint16_t mfci05_mkio3_2_bus1  : 1; //!< ����������� ����� � �� ����-5 ����-3.2A (��2)
   uint16_t mfci05_mkio3_2_bus2  : 1; //!< ����������� ����� � �� ����-5 ����-3.2B (��2)
} mfci_in_blocks_bcvm_status_word_7_b_t;

//! ����� 8 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_bcvm_status_word_8_b_t {
   uint16_t mfci06_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-6 ����-3.2A (��2)
   uint16_t mfci06_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-6 ����-3.2B (��2)
   uint16_t mfci07_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-7 ����-3.2A (��2)
   uint16_t mfci07_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-7 ����-3.2B (��2)
   uint16_t mfci08_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-8 ����-3.2A (��2)
   uint16_t mfci08_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-8 ����-3.2B (��2)
   uint16_t mfci09_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-9 ����-3.2A (��2)
   uint16_t mfci09_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-9 ����-3.2B (��2)
   uint16_t mfci10_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-10 ����-3.2A (��2)
   uint16_t mfci10_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-10 ����-3.2B (��2)
   uint16_t mfci11_mkio3_2_bus1     : 1; //!< ����������� ����� � �� ����-11 ����-3.2A (��2)
   uint16_t mfci11_mkio3_2_bus2     : 1; //!< ����������� ����� � �� ����-11 ����-3.2B (��2)
   uint16_t u83t0214m1_mkio1_2_bus1 : 1; //!< ����������� ����� � �� 83�0214�-1 ����-1.2A (��2)
   uint16_t u83t0214m1_mkio1_2_bus2 : 1; //!< ����������� ����� � �� 83�0214�-1 ����-1.2B (��2)
   uint16_t                         : 2; //!< ������
} mfci_in_blocks_bcvm_status_word_8_b_t;

//! ����� 1 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bvd_status_word_1_b_t {
   uint16_t integral     : 2;  //!< ������������ ��������� //(min:0 max:3)
   uint16_t mv102_3      : 1;  //!< ����������� ��102-03
   uint16_t mv101_4_1    : 1;  //!< ����������� ��101-04 (��106-04) � 1
   uint16_t mv101_4_2    : 1;  //!< ����������� ��101-04 (��106-04) � 2
   uint16_t crc_mismatch : 1;  //!< ������� ������������ ����������� ���� ���-1 � ���-2
   uint16_t              : 10; //!< ������
} mfci_in_blocks_bvd_status_word_1_b_t;

//! ����� 2 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bvd_status_word_2_b_t {
   uint16_t mmp_bgs1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire //(min:0 max:3)
   uint16_t mmp_bgs2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire //(min:0 max:3)
   uint16_t mmp_bcvm1_spacewire : 2; //!< ��������� ����� � ����-1 SpaceWire //(min:0 max:3)
   uint16_t mmp_bcvm2_spacewire : 2; //!< ��������� ����� � ����-2 SpaceWire //(min:0 max:3)
   uint16_t mmp_kvi1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire //(min:0 max:3)
   uint16_t mmp_kvi2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire //(min:0 max:3)
   uint16_t                     : 4; //!< ������
} mfci_in_blocks_bvd_status_word_2_b_t;

//! ����� 3 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bvd_status_word_3_b_t {
   uint16_t cassette1      : 1; //!< ����������� �� 1
   uint16_t cassette2      : 1; //!< ����������� �� 2
   uint16_t cassette3      : 1; //!< ����������� �� 3
   uint16_t cassette4      : 1; //!< ����������� �� 4
   uint16_t cassette1_type : 3; //!< ��� �� 1 (0 - �� �����������, 1 - ��-1, 2 - �-36�, 3 - �-32�, 4 - �-64�) //(min:0 max:4)
   uint16_t cassette2_type : 3; //!< ��� �� 2 (0 - �� �����������, 1 - ��-1, 2 - �-36�, 3 - �-32�, 4 - �-64�) //(min:0 max:4)
   uint16_t cassette3_type : 3; //!< ��� �� 3 (0 - �� �����������, 1 - ��-1, 2 - �-36�, 3 - �-32�, 4 - �-64�) //(min:0 max:4)
   uint16_t cassette4_type : 3; //!< ��� �� 4 (0 - �� �����������, 1 - ��-1, 2 - �-36�, 3 - �-32�, 4 - �-64�) //(min:0 max:4)
} mfci_in_blocks_bvd_status_word_3_b_t;

//! ����� ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_uks_status_word_b_t {
   uint16_t uks1_integral  : 2; //!< ���-1 ������������ ��������� //(min:0 max:3)
   uint16_t uks1_msrp_a429 : 2; //!< ���-1 ��������� ����� � ���� Arinc-429 (����->���) //(min:0 max:3)
   uint16_t uks2_integral  : 2; //!< ���-2 ������������ ��������� //(min:0 max:3)
   uint16_t uks2_msrp_a429 : 2; //!< ���-2 ��������� ����� � ���� Arinc-429 (����->���) //(min:0 max:3)
   uint16_t uks3_integral  : 2; //!< ���-3 ������������ ��������� //(min:0 max:3)
   uint16_t uks3_msrp_a429 : 2; //!< ���-3 ��������� ����� � ���� Arinc-429 (����->���) //(min:0 max:3)
   uint16_t uks4_integral  : 2; //!< ���-4 ������������ ��������� //(min:0 max:3)
   uint16_t uks4_msrp_a429 : 2; //!< ���-4 ��������� ����� � ���� Arinc-429 (����->���) //(min:0 max:3)
} mfci_in_blocks_uks_status_word_b_t;

//! ����� ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfpu_status_word_b_t {
   uint16_t mfpu1_integral   : 2; //!< ����-1 ������������ ��������� //(min:0 max:3)
   uint16_t mfpu1_buttons    : 1; //!< ����-1 ����������� ������
   uint16_t mfpu1_brightness : 1; //!< ����-1 ����������� ����������� �������
   uint16_t mfpu2_integral   : 2; //!< ����-2 ������������ ��������� //(min:0 max:3)
   uint16_t mfpu2_buttons    : 1; //!< ����-2 ����������� ������
   uint16_t mfpu2_brightness : 1; //!< ����-2 ����������� ����������� �������
   uint16_t mfpu3_integral   : 2; //!< ����-3 ������������ ��������� //(min:0 max:3)
   uint16_t mfpu3_buttons    : 1; //!< ����-3 ����������� ������
   uint16_t mfpu3_brightness : 1; //!< ����-3 ����������� ����������� �������
   uint16_t                  : 4; //!< ������
} mfci_in_blocks_mfpu_status_word_b_t;

//! ����� 1 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bgs_status_word_1_b_t {
   uint16_t integral : 2; //!< ������������ ��������� //(min:0 max:3)
   uint16_t unit01   : 2; //!< ��������� ������ � 1 (��102-02-11 ���) //(min:0 max:3)
   uint16_t unit02   : 2; //!< ��������� ������ � 2 (��100) //(min:0 max:3)
   uint16_t unit03   : 2; //!< ��������� ������ � 3 (��100 ��1) //(min:0 max:3)
   uint16_t unit04   : 2; //!< ��������� ������ � 4 (��100 ��2) //(min:0 max:3)
   uint16_t unit05   : 2; //!< ��������� ������ � 5 (��100 ��3) //(min:0 max:3)
   uint16_t unit06   : 2; //!< ��������� ������ � 6 (��100 ��4) //(min:0 max:3)
   uint16_t unit07   : 2; //!< ��������� ������ � 7 (��100 ��5) //(min:0 max:3)
} mfci_in_blocks_bgs_status_word_1_b_t;

//! ����� 2 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bgs_status_word_2_b_t {
   uint16_t unit08 : 2; //!< ��������� ������ � 8 (��100 ��6) //(min:0 max:3)
   uint16_t unit09 : 2; //!< ��������� ������ � 9 (��100) //(min:0 max:3)
   uint16_t unit10 : 2; //!< ��������� ������ � 10 (��101-01 ��1) //(min:0 max:3)
   uint16_t unit11 : 2; //!< ��������� ������ � 11 (��102-01) //(min:0 max:3)
   uint16_t unit12 : 2; //!< ��������� ������ � 12 (��102-01) //(min:0 max:3)
   uint16_t unit13 : 2; //!< ��������� ������ � 13 (��100) //(min:0 max:3)
   uint16_t unit14 : 2; //!< ��������� ������ � 14 (��100) //(min:0 max:3)
   uint16_t        : 2; //!< ������
} mfci_in_blocks_bgs_status_word_2_b_t;

//! ����� 3 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_bgs_status_word_3_b_t {
   uint16_t bis1_spacewire  : 2; //!< ��������� ����� c ���-1 SpaceWire //(min:0 max:3)
   uint16_t bis2_spacewire  : 2; //!< ��������� ����� c ���-2 SpaceWire //(min:0 max:3)
   uint16_t bcvm1_spacewire : 2; //!< ��������� ����� c ����-1 SpaceWire //(min:0 max:3)
   uint16_t bcvm2_spacewire : 2; //!< ��������� ����� c ����-2 SpaceWire //(min:0 max:3)
   uint16_t bvd1_spacewire  : 2; //!< ��������� ����� c ���-1 SpaceWire //(min:0 max:3)
   uint16_t bvd2_spacewire  : 2; //!< ��������� ����� c ���-2 SpaceWire //(min:0 max:3)
   uint16_t kvr_a818        : 1; //!< ����������� ����� c ���-70� Arinc-818
   uint16_t nv_a818         : 1; //!< ����������� ����� c ��-70� Arinc-818
   uint16_t svr_a818        : 1; //!< ����������� ����� c ��� Arinc-818
   uint16_t                 : 1; //!< ������
} mfci_in_blocks_bgs_status_word_3_b_t;

//! ����� 1 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_1_b_t {
   uint16_t mfci1_integral : 2; //!< ������������ ��������� ����-1 //(min:0 max:3)
   uint16_t mfci2_integral : 2; //!< ������������ ��������� ����-2 //(min:0 max:3)
   uint16_t mfci3_integral : 2; //!< ������������ ��������� ����-3 //(min:0 max:3)
   uint16_t mfci4_integral : 2; //!< ������������ ��������� ����-4 //(min:0 max:3)
   uint16_t mfci5_integral : 2; //!< ������������ ��������� ����-5 //(min:0 max:3)
   uint16_t mfci6_integral : 2; //!< ������������ ��������� ����-6 //(min:0 max:3)
   uint16_t mfci7_integral : 2; //!< ������������ ��������� ����-7 //(min:0 max:3)
   uint16_t mfci8_integral : 2; //!< ������������ ��������� ����-8 //(min:0 max:3)
} mfci_in_blocks_mfci_status_word_1_b_t;

//! ����� 2 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_2_b_t {
   uint16_t mfci9_integral  : 2; //!< ������������ ��������� ����-9 //(min:0 max:3)
   uint16_t mfci10_integral : 2; //!< ������������ ��������� ����-10 //(min:0 max:3)
   uint16_t mfci11_integral : 2; //!< ������������ ��������� ����-11 //(min:0 max:3)
   uint16_t mfci1_mv        : 1; //!< ����������� �� ����-1 (��24)
   uint16_t mfci2_mv        : 1; //!< ����������� �� ����-2 (��24)
   uint16_t mfci3_mv        : 1; //!< ����������� �� ����-3 (��24)
   uint16_t mfci4_mv        : 1; //!< ����������� �� ����-4 (��24)
   uint16_t mfci5_mv        : 1; //!< ����������� �� ����-5 (��24)
   uint16_t mfci6_mv        : 1; //!< ����������� �� ����-6 (��24)
   uint16_t mfci7_mv        : 1; //!< ����������� �� ����-7 (��24)
   uint16_t mfci8_mv        : 1; //!< ����������� �� ����-8 (��24)
   uint16_t mfci9_mv        : 1; //!< ����������� �� ����-9 (��24)
   uint16_t mfci10_mv       : 1; //!< ����������� �� ����-10 (��24)
} mfci_in_blocks_mfci_status_word_2_b_t;

//! ����� 3 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_3_b_t {
   uint16_t mfci11_mv   : 1; //!< ����������� �� ����-11 (��24)
   uint16_t mfci1_mg24  : 1; //!< ����������� ��24 ����-1 (��25)
   uint16_t mfci2_mg24  : 1; //!< ����������� ��24 ����-2 (��25)
   uint16_t mfci3_mg24  : 1; //!< ����������� ��24 ����-3 (��25)
   uint16_t mfci4_mg24  : 1; //!< ����������� ��24 ����-4 (��25)
   uint16_t mfci5_mg24  : 1; //!< ����������� ��24 ����-5 (��25)
   uint16_t mfci6_mg24  : 1; //!< ����������� ��24 ����-6 (��25)
   uint16_t mfci7_mg24  : 1; //!< ����������� ��24 ����-7 (��25)
   uint16_t mfci8_mg24  : 1; //!< ����������� ��24 ����-8 (��25)
   uint16_t mfci9_mg24  : 1; //!< ����������� ��24 ����-9 (��25)
   uint16_t mfci10_mg24 : 1; //!< ����������� ��24 ����-10 (��25)
   uint16_t mfci11_mg24 : 1; //!< ����������� ��24 ����-11 (��25)
   uint16_t mfci1_mg428 : 1; //!< ����������� ��428 ����-1 (��428)
   uint16_t mfci2_mg428 : 1; //!< ����������� ��428 ����-2 (��428)
   uint16_t mfci3_mg428 : 1; //!< ����������� ��428 ����-3 (��428)
   uint16_t mfci4_mg428 : 1; //!< ����������� ��428 ����-4 (��428)
} mfci_in_blocks_mfci_status_word_3_b_t;

//! ����� 4 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_4_b_t {
   uint16_t mfci5_mg428  : 1; //!< ����������� ��428 ����-5 (��428)
   uint16_t mfci6_mg428  : 1; //!< ����������� ��428 ����-6 (��428)
   uint16_t mfci7_mg428  : 1; //!< ����������� ��428 ����-7 (��428)
   uint16_t mfci8_mg428  : 1; //!< ����������� ��428 ����-8 (��428)
   uint16_t mfci9_mg428  : 1; //!< ����������� ��428 ����-9 (��428)
   uint16_t mfci10_mg428 : 1; //!< ����������� ��428 ����-10 (��428)
   uint16_t mfci11_mg428 : 1; //!< ����������� ��428 ����-11 (��428)
   uint16_t mfci1_mn     : 1; //!< ����������� ��100 ����-1
   uint16_t mfci2_mn     : 1; //!< ����������� ��100 ����-2
   uint16_t mfci3_mn     : 1; //!< ����������� ��100 ����-3
   uint16_t mfci4_mn     : 1; //!< ����������� ��100 ����-4
   uint16_t mfci5_mn     : 1; //!< ����������� ��100 ����-5
   uint16_t mfci6_mn     : 1; //!< ����������� ��100 ����-6
   uint16_t mfci7_mn     : 1; //!< ����������� ��100 ����-7
   uint16_t mfci8_mn     : 1; //!< ����������� ��100 ����-8
   uint16_t mfci9_mn     : 1; //!< ����������� ��100 ����-9
} mfci_in_blocks_mfci_status_word_4_b_t;

//! ����� 5 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_5_b_t {
   uint16_t mfci10_mn        : 1; //!< ����������� ��100 ����-10
   uint16_t mfci11_mn        : 1; //!< ����������� ��100 ����-11
   uint16_t mfci1_buttons    : 1; //!< ����������� ������ ����-1
   uint16_t mfci2_buttons    : 1; //!< ����������� ������ ����-2
   uint16_t mfci3_buttons    : 1; //!< ����������� ������ ����-3
   uint16_t mfci4_buttons    : 1; //!< ����������� ������ ����-4
   uint16_t mfci5_buttons    : 1; //!< ����������� ������ ����-5
   uint16_t mfci6_buttons    : 1; //!< ����������� ������ ����-6
   uint16_t mfci7_buttons    : 1; //!< ����������� ������ ����-7
   uint16_t mfci8_buttons    : 1; //!< ����������� ������ ����-8
   uint16_t mfci9_buttons    : 1; //!< ����������� ������ ����-9
   uint16_t mfci10_buttons   : 1; //!< ����������� ������ ����-10
   uint16_t mfci11_buttons   : 1; //!< ����������� ������ ����-11
   uint16_t mfci1_brightness : 1; //!< ����������� ����������� ������� ����-1
   uint16_t mfci2_brightness : 1; //!< ����������� ����������� ������� ����-2
   uint16_t mfci3_brightness : 1; //!< ����������� ����������� ������� ����-3
} mfci_in_blocks_mfci_status_word_5_b_t;

//! ����� 6 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_6_b_t {
   uint16_t mfci4_brightness  : 1; //!< ����������� ����������� ������� ����-4
   uint16_t mfci5_brightness  : 1; //!< ����������� ����������� ������� ����-5
   uint16_t mfci6_brightness  : 1; //!< ����������� ����������� ������� ����-6
   uint16_t mfci7_brightness  : 1; //!< ����������� ����������� ������� ����-7
   uint16_t mfci8_brightness  : 1; //!< ����������� ����������� ������� ����-8
   uint16_t mfci9_brightness  : 1; //!< ����������� ����������� ������� ����-9
   uint16_t mfci10_brightness : 1; //!< ����������� ����������� ������� ����-10
   uint16_t mfci11_brightness : 1; //!< ����������� ����������� ������� ����-11
   uint16_t mfci1_contrast    : 1; //!< ����������� ����������� ������������� ����-1
   uint16_t mfci2_contrast    : 1; //!< ����������� ����������� ������������� ����-2
   uint16_t mfci3_contrast    : 1; //!< ����������� ����������� ������������� ����-3
   uint16_t mfci4_contrast    : 1; //!< ����������� ����������� ������������� ����-4
   uint16_t mfci5_contrast    : 1; //!< ����������� ����������� ������������� ����-5
   uint16_t mfci6_contrast    : 1; //!< ����������� ����������� ������������� ����-6
   uint16_t mfci7_contrast    : 1; //!< ����������� ����������� ������������� ����-7
   uint16_t mfci8_contrast    : 1; //!< ����������� ����������� ������������� ����-8
} mfci_in_blocks_mfci_status_word_6_b_t;

//! ����� 7 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_7_b_t {
   uint16_t mfci9_contrast   : 1; //!< ����������� ����������� ������������� ����-9
   uint16_t mfci10_contrast  : 1; //!< ����������� ����������� ������������� ����-10
   uint16_t mfci11_contrast  : 1; //!< ����������� ����������� ������������� ����-11
   uint16_t mfci1_bgs1_a818  : 1; //!< ����������� ����� ����-1 � ���-1 Arinc-818
   uint16_t mfci2_bgs1_a818  : 1; //!< ����������� ����� ����-2 � ���-1 Arinc-818
   uint16_t mfci3_bgs1_a818  : 1; //!< ����������� ����� ����-3 � ���-1 Arinc-818
   uint16_t mfci4_bgs1_a818  : 1; //!< ����������� ����� ����-4 � ���-1 Arinc-818
   uint16_t mfci5_bgs1_a818  : 1; //!< ����������� ����� ����-5 � ���-1 Arinc-818
   uint16_t mfci6_bgs1_a818  : 1; //!< ����������� ����� ����-6 � ���-1 Arinc-818
   uint16_t mfci7_bgs1_a818  : 1; //!< ����������� ����� ����-7 � ���-1 Arinc-818
   uint16_t mfci8_bgs1_a818  : 1; //!< ����������� ����� ����-8 � ���-1 Arinc-818
   uint16_t mfci9_bgs1_a818  : 1; //!< ����������� ����� ����-9 � ���-1 Arinc-818
   uint16_t mfci10_bgs1_a818 : 1; //!< ����������� ����� ����-10 � ���-1 Arinc-818
   uint16_t mfci11_bgs1_a818 : 1; //!< ����������� ����� ����-11 � ���-1 Arinc-818
   uint16_t mfci1_bgs2_a818  : 1; //!< ����������� ����� ����-1 � ���-2 Arinc-818
   uint16_t mfci2_bgs2_a818  : 1; //!< ����������� ����� ����-2 � ���-2 Arinc-818
} mfci_in_blocks_mfci_status_word_7_b_t;

//! ����� 8 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_8_b_t {
   uint16_t mfci3_bgs2_a818  : 1; //!< ����������� ����� ����-3 � ���-2 Arinc-818
   uint16_t mfci4_bgs2_a818  : 1; //!< ����������� ����� ����-4 � ���-2 Arinc-818
   uint16_t mfci5_bgs2_a818  : 1; //!< ����������� ����� ����-5 � ���-2 Arinc-818
   uint16_t mfci6_bgs2_a818  : 1; //!< ����������� ����� ����-6 � ���-2 Arinc-818
   uint16_t mfci7_bgs2_a818  : 1; //!< ����������� ����� ����-7 � ���-2 Arinc-818
   uint16_t mfci8_bgs2_a818  : 1; //!< ����������� ����� ����-8 � ���-2 Arinc-818
   uint16_t mfci9_bgs2_a818  : 1; //!< ����������� ����� ����-9 � ���-2 Arinc-818
   uint16_t mfci10_bgs2_a818 : 1; //!< ����������� ����� ����-10 � ���-2 Arinc-818
   uint16_t mfci11_bgs2_a818 : 1; //!< ����������� ����� ����-11 � ���-2 Arinc-818
   uint16_t mfci1_vim1       : 1; //!< ����������� ����� ����-1 � VIM-1 Arinc-429
   uint16_t mfci1_rsbn       : 1; //!< ����������� ����� ����-1 � ���� Arinc-429
   uint16_t mfci1_svs1       : 1; //!< ����������� ����� ����-1 � ���-1 Arinc-429
   uint16_t mfci1_rvm1       : 1; //!< ����������� ����� ����-1 � ���-1 Arinc-429
   uint16_t mfci1_ark        : 1; //!< ����������� ����� ����-1 � ��� Arinc-429
   uint16_t mfci1_bins1      : 1; //!< ����������� ����� ����-1 � ����-1 Arinc-429
   uint16_t mfci3_vim2       : 1; //!< ����������� ����� ����-3 � VIM-2 Arinc-429
} mfci_in_blocks_mfci_status_word_8_b_t;

//! ����� 9 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_9_b_t {
   uint16_t mfci3_rsbn  : 1; //!< ����������� ����� ����-3 � ���� Arinc-429
   uint16_t mfci3_svs1  : 1; //!< ����������� ����� ����-3 � ���-1 Arinc-429
   uint16_t mfci3_pnap  : 1; //!< ����������� ����� ����-3 � ����-��� Arinc-429
   uint16_t mfci3_ark   : 1; //!< ����������� ����� ����-3 � ��� Arinc-429
   uint16_t mfci3_bins1 : 1; //!< ����������� ����� ����-3 � ����-1 Arinc-429
   uint16_t mfci5_bins2 : 1; //!< ����������� ����� ����-5 � ����-2 Arinc-429
   uint16_t mfci5_svs2  : 1; //!< ����������� ����� ����-5 � ���-2 Arinc-429
   uint16_t mfci5_vim1  : 1; //!< ����������� ����� ����-5 � VIM-1 Arinc-429
   uint16_t mfci5_rvm2  : 1; //!< ����������� ����� ����-5 � ���-2 Arinc-429
   uint16_t mfci5_rsbn  : 1; //!< ����������� ����� ����-5 � ���� Arinc-429
   uint16_t mfci5_ark   : 1; //!< ����������� ����� ����-5 � ��� Arinc-429
   uint16_t mfci8_rsbn  : 1; //!< ����������� ����� ����-8 � ���� Arinc-429
   uint16_t mfci8_svs1  : 1; //!< ����������� ����� ����-8 � ���-1 Arinc-429
   uint16_t mfci8_rvm1  : 1; //!< ����������� ����� ����-8 � ���-1 Arinc-429
   uint16_t mfci8_ark   : 1; //!< ����������� ����� ����-8 � ��� Arinc-429
   uint16_t mfci8_bins1 : 1; //!< ����������� ����� ����-8 � ����-1 Arinc-429
} mfci_in_blocks_mfci_status_word_9_b_t;

//! ����� 10 ��������� ���� (��� ����� �����)
typedef struct mfci_in_blocks_mfci_status_word_10_b_t {
   uint16_t mfci8_pnap : 1;  //!< ����������� ����� ����-8 � ����-��� Arinc-429
   uint16_t            : 15; //!< ������
} mfci_in_blocks_mfci_status_word_10_b_t;

//! ��������� ��� �������������� ������� (����� 1, ��� ����� �����)
typedef struct mfci_in_blocks_selected_systems_1_b_t {
   uint16_t bis_selected_number  : 2; //!< ����� ���, ��������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t bcvm_selected_number : 2; //!< ����� ����, ��������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t bvd_selected_number  : 2; //!< ����� ���, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t kvi_selected_number  : 2; //!< ����� ���, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t ins_selected_number  : 2; //!< ����� ���, ��������� ��� �������������� (0-�/�) //(min:0 max:3)
   uint16_t svs_selected_number  : 2; //!< ����� ���, ��������� ��� �������������� (0-�/�) //(min:0 max:3)
   uint16_t rvm_selected_number  : 2; //!< ����� ���, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t kutc_selected_number : 2; //!< ����� ������ ����, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
} mfci_in_blocks_selected_systems_1_b_t;

//! ��������� ��� �������������� ������� (����� 2, ��� ����� �����)
typedef struct mfci_in_blocks_selected_systems_2_b_t {
   uint16_t esud1_ud_selected_number : 2; //!< ����� ������ �� ����-1, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud2_ud_selected_number : 2; //!< ����� ������ �� ����-2, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud3_ud_selected_number : 2; //!< ����� ������ �� ����-3, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud4_ud_selected_number : 2; //!< ����� ������ �� ����-4, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud1_sku_selected_number: 2; //!< ����� ������ ��� ����-1, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud2_sku_selected_number: 2; //!< ����� ������ ��� ����-2, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud3_sku_selected_number: 2; //!< ����� ������ ��� ����-3, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t esud4_sku_selected_number: 2; //!< ����� ������ ��� ����-4, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
} mfci_in_blocks_selected_systems_2_b_t;

//! ��������� ��� �������������� ������� (����� 3, ��� ����� �����)
typedef struct mfci_in_blocks_selected_systems_3_b_t {
   uint16_t absu_selected_number : 3; //!< ����� ������ ����, ���������� ��� �������������� (0-�/�) //(min:0 max:4)
   uint16_t bask_selected_number : 2; //!< ����� ������ ����, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t kskv_selected_number : 2; //!< ����� ������ ����, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t bupt_selected_number : 2; //!< ����� ������ ����, ���������� ��� �������������� (0-�/�) //(min:0 max:2)
   uint16_t build_block_id       : 3; //!< ����, ��� �������� ��������� ����� ������ (1�2-���, 3�4-����, 5�6-���) //(min:1 max:6 bits:4..19 lsb:1)
   uint16_t build_kfm_id         : 4; //!< ���, ��� �������� ��������� ����� ������ //(min:1 max:10 bits:4..19 lsb:1)
} mfci_in_blocks_selected_systems_3_b_t;

//! ����� ��������� ���, ���, 1�2�, 1�8� (��� ����� �����)
typedef struct mfci_in_blocks_boards_status_word_b_t {
   uint16_t pui1_integral       : 2; //!< ���-1 ������������ ��������� //(min:0 max:3)
   uint16_t pui2_integral       : 2; //!< ���-2 ������������ ��������� //(min:0 max:3)
   uint16_t mup1_integral       : 2; //!< ���-1 ������������ ��������� //(min:0 max:3)
   uint16_t mup2_integral       : 2; //!< ���-2 ������������ ��������� //(min:0 max:3)
   uint16_t board1p8m1_integral : 2; //!< 1�8�-1 ������������ ��������� //(min:0 max:3)
   uint16_t board1p8m2_integral : 2; //!< 1�8�-2 ������������ ��������� //(min:0 max:3)
   uint16_t board1p2m1_integral : 2; //!< 1�2�-1 ������������ ��������� //(min:0 max:3)
   uint16_t board1p2m2_integral : 2; //!< 1�2�-2 ������������ ��������� //(min:0 max:3)
} mfci_in_blocks_boards_status_word_b_t;

//! ����� 1 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_1_b_t {
   uint16_t integral : 2; //!< ������������ ��������� //(min:0 max:3)
   uint16_t unit01   : 2; //!< ��������� ������ � 1 (��102) //(min:0 max:3)
   uint16_t unit02   : 2; //!< ��������� ������ � 2 (��100) //(min:0 max:3)
   uint16_t unit03   : 2; //!< ��������� ������ � 3 (��100-02-03/��105-02 ���1) //(min:0 max:3)
   uint16_t unit04   : 2; //!< ��������� ������ � 4 (��100-01/��105-01) //(min:0 max:3)
   uint16_t unit05   : 2; //!< ��������� ������ � 5 (��101-01/��106-01) //(min:0 max:3)
   uint16_t unit06   : 2; //!< ��������� ������ � 6 (��101-01/��106-01) //(min:0 max:3)
   uint16_t unit07   : 2; //!< ��������� ������ � 7 (��101-01/��106-01) //(min:0 max:3)
} mfci_in_blocks_kvi_status_word_1_b_t;

//! ����� 2 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_2_b_t {
   uint16_t unit08       : 2; //!< ��������� ������ � 8 (��101-01/��106-01) //(min:0 max:3)
   uint16_t unit09       : 2; //!< ��������� ������ � 9 (��101-01/��106-01) //(min:0 max:3)
   uint16_t unit10       : 2; //!< ��������� ������ � 10 (��101-01/��106-01) //(min:0 max:3)
   uint16_t unit11       : 2; //!< ��������� ������ � 11 (��100-01/��105-01) //(min:0 max:3)
   uint16_t unit12       : 2; //!< ��������� ������ � 12 (��100-02-03/��105-02 ���2) //(min:0 max:3)
   uint16_t unit13       : 2; //!< ��������� ������ � 13 (��100) //(min:0 max:3)
   uint16_t unit14       : 2; //!< ��������� ������ � 14 (��102) //(min:0 max:3)
   uint16_t crc_mismatch : 1; //!< ������� ������������ ����������� ���� ���-1 � ���-2
   uint16_t              : 1; //!< ������
} mfci_in_blocks_kvi_status_word_2_b_t;

//! ����� 3 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_3_b_t {
   uint16_t mmp1_kvi_spacewire   : 2; //!< ��������� ����� c ������ ��� SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bis1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bis2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bcvm1_spacewire : 2; //!< ��������� ����� � ����-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bcvm2_spacewire : 2; //!< ��������� ����� � ����-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bvd1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t mmp1_bvd2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���1) //(min:0 max:3)
   uint16_t                      : 2; //!< ������
} mfci_in_blocks_kvi_status_word_3_b_t;

//! ����� 4 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_4_b_t {
   uint16_t mmp2_kvi_spacewire   : 2; //!< ��������� ����� c ������ ��� SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bis1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bis2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bcvm1_spacewire : 2; //!< ��������� ����� � ����-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bcvm2_spacewire : 2; //!< ��������� ����� � ����-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bvd1_spacewire  : 2; //!< ��������� ����� � ���-1 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t mmp2_bvd2_spacewire  : 2; //!< ��������� ����� � ���-2 SpaceWire (�� ���2) //(min:0 max:3)
   uint16_t                      : 2; //!< ������
} mfci_in_blocks_kvi_status_word_4_b_t;

//! ����� 5 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_5_b_t {
   uint16_t bvd1_mkio4_1_bus1 : 1; //!< ����������� ����� � �� ���-1 ����-4.1A
   uint16_t bvd1_mkio4_1_bus2 : 1; //!< ����������� ����� � �� ���-1 ����-4.1B
   uint16_t bvd2_mkio4_2_bus1 : 1; //!< ����������� ����� � �� ���-2 ����-4.2A
   uint16_t bvd2_mkio4_2_bus2 : 1; //!< ����������� ����� � �� ���-2 ����-4.2B
   uint16_t board1p2m1_a429   : 1; //!< ����������� ����� � 1�2�-1 Arinc-429
   uint16_t board1p2m2_a429   : 1; //!< ����������� ����� � 1�2�-2 Arinc-429
   uint16_t board1p8m1_a429   : 1; //!< ����������� ����� � 1�8�-1 Arinc-429
   uint16_t board1p8m2_a429   : 1; //!< ����������� ����� � 1�8�-2 Arinc-429
   uint16_t                   : 8; //!< ������
} mfci_in_blocks_kvi_status_word_5_b_t;

//! ����� 6 ��������� ��� (��� ����� �����)
typedef struct mfci_in_blocks_kvi_status_word_6_b_t {
   uint16_t bi1m_1_a429  : 1; //!< ����������� ����� � ��-1� � 1 Arinc-429
   uint16_t bi1m_2_a429  : 1; //!< ����������� ����� � ��-1� � 2 Arinc-429
   uint16_t bi1m_3_a429  : 1; //!< ����������� ����� � ��-1� � 3 Arinc-429
   uint16_t bi1m_4_a429  : 1; //!< ����������� ����� � ��-1� � 4 Arinc-429
   uint16_t bi1m_5_a429  : 1; //!< ����������� ����� � ��-1� � 5 Arinc-429
   uint16_t bi1m_6_a429  : 1; //!< ����������� ����� � ��-1� � 6 Arinc-429
   uint16_t bi1m_7_a429  : 1; //!< ����������� ����� � ��-1� � 7 Arinc-429
   uint16_t bi1m_8_a429  : 1; //!< ����������� ����� � ��-1� � 8 Arinc-429
   uint16_t bi1m_9_a429  : 1; //!< ����������� ����� � ��-1� � 9 Arinc-429
   uint16_t bi1m_10_a429 : 1; //!< ����������� ����� � ��-1� � 10 Arinc-429
   uint16_t bi1m_11_a429 : 1; //!< ����������� ����� � ��-1� � 11 Arinc-429
   uint16_t bi1m_12_a429 : 1; //!< ����������� ����� � ��-1� � 12 Arinc-429
   uint16_t bi4m_1_a429  : 1; //!< ����������� ����� � ��-4� � 1 Arinc-429
   uint16_t bi4m_2_a429  : 1; //!< ����������� ����� � ��-4� � 2 Arinc-429
   uint16_t bi4m_3_a429  : 1; //!< ����������� ����� � ��-4� � 3 Arinc-429
   uint16_t bi4m_4_a429  : 1; //!< ����������� ����� � ��-4� � 4 Arinc-429
} mfci_in_blocks_kvi_status_word_6_b_t;

//! �������� ������� ������ ��� (��� ��������� 1)
typedef struct mfci_in_blocks_szi_1_valid_word_b_t {
   uint16_t bis1 : 1;  //!< ������� ������� ������ ��� ��� 1
   uint16_t bis2 : 1;  //!< ������� ������� ������ ��� ��� 2
   uint16_t bgs1 : 1;  //!< ������� ������� ������ ��� ��� 1
   uint16_t bgs2 : 1;  //!< ������� ������� ������ ��� ��� 2
   uint16_t kvi1 : 1;  //!< ������� ������� ������ ��� ��� 1
   uint16_t kvi2 : 1;  //!< ������� ������� ������ ��� ��� 2
   uint16_t      : 10; //!< ������
} mfci_in_blocks_szi_1_valid_word_b_t;

//! �������� ������� ������ ��� (��� ��������� 2)
typedef struct mfci_in_blocks_szi_2_valid_word_b_t {
   uint16_t bcvm1 : 1;  //!< ������� ������� ������ ��� ���� 1
   uint16_t bcvm2 : 1;  //!< ������� ������� ������ ��� ���� 2
   uint16_t bvd1  : 1;  //!< ������� ������� ������ ��� ��� 1
   uint16_t bvd2  : 1;  //!< ������� ������� ������ ��� ��� 2
   uint16_t       : 12; //!< ������
} mfci_in_blocks_szi_2_valid_word_b_t;

//! ������� ��� ������
typedef struct mfci_in_blocks_szi_messages_b_t {
   uint16_t unit_1 : 8; //!< ������� ��� ������� ������ //(min:0 max:255)
   uint16_t unit_2 : 8; //!< ������� ��� ������� ������ //(min:0 max:255)
} mfci_in_blocks_szi_messages_b_t;

//! ����� ��������� ��������� ���
typedef struct mfci_in_tar_status_word_b_t {
   uint16_t uks_number       : 3; //!< ����� ���������� ��� (��������� �� upr_flag_word_tar_1_b_t::uks_number) //(min:1 max:4)
   uint16_t parameter_number : 4; //!< ����� ����������� ��������� (��������� �� upr_flag_word_tar_1_b_t::parameter_number) //(min:1 max:10)
   uint16_t load_status      : 2; //!< ��������� ������ ������� ��������� ���������� ��� (0-������ �� �������, 1-������ ������, 2-���������� ������) //(min:0 max:2)
   uint16_t save_status      : 2; //!< ��������� ������ ������� ��������� ���������� ��� (0-������ �� �������, 1-������ ������, 2-���������� ������) //(min:0 max:2)
   uint16_t uks1_crc_valid   : 1; //!< ������� ����������� ����� ������� ��������� ���-1
   uint16_t uks2_crc_valid   : 1; //!< ������� ����������� ����� ������� ��������� ���-2
   uint16_t uks3_crc_valid   : 1; //!< ������� ����������� ����� ������� ��������� ���-3
   uint16_t uks4_crc_valid   : 1; //!< ������� ����������� ����� ������� ��������� ���-4
   uint16_t                  : 1; //!< ������
} mfci_in_tar_status_word_b_t;

//! ����� ��������� ����� ��� ����������� ��������� ���
typedef struct mfci_in_tar_status_word_adc_b_t {
   uint16_t current_code_valid : 1; //!< ������������� �������� ���� ��� ����������� ���������
   uint16_t code_1_status      : 2; //!< ��������� ���� ��� ������� ����� 1 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_2_status      : 2; //!< ��������� ���� ��� ������� ����� 2 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_3_status      : 2; //!< ��������� ���� ��� ������� ����� 3 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_4_status      : 2; //!< ��������� ���� ��� ������� ����� 4 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_5_status      : 2; //!< ��������� ���� ��� ������� ����� 5 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_6_status      : 2; //!< ��������� ���� ��� ������� ����� 6 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t code_7_status      : 2; //!< ��������� ���� ��� ������� ����� 7 ����������� ��������� (0-��� ������, 1-�������� �� ��� ���, 2-����������� ����������) //(min:0 max:2)
   uint16_t                    : 1; //!< ������
} mfci_in_tar_status_word_adc_b_t;

//! ��� ����� ����� ������
typedef enum plan_point_type_t {
   PLAN_POINT_HIDE,            //!< ��� �� ��������� (�� ������������)
   PLAN_POINT_AERODROME,       //!< ���
   PLAN_POINT_RUNWAY_END,      //!< ����� ���
   PLAN_POINT_RUNWAY_END_VIS,  //!< ����� ��� ��� ������� ������ �� �������
   PLAN_POINT_RSBN,            //!< ��������� ����
   PLAN_POINT_VOR,             //!< ��������� VOR
   PLAN_POINT_DME,             //!< ��������� DME
   PLAN_POINT_VOR_DME,         //!< ��������� VOR+DME
   PLAN_POINT_NDB,             //!< ��������� �������
   PLAN_POINT_DPRS,            //!< ������� ��������� ������� � ��������� �����������
   PLAN_POINT_SPRS,            //!< ������� ��������� ������� � ��������� �����������
   PLAN_POINT_BPRS,            //!< ������� ��������� ������� � ��������� �����������
   PLAN_POINT_REFERENCE,       //!< ��������
   PLAN_POINT_HIGH_MANMADE,    //!< ����� ������������� �����������
   PLAN_POINT_HIGH_NATURAL,    //!< ����� ������������� �����������
   PLAN_POINT_RPU,             //!< ����� �������� ����������
   PLAN_POINT_RPC,             //!< ����� ������������� ���������
   PLAN_POINT_RPR,             //!< ����� ��������� �� �������
   PLAN_POINT_RNAVC,           //!< ����� RNAV � ������������ ����������
   PLAN_POINT_RNAVR,           //!< ����� RNAV � ���������� �� �������
   PLAN_POINT_MILEAGE,         //!< ����� ������� � ��������� ����������
   PLAN_POINT_NAV_POINT,       //!< ����� �������� (����� ��� ������������� ����, ������������ ��� ��� ��� ����)
   PLAN_POINT_DANDER_ZONE,     //!< ������� ���� (�������)
   PLAN_POINT_RESTRICTED_ZONE, //!< ��������� ���� (�������)
   PLAN_POINT_DANDER_PG,       //!< ����� ������������� ��������� ����
   PLAN_POINT_RESTRICTED_PG,   //!< ����� ������������� ������� ����
   PLAN_POINT_MP_ALT_UP,       //!< ����� ������ ������ ������
   PLAN_POINT_MP_ALT_DOWN,     //!< ����� ������ ��������
   PLAN_POINT_MP_SPEED_UP,     //!< ����� ������ �������
   PLAN_POINT_MP_SPEED_DOWN,   //!< ����� ������ ����������
   PLAN_POINT_TYPES_COUNT      //!< ���������� ����� ����� ����� ������
} plan_point_type_t;

//! ��� ������� ����������
typedef enum plan_leg_type_t {
   PLAN_LEG_HIDE,            //!< ������ ���������� (������� �� ������������)
   PLAN_LEG_STANDART,        //!< �������� �������� ���������� (�������, ������, ���������� �������, SID/STAR/APPROACH)
   PLAN_LEG_STANDART_PASSED, //!< �������� ���������� ���������� (�������, ������, ���������� �������, SID/STAR/APPROACH)
   PLAN_LEG_ALTERNATIVE,     //!< �������������� ���������� (�������� ��������, ������ ������ � ����)
   PLAN_LEG_OPERATIVE,       //!< ���������� ������������ �������� (����� �������, ������� ����������� ��������)
   PLAN_LEG_TRANSITION,      //!< ���������� ��������
   PLAN_LEG_MIS_APPROACH,    //!< ���������� ����� �� ������ ����
   PLAN_LEG_VECTORS,         //!< ���������� ��������� ����������
   PLAN_LEG_VISUAL,          //!< ���������� ����������� ������
   PLAN_LEG_SEL_ANGLE,       //!< ���������� ������ �� ��������� ����� (��������� �������� ����)
   PLAN_LEG_TYPES_COUNT      //!< ���������� ����� �������� ���������� ����� ������
} plan_leg_type_t;

//! �����-������������� 1 ����� ������� ����������
typedef struct mfci_leg_id_1_b_t {
   uint16_t legs_count : 8; //!< ���������� ����� �������� ���������� //(min:2 max:255)
   uint16_t leg_number : 8; //!< ����� ����� ������� ���������� //(min:1 max:255)
} mfci_leg_id_1_b_t;

//! �����-������������� 2 ����� ������� ����������
typedef struct mfci_leg_id_2_b_t {
   uint16_t type                   : 4; //!< ��� ���������� ������� (plan_leg_type_t) //(min:0 max:9)
   uint16_t clockwise              : 1; //!< ����������� ��������� ���������� ������� (0-������ �������, 1-�� �������)
   uint16_t azimuth                : 9; //!< ������ ���������� ������� ���������� //(min:0 max:359 lsb:1�)
   uint16_t azimuth_distance_valid : 1; //!< ������� ������ �� ������� � ����� ���������� ������� ����������
   uint16_t                        : 1; //!< ������
} mfci_leg_id_2_b_t;

//! �����-������������� 1 ����� ����� ������
typedef struct mfci_point_id_1_b_t {
   uint16_t points_count : 8; //!< ���������� ����� ����� ������ //(min:0 max:255)
   uint16_t point_number : 8; //!< ����� ����� ����� ������ //(min:1 max:255)
} mfci_point_id_1_b_t;

//! �����-������������� 2 ����� ����� ������
typedef struct mfci_point_id_2_b_t {
   uint16_t type                  : 5; //!< ��� ����� (plan_point_type_t) //(min:0 max:29)
   uint16_t selected_point_number : 8; //!< ����� ����������� ����� (0 - ��� ����������� �����) //(min:1 max:255)
   uint16_t waypoint              : 1; //!< ������� �� �������� (����� �������� ���/���/��� ��������� ��� ������������ ��������)
   uint16_t target                : 1; //!< ������� ���� (����� �������� �����)
   uint16_t operative             : 1; //!< �������������� ������������ ��������
} mfci_point_id_2_b_t;

//! �����-������������� 3 ����� ����� ������
typedef struct mfci_point_id_3_b_t {
   uint16_t time_hour       : 5; //!< ��� //(min:0 max:23)
   uint16_t time_minute     : 6; //!< ������ //(min:0 max:59)
   uint16_t time_valid      : 1; //!< ������� ��������� ������� ��� ��
   uint16_t beacon_selected : 1; //!< ������� ������������������ ����������
   uint16_t passed          : 1; //!< ������� ����������� �� �������� (����� �������� ���������� ���/���/��� ��������� ��������)
   uint16_t bpm1            : 1; //!< ������� ���-1 ������� ������� ��������
   uint16_t ipom            : 1; //!< ������� ���� ������� ������� ��������
} mfci_point_id_3_b_t;

//! �����-������������� 4 ����� ����� ������
typedef struct mfci_point_id_4_b_t {
   uint16_t bp_number : 8; //!< ����� � ������� ���, ������������ � ��� �� (0 - ����� ��� � �������) //(min:0 max:150)
   uint16_t speed_low : 8; //!< �������� �������� �������� ����� �������� ��� ���������� ��� ������ �������/���������� (0 - �� ������, ������� �������) //(min:0 max:3500 bits:4..19 lsb:1 ��/�)
} mfci_point_id_4_b_t;

//! �����-������������� 5 ����� ����� ������
typedef struct mfci_point_id_5_b_t {
   uint16_t speed_high        : 4;  //!< �������� �������� �������� ����� �������� ��� ���������� ��� ������ �������/���������� (0 - �� ������, ������� �������) //(min:0 max:3500 bits:4..19 lsb:1 ��/�)
   uint16_t fuel              : 11; //!< �������� ������� ������� ����� �������� ��� ���������� (0 - �� �����) //(min:0 max:175 bits:4..19 lsb:0.1 �)
   uint16_t waypoint_selected : 1;  //!< ������� ������������ ��� �������� ��������� ��������
} mfci_point_id_5_b_t;

//! �����-������������� 1 ����� ����� ������
typedef struct mfci_single_point_id_1_b_t {
   uint16_t single_point_number : 11; //!< ����� ����� ����� ������ //(min:1 max:2047)
   uint16_t type                : 5;  //!< ��� ����� (plan_point_type_t) //(min:0 max:29)
} mfci_single_point_id_1_b_t;

//! �����-������������� 2 ����� ����� ������
typedef struct mfci_single_point_id_2_b_t {
   uint16_t single_points_count : 11; //!< ���������� ����� ����� ������ //(min:0 max:2047)
   uint16_t beacon_selected     : 1;  //!< ������� ������������������ ����������
   uint16_t last_point          : 1;  //!< ������� ��������� ����� ������������� ����
   uint16_t                     : 3;  //!< ������
} mfci_single_point_id_2_b_t;

//! �����-������������� 1 �������� ���������� ������ �� �������� ������� �������� ��� �������
typedef struct mfci_active_path_legs_id_1_b_t {
   uint16_t legs_count      : 4; //!< ���������� �������� ����������, ������� ����������� ����� (0-��������� �����������) //(min:0 max:15)
   uint16_t segment_number  : 2; //!< ����� �������� �������� ���������� (0-��������� �����������) //(min:0 max:3)
   uint16_t leg_1_clockwise : 1; //!< ����������� ��������� �� ������� 1 (0-������ �������, 1-�� �������)
   uint16_t leg_2_clockwise : 1; //!< ����������� ��������� �� ������� 2 (0-������ �������, 1-�� �������)
   uint16_t leg_3_clockwise : 1; //!< ����������� ��������� �� ������� 3 (0-������ �������, 1-�� �������)
   uint16_t leg_4_clockwise : 1; //!< ����������� ��������� �� ������� 4 (0-������ �������, 1-�� �������)
   uint16_t leg_5_clockwise : 1; //!< ����������� ��������� �� ������� 5 (0-������ �������, 1-�� �������)
   uint16_t type_1          : 4; //!< ��� ���������� ������� ��� ����� 1 (plan_leg_type_t) //(min:0 max:9)
   uint16_t                 : 1; //!< ������
} mfci_active_path_legs_id_1_b_t;

//! �����-������������� 2 �������� ���������� ������ �� �������� ������� �������� ��� �������
typedef struct mfci_active_path_legs_id_2_b_t {
   uint16_t type_2 : 4; //!< ��� ���������� ������� ��� ����� 2 (plan_leg_type_t) //(min:0 max:9)
   uint16_t type_3 : 4; //!< ��� ���������� ������� ��� ����� 3 (plan_leg_type_t) //(min:0 max:9)
   uint16_t type_4 : 4; //!< ��� ���������� ������� ��� ����� 4 (plan_leg_type_t) //(min:0 max:9)
   uint16_t type_5 : 4; //!< ��� ���������� ������� ��� ����� 5 (plan_leg_type_t) //(min:0 max:9)
} mfci_active_path_legs_id_2_b_t;

//! ������� ������� ������� ��������� �����
typedef struct fovb_section_b_t {
   uint32_t abscissa : 12; //!< ���������� ������ ������� �� ���������������� ��� �������� (0�4095 - -100�100 ��) //(min:-100 max:100)
   uint32_t ordinate : 12; //!< ���������� ������ ������� �� ���������� ��� �������� (0�4095 - -100�100 ��) //(min:-100 max:100)
   uint32_t size     : 5;  //!< ������ ������� (0�31 - 0�1 ��, 0 - ������� ���������� �������) //(min:0 max:1)
   uint32_t          : 3;  //!< ������
} fovb_section_b_t;

//! ��������� ������� ������� ��������� �����
typedef struct fovb_sections_id_b_t {
   uint16_t zone_id          : 8; //!< ������������� ��������� ����� //(min:0 max:255)
   uint16_t section_start_id : 4; //!< ������� 4 ���� ������ ������� �������� ������� ������������ ������� ��������� ����� //(min:0 max:14)
   uint16_t sections_count   : 3; //!< ���������� ������� � ������� ������������ ������� ��������� ����� //(min:0 max:6)
   uint16_t                  : 1; //!< ������
} fovb_sections_id_b_t;

//! ��������� ��������� ����� (����� 1)
typedef struct fovb_trail_id_1_b_t {
   uint32_t tail_section_abscissa : 12; //!< ���������� ������ ���������� ������� �� ���������������� ��� �������� (0�4095 - -100�100 ��) //(min:-100 max:100)
   uint32_t tail_section_ordinate : 12; //!< ���������� ������ ���������� ������� �� ���������� ��� �������� (0�4095 - -100�100 ��) //(min:-100 max:100)
   uint32_t zone_id               : 8;  //!< ������������� ��������� ����� //(min:0 max:255)
} fovb_trail_id_1_b_t;

//! ��������� ��������� ����� (����� 2)
typedef struct fovb_trail_id_2_b_t {
   uint16_t tail_section_id   : 4; //!< ������� 4 ���� ������ ���������� ������� ��������� ����� //(min:0 max:14)
   uint16_t color             : 2; //!< ��������� ��������� ����� (0-�� ����������, 1-�����, 2-������, 3-�������) //(min:0 max:3)
   uint16_t tail_section_size : 5; //!< ������ ���������� ������� (0�31 - 0�1 ��, 0 - ������� ���������� �������) //(min:0 max:1)
   uint16_t                   : 5; //!< ������
} fovb_trail_id_2_b_t;

//! ����� ������������� ������������ ��������� ����
typedef struct fovb_rates_b_t {
   uint16_t rate_min : 8; //!< [����-�003] ������������� ������������ �������� ����������� (0�255 - -83�83 �/�) //(min:-83 max:83)
   uint16_t rate_max : 8; //!< [����-�004] ������������� ������������ �������� ������������ (0�255 - -83�83 �/�) //(min:-83 max:83)
} fovb_rates_b_t;

//! ������ � ������ �� ������/������� (������ � ����������� ����� �� ������/�������)
typedef struct mfci_in_blocks_crc_unit_b_t {
   uint8_t  dopstr[24];  //!< �������������� ������
   uint16_t verdata[2];  //!< ��������� � ������ (��������) //(min:1 max:99 lsb:1)
   uint8_t  datestr[12]; //!< ���� � ������� DD.MM.YYYY
   uint32_t crc;         //!< ����������� ����� //(min:0 max:4294967295 lsb:1)
} mfci_in_blocks_crc_unit_b_t;

//! ����� 1 ������������� ������ � ������ �� ������/�������
typedef struct mfci_in_blocks_crc_mkio_id_1_b_t {
   uint16_t mode   : 6; //!< ����� ������ ����� ����� (mfci_blocks_mode_t, ���������)
   uint16_t system : 6; //!< ��������� ������� (mfci_blocks_system_t, ���������)
   uint16_t        : 4; //!< ������
} mfci_in_blocks_crc_mkio_id_1_b_t;

//! ����� 2 ������������� ������ � ������ �� ������/�������
typedef struct mfci_in_blocks_crc_mkio_id_2_b_t {
   uint16_t mfci1  : 1; //!< ������ ������������� ��� ���� 1
   uint16_t mfci2  : 1; //!< ������ ������������� ��� ���� 2
   uint16_t mfci3  : 1; //!< ������ ������������� ��� ���� 3
   uint16_t mfci4  : 1; //!< ������ ������������� ��� ���� 4
   uint16_t mfci5  : 1; //!< ������ ������������� ��� ���� 5
   uint16_t mfci6  : 1; //!< ������ ������������� ��� ���� 6
   uint16_t mfci7  : 1; //!< ������ ������������� ��� ���� 7
   uint16_t mfci8  : 1; //!< ������ ������������� ��� ���� 8
   uint16_t mfci9  : 1; //!< ������ ������������� ��� ���� 9
   uint16_t mfci10 : 1; //!< ������ ������������� ��� ���� 10
   uint16_t mfci11 : 1; //!< ������ ������������� ��� ���� 11
   uint16_t        : 5; //!< ������
} mfci_in_blocks_crc_mkio_id_2_b_t;

//! ����� 1 ��������� ����
typedef struct mfci_status_word_1_b_t {
   uint16_t number      : 4; //!< ����� ���� //(min:0 max:11)
   uint16_t             : 4; //!< ������
   uint16_t vpr_mvs     : 2; //!< ��������� 1 ��������� ������ ��������� ��� ���� (1-���/���, 2-���) //(min:0 max:2)
   uint16_t qfe_std_qnh : 2; //!< ��������� 2 ��������� ������ ��������� ��� ���� (1-QFE, 2-���, 3-QNH) //(min:0 max:3)
   uint16_t             : 4; //!< ������
} mfci_status_word_1_b_t;

//! ����� 2 ��������� ����
typedef struct mfci_status_word_2_b_t {
   uint16_t format_1 : 6; //!< ���� 1 (mfci_format_t) //(min:0 max:31)
   uint16_t format_2 : 6; //!< ���� 2 (mfci_format_t) //(min:0 max:31)
   uint16_t mv       : 1; //!< ����������� �� (��24)
   uint16_t mg24     : 1; //!< ����������� ��24 (��25)
   uint16_t mg428    : 1; //!< ����������� ��428 (��428)
   uint16_t mn       : 1; //!< ����������� ��100
} mfci_status_word_2_b_t;

//! ����� 3 ��������� ����
typedef struct mfci_status_word_3_b_t {
   uint16_t buttons        : 1; //!< ����������� ������
   uint16_t brightness     : 1; //!< ����������� ����������� �������
   uint16_t contrast       : 1; //!< ����������� ����������� �������������
   uint16_t mode_reserve   : 1; //!< ��������� ����� ������ (����� ������ �� ����)
   uint16_t mode_emergency : 1; //!< ��������� ����� ������ (����� ������ �� Arinc-429)
   uint16_t bis_mkio31     : 1; //!< ����������� ����� � ��� �� ����-3.1
   uint16_t bcvm_mkio32    : 1; //!< ����������� ����� � ���� �� ����-3.2
   uint16_t bgs1_arinc818  : 1; //!< ����������� ����� � ���-1 Arinc-818
   uint16_t bgs2_arinc818  : 1; //!< ����������� ����� � ���-2 Arinc-818
   uint16_t bins_arinc429  : 1; //!< ����������� ����� � ���� Arinc-429
   uint16_t svs_arinc429   : 1; //!< ����������� ����� � ��� Arinc-429
   uint16_t ark_arinc429   : 1; //!< ����������� ����� � ��� Arinc-429
   uint16_t rsbn_arinc429  : 1; //!< ����������� ����� � ���� Arinc-429
   uint16_t vim_arinc429   : 1; //!< ����������� ����� � VIM Arinc-429
   uint16_t rvm_arinc429   : 1; //!< ����������� ����� � ��� Arinc-429
   uint16_t pnap_arinc429  : 1; //!< ����������� ����� � ����-��� Arinc-429
} mfci_status_word_3_b_t;

//! ����� 1 �������� ��� (����� ��� ���� ������ ����)
typedef struct upr_flag_word_common_1_b_t {
   uint16_t valid_data     : 1; //!< ������������� ���� �������� ���
   uint16_t menu           : 1; //!< ������� ����� ��������� ���� (����)
   uint16_t obrm           : 1; //!< ������� ����� ��������� ���������� ���������� ����� (����)
   uint16_t dvs_next_page  : 1; //!< ������ �������� ������� ������������ ��/�
   uint16_t sost_next_page : 1; //!< ������ �������� ������� ������������ ����
   uint16_t sign_next_page : 1; //!< ������ �������� ������� ������������ ����
   uint16_t vor1           : 1; //!< [���-�001] ������� ����� ��������� VOR1
   uint16_t vor2           : 1; //!< [���-�002] ������� ����� ��������� VOR2
   uint16_t ark            : 1; //!< [���-�003] ������� ����� ��������� A��
   uint16_t use_ans        : 1; //!< [���-�004] ������� ����� ������������� �����, ����� � ������� ���
   uint16_t change_ins     : 1; //!< [���-�005] ������� ����� ������������� ���������� ��������� ���
   uint16_t rsbn           : 1; //!< [���-�006] ������� ����� ��������� ����
   uint16_t landing        : 1; //!< [���-�007] ������� ����� ��������� �������
   uint16_t change_svs     : 1; //!< [���-�008] ������� ����� ������������� ���������� ��������� ���
   uint16_t brit           : 1; //!< [���-�009] ������� ����� ��������� ����
   uint16_t frts           : 1; //!< [���-�010] ������� ����� ��������� "F���" (������� ��������� ���)
} upr_flag_word_common_1_b_t;

//! ����� 2 �������� ��� (����� ��� ���� ������ ����)
typedef struct upr_flag_word_common_2_b_t {
   uint16_t hpa              : 1; //!< [���-�021] ������� ����� ��������� ������ ��������� "���"
   uint16_t mach             : 1; //!< [���-�023] ������� ����� ��������� ����� �
   uint16_t msgt             : 1; //!< [���-�024] ������� ����� ��������� "��G�" (����� �������� � ���� �������)
   uint16_t sev              : 1; //!< [���-�031] ������� ����� ��������� ��� (���������� �� �����)
   uint16_t rpu              : 1; //!< [���-�032] ������� ����� ��������� ��� (����� �������� ����������)
   uint16_t rts              : 1; //!< [���-�033] ������� ����� ��������� ��� (��������� ���������� ���)
   uint16_t tpm              : 1; //!< [���-�034] ������� ����� ��������� T�� (���������� ����� ��� � ����� ������� ���)
   uint16_t topl             : 1; //!< [���-�035] ������� ����� ��������� ���� (������� ������� � ���)
   uint16_t hv               : 1; //!< [���-�036] ������� ����� ��������� H/V (�������� �������� � ������ ������� ���)
   uint16_t vt               : 1; //!< [���-�037] ������� ����� ��������� �� (��������� ������)
   uint16_t aer              : 1; //!< [���-�038] ������� ����� ��������� ��� (�������� ���������)
   uint16_t redundant_values : 1; //!< [���-�061] ������� ����� ��������� "T���" (��������� ������ � �������� ����� � �������� �����)
   uint16_t zones            : 1; //!< [���-�065] ������� ����� ��������� ���� (������� � ��������� ����)
   uint16_t landing_sys      : 3; //!< [���] ���������� �������, ��������� ��� ��������� //(min:0 max:5)
} upr_flag_word_common_2_b_t;

//! ����� 3 �������� ��� (����� ��� ���� ������ ����)
typedef struct upr_flag_word_common_3_b_t {
   uint16_t pui_cursor_position : 6; //!< ��������� ������� ��� //(min:0 max:40)
   uint16_t sign_hint_change    : 1; //!< ������ ���������/���������� ����������� ��������� ������������
   uint16_t sost_reset          : 1; //!< ������� ����� �������� ����
   uint16_t sign_show           : 1; //!< ������� ����������� ���� ����
   uint16_t markpoints          : 1; //!< [���] ������� ����� ��������� ���� (������ ��������� ������ � ������� ������)
   uint16_t contrail            : 1; //!< [���-�040] ������� ����� ��������� ���������� �� ��������� �����
   uint16_t tn                  : 1; //!< [���-�060] ������� ����� ��������� ����������� ��������� ������� � ���������� �� ����
   uint16_t takeoff_landing_run : 1; //!< [���-�062����-�063] ������� ����� ��������� "L����" (��������� ����� �������)
   uint16_t set_zero_alt        : 1; //!< [���-�011] ������� �������� ������� ����������
   uint16_t set_unreserved_pui  : 1; //!< [���] ������� ��������� ��� ���������� ������������� ����� � ���
   uint16_t format_2_flag       : 1; //!< ������� ���������� ������� ����� ���������������� ����
} upr_flag_word_common_3_b_t;

//! ����� 4 �������� ��� (����� ��� ���� ������ ����)
typedef struct upr_flag_word_common_4_b_t {
   uint16_t grey_background : 1; //!< ������������� ������ ���� ������ ������� (���)
   uint16_t bgs_channel     : 1; //!< ����� ���, ����� �������� ��������� (0 - ���-1, 1 - ���-2) //(min:0 max:1)
   uint16_t brightness      : 6; //!< �������� ������� ������ ���� //(min:0 max:63)
   uint16_t show_brightness : 1; //!< ������� ����������� ����� �������
   uint16_t contrast        : 5; //!< �������� ������������� ������ ���� //(min:0 max:31)
   uint16_t show_contrast   : 1; //!< ������� ����������� ����� �������������
   uint16_t int_test        : 1; //!< ����� ����� �����������
} upr_flag_word_common_4_b_t;

//! ����� � ���������� ����� �������� ����
typedef struct mfci_sost_reset_b_t {
   uint16_t mfci1_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 1
   uint16_t mfci2_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 2
   uint16_t mfci3_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 3
   uint16_t mfci4_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 4
   uint16_t mfci5_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 5
   uint16_t mfci6_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 6
   uint16_t mfci7_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 7
   uint16_t mfci8_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 8
   uint16_t mfci9_sost_reset  : 1; //!< ������� ����� �������� ���� �� ���� 9
   uint16_t mfci10_sost_reset : 1; //!< ������� ����� �������� ���� �� ���� 10
   uint16_t mfci11_sost_reset : 1; //!< ������� ����� �������� ���� �� ���� 11
   uint16_t                   : 5; //!< ������
} mfci_sost_reset_b_t;

//! ����� � ���������� ����������� ���� ����
typedef struct mfci_sign_show_b_t {
   uint16_t mfci6_sign_show  : 1;  //!< ������� ����������� ���� ���� �� ���� 6
   uint16_t mfci7_sign_show  : 1;  //!< ������� ����������� ���� ���� �� ���� 7
   uint16_t mfci8_sign_show  : 1;  //!< ������� ����������� ���� ���� �� ���� 8
   uint16_t mfci9_sign_show  : 1;  //!< ������� ����������� ���� ���� �� ���� 9
   uint16_t mfci10_sign_show : 1;  //!< ������� ����������� ���� ���� �� ���� 10
   uint16_t mfci11_sign_show : 1;  //!< ������� ����������� ���� ���� �� ���� 11
   uint16_t                  : 10; //!< ������
} mfci_sign_show_b_t;

//! ����� �������� ��� ��� ����� ����
typedef struct upr_flag_word_plan_b_t {
   uint16_t grid        : 1;  //!< [���-�022] ��������� ���������� ����� (����)
   uint16_t mup         : 1;  //!< [���-�039] ����� ��������� ��� � ����� ����
   uint16_t fixed       : 1;  //!< [���-�064] ������� �������������� ������ �������� � ���������� �������� (����)
   uint16_t scale_value : 3;  //!< [���-�001/���-�038] ������� ���� (mfci_scale_t)
   uint16_t             : 10; //!< ������
} upr_flag_word_plan_b_t;

//! ����� �������� ��� ��� ������ �����, �����-���� (����� 1)
typedef struct upr_flag_word_kart_1_b_t {
   uint16_t mup           : 1; //!< [���-�039] ����� ��������� ��� � ����� ����
   uint16_t scale_value   : 3; //!< [���-�001/���-�038] ������� ���� (mfci_scale_t)
   uint16_t nstr_submenu  : 3; //!< [���] ������� �����-���� (0-���, 1-��, 2-���, 3-��, 4-���, 5-���) //(min:0 max:5)
   uint16_t mrst          : 1; //!< [����-�001] ���� (���� ���)
   uint16_t no_aer        : 1; //!< [����-�007] ��: ��� (������������� ����������: ���� ���������� � ������ ���������/��������)
   uint16_t no_scheme_out : 1; //!< [����-�008] ��: ����� ������ (������������� ����������: ���� ����� ������ �� ������ ���������/��������)
   uint16_t no_scheme_in  : 1; //!< [����-�009] ��: ����� ������� (������������� ����������: ���� ����� ������� � ������ ��������� � ����� �������)
   uint16_t no_rts        : 1; //!< [����-�010] ��: ��� (������������� ����������: ���� ���������������� ������� ��������� � �������)
   uint16_t no_ovd_routes : 1; //!< [����-�011] ��: �������� ��� (������������� ����������: ���� ��������� ����������� ���������� ��������)
   uint16_t no_es_orvd    : 1; //!< [����-�012] ��: �� ���� (������������� ����������: ���� ������ ��� ������ ������� ����������� ���������� ��������)
   uint16_t no_excl_zones : 1; //!< [����-�013] ��: ��������� ���� (������������� ����������: ���� ��������� ���, ������� ���� � ��� ����������� �������)
   uint16_t no_spec_zones : 1; //!< [����-�014] ��: ����������� ���� (������������� ����������: ���� ����������� ���)
} upr_flag_word_kart_1_b_t;

//! ����� �������� ��� ��� ������ �����, �����-���� (����� 2)
typedef struct upr_flag_word_kart_2_b_t {
   uint16_t no_obstacle    : 1; //!< [����-�015] ��: ����������� (������������� ����������: ���� ������������ � ������������� �����������)
   uint16_t oto_pvo        : 1; //!< [����-�016] ���: ��� (����������-����������� ����������: ���� ���������������� ������� ����������)
   uint16_t oto_vms        : 1; //!< [����-�017] ���: ��� (����������-����������� ����������: ���� ������-������� ��� ����������)
   uint16_t oto_dang_zones : 1; //!< [����-�018] ���: ���� ����� (����������-����������� ����������: ���� ��� �����)
   uint16_t oto_marks      : 1; //!< [����-�019] ���: ������-�������� (����������-����������� ����������: ���� ������� ���������, ����� � ��� � ��������� �������)
   uint16_t oto_lines      : 1; //!< [����-�020] ���: ����� (����������-����������� ����������: ���� ����� ��������������� �����)
   uint16_t po_polygones   : 1; //!< [����-�021] ��: �������� (���������������� ����������: ���� �������� � ��������� �������, �������, ���������)
   uint16_t po_zones       : 1; //!< [����-�022] ��: ���� (���������������� ����������: ���� ������ ���)
   uint16_t ekm            : 2; //!< [����-�023�����-�025] ��� (��� ����������� ����� ���������: 0-�������, 1-������, 2-�������� ������)
   uint16_t w              : 2; //!< [����-�029�����-�032] ������ W (������ ������� ��������: 0-���, 1-60 ���, 2-90 ���, 3-120 ���)
   uint16_t track          : 2; //!< [����-�033�����-�036] ���� (����� ������� ��������: 0-���, 1-15 ���, 2-30 ���, 3-���������)
   uint16_t kart           : 1; //!< [����-�038] ���� (��������� ����������� �����, ���� �������)
   uint16_t sevr           : 1; //!< [����-�039] ���� (���������� ����� �� �����)
} upr_flag_word_kart_2_b_t;

//! ����� �������� ��� ��� ������ �����, �����-���� (����� 3)
typedef struct upr_flag_word_kart_3_b_t {
   uint16_t nav           : 1; //!< [����-�047] ��� (���� �������������� �������� ����������, ����, ���, ����� � �.�.)
   uint16_t fmt           : 2; //!< [����-�048�����-�050] ������ ��������� (0-���-��.�, 1-���-��'��", 2-��ð��'��.��") //(min:0 max:2)
   uint16_t relief        : 1; //!< [����-�051] ������ (������� �������)
   uint16_t no_dang_zones : 1; //!< [����-�052] ��: ������� ���� (���� ��������� ��� �������)
   uint16_t move_vozv     : 1; //!< ������� �� ������ ���� (������� ������ ������ �����)
   uint16_t move_up       : 1; //!< ������� �� ������ "������� �����" (������� ������ ����� �����)
   uint16_t move_down     : 1; //!< ������� �� ������ "������� ����" (������� ������ ����� ����)
   uint16_t move_left     : 1; //!< ������� �� ������ "������� �����" (������� ������ ����� �����)
   uint16_t move_right    : 1; //!< ������� �� ������ "������� ������" (������� ������ ����� ������)
   uint16_t               : 6; //!< ������
} upr_flag_word_kart_3_b_t;

//! ����� �������� ��� ��� ����� ���� (����� 1)
typedef struct upr_flag_word_grup_1_b_t {
   uint16_t scale       : 3; //!< [���] ������� (mfci_group_scale_t)
   uint16_t row_1_group : 3; //!< ����� ������� ������ ��� ������ ���� ������� ���������� ���������� //(min:0 max:4)
   uint16_t row_2_group : 3; //!< ����� ������� ������ ��� ������� ���� ������� ���������� ���������� //(min:0 max:4)
   uint16_t             : 7; //!< ������
} upr_flag_word_grup_1_b_t;

//! ����� �������� ��� ��� ����� ���� (����� 2)
typedef struct upr_flag_word_grup_2_b_t {
   uint16_t column_1_number : 5; //!< ����� ��������, ������������� � ������� 1 ������� //(min:0 max:16)
   uint16_t column_2_number : 5; //!< ����� ��������, ������������� � ������� 2 ������� //(min:0 max:16)
   uint16_t column_3_number : 5; //!< ����� ��������, ������������� � ������� 3 ������� //(min:0 max:16)
   uint16_t                 : 1; //!< ������
} upr_flag_word_grup_2_b_t;

//! ����� �������� ��� ��� ����� ���� (����� 3)
typedef struct upr_flag_word_grup_3_b_t {
   uint16_t column_4_number : 5; //!< ����� ��������, ������������� � ������� 4 ������� //(min:0 max:16)
   uint16_t column_5_number : 5; //!< ����� ��������, ������������� � ������� 5 ������� //(min:0 max:16)
   uint16_t column_6_number : 5; //!< ����� ��������, ������������� � ������� 6 ������� //(min:0 max:16)
   uint16_t                 : 1; //!< ������
} upr_flag_word_grup_3_b_t;

//! ����� �������� ��� ��� ����� ���-����
typedef struct upr_flag_word_suo_iipa_b_t {
   uint16_t : 16; //!< ������
} upr_flag_word_suo_iipa_b_t;

//! ����� �������� ��� ��� ����� ���-504/506 (����� 1)
typedef struct upr_flag_word_suo_50x_1_b_t {
   uint16_t scale_2_value   : 3; //!< [���] ������� ���� �� �������� 2 (mfci_scale_t)
   uint16_t scale_3_value   : 4; //!< [���] ������� ���� �� �������� 3 (mfci_scale_t)
   uint16_t signals_index   : 5; //!< [���] ������ ������ ������������ ��������� ���� 3 ���.1 //(min:0 max:29)
   uint16_t select_bz       : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.1] "������� �� (���)"
   uint16_t select_hit_time : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.2] "������� ����� ����� (���)"
   uint16_t bz_cancelled    : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.3] "������ �� (���)"
   uint16_t bz_missed       : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.4] "� �� ��� �� (���)"
} upr_flag_word_suo_50x_1_b_t;

//! ����� �������� ��� ��� ����� ���-504/506 (����� 2)
typedef struct upr_flag_word_suo_50x_2_b_t {
   uint16_t mpu_locked      : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.5] "������ ��������� ��� �� 5 �����"
   uint16_t set_roll_5      : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.6] "������� ���� �� 5�"
   uint16_t set_pitch_5     : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.7] "�������� ������ �� -5� �� +15�"
   uint16_t set_mach_08     : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.8] "������� ����� ���� �� 0.8"
   uint16_t mach            : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.9] "������� ����� ����"
   uint16_t alt_up          : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.10] "������� ������"
   uint16_t alt_down        : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.11] "������� ������"
   uint16_t wrong_unit_type : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.12] "��� ������� �� ������������� ��"
   uint16_t drop_fail       : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.13] "�������"
   uint16_t emergency_drop  : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.14] "��������� ����� ������� �������"
   uint16_t pz_cancelled    : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.15] "������ ���������� �� (���)"
   uint16_t rear_spus_fail  : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.16] "����� ���� ������� �����������"
   uint16_t front_spus_fail : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.17] "����� ���� ��������� �����������"
   uint16_t rear_fail       : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.18] "����� ������� �����������"
   uint16_t front_fail      : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.19] "����� ��������� �����������"
   uint16_t rear_mpu_fail   : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.20] "����� ��� ������� �����������"
} upr_flag_word_suo_50x_2_b_t;

//! ����� �������� ��� ��� ����� ���-504/506 (����� 3)
typedef struct upr_flag_word_suo_50x_3_b_t {
   uint16_t front_mpu_fail    : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.21] "����� ��� ��������� �����������"
   uint16_t rear_skv_manual   : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.22] "������ ���������� ��� ������� �����������"
   uint16_t front_skv_manual  : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.23] "������ ���������� ��� ��������� �����������"
   uint16_t wrong_bz          : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.24] "������������ ��"
   uint16_t bz_loading_fail   : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.25] "���� �������� ��"
   uint16_t load_route        : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.26] "����� ��"
   uint16_t check_units       : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.27] "������� ��������� �������"
   uint16_t set_hit_time      : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.28] "����� ����� �����"
   uint16_t set_orzp          : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.29] "������� ���� ����� ������� ���"
   uint16_t set_align_mode    : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.30] "������ ����� ����������"
   uint16_t rear_spus_res     : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.31] "��������� ����� ���� ������� �����������"
   uint16_t front_spus_res    : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.32] "��������� ����� ���� ��������� �����������"
   uint16_t mode_finished     : 1; //!< [���] ������� �������������� ������� [��-504/506-�068.33] "����� ������" (������ �� ���� � ���)
   uint16_t show_course_scale : 1; //!< [���] ���������� ����� �����
   uint16_t show_nav_route    : 1; //!< [���] ���������� ������� ������ � ������������� ������ ����� ��������
   uint16_t show_rzp          : 1; //!< [���] ���������� ���������� ����� �/� ��� (������ �� ���� � ���)
} upr_flag_word_suo_50x_3_b_t;

//! ����� �������� ��� ��� ����� ���-504/506 (����� 4, � ��� ��)
typedef struct upr_flag_word_suo_50x_4_b_t {
   uint16_t page_number     : 2; //!< [���] ����� �������� ����� ���-504/506 (������ �� ���� � ���) //(min:1 max:3)
   uint16_t show_rvp        : 1; //!< [���] ���������� ��� (������ �� ���� � ���)
   uint16_t show_orzp       : 1; //!< [���] ���������� ���������� ����� �/� ���� � ����������� ������ ���� (������ �� ���� � ���)
   uint16_t use_ti          : 1; //!< [���] ������������ ������� ��������� � ����� �������� (����� "���", ������ �� ���� � ���)
   uint16_t command_counter : 2; //!< [���] ������� ������ ��� ��� �� (������ �� ���� � ��� ��) //(min:0 max:3)
   uint16_t command         : 2; //!< [���] ������� (������ �� ���� � ��� ��, iupk_aur_command_t) //(min:0 max:2)
   uint16_t                 : 7; //!< ������
} upr_flag_word_suo_50x_4_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1)
typedef struct upr_flag_word_rls_1_b_t {
   uint16_t btn_code; //!< ��� ������� ������ ��� �� ��� (0-�� ������) //(min:0 max:40)
} upr_flag_word_rls_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2)
typedef struct upr_flag_word_rls_2_b_t {
   uint16_t mup   : 1;  //!< [���-�039] ����� ��������� ��� � ����� ����
   uint16_t menu  : 1;  //!< ��������� ����������� ���� ������ ����
   uint16_t map   : 1;  //!< ��������� ����������� ���� ����-���
   uint16_t route : 1;  //!< ��������� ����������� ���� �������
   uint16_t       : 12; //!< ������
} upr_flag_word_rls_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1, ������� �� ������ ���)
typedef struct upr_flag_word_kvr_1_b_t {
   uint16_t button_16 : 1; //!< ������� �� ������ 16
   uint16_t button_15 : 1; //!< ������� �� ������ 15
   uint16_t button_14 : 1; //!< ������� �� ������ 14
   uint16_t button_13 : 1; //!< ������� �� ������ 13
   uint16_t button_12 : 1; //!< ������� �� ������ 12
   uint16_t button_11 : 1; //!< ������� �� ������ 11
   uint16_t button_10 : 1; //!< ������� �� ������ 10
   uint16_t button_9  : 1; //!< ������� �� ������ 9
   uint16_t button_8  : 1; //!< ������� �� ������ 8
   uint16_t button_7  : 1; //!< ������� �� ������ 7
   uint16_t button_6  : 1; //!< ������� �� ������ 6
   uint16_t button_5  : 1; //!< ������� �� ������ 5
   uint16_t button_4  : 1; //!< ������� �� ������ 4
   uint16_t button_3  : 1; //!< ������� �� ������ 3
   uint16_t button_2  : 1; //!< ������� �� ������ 2
   uint16_t button_1  : 1; //!< ������� �� ������ 1
} upr_flag_word_kvr_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2, ������� �� ������ ���)
typedef struct upr_flag_word_kvr_2_b_t {
   uint16_t button_32 : 1; //!< ������� �� ������ 32
   uint16_t button_31 : 1; //!< ������� �� ������ 31
   uint16_t button_30 : 1; //!< ������� �� ������ 30
   uint16_t button_29 : 1; //!< ������� �� ������ 29
   uint16_t button_28 : 1; //!< ������� �� ������ 28
   uint16_t button_27 : 1; //!< ������� �� ������ 27
   uint16_t button_26 : 1; //!< ������� �� ������ 26
   uint16_t button_25 : 1; //!< ������� �� ������ 25
   uint16_t button_24 : 1; //!< ������� �� ������ 24
   uint16_t button_23 : 1; //!< ������� �� ������ 23
   uint16_t button_22 : 1; //!< ������� �� ������ 22
   uint16_t button_21 : 1; //!< ������� �� ������ 21
   uint16_t button_20 : 1; //!< ������� �� ������ 20
   uint16_t button_19 : 1; //!< ������� �� ������ 19
   uint16_t button_18 : 1; //!< ������� �� ������ 18
   uint16_t button_17 : 1; //!< ������� �� ������ 17
} upr_flag_word_kvr_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 3, ������� �� ������ ���)
typedef struct upr_flag_word_kvr_3_b_t {
   uint16_t mfci_type : 7; //!< ��� ���� (125-�������������, 126-���������������) //(min:125 max:126)
   uint16_t           : 1; //!< ������
   uint16_t button_40 : 1; //!< ������� �� ������ 40
   uint16_t button_39 : 1; //!< ������� �� ������ 39
   uint16_t button_38 : 1; //!< ������� �� ������ 38
   uint16_t button_37 : 1; //!< ������� �� ������ 37
   uint16_t button_36 : 1; //!< ������� �� ������ 36
   uint16_t button_35 : 1; //!< ������� �� ������ 35
   uint16_t button_34 : 1; //!< ������� �� ������ 34
   uint16_t button_33 : 1; //!< ������� �� ������ 33
} upr_flag_word_kvr_3_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 4)
typedef struct upr_flag_word_kvr_4_b_t {
   uint16_t mup       : 1;  //!< [���-�039] ����� ��������� ��� � ����� ����
   uint16_t rls_layer : 1;  //!< ��������� c��� ��� (�� ���)
   uint16_t rtr_layer : 1;  //!< ��������� c��� ��� (�� ���)
   uint16_t           : 13; //!< ������
} upr_flag_word_kvr_4_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1)
typedef struct upr_flag_word_asu_1_b_t {
   uint16_t asu_format                : 4; //!< ������� ��� (����� ���������������� ������ ���) //(min:0 max:8)
   uint16_t auto_mode_active          : 1; //!< ������� ���������� ������ ������������������ ���������
   uint16_t use_mfpu                  : 1; //!< ������� ����������� ����
   uint16_t address_prepare           : 1; //!< ������� ������ ��� ����� ������ ���������� ��� (���)
   uint16_t report_prepare            : 1; //!< ��������� ���������� ��������� � �������� (���)
   uint16_t order_history_cursor_flag : 1; //!< ������� ���������� ������� � ���� ������� ���������� ������� (���/����)
   uint16_t                           : 7; //!< ������
} upr_flag_word_asu_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2)
typedef struct upr_flag_word_asu_2_b_t {
   uint16_t index_1; //!< ������ ������ 1 //(min:0 max:65535)
} upr_flag_word_asu_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 3)
typedef struct upr_flag_word_asu_3_b_t {
   uint16_t index_2; //!< ������ ������ 2 //(min:0 max:65535)
} upr_flag_word_asu_3_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1 ������� ��� ����� ���)
typedef struct upr_flag_word_rap_1_b_t {
   uint16_t       : 2; //!< ������
   uint16_t exit  : 1; //!< ������� �� ��� "�����" (���)
   uint16_t uv    : 1; //!< ������� �� ��� "��"
   uint16_t ku    : 1; //!< ������� �� ��� "��"
   uint16_t vz    : 1; //!< ������� �� ��� "��"
   uint16_t iz    : 1; //!< ������� �� ��� "��"
   uint16_t       : 1; //!< ������
   uint16_t zs    : 1; //!< ������� �� ��� "��"
   uint16_t ls    : 1; //!< ������� �� ��� "��"
   uint16_t ps    : 1; //!< ������� �� ��� "��"
   uint16_t indic : 1; //!< ������� �� ��� "����"
   uint16_t       : 1; //!< ������
   uint16_t rap_1 : 1; //!< ������� �� ��� "���1"
   uint16_t row_2 : 1; //!< ������� �� ��� "���2"
   uint16_t row_1 : 1; //!< ������� �� ��� "���1"
} upr_flag_word_rap_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2 ������� ��� ����� ���)
typedef struct upr_flag_word_rap_2_b_t {
   uint16_t                  : 2; //!< ������
   uint16_t decrement        : 1; //!< ������� �� ��� "��� ��" (��������� ������ ����� �������)
   uint16_t increment        : 1; //!< ������� �� ��� "��� ��" (��������� ������ ����� �������)
   uint16_t limited_power    : 1; //!< ������� �� ��� "��" (����� ������������ ��������)
   uint16_t max_power        : 1; //!< ������� �� ��� "��" (����� ������������ ��������)
   uint16_t bu3              : 1; //!< ������� �� ��� "3" (����� ��3)
   uint16_t bu2              : 1; //!< ������� �� ��� "2" (����� ��2)
   uint16_t bu1              : 1; //!< ������� �� ��� "1" (����� ��1)
   uint16_t heading_scale    : 1; //!< ������� �� ��� "����" (��������� �������� �����)
   uint16_t dangerous_areas  : 1; //!< ������� �� ��� "��" (��������� ��� ���������)
   uint16_t ric_unidentified : 1; //!< ������� �� ��� "����" (��������� ������������ ���)
   uint16_t ric_overview     : 1; //!< ������� �� ��� "���" (��������� ��� � ������ ������)
   uint16_t ric_tracking     : 1; //!< ������� �� ��� "����" (��������� ��� � ������ �������������)
   uint16_t manual           : 1; //!< ������� �� ��� "����" (������. ����� ������)
   uint16_t automatic        : 1; //!< ������� �� ��� "���" (���. ����� ������)
} upr_flag_word_rap_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 3 ������� ��� ����� ���)
typedef struct upr_flag_word_rap_3_b_t {
   uint16_t       : 8; //!< ������
   uint16_t mfk_8 : 1; //!< ������� �� ��� � 8
   uint16_t mfk_7 : 1; //!< ������� �� ��� � 7
   uint16_t mfk_6 : 1; //!< ������� �� ��� � 6
   uint16_t mfk_5 : 1; //!< ������� �� ��� � 5
   uint16_t mfk_4 : 1; //!< ������� �� ��� � 4
   uint16_t mfk_3 : 1; //!< ������� �� ��� � 3
   uint16_t mfk_2 : 1; //!< ������� �� ��� � 2
   uint16_t mfk_1 : 1; //!< ������� �� ��� � 1
} upr_flag_word_rap_3_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 4)
typedef struct upr_flag_word_rap_4_b_t {
   uint16_t separation          : 1; //!< [���-�018] ����� ���������� ����� ��� (����)
   uint16_t volume_show         : 1; //!< [���-�046] [(���-�045+���-�046)*T=5] ������� ��������� ����� ����������� ���������
   uint16_t volume_down         : 1; //!< [���-�045] ������� ���������� ��������� (������� ��� ����������� ������ ���������� ���������)
   uint16_t volume_up           : 1; //!< [���-�046] ������� ���������� ��������� (������� ��� ����������� ������ ���������� ���������)
   uint16_t bsv_bu_loading_on   : 1; //!< [���] ������� ������ �������� ���������� ����� �� � �� (����)
   uint16_t bsv_bu_loading_off  : 1; //!< [���] ������� �������� �������� ���������� ����� �� � �� (����)
   uint16_t scale_selecting     : 1; //!< [���-�049] ������� ����� ��������� ������� "����� �������� �����������"
   uint16_t scale_value         : 3; //!< [���-�001/���-�038] ������� ���� (mfci_scale_t)
   uint16_t separation_duration : 6; //!< ������������ ������ ���������� ����� ��� � �������� //(min:0 max:63)
} upr_flag_word_rap_4_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1)
typedef struct upr_flag_word_svr_1_b_t {
   uint16_t format_zaps : 1; //!< [���-�001] ������� ���� (������)
   uint16_t format_prsm : 1; //!< [���-�002] ������� ���� (��������� ����� �����������)
   uint16_t format_teks : 1; //!< [���-�003] ������� ���� (��������� ��������)
   uint16_t format_kont : 1; //!< [���-�004] ������� ���� (����-��������)
   uint16_t tko         : 1; //!< [���-�005/�013/�021] ������/��������/�������� ���
   uint16_t mfi1        : 1; //!< [���-�006/�014/�022] ������/��������/�������� ���1
   uint16_t mfi2        : 1; //!< [���-�007/�015/�023] ������/��������/�������� ���2
   uint16_t mfi3        : 1; //!< [���-�008/�016/�024] ������/��������/�������� ���3
   uint16_t mfi4        : 1; //!< [���-�009/�017/�025] ������/��������/�������� ���4
   uint16_t mfi7        : 1; //!< [���-�010/�018/�026] ������/��������/�������� ���7
   uint16_t mfi8        : 1; //!< [���-�011/�019/�027] ������/��������/�������� ���8
   uint16_t mfi9        : 1; //!< [���-�012/�020/�028] ������/��������/�������� ���9
   uint16_t event_enter : 1; //!< [���-�035] ������� ����� ������������� ������ ������� ��� (������� ����� ����)
   uint16_t date_enter  : 1; //!< [���-�035] ������� ����� ������������ ���� ������ ��� (������� ����� ����)
   uint16_t time_enter  : 1; //!< [���-�035] ������� ����� ������������� ������� ������ ��� (������� ����� ����)
   uint16_t event_align : 1; //!< [���-�052] ��������� ������ ������� ��� (����)
} upr_flag_word_svr_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2)
typedef struct upr_flag_word_svr_2_b_t {
   uint16_t date_align      : 1; //!< [���-�053] ��������� ���� ������ ��� (����)
   uint16_t time_align      : 1; //!< [���-�054] ��������� ������� ������ ��� (����)
   uint16_t play            : 1; //!< ������� ��������� ��������������� / ����-�������� ��� (����)
   uint16_t stop            : 1; //!< ������� ���������� ��������������� (����)
   uint16_t frame_prev      : 1; //!< ������� �������� � ����������� ����� (����, ����)
   uint16_t frame_next      : 1; //!< ������� �������� � ���������� ����� (����, ����)
   uint16_t uskr_prev       : 1; //!< ������� ����������� ��������������� ����� (����, ����)
   uint16_t uskr_next       : 1; //!< ������� ����������� ��������������� ������ (����, ����)
   uint16_t cursor_position : 3; //!< ��������� �����-������� � ���� ��������� ��� //(min:0 max:5)
   uint16_t                 : 5; //!< ������
} upr_flag_word_svr_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 3)
typedef struct upr_flag_word_svr_3_b_t {
   uint16_t edit_digit_1 : 4; //!< ����� 1 ������������� �������� ����, ������� ��� ����� ������� ��� //(min:0 max:9)
   uint16_t edit_digit_2 : 4; //!< ����� 2 ������������� �������� ����, ������� ��� ����� ������� ��� //(min:0 max:9)
   uint16_t edit_digit_3 : 4; //!< ����� 3 ������������� �������� ���� ��� ������� ������ ��� //(min:0 max:9)
   uint16_t edit_digit_4 : 4; //!< ����� 4 ������������� �������� ���� ��� ������� ������ ��� //(min:0 max:9)
} upr_flag_word_svr_3_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 4)
typedef struct upr_flag_word_svr_4_b_t {
   uint16_t edit_digit_5 : 4; //!< ����� 5 ������������� �������� ����, ������� ��� ����� ������� ��� //(min:0 max:9)
   uint16_t edit_digit_6 : 4; //!< ����� 6 ������������� �������� ����, ������� ��� ����� ������� ��� //(min:0 max:9)
   uint16_t              : 8; //!< ������
} upr_flag_word_svr_4_b_t;

//! ����� �������� ��� ��� ����� ��/�
typedef struct upr_flag_word_dvs_b_t {
   uint16_t mech_brief : 1;  //!< ������� ����� ��������� ��������� "����"
   uint16_t            : 15; //!< ������
} upr_flag_word_dvs_b_t;

//! ����� �������� ��� ��� ����� ����
typedef struct upr_flag_word_topl_b_t {
   uint16_t refuel  : 1;  //!< [���-�044] ������� ����� ��������� ��� (���������� ��������)
   uint16_t support : 1;  //!< [���-�047] ������� ����� ��������� ����� ����-������� (��)
   uint16_t         : 14; //!< ������
} upr_flag_word_topl_b_t;

//! ����� �������� ��� ��� ����� ���
typedef struct upr_flag_word_sas_b_t {
   uint16_t sas_115 : 1;  //!< [���-�041] ������� ����� ��������� ����� ��� "115 �"
   uint16_t sas_27  : 1;  //!< [���-�042] ������� ����� ��������� ����� ��� "27 �"
   uint16_t sas_uif : 1;  //!< [���-�048] ������� ����� ��������� ����� ��� "U-I-F"
   uint16_t         : 13; //!< ������
} upr_flag_word_sas_b_t;

//! ����� �������� ��� ��� ����� ���
typedef struct upr_flag_word_rla_b_t {
   uint16_t page; //!< �������� ��� //(min:0 max:220 bits:4..16 lsb:1)
} upr_flag_word_rla_b_t;

//! ����� 1 �������� ��� ��� ����� ���
typedef struct upr_flag_word_kkd_1_b_t {
   uint16_t cards_count : 6;  //!< ���������� ���� //(min:1 max:63)
   uint16_t             : 10; //!< ������
} upr_flag_word_kkd_1_b_t;

//! ����� 2 �������� ��� ��� ����� ���
typedef struct upr_flag_word_kkd_2_b_t {
   uint16_t page_id; //!< �������� ��� //(min:0 max:19 bits:4..16 lsb:1)
} upr_flag_word_kkd_2_b_t;

//! ����� 3 �������� ��� ��� ����� ���
typedef struct upr_flag_word_kkd_3_b_t {
   uint16_t selected_page_id; //!< ������������ �������� ��� //(min:0 max:19 bits:4..16 lsb:1)
} upr_flag_word_kkd_3_b_t;

//! ����� �������� ��� ��� ����� ���� (����� ��������� ������ ����������)
typedef struct upr_flag_word_bask_b_t {
   uint16_t           : 2; //!< ������
   uint16_t button_14 : 1; //!< ������� �� ������ � 14 (���)
   uint16_t button_13 : 1; //!< ������� �� ������ � 13 (����)
   uint16_t button_12 : 1; //!< ������� �� ������ � 12 (������� ����)
   uint16_t button_11 : 1; //!< ������� �� ������ � 11 (������� �����)
   uint16_t button_10 : 1; //!< ������� �� ������ � 10 (6-� ������)
   uint16_t button_9  : 1; //!< ������� �� ������ � 9 (5-� ������)
   uint16_t button_8  : 1; //!< ������� �� ������ � 8 (4-� ������)
   uint16_t button_7  : 1; //!< ������� �� ������ � 7 (3-� ������)
   uint16_t button_6  : 1; //!< ������� �� ������ � 6 (2-� ������)
   uint16_t button_5  : 1; //!< ������� �� ������ � 5 (6-� �����)
   uint16_t button_4  : 1; //!< ������� �� ������ � 4 (5-� �����)
   uint16_t button_3  : 1; //!< ������� �� ������ � 3 (4-� �����)
   uint16_t button_2  : 1; //!< ������� �� ������ � 2 (3-� �����)
   uint16_t button_1  : 1; //!< ������� �� ������ � 1 (2-� �����)
} upr_flag_word_bask_b_t;

//! ����� �������� ��� ��� ����� ���� (����� "��� ����������")
typedef struct upr_flag_word_msrp_b_t {
   uint16_t              : 13; //!< ������
   uint16_t code_control : 3;  //!< ��� ���������� (0-������ ������, 1-��������� ��������, 2-���������� ��������) //(min:0 max:2)
} upr_flag_word_msrp_b_t;

//! ����� �������� ��� ��� ������ �����, �����-�� (����� 1)
typedef struct upr_flag_word_blocks_1_b_t {
   uint16_t mode      : 6; //!< ����� ������ ����� ����� (mfci_blocks_mode_t)
   uint16_t system    : 6; //!< ��������� ������� (mfci_blocks_system_t)
   uint16_t subsystem : 4; //!< ��������� ����������/������ //(min:0 max:15)
} upr_flag_word_blocks_1_b_t;

//! ����� �������� ��� ��� ������ �����, �����-�� (����� 2)
typedef struct upr_flag_word_blocks_2_b_t {
   uint16_t number    : 6; //!< ����� ������� ������ (��� ������ ������ ����) /  �������� �������� ������� ������� //(min:1 max:63)
   uint16_t button_l1 : 1; //!< ����������� ������ ����� 1
   uint16_t button_l2 : 1; //!< ����������� ������ ����� 2
   uint16_t button_l3 : 1; //!< ����������� ������ ����� 3
   uint16_t button_l4 : 1; //!< ����������� ������ ����� 4
   uint16_t button_l5 : 1; //!< ����������� ������ ����� 5
   uint16_t button_l6 : 1; //!< ����������� ������ ����� 6
   uint16_t button_l7 : 1; //!< ����������� ������ ����� 7
   uint16_t button_l8 : 1; //!< ����������� ������ ����� 8
   uint16_t button_r1 : 1; //!< ����������� ������ ������ 1
   uint16_t button_r2 : 1; //!< ����������� ������ ������ 2
} upr_flag_word_blocks_2_b_t;

//! ����� �������� ��� ��� ������ �����, �����-�� (����� 3)
typedef struct upr_flag_word_blocks_3_b_t {
   uint16_t button_r3 : 1; //!< ����������� ������ ������ 3
   uint16_t button_r4 : 1; //!< ����������� ������ ������ 4
   uint16_t button_r5 : 1; //!< ����������� ������ ������ 5
   uint16_t button_r6 : 1; //!< ����������� ������ ������ 6
   uint16_t button_r7 : 1; //!< ����������� ������ ������ 7
   uint16_t button_r8 : 1; //!< ����������� ������ ������ 8
   uint16_t button_t1 : 1; //!< ����������� ������ ������� 1
   uint16_t button_t2 : 1; //!< ����������� ������ ������� 2
   uint16_t button_t3 : 1; //!< ����������� ������ ������� 3
   uint16_t button_t4 : 1; //!< ����������� ������ ������� 4
   uint16_t button_t5 : 1; //!< ����������� ������ ������� 5
   uint16_t button_b1 : 1; //!< ����������� ������ ������ 1
   uint16_t button_b2 : 1; //!< ����������� ������ ������ 2
   uint16_t button_b3 : 1; //!< ����������� ������ ������ 3
   uint16_t button_b4 : 1; //!< ����������� ������ ������ 4
   uint16_t button_b5 : 1; //!< ����������� ������ ������ 5
} upr_flag_word_blocks_3_b_t;

//! ����� �������� ��� ��� ������ �����, �����-�� (����� 4)
typedef struct upr_flag_word_blocks_4_b_t {
   uint16_t button_t6          : 1; //!< ����������� ������ ������� 6
   uint16_t button_t7          : 1; //!< ����������� ������ ������� 7
   uint16_t button_t8          : 1; //!< ����������� ������ ������� 8
   uint16_t button_t9          : 1; //!< ����������� ������ ������� 9
   uint16_t button_t10         : 1; //!< ����������� ������ ������� 10
   uint16_t button_t11         : 1; //!< ����������� ������ ������� 11
   uint16_t button_t12         : 1; //!< ����������� ������ ������� 12
   uint16_t button_b6          : 1; //!< ����������� ������ ������ 6
   uint16_t button_b7          : 1; //!< ����������� ������ ������ 7
   uint16_t button_b8          : 1; //!< ����������� ������ ������ 8
   uint16_t button_b9          : 1; //!< ����������� ������ ������ 9
   uint16_t button_b10         : 1; //!< ����������� ������ ������ 10
   uint16_t button_b11         : 1; //!< ����������� ������ ������ 11
   uint16_t button_b12         : 1; //!< ����������� ������ ������ 12
   uint16_t tests_passed       : 1; //!< ����� �������, ������������� � ������ ��������
   uint16_t show_build_numbers : 1; //!< ������������ ������ ������ �������
} upr_flag_word_blocks_4_b_t;

//! ����� �������� ��� ��� ����� �����-���
typedef struct upr_flag_word_blocks_szi_b_t {
   uint16_t system : 6;  //!< ��������� ������� (mfci_blocks_system_t)
   uint16_t        : 10; //!< ������
} upr_flag_word_blocks_szi_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 1)
typedef struct upr_flag_word_tar_1_b_t {
   uint16_t uks_number         : 3; //!< ����� ���������� ��� //(min:1 max:4)
   uint16_t parameter_number   : 4; //!< ����� ����������� ��������� //(min:1 max:10)
   uint16_t code_number        : 3; //!< ����� ��������� ������� ����� ����������� ��������� //(min:1 max:7)
   uint16_t soi_parameter_edit : 1; //!< �������������� ���������� ��������� ��� (�������� ��� ���)
   uint16_t                    : 5; //!< ������
} upr_flag_word_tar_1_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 2)
typedef struct upr_flag_word_tar_2_b_t {
   uint16_t command_id               : 2; //!< ������� ����. ��� ������� (0-���, 1-������ �������, 2-������ �������, 3-������������ ���� ���)
   uint16_t command_uks_number       : 3; //!< ������� ����. ����� ��� //(min:1 max:4)
   uint16_t command_parameter_number : 4; //!< ������� ����. ����� ����������� ��������� //(min:1 max:10)
   uint16_t command_code_number      : 3; //!< ������� ����. ����� ������� ����� //(min:1 max:7)
   uint16_t                          : 4; //!< ������
} upr_flag_word_tar_2_b_t;

//! ����� �������� ��� ��� ����� ��� (����� 3)
typedef struct upr_flag_word_tar_3_b_t {
   uint16_t command_counter : 16; //!< ������� ����. ������� ������ ��� ��� ��������� ��� //(min:1 max:65535)
} upr_flag_word_tar_3_b_t;

//! ����� �������� ��� ��� ��������� �����
typedef union upr_flag_word_format_b_t {
   upr_flag_word_plan_b_t       plan_b;       //!< ����������� ������� ���� ��� ����� ����
   upr_flag_word_kart_1_b_t     kart_1_b;     //!< ����������� ������� ���� ��� ����� �����, �����-���� (����� 1)
   upr_flag_word_kart_2_b_t     kart_2_b;     //!< ����������� ������� ���� ��� ����� �����, �����-���� (����� 2)
   upr_flag_word_kart_3_b_t     kart_3_b;     //!< ����������� ������� ���� ��� ����� �����, �����-���� (����� 3)
   upr_flag_word_grup_1_b_t     grup_1_b;     //!< ����������� ������� ���� ��� ����� ���� (����� 1)
   upr_flag_word_grup_2_b_t     grup_2_b;     //!< ����������� ������� ���� ��� ����� ���� (����� 2)
   upr_flag_word_grup_3_b_t     grup_3_b;     //!< ����������� ������� ���� ��� ����� ���� (����� 3)
   upr_flag_word_suo_iipa_b_t   suo_iipa_b;   //!< ����������� ������� ���� ��� ����� ���-����
   upr_flag_word_suo_50x_1_b_t  suo_50x_1_b;  //!< ����������� ������� ���� ��� ����� ���-504/506 (����� 1)
   upr_flag_word_suo_50x_2_b_t  suo_50x_2_b;  //!< ����������� ������� ���� ��� ����� ���-504/506 (����� 2)
   upr_flag_word_suo_50x_3_b_t  suo_50x_3_b;  //!< ����������� ������� ���� ��� ����� ���-504/506 (����� 3)
   upr_flag_word_suo_50x_4_b_t  suo_50x_4_b;  //!< ����������� ������� ���� ��� ����� ���-504/506 (����� 4)
   upr_flag_word_rls_1_b_t      rls_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_rls_2_b_t      rls_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_kvr_1_b_t      kvr_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_kvr_2_b_t      kvr_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_kvr_3_b_t      kvr_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
   upr_flag_word_kvr_4_b_t      kvr_4_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 4)
   upr_flag_word_asu_1_b_t      asu_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_asu_2_b_t      asu_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_asu_3_b_t      asu_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
   upr_flag_word_rap_1_b_t      rap_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_rap_2_b_t      rap_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_rap_3_b_t      rap_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
   upr_flag_word_rap_4_b_t      rap_4_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 4)
   upr_flag_word_svr_1_b_t      svr_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_svr_2_b_t      svr_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_svr_3_b_t      svr_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
   upr_flag_word_svr_4_b_t      svr_4_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 4)
   upr_flag_word_dvs_b_t        dvs_b;        //!< ����������� ������� ���� ��� ����� ��/�
   upr_flag_word_topl_b_t       topl_b;       //!< ����������� ������� ���� ��� ����� ����
   upr_flag_word_sas_b_t        sas_b;        //!< ����������� ������� ���� ��� ����� ���
   upr_flag_word_rla_b_t        rla_b;        //!< ����������� ������� ���� ��� ����� ���
   upr_flag_word_kkd_1_b_t      kkd_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_kkd_2_b_t      kkd_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_kkd_3_b_t      kkd_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
   upr_flag_word_bask_b_t       bask_b;       //!< ����������� ������� ���� ��� ����� ����
   upr_flag_word_msrp_b_t       msrp_b;       //!< ����������� ������� ���� ��� ����� ����
   upr_flag_word_blocks_1_b_t   blocks_1_b;   //!< ����������� ������� ���� ��� ����� ����� (����� 1)
   upr_flag_word_blocks_2_b_t   blocks_2_b;   //!< ����������� ������� ���� ��� ����� ����� (����� 2)
   upr_flag_word_blocks_3_b_t   blocks_3_b;   //!< ����������� ������� ���� ��� ����� ����� (����� 3)
   upr_flag_word_blocks_4_b_t   blocks_4_b;   //!< ����������� ������� ���� ��� ����� ����� (����� 4)
   upr_flag_word_blocks_szi_b_t blocks_szi_b; //!< ����������� ������� ���� ��� ����� �����-���
   upr_flag_word_tar_1_b_t      tar_1_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 1)
   upr_flag_word_tar_2_b_t      tar_2_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 2)
   upr_flag_word_tar_3_b_t      tar_3_b;      //!< ����������� ������� ���� ��� ����� ��� (����� 3)
} upr_flag_word_format_b_t;

//! ������� ��������� ����, �������� 1 ����-3.1 (25 ��, ���������� ���������)
typedef struct mfci_in_sa_1_b_t {
   uint16_t                 counter;           //!< ������� �������� ������������� ������ //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                 header_revision;   //!< ������� ������������� (MFCI_IO_REVISION) //(min:1 max:65535 bits:4..19 lsb:1)
   mfci_signals_word_1_b_t  signals_word_1_b;  //!< ����� 1 ������������ ���� (������� ��)
   mfci_signals_word_2_b_t  signals_word_2_b;  //!< ����� 2 ������������ ���� (������� ��)
   mfci_signals_word_3_b_t  signals_word_3_b;  //!< ����� 3 ������������ ���� (������� ��)
   mfci_signals_word_4_b_t  signals_word_4_b;  //!< ����� 4 ������������ ���� (������� ��)
   mfci_signals_word_5_b_t  signals_word_5_b;  //!< ����� 5 ������������ ���� (������� ��)
   mfci_signals_word_6_b_t  signals_word_6_b;  //!< ����� 6 ������������ ���� (������� ��)
   mfci_signals_word_7_b_t  signals_word_7_b;  //!< ����� 7 ������������ ���� (������� ��)
   mfci_signals_word_8_b_t  signals_word_8_b;  //!< ����� 8 ������������ ���� (������� ��)
   mfci_signals_word_9_b_t  signals_word_9_b;  //!< ����� 9 ������������ ���� (������� ��)
   mfci_signals_word_10_b_t signals_word_10_b; //!< ����� 10 ������������ ���� (������� ��)
   mfci_signals_word_11_b_t signals_word_11_b; //!< ����� 11 ������������ ���� (������� ��)
   mfci_signals_word_12_b_t signals_word_12_b; //!< ����� 12 ������������ ���� (������� ��)
   mfci_signals_word_13_b_t signals_word_13_b; //!< ����� 13 ������������ ���� (������� ��)
   mfci_signals_word_14_b_t signals_word_14_b; //!< ����� 14 ������������ ���� (������� ��)
   mfci_signals_word_15_b_t signals_word_15_b; //!< ����� 15 ������������ ���� (������� ��)
   mfci_signals_word_16_b_t signals_word_16_b; //!< ����� 16 ������������ ���� (������� ��, ����)
   mfci_signals_word_17_b_t signals_word_17_b; //!< ����� 17 ������������ ���� (������� ����)
   mfci_signals_word_18_b_t signals_word_18_b; //!< ����� 18 ������������ ���� (������� ����)
   mfci_signals_word_19_b_t signals_word_19_b; //!< ����� 19 ������������ ���� (������� ����)
   mfci_signals_word_20_b_t signals_word_20_b; //!< ����� 20 ������������ ���� (������� ����, ���)
   mfci_signals_word_21_b_t signals_word_21_b; //!< ����� 21 ������������ ���� (������� ���, ���)
   mfci_signals_word_22_b_t signals_word_22_b; //!< ����� 22 ������������ ���� (������� ���, ����)
   mfci_signals_word_23_b_t signals_word_23_b; //!< ����� 23 ������������ ���� (������� ����)
   mfci_signals_word_24_b_t signals_word_24_b; //!< ����� 24 ������������ ���� (������� ����)
   mfci_signals_word_25_b_t signals_word_25_b; //!< ����� 25 ������������ ���� (������� ����, ���)
   mfci_signals_word_26_b_t signals_word_26_b; //!< ����� 26 ������������ ���� (������� ���, ��, ����)
   mfci_signals_word_27_b_t signals_word_27_b; //!< ����� 27 ������������ ���� (������� ����, ���)
   mfci_signals_word_28_b_t signals_word_28_b; //!< ����� 28 ������������ ���� (������� ���)
   mfci_signals_word_29_b_t signals_word_29_b; //!< ����� 29 ������������ ���� (������� ���)
   mfci_signals_word_30_b_t signals_word_30_b; //!< ����� 30 ������������ ���� (������� ��)
} mfci_in_sa_1_b_t;

//! ������� ��������� ����, �������� 2 ����-3.1 (25 ��, ���������� ���������)
typedef struct mfci_in_sa_2_b_t {
   mfci_signals_word_31_b_t    signals_word_31_b;    //!< ����� 31 ������������ ���� (������� ���)
   mfci_signals_word_32_b_t    signals_word_32_b;    //!< ����� 32 ������������ ���� (������� ���, ���)
   mfci_signals_word_33_b_t    signals_word_33_b;    //!< ����� 33 ������������ ���� (������� ���, ���)
   mfci_signals_word_34_b_t    signals_word_34_b;    //!< ����� 34 ������������ ���� (������� ���, ���, ���)
   mfci_signals_word_35_b_t    signals_word_35_b;    //!< ����� 35 ������������ ���� (������� ���)
   mfci_signals_word_36_b_t    signals_word_36_b;    //!< ����� 36 ������������ ���� (������� ����)
   mfci_signals_word_37_b_t    signals_word_37_b;    //!< ����� 37 ������������ ���� (������� ����, ����, ���)
   mfci_signals_word_38_b_t    signals_word_38_b;    //!< ����� 38 ������������ ���� (������� ����
   mfci_signals_word_39_b_t    signals_word_39_b;    //!< ����� 39 ������������ ���� (������� ����, ���)
   mfci_signals_word_40_b_t    signals_word_40_b;    //!< ����� 40 ������������ ���� (������� ���, �070)
   mfci_signals_word_41_b_t    signals_word_41_b;    //!< ����� 41 ������������ ���� (������� �070, ���, ����, �505)
   mfci_signals_word_42_b_t    signals_word_42_b;    //!< ����� 42 ������������ ���� (������� ���)
   mfci_signals_word_43_b_t    signals_word_43_b;    //!< ����� 43 ������������ ���� (������� ���, ����, ����)
   mfci_signals_word_44_b_t    signals_word_44_b;    //!< ����� 44 ������������ ���� (������ ������)
   mfci_signals_word_45_b_t    signals_word_45_b;    //!< ����� 45 ������������ ���� (������ ������)
   mfci_signals_word_46_b_t    signals_word_46_b;    //!< ����� 46 ������������ ���� (������ ������)
   mfci_signals_word_47_b_t    signals_word_47_b;    //!< ����� 47 ������������ ���� (������� ���)
   mfci_signals_word_48_b_t    signals_word_48_b;    //!< ����� 48 ������������ ���� (������� ���)
   mfci_signals_word_49_b_t    signals_word_49_b;    //!< ����� 49 ������������ ���� (������� ���)
   mfci_signals_word_50_b_t    signals_word_50_b;    //!< ����� 50 ������������ ���� (������� ���, ���, ����, ��)
   mfci_signals_word_51_b_t    signals_word_51_b;    //!< ����� 51 ������������ ���� (������� ����, ��)
   mfci_signals_word_52_b_t    signals_word_52_b;    //!< ����� 52 ������������ ���� (������� ����, ��, ���)
   mfci_signals_word_53_b_t    signals_word_53_b;    //!< ����� 53 ������������ ���� (������� ��, ���, ����, ����)
   mfci_signals_word_54_b_t    signals_word_54_b;    //!< ����� 54 ������������ ���� (������� ���/���)
   gears_flag_word_b_t         gears_flag_word_b;    //!< ����� �������� �����
   bcvm_valid_word_1_b_t       bcvm_valid_word_1_b;  //!< ����� 1 �������������� ����
   bcvm_valid_word_2_b_t       bcvm_valid_word_2_b;  //!< ����� 2 �������������� ����
   bcvm_valid_word_3_b_t       bcvm_valid_word_3_b;  //!< ����� 3 �������������� ����
   sau_smk_valid_word_b_t      sau_smk_valid_word_b; //!< ����� �������������� ���/���
   uint16_t                    sau_director_x;       //!< [���-�001] ������� ����������� �� ����� //(min:-30 max:30 signed:4 bits:5..19 msb:90�)
   uint16_t                    sau_director_y;       //!< [���-�002] ������� ����������� �� ������� //(min:-40 max:40 signed:4 bits:5..19 msb:90�)
   uint16_t                    sau_course_selected;  //!< [���-�003] �������� ����/������� ���� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
} mfci_in_sa_2_b_t;

//! ������� ��������� ����, �������� 3 ����-3.1 (25 ��, ���������� ���������)
typedef struct mfci_in_sa_3_b_t {
   ins_svs_numbers_b_t           ins_svs_numbers_b;           //!< ������ ������������ ���/���
   bcvm_flag_word_1_b_t          bcvm_flag_word_1_b;          //!< ����� 1 �������� ����
   svs_absu_rts_valid_word_1_b_t svs_absu_rts_valid_word_1_b; //!< ����� 1 �������������� ���/����/���
   svs_absu_rts_valid_word_2_b_t svs_absu_rts_valid_word_2_b; //!< ����� 2 �������������� ���/����/���
   svs_absu_rts_valid_word_3_b_t svs_absu_rts_valid_word_3_b; //!< ����� 3 �������������� ���/����/���
   rsbn_vim_dme_flag_word_b_t    rsbn_vim_dme_flag_word_b;    //!< ����� �������� ����/VIM/DME
   uint16_t                      rvm_altitude_k;              //!< [���-�001] ����������� ����� ����� (��� ��������� � ����������) //(min:0 max:4921.25984 signed:4 bits:5..19 msb:4096 ���)
   uint16_t                      rvm_altitude_p;              //!< [���-�001] ����������� ����� ����� (��� ��������� � ���������) //(min:0 max:4921.25984 signed:4 bits:5..19 msb:4096 ���)
   uint16_t                      rvb_altitude;                //!< [���-�001] ����������� ������� ����� //(min:0 max:6000 bits:4..18 msb:8192 �)
   uint16_t                      rsbn_delta_y_1;              //!< [����-�002] ���������� �� �������� �������� (����� 1) //(min:-50 max:50 signed:4 bits:5..15 msb:25 % ���)
   uint16_t                      rsbn_delta_x_1;              //!< [����-�003] ���������� �� ����� ������� (����� 1) //(min:-50 max:50 signed:4 bits:5..15 msb:25 % ���)
   uint16_t                      rsbn_delta_y_2;              //!< [����-�002] ���������� �� �������� �������� (����� 2) //(min:-50 max:50 signed:4 bits:5..15 msb:25 % ���)
   uint16_t                      rsbn_delta_x_2;              //!< [����-�003] ���������� �� ����� ������� (����� 2) //(min:-50 max:50 signed:4 bits:5..15 msb:25 % ���)
   uint16_t                      rsbn_delta_rpk;              //!< [����-�007] ���������� �� ������� �� ������������������ ��) //(min:-50 max:50 signed:4 bits:5..15 msb:25 % ���)
   uint16_t                      svs_altitude_abs_k;          //!< [���-�001] ������ ���������� (��� ��������� � ����������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_altitude_abs_p;          //!< [���-�001] ������ ���������� (��� ��������� � ���������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_indicated_speed_k;       //!< [���-�002] ��������� �������� (��� ��������� � ����������) //(min:0 max:1600 signed:4 bits:5..18 msb:948.224 ��/�)
   uint16_t                      svs_indicated_speed_p;       //!< [���-�002] ��������� �������� (��� ��������� � ���������) //(min:0 max:1600 signed:4 bits:5..18 msb:948.224 ��/�)
   uint16_t                      svs_mach_k;                  //!< [���-�003] ����� ���� (��� ��������� � ����������) //(min:0 max:3 signed:4 bits:5..19 msb:2.048)
   uint16_t                      svs_mach_p;                  //!< [���-�003] ����� ���� (��� ��������� � ���������) //(min:0 max:3 signed:4 bits:5..19 msb:2.048)
   uint16_t                      svs_altitude_qnh_k;          //!< [���-�004] ������ QNH (��� ��������� � ����������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_altitude_qnh_p;          //!< [���-�004] ������ QNH (��� ��������� � ���������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_altitude_qfe_k;          //!< [���-�005] ������ QFE (��� ��������� � ����������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_altitude_qfe_p;          //!< [���-�005] ������ QFE (��� ��������� � ���������) //(min:-500 max:30000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                      svs_vy_k;                    //!< [���-�008] ������������ �������� (��� ��������� � ����������) //(min:-100 max:100 signed:4 bits:5..15 msb:83.23072 �/�)
   uint16_t                      svs_vy_p;                    //!< [���-�008] ������������ �������� (��� ��������� � ���������) //(min:-100 max:100 signed:4 bits:5..15 msb:83.23072 �/�)
   uint16_t                      svs_true_speed_k;            //!< [���-�011] �������� ��������� �������� (��� ��������� � ����������) //(min:0 max:3500 signed:4 bits:5..19 msb:1896.448 ��/�)
   uint16_t                      svs_true_speed_p;            //!< [���-�011] �������� ��������� �������� (��� ��������� � ���������) //(min:0 max:3500 signed:4 bits:5..19 msb:1896.448 ��/�)
   uint16_t                      vim_ils1_delta_x;            //!< [VIM-�006] ���������� �� ����� ������� ILS1 //(min:-0.4 max:0.4 signed:4 bits:5..16 msb:0.2 ���)
   uint16_t                      vim_ils1_delta_y;            //!< [VIM-�007] ���������� �� �������� �������� ILS1 //(min:-0.8 max:0.8 signed:4 bits:5..16 msb:0.4 ���)
   uint16_t                      vim_ils2_delta_x;            //!< [VIM-�006] ���������� �� ����� ������� ILS2 //(min:-0.4 max:0.4 signed:4 bits:5..16 msb:0.2 ���)
   uint16_t                      vim_ils2_delta_y;            //!< [VIM-�007] ���������� �� �������� �������� ILS2 //(min:-0.8 max:0.8 signed:4 bits:5..16 msb:0.4 ���)
} mfci_in_sa_3_b_t;

//! ������� ��������� ����, �������� 4 ����-3.1 (25 ��, ������ ������������ � ������ ���, ���, ����, ����, ���, ����, ��/�, ��, ���)
typedef struct mfci_in_sa_4_b_t {
   ins_ans_valid_word_1_b_t ins_ans_valid_word_1_b;      //!< ����� 1 �������������� ���/���
   ins_ans_valid_word_2_b_t ins_ans_valid_word_2_b;      //!< ����� 2 �������������� ���/���
   uint16_t                 absu_alpha;                  //!< [����-�001] ���� ����� �������� //(min:-5 max:25 signed:4 bits:5..19 msb:90�)
   uint16_t                 bcvm_magn_course;            //!< [����-�003] ���� ��������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 bcvm_true_course;            //!< [����-�004] ���� �������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 bcvm_true_pu;                //!< [����-�007] ������� ���� �������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 bcvm_magn_pu;                //!< [����-�009] ������� ���� ��������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 bcvm_drift_angle;            //!< [����-�028] ���� ����� //(min:-30 max:30 signed:4 bits:5..19 msb:90�)
   uint16_t                 bcvm_grid_course;            //!< [����-�035] ���� ������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_roll_k;                  //!< [���-�001] ���� ����� (��� ��������� � ����������) //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                 ins_roll_p;                  //!< [���-�001] ���� ����� (��� ��������� � ���������) //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                 ins_pitch_k;                 //!< [���-�002] ���� ������� (��� ��������� � ����������) //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                 ins_pitch_p;                 //!< [���-�002] ���� ������� (��� ��������� � ���������) //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                 ins_nz;                      //!< [���-�003] ������� ���������� //(min:-40 max:40 signed:4 bits:5..19 msb:20 �/��.�)
   uint16_t                 ins_ny_k;                    //!< [���-�004] ���������� ���������� (��� ��������� � ����������) //(min:-40 max:40 signed:4 bits:5..19 msb:20 �/��.�)
   uint16_t                 ins_ny_p;                    //!< [���-�004] ���������� ���������� (��� ��������� � ���������) //(min:-40 max:40 signed:4 bits:5..19 msb:20 �/��.�)
   uint16_t                 ins_nx;                      //!< [���-�009] �������������� ��������� ����� ���������� �������� //(min:-40 max:40 signed:4 bits:5..19 msb:20 �/��.�)
   uint16_t                 ins_true_pu_k;               //!< [���-�012] ������� ���� �������� (��� ��������� � ����������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_true_pu_p;               //!< [���-�012] ������� ���� �������� (��� ��������� � ���������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_magn_pu_k;               //!< [���-�013] ������� ���� ��������� (��� ��������� � ����������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_magn_pu_p;               //!< [���-�013] ������� ���� ��������� (��� ��������� � ���������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_magn_course_k;           //!< [���-�014] ���� ��������� (��� ��������� � ����������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_magn_course_p;           //!< [���-�014] ���� ��������� (��� ��������� � ���������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_true_course_k;           //!< [���-�015] ���� �������� (��� ��������� � ����������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ins_true_course_p;           //!< [���-�015] ���� �������� (��� ��������� � ���������) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ans_true_course;             //!< [���-�003] ���� �������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                 ans_roll;                    //!< [���-�004] ���� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                 ans_pitch;                   //!< [���-�005] ���� ������� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   dv_valid_word_1_b_t      dv_valid_word_1_b[DV_COUNT]; //!< ����� 1 �������������� ��
} mfci_in_sa_4_b_t;

//! ������� ��������� ����, �������� 5 ����-3.1 (25 ��, ������ ������������ � ������ ��/�, ��, ���)
typedef struct mfci_in_sa_5_b_t {
   dv_valid_word_2_b_t dv_valid_word_2_b[DV_COUNT]; //!< ����� 2 �������������� ��
   dv_valid_word_3_b_t dv_valid_word_3_b[DV_COUNT]; //!< ����� 3 �������������� ��
   dv_valid_word_4_b_t dv_valid_word_4_b;           //!< ����� 4 �������������� ��
   dv_flag_word_1_b_t  dv_flag_word_1_b;            //!< ����� 1 �������� ��
   dv_flag_word_2_b_t  dv_flag_word_2_b;            //!< ����� 2 �������� ��
   uint16_t            dv_start_time_1;             //!< [��-�001] ����� ������� ��������� (����� 0-1) //(min:0 max:240 signed:12 bits:11..1 msb:204.8 �)
   uint16_t            dv_start_time_2;             //!< [��-�001] ����� ������� ��������� (����� 2-3) //(min:0 max:240 signed:12 bits:11..1 msb:204.8 �)
   uint16_t            dv_start_time_3;             //!< [��-�001] ����� ������� ��������� (����� 4-6) //(min:0 max:240 signed:12 bits:11..1 msb:204.8 �)
   uint16_t            dv_rud_ud_k_1;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ����������, ����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_ud_k_2;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ����������, ����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_ud_k_3;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ����������, ����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_ud_p_1;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ���������, ����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_ud_p_2;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ���������, ����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_ud_p_3;               //!< [��-�004] ��������� ��� (�� ��, ��� ��������� � ���������, ����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:204.8�)
   uint16_t            dv_rud_sku_k_1;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ����������, ����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_rud_sku_k_2;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ����������, ����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_rud_sku_k_3;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ����������, ����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_rud_sku_p_1;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ���������, ����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_rud_sku_p_2;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ���������, ����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_rud_sku_p_3;              //!< [��-�005] ��������� ��� (�� ���, ��� ��������� � ���������, ����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t            dv_n2_k_1;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ����������, ����� 0-1) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t            dv_n2_k_2;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ����������, ����� 2-3) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t            dv_n2_k_3;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ����������, ����� 4-6) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t            dv_n2_p_1;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ���������, ����� 0-1) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t            dv_n2_p_2;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ���������, ����� 2-3) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t            dv_n2_p_3;                   //!< [��-�006] �������� �������� ������ �� (��� ��������� � ���������, ����� 4-6) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
} mfci_in_sa_5_b_t;

//! ������� ��������� ����, �������� 6 ����-3.1 (25 ��, ������ ������������ � ������ ��/�, ��)
typedef struct mfci_in_sa_6_b_t {
   dv_flag_word_3_b_t dv_flag_word_3_b;         //!< ����� 3 �������� ��
   dv_flag_word_4_b_t dv_flag_word_4_b;         //!< ����� 4 �������� ��
   uint16_t           dv_n1_ud_k_1;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ����������, ����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_ud_k_2;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ����������, ����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_ud_k_3;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ����������, ����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_ud_p_1;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ���������, ����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_ud_p_2;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ���������, ����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_ud_p_3;             //!< [��-�008] �������� �������� ������ �� (�� ��, ��� ��������� � ���������, ����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_k_1;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ����������, ����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_k_2;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ����������, ����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_k_3;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ����������, ����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_p_1;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ���������, ����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_p_2;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ���������, ����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n1_sku_p_3;            //!< [��-�009] �������� �������� ������ �� (�� ���, ��� ��������� � ���������, ����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_k_1;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ����������, ����� 0-1) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_k_2;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ����������, ����� 2-3) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_k_3;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ����������, ����� 4-6) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_p_1;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ���������, ����� 0-1) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_p_2;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ���������, ����� 2-3) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_n_sd_p_3;              //!< [��-�017] �������� �������� ������ �� (��� ��������� � ���������, ����� 4-6) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t           dv_tg_ud_1;               //!< [��-�012] ����������� ���� � ������� (�� ��, ����� 0-1) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_tg_ud_2;               //!< [��-�012] ����������� ���� � ������� (�� ��, ����� 2-3) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_tg_ud_3;               //!< [��-�012] ����������� ���� � ������� (�� ��, ����� 4-6) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_tg_sku_1;              //!< [��-�013] ����������� ���� � ������� (�� ���, ����� 0-1) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_tg_sku_2;              //!< [��-�013] ����������� ���� � ������� (�� ���, ����� 2-3) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_tg_sku_3;              //!< [��-�013] ����������� ���� � ������� (�� ���, ����� 4-6) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t           dv_inlet_wedge_angle_1;   //!< [��-�019] ��������� ������� ����� �� (����� 0-1) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t           dv_inlet_wedge_angle_2;   //!< [��-�019] ��������� ������� ����� �� (����� 2-3) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t           dv_inlet_wedge_angle_3;   //!< [��-�019] ��������� ������� ����� �� (����� 4-6) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t           dv_inlet_restart_angle_1; //!< [��-�020] ��������� ������� ��������� �� (����� 0-1) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t           dv_inlet_restart_angle_2; //!< [��-�020] ��������� ������� ��������� �� (����� 2-3) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t           dv_inlet_restart_angle_3; //!< [��-�020] ��������� ������� ��������� �� (����� 4-6) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
} mfci_in_sa_6_b_t;

//! ������� ��������� ����, �������� 7 ����-3.1 (12.5 ��, ������ ������������ � ������ ��/�, ��)
typedef struct mfci_in_sa_7_b_t {
   uint16_t dv1_afterburn_time_land;   //!< [��1-�002] ���������� ����� ������ ������� �� ������ //(min:0 max:300 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv1_afterburn_time_in_air; //!< [��1-�003] ���������� ����� ������ ������� � ������ //(min:0 max:1800 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv_n2_max_danger_1;        //!< [��-�007] ������� �������� �������� ������ �� (����� 0-1) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n2_max_danger_2;        //!< [��-�007] ������� �������� �������� ������ �� (����� 2-3) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n2_max_danger_3;        //!< [��-�007] ������� �������� �������� ������ �� (����� 4-6) //(min:0 max:13000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_danger_1;        //!< [��-�010] ������� �������� �������� ������ �� (����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_danger_2;        //!< [��-�010] ������� �������� �������� ������ �� (����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_danger_3;        //!< [��-�010] ������� �������� �������� ������ �� (����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_1;               //!< [��-�036] ���������� �������� �������� ������ �� (����� 0-1) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_2;               //!< [��-�036] ���������� �������� �������� ������ �� (����� 2-3) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n1_max_3;               //!< [��-�036] ���������� �������� �������� ������ �� (����� 4-6) //(min:0 max:7000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n_sd_max_1;             //!< [��-�018] ���������� �������� �������� ������ �� (����� 0-1) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n_sd_max_2;             //!< [��-�018] ���������� �������� �������� ������ �� (����� 2-3) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_n_sd_max_3;             //!< [��-�018] ���������� �������� �������� ������ �� (����� 4-6) //(min:0 max:10000 signed:12 bits:11..1 msb:8192 ��/���)
   uint16_t dv_tg_max_danger_ud_1;     //!< [��-�014] ������� ����������� ���� � ������� (����� 0-1) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_danger_ud_2;     //!< [��-�014] ������� ����������� ���� � ������� (����� 2-3) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_danger_ud_3;     //!< [��-�014] ������� ����������� ���� � ������� (����� 4-6) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_danger_sku_1;    //!< [��-�045] ������� ����������� ���� � ������� (����� 0-1) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_danger_sku_2;    //!< [��-�045] ������� ����������� ���� � ������� (����� 2-3) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_danger_sku_3;    //!< [��-�045] ������� ����������� ���� � ������� (����� 4-6) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_1;               //!< [��-�015] ���������� ����������� ���� � ������� (����� 0-1) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_2;               //!< [��-�015] ���������� ����������� ���� � ������� (����� 2-3) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_tg_max_3;               //!< [��-�015] ���������� ����������� ���� � ������� (����� 4-6) //(min:-60 max:900 signed:12 bits:11..1 msb:819.2��)
   uint16_t dv_vibration_vpo_1;        //!< [��-�021] �������� �������� ����� (����� 0-1) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vpo_2;        //!< [��-�021] �������� �������� ����� (����� 2-3) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vpo_3;        //!< [��-�021] �������� �������� ����� (����� 4-6) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_1;        //!< [��-�022] �������� ����� ������� (����� 0-1) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_2;        //!< [��-�022] �������� ����� ������� (����� 2-3) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_3;        //!< [��-�022] �������� ����� ������� (����� 4-6) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_1;        //!< [��-�023] �������� ��������� ������ (����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_2;        //!< [��-�023] �������� ��������� ������ (����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_3;        //!< [��-�023] �������� ��������� ������ (����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
} mfci_in_sa_7_b_t;

//! ������� ��������� ����, �������� 8 ����-3.1 (12.5 ��, ������ ������������ � ����� ��/�, ��)
typedef struct mfci_in_sa_8_b_t {
   uint16_t dv2_afterburn_time_land;      //!< [��2-�002] ���������� ����� ������ ������� �� ������ //(min:0 max:300 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv2_afterburn_time_in_air;    //!< [��2-�003] ���������� ����� ������ ������� � ������ //(min:0 max:1800 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv_vibration_vpo_max_1;       //!< [��-�024] ���������� �������� �������� ����� (����� 0-1) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vpo_max_2;       //!< [��-�024] ���������� �������� �������� ����� (����� 2-3) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vpo_max_3;       //!< [��-�024] ���������� �������� �������� ����� (����� 4-6) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_max_1;       //!< [��-�025] ���������� �������� ����� ������� (����� 0-1) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_max_2;       //!< [��-�025] ���������� �������� ����� ������� (����� 2-3) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vot_max_3;       //!< [��-�025] ���������� �������� ����� ������� (����� 4-6) //(min:0 max:100 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_max_1;       //!< [��-�026] ���������� �������� ��������� ������ (����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_max_2;       //!< [��-�026] ���������� �������� ��������� ������ (����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_vibration_vfk_max_3;       //!< [��-�026] ���������� �������� ��������� ������ (����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:102.4 ��/�)
   uint16_t dv_oil_pressure_1;            //!< [��-�027] �������� ����� �� ����� � ��������� (����� 0-1) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_pressure_2;            //!< [��-�027] �������� ����� �� ����� � ��������� (����� 2-3) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_pressure_3;            //!< [��-�027] �������� ����� �� ����� � ��������� (����� 4-6) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_pressure_min_1;        //!< [��-�028] ���������� �������� ����� �� ����� � ��������� (����� 0-1) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_pressure_min_2;        //!< [��-�028] ���������� �������� ����� �� ����� � ��������� (����� 2-3) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_pressure_min_3;        //!< [��-�028] ���������� �������� ����� �� ����� � ��������� (����� 4-6) //(min:0 max:8 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_oil_temperature_in_1;      //!< [��-�030] ����������� ����� �� ����� � ��������� (����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_in_2;      //!< [��-�030] ����������� ����� �� ����� � ��������� (����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_in_3;      //!< [��-�030] ����������� ����� �� ����� � ��������� (����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_in_max_1;  //!< [��-�031] ���������� ����������� ����� �� ����� � ��������� (����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_in_max_2;  //!< [��-�031] ���������� ����������� ����� �� ����� � ��������� (����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_in_max_3;  //!< [��-�031] ���������� ����������� ����� �� ����� � ��������� (����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_1;     //!< [��-�032] ����������� ����� �� ������ �� ����� ������� (����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_2;     //!< [��-�032] ����������� ����� �� ������ �� ����� ������� (����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_3;     //!< [��-�032] ����������� ����� �� ������ �� ����� ������� (����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_max_1; //!< [��-�033] ���������� ����������� ����� �� ������ �� ����� ������� (����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_max_2; //!< [��-�033] ���������� ����������� ����� �� ������ �� ����� ������� (����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_temperature_out_max_3; //!< [��-�033] ���������� ����������� ����� �� ������ �� ����� ������� (����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_nozzle_angle_1;            //!< [��-�034] ��������� ����������� ����� (����� 0-1) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t dv_nozzle_angle_2;            //!< [��-�034] ��������� ����������� ����� (����� 2-3) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
   uint16_t dv_nozzle_angle_3;            //!< [��-�034] ��������� ����������� ����� (����� 4-6) //(min:0 max:180 signed:12 bits:11..1 msb:102.4�)
} mfci_in_sa_8_b_t;

//! ������� ��������� ����, �������� 9 ����-3.1 (12.5 ��, ������ ������������ � ������ ��/�, ��)
typedef struct mfci_in_sa_9_b_t {
   uint16_t dv3_afterburn_time_land;     //!< [��3-�002] ���������� ����� ������ ������� �� ������ //(min:0 max:300 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv3_afterburn_time_in_air;   //!< [��3-�003] ���������� ����� ������ ������� � ������ //(min:0 max:1800 signed:4 bits:5..18 msb:8192 �)
   uint16_t dv_air_pressure_turb_1;      //!< [��-�035] �������� � ������������ ������� ���� ������� (����� 0-1) //(min:0 max:2.5 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_air_pressure_turb_2;      //!< [��-�035] �������� � ������������ ������� ���� ������� (����� 2-3) //(min:0 max:2.5 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_air_pressure_turb_3;      //!< [��-�035] �������� � ������������ ������� ���� ������� (����� 4-6) //(min:0 max:2.5 signed:12 bits:11..2 msb:5.12 ���/��.��)
   uint16_t dv_bearing_temperature_n1_1; //!< [��-�037] ����������� ����������� ������ �� (����� 0-1) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_n1_2; //!< [��-�037] ����������� ����������� ������ �� (����� 2-3) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_n1_3; //!< [��-�037] ����������� ����������� ������ �� (����� 4-6) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_sd_1; //!< [��-�038] ����������� ����������� ������ C� (����� 0-1) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_sd_2; //!< [��-�038] ����������� ����������� ������ C� (����� 2-3) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_sd_3; //!< [��-�038] ����������� ����������� ������ C� (����� 4-6) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_n2_1; //!< [��-�039] ����������� ����������� ������ �� (����� 0-1) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_n2_2; //!< [��-�039] ����������� ����������� ������ �� (����� 2-3) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_bearing_temperature_n2_3; //!< [��-�039] ����������� ����������� ������ �� (����� 4-6) //(min:-60 max:300 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_oil_level_1;              //!< [��-�040] ���������� ����� � ��������� (����� 0-1) //(min:0 max:60 signed:12 bits:11..2 msb:51.2 �)
   uint16_t dv_oil_level_2;              //!< [��-�040] ���������� ����� � ��������� (����� 2-3) //(min:0 max:60 signed:12 bits:11..2 msb:51.2 �)
   uint16_t dv_oil_level_3;              //!< [��-�040] ���������� ����� � ��������� (����� 4-6) //(min:0 max:60 signed:12 bits:11..2 msb:51.2 �)
   uint16_t dv_oil_level_min_1;          //!< [��-�041] ���������� ���������� ����� � ��������� (����� 0-1) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_oil_level_min_2;          //!< [��-�041] ���������� ���������� ����� � ��������� (����� 2-3) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_oil_level_min_3;          //!< [��-�041] ���������� ���������� ����� � ��������� (����� 4-6) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_oil_level_max_1;          //!< [��-�042] ���������� ���������� ����� � ��������� (����� 0-1) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_oil_level_max_2;          //!< [��-�042] ���������� ���������� ����� � ��������� (����� 2-3) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_oil_level_max_3;          //!< [��-�042] ���������� ���������� ����� � ��������� (����� 4-6) //(min:0 max:51.1 bits:11..3 msb:25.6 �)
   uint16_t dv_fuel_pressure_1;          //!< [��-�043] �������� ������� ����� ���������� �������� �� (����� 0-1) //(min:0 max:100 signed:12 bits:11..2 msb:51.2 ���/��.��)
   uint16_t dv_fuel_pressure_2;          //!< [��-�043] �������� ������� ����� ���������� �������� �� (����� 2-3) //(min:0 max:100 signed:12 bits:11..2 msb:51.2 ���/��.��)
   uint16_t dv_fuel_pressure_3;          //!< [��-�043] �������� ������� ����� ���������� �������� �� (����� 4-6) //(min:0 max:100 signed:12 bits:11..2 msb:51.2 ���/��.��)
   uint16_t dv_fuel_temperature_tmt_1;   //!< [��-�044] ����������� ������� �� ��� (����� 0-1, ����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_fuel_temperature_tmt_2;   //!< [��-�044] ����������� ������� �� ��� (����� 2-3, ����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_fuel_temperature_tmt_3;   //!< [��-�044] ����������� ������� �� ��� (����� 4-6, ����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_air_temperature_1;        //!< [��-�048/��-�049] ����������� ������� �� ����� � ��/�� (����� 0-1) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_air_temperature_2;        //!< [��-�048/��-�049] ����������� ������� �� ����� � ��/�� (����� 2-3) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
   uint16_t dv_air_temperature_3;        //!< [��-�048/��-�049] ����������� ������� �� ����� � ��/�� (����� 4-6) //(min:-60 max:250 signed:12 bits:11..1 msb:204.8��)
} mfci_in_sa_9_b_t;

//! ������� ��������� ����, �������� 10 ����-3.1 (12.5 ��, ������ ������������ � ������ ���, ���, ����, ����, ���, ����, ��/�, ��)
typedef struct mfci_in_sa_10_b_t {
   uint16_t            dv4_afterburn_time_land;      //!< [��4-�002] ���������� ����� ������ ������� �� ������ //(min:0 max:300 signed:4 bits:5..18 msb:8192 �)
   uint16_t            dv4_afterburn_time_in_air;    //!< [��4-�003] ���������� ����� ������ ������� � ������ //(min:0 max:1800 signed:4 bits:5..18 msb:8192 �)
   uint16_t            dv_inlet_wedge_angle_set_1;   //!< [��-�046] ����������� ��������� ����� (����� 0-1) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            dv_inlet_wedge_angle_set_2;   //!< [��-�046] ����������� ��������� ����� (����� 2-3) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            dv_inlet_wedge_angle_set_3;   //!< [��-�046] ����������� ��������� ����� (����� 4-6) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            dv_inlet_restart_angle_set_1; //!< [��-�047] ����������� ��������� ������� (����� 0-1) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            dv_inlet_restart_angle_set_2; //!< [��-�047] ����������� ��������� ������� (����� 2-3) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            dv_inlet_restart_angle_set_3; //!< [��-�047] ����������� ��������� ������� (����� 4-6) //(min:-30 max:30 signed:12 bits:11..3 msb:25.6�)
   uint16_t            ans_latitude_high;            //!< [���-�001] �������������� ������ �������������� �������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t            ans_latitude_low;             //!< [���-�001] �������������� ������ �������������� �������, ������� �����
   uint16_t            ans_longitude_high;           //!< [���-�002] �������������� ������� �������������� �������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t            ans_longitude_low;            //!< [���-�002] �������������� ������� �������������� �������, ������� �����
   uint16_t            ans_w;                        //!< [���-�006] ������� �������� //(min:0 max:972.22222222 signed:4 bits:5..19 msb:1054 �/�)
   uint16_t            ins_latitude_k_high;          //!< [���-�010] �������������� ������ �������������� ������� (��� ��������� � ����������), ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t            ins_latitude_k_low;           //!< [���-�010] �������������� ������ �������������� ������� (��� ��������� � ����������), ������� �����
   uint16_t            ins_latitude_p_high;          //!< [���-�010] �������������� ������ �������������� ������� (��� ��������� � ���������), ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t            ins_latitude_p_low;           //!< [���-�010] �������������� ������ �������������� ������� (��� ��������� � ���������), ������� �����
   uint16_t            ins_longitude_k_high;         //!< [���-�011] �������������� ������� �������������� ������� (��� ��������� � ����������), ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t            ins_longitude_k_low;          //!< [���-�011] �������������� ������� �������������� ������� (��� ��������� � ����������), ������� �����
   uint16_t            ins_longitude_p_high;         //!< [���-�011] �������������� ������� �������������� ������� (��� ��������� � ���������), ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t            ins_longitude_p_low;          //!< [���-�011] �������������� ������� �������������� ������� (��� ��������� � ���������), ������� �����
   uint16_t            ins_drift_angle;              //!< [���-�016] ���� ����� //(min:-30 max:30 signed:4 bits:5..19 msb:90�)
   sau_flag_word_2_b_t sau_flag_word_2_b;            //!< ����� 2 �������� ���
   sau_flag_word_3_b_t sau_flag_word_3_b;            //!< ����� 3 �������� ���
   uint16_t            sau_altitude_selected;        //!< [���-�004] �������� ��������������� ������ //(min:100 max:20000 signed:4 bits:5..19 msb:9987.7 �)
   uint16_t            sau_speed_selected;           //!< [���-�005] �������� ��������� �������� //(min:180 max:1600 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t            sau_vy_selected;              //!< [���-�006] �������� ������������ �������� //(min:-30 max:30 signed:4 bits:5..19 msb:41.615 �/�)
   uint16_t            sau_mach_selected;            //!< [���-�007] �������� ����� ���� //(min:0.4 max:2.5 signed:4 bits:5..19 msb:2.048)
   uint16_t            sau_path_angle_selected;      //!< [���-�008] �������� ���� ������� ���������� //(min:-30 max:30 signed:4 bits:5..19 msb:51.2�)
   uint16_t            svs_pressure_qnh;             //!< [���-�006] ������������� QNH (���, 4�7� - �100, 8�11� - �10, 12�15� - �1, 16�19� - �0.1 ��.��.��) //(min:407 max:812)
   uint16_t            svs_pressure_qfe;             //!< [���-�007] ������������� QFE (���, 4�7� - �100, 8�11� - �10, 12�15� - �1, 16�19� - �0.1 ��.��.��) //(min:407 max:812)
   uint16_t            svs_temperature;              //!< [���-�010] ����������� ��������� ������� //(min:-99 max:60 signed:4 bits:5..15 msb:256��)
} mfci_in_sa_10_b_t;

//! ������� ��������� ����, �������� 11 ����-3.1 (12.5 ��, ���������� ���������)
typedef struct mfci_in_sa_11_b_t {
   pui_valid_word_b_t    pui_valid_word_b;        //!< ����� �������������� ���
   pui_flag_word_1_b_t   pui_flag_word_1_b;       //!< ����� 1 �������� ���
   pui_flag_word_2_b_t   pui_flag_word_2_b;       //!< ����� 2 �������� ���
   pui_flag_word_3_b_t   pui_flag_word_3_b;       //!< ����� 3 �������� ���
   pui_flag_word_4_b_t   pui_flag_word_4_b;       //!< ����� 4 �������� ���
   pkr_flag_word_b_t     pkr_flag_word_b;         //!< ����� �������� ���
   sau_flag_word_1_b_t   sau_flag_word_1_b;       //!< ����� 1 �������� ���
   topl_valid_word_1_b_t topl_valid_word_1_b;     //!< ����� 1 �������������� ����
   topl_valid_word_2_b_t topl_valid_word_2_b;     //!< ����� 2 �������������� ����
   uint16_t              mup1_x;                  //!< [���1-�001] ��������� �������� ��� 1 �� ���������� x (6�15� - �������� � ������ ����, 16� - ����) //(min:-1023 max:1023 signed:16 bits:6..15 lsb:1)
   uint16_t              mup2_x;                  //!< [���2-�001] ��������� �������� ��� 2 �� ���������� x (6�15� - �������� � ������ ����, 16� - ����) //(min:-1023 max:1023 signed:16 bits:6..15 lsb:1)
   uint16_t              mup1_y;                  //!< [���1-�002] ��������� �������� ��� 1 �� ���������� y (4�13� - �������� � ������ ����, 14� - ����) //(min:-1023 max:1023 signed:14 bits:4..13 lsb:1)
   uint16_t              mup2_y;                  //!< [���2-�002] ��������� �������� ��� 2 �� ���������� y (4�13� - �������� � ������ ����, 14� - ����) //(min:-1023 max:1023 signed:14 bits:4..13 lsb:1)
   uint16_t              pui_vpr;                 //!< [���-�001] ������ �������� �������/������ ������� //(min:0 max:1500 bits:5..17 lsb:1 �)
   uint16_t              pui_mvs;                 //!< [���-�002] ����������� ������ �������� //(min:0 max:6000 bits:5..17 lsb:1 �)
   uint16_t              pui_vpr_edited;          //!< [���-�003] ������ �������� �������/������ ������� ������������ //(min:0 max:1500 bits:5..17 lsb:1 �)
   uint16_t              pui_mvs_edited;          //!< [���-�004] ����������� ������ �������� ������������ //(min:0 max:6000 bits:5..17 lsb:1 �)
   uint16_t              pui_pressure_qnh_edited; //!< [���-�005] ������������� QNH ������������ (���, 4�7� - �100, 8�11� - �10, 12�15� - �1, 16�19� - �0.1 ��.��.��) //(min:407 max:812)
   uint16_t              pui_pressure_qfe_edited; //!< [���-�006] ������������� QFE ������������ (���, 4�7� - �100, 8�11� - �10, 12�15� - �1, 16�19� - �0.1 ��.��.��) //(min:407 max:812)
   uint16_t              ark_bearing;             //!< [���-�001] �������� ���� ������������ ��� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t              ark_frequency;           //!< [���-�002] ������� ��������� ��� (���, 4�6� - �1000, 7�10� - �100, 11�14� - �10, 15�18� - �1, 19� - �0.5 ���) //(min:150 max:1750)
   uint16_t              rsbn_distance;           //!< [����-�004] ��������� �������� �� ���� //(min:0 max:500 signed:4 bits:5..19 msb:250 ��)
   uint16_t              rsbn_azimuth;            //!< [����-�005] ������ �� ���� ���� �������� //(min:-180 max:180, signed:4 bits:5..19 msb:90�)
   uint16_t              rsbn_channel_number_np;  //!< [����-�006] ����� ��������-�������� ������ ���� �� (���, 5� - �100, 6�9� - �10, 10�13� - �1, 15� - �1000) //(min:1 max:1176)
   uint16_t              rsbn_channel_number_ms;  //!< [����-�006] ����� ��������-�������� ������ ���� �� (���, 5� - �100, 6�9� - �10, 10�13� - �1, 15� - �1000) //(min:1 max:28)
   uint16_t              rsbn_distance_ms;        //!< [����-�008] ��������� �� ������������������ �� //(min:0 max:500 signed:4 bits:5..19 msb:250 ��)
   uint16_t              topl_fuel_total;         //!< [����-�004] ����� ���������� ������� �� ���� ����� //(min:0 max:175000 signed:4 bits:5..19 msb:131072 ��)
   uint16_t              topl_weight;             //!< [����-�019] ��������� ����� �������� //(min:50 max:275 signed:4 bits:5..13 msb:256 �)
   rap_flag_word_b_t     rap_flag_word_b;         //!< ����� �������� ���
} mfci_in_sa_11_b_t;

//! ������� ��������� ����, �������� 12 ����-3.1 (12.5 ��, ������ ������������ � ������ ���, ���, ����, ����, ���, ���)
typedef struct mfci_in_sa_12_b_t {
   bcvm_flag_words_2_3_b_t bcvm_flag_words_2_3_b;  //!< ����� 2-3 �������� ����
   bcvm_flag_words_4_5_b_t bcvm_flag_words_4_5_b;  //!< ����� 4-5 �������� ����
   bcvm_flag_words_6_7_b_t bcvm_flag_words_6_7_b;  //!< ����� 6-7 �������� ����
   pkr_valid_word_b_t      pkr_valid_word_b;       //!< ����� �������������� ���
   uint16_t                pkr_speed_max;          //!< [���-�001] ����������� ���������� ��������� �������� //(min:0 max:1200 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                pkr_speed_min;          //!< [���-�002] ���������� ���������� ��������� �������� //(min:0 max:850 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                pkr_roll_max;           //!< [���-�003] ���������� ���� ����� //(min:-60 max:60 signed:4 bits:5..19 msb:90�)
   uint16_t                pkr_ny_max;             //!< [���-�004] ����������� ���������� ���������� ���������� //(min:0 max:3 signed:4 bits:5..19 msb:2g)
   uint16_t                pkr_ny_min;             //!< [���-�005] ���������� ���������� ���������� ���������� //(min:-0.1 max:0.5 signed:4 bits:5..19 msb:2g)
   uint16_t                pkr_alpha_max;          //!< [���-�006] ����������� ���������� ���� ����� //(min:1 max:30 signed:4 bits:5..19 msb:90�)
   uint16_t                pkr_alpha_min;          //!< [���-�007] ���������� ���������� ���� ����� //(min:-3 max:0 signed:4 bits:5..19 msb:90�)
   uint16_t                pkr_path_angle_pot;     //!< [���-�008] ������������� ���� ������� ���������� //(min:-15 max:30 signed:4 bits:5..19 msb:90�)
   uint16_t                pkr_path_angle;         //!< [���-�009] ���� ������� ���������� //(min:-15 max:30 signed:4 bits:5..19 msb:90�)
   uint16_t                pkr_mach_max;           //!< [���-�010] ����������� ���������� ����� ���� //(min:0 max:3 signed:4 bits:5..19 msb:2.048)
   uint16_t                vim_vor1_azimuth;       //!< [VIM-�001] ������ �� ���� VOR1 ��������� //(min:-180 max:180 signed:4 bits:5..15 msb:90�)
   uint16_t                vim_vor1_frequency;     //!< [VIM-�002] ������� ��������� �� ���� VOR1 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15�18� - �0.01 ���) //(min:108 max:117.95)
   uint16_t                vim_vor2_azimuth;       //!< [VIM-�003] ������ �� ���� VOR2 ��������� //(min:-180 max:180 signed:4 bits:5..15 msb:90�)
   uint16_t                vim_vor2_frequency;     //!< [VIM-�004] ������� ��������� �� ���� VOR2 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15�18� - �0.01 ���) //(min:108 max:117.95)
   uint16_t                vim_ils1_frequency;     //!< [VIM-�005] ������� ��������� ILS1 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15�18� - �0.01 ���) //(min:108.1 max:111.95)
   uint16_t                vim_ils2_frequency;     //!< [VIM-�005] ������� ��������� ILS2 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15�18� - �0.01 ���) //(min:108.1 max:111.95)
   uint16_t                dme1_distance;          //!< [DME-�001] ��������� �� ���������� DME1 //(min:0 max:500 bits:4..19 msb:474.112 ��)
   uint16_t                dme1_frequency;         //!< [DME-�002] ������� ��������� ���������� DME1 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15� - �0.05 ���) //(min:108 max:117.95)
   uint16_t                dme2_distance;          //!< [DME-�003] ��������� �� ���������� DME2 //(min:0 max:500 bits:4..19 msb:474.112 ��)
   uint16_t                dme2_frequency;         //!< [DME-�004] ������� ��������� ���������� DME2 (���, 4�6� - �10, 7�10� - �1, 11�14� - �0.1, 15� - �0.05 ���) //(min:108 max:117.95)
   uint16_t                bcvm_magn_pu_selected;  //!< [����-�005] ��������� �������� ������� ���� ��� �������� ���� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                bcvm_delta_z;           //!< [����-�008] �������� ������� ��������� �� ��� //(min:-237 max:237 signed:4 bits:5..19 msb:120 ��)
   uint16_t                bcvm_waypoint_distance; //!< [����-�010] ���������� �� ���������� ��� //(min:0 max:3276.7 signed:4 bits:5..19 msb:1638.4 ��)
   uint16_t                bcvm_azimuth_selected;  //!< [����-�012] ������ �������� VOR ��������� ��� ���� �������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                bcvm_echelon;           //!< [����-�013] ������ ������� //(min:0 max:30000 signed:4 bits:5..19 lsb:1 �)
} mfci_in_sa_12_b_t;

//! ������� ��������� ����, �������� 13 ����-3.1 (12.5 ��, ������ ������������ � ������ ���, ���, ����, ����, ���)
typedef struct mfci_in_sa_13_b_t {
   uint16_t                bcvm_altitude_delta;       //!< [����-�014] ���������� �� �������� ������ ������ //(min:-15000 max:15000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                bcvm_runway_course;        //!< [����-�015] ���� ��� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                bcvm_v1_continued;         //!< [����-�016] �������� �������� ������� �� ������� V1 (������������) //(min:150 max:390 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                bcvm_v1;                   //!< [����-�017] �������� �������� ������� �� ������� V1 (����������) //(min:150 max:390 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                bcvm_altitude_min;         //!< [����-�021] ���������� ���������� ������ //(min:0 max:5000 signed:4 bits:5..19 msb:8192 �)
   uint16_t                bcvm_wind_angle;           //!< [����-�022] ����������� ����� ����������������� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                bcvm_wind_speed;           //!< [����-�023] �������� ����� //(min:0 max:83.33333333 signed:4 bits:5..19 msb:55.55 �/�)
   uint16_t                bcvm_w;                    //!< [����-�024] ������� �������� //(min:0 max:972.22222222 signed:4 bits:5..19 msb:1054 �/�)
   uint16_t                bcvm_fuel_distance;        //!< [����-�025] ����������, ���������� �� ������ ������� //(min:0 max:32767 bits:4..19 lsb:1 ��)
   uint16_t                bcvm_azimuth_delta;        //!< [����-�027] ���������� �� ����� ��������� ������� VOR/���� //(min:-10 max:10 signed:4 bits:5..19 msb:90�)
   mfci_text_word_b_t      bcvm_waypoint_name_1_b;    //!< [����-�029] ������������� ���������� ���, ����� 1 (������� 1-2)
   mfci_text_word_b_t      bcvm_waypoint_name_2_b;    //!< [����-�029] ������������� ���������� ���, ����� 2 (������� 3-4)
   mfci_text_word_b_t      bcvm_waypoint_name_3_b;    //!< [����-�029] ������������� ���������� ���, ����� 3 (������� 5-6)
   uint16_t                bcvm_latitude_high;        //!< [����-�030] �������������� ������ �������������� �������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                bcvm_latitude_low;         //!< [����-�030] �������������� ������ �������������� �������, ������� �����
   uint16_t                bcvm_longitude_high;       //!< [����-�031] �������������� ������� �������������� �������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                bcvm_longitude_low;        //!< [����-�031] �������������� ������� �������������� �������, ������� �����
   uint16_t                bcvm_declination;          //!< [����-�037] ��������� ��������� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                bcvm_dtmsa;                //!< [����-�039] ���������� �� ��������� ��������� �� ����������� //(min:-90 max:90 signed:4 bits:5..19 msb:256��)
   uint16_t                bcvm_true_pu_selected;     //!< [����-�040] �������� �������� ������� ���� ��� �������� ���� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                bcvm_landing_speed_40;     //!< [����-�041] �������� �������� �� �������� � ���������� 40� //(min:0 max:370 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                bcvm_landing_speed_25;     //!< [����-�042] �������� �������� �� �������� � ���������� 25� //(min:0 max:460 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                bcvm_runway_orto_s;        //!< [����-�043] ��������������� ��������� �� ����� ��� ������/������� //(min:-327.67 max:327.67 signed:4 bits:5..19 lsb:0.01 ��)
   uint16_t                bcvm_runway_orto_z;        //!< [����-�044] ������� ���������� �� ������ ������ �� ����� ��� ������/������� //(min:-327.67 max:327.67 signed:4 bits:5..19 lsb:0.01 ��)
   uint16_t                bcvm_speed_correction;     //!< [����-�046] ��������� �������� ��� ������ � �������� ����� � �������� ����� //(min:-999 max:999 signed:4 bits:5..19 lsb:1 ��/�)
   uint16_t                bcvm_redundant_time;       //!< [����-�047] ��������� ������� ��� ������ � �������� ����� � �������� ����� //(min:-3599 max:3599 signed:4 bits:5..19 lsb:1 �)
   uint16_t                bcvm_takeoff_run;          //!< [����-�048] ��������� ����� ������� �� ������ //(min:1000 max:6000 bits:4..19 lsb:1 �)
   sns_flag_valid_word_b_t sns_flag_valid_word_b;     //!< ����� �������� � �������������� ���
   uint16_t                sns_latitude_high;         //!< [���-�003] �������������� ������ ��������������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:90�)
   uint16_t                sns_latitude_low;          //!< [���-�003] �������������� ������ ��������������, ������� �����
   uint16_t                sns_longitude_high;        //!< [���-�004] �������������� ������� ��������������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                sns_longitude_low;         //!< [���-�004] �������������� ������� ��������������, ������� �����
} mfci_in_sa_13_b_t;

//! ������� ��������� ����, �������� 14 ����-3.1 (12.5 ��, ������ ������������ � ������ ���, ���, ���, ����)
typedef struct mfci_in_sa_14_b_t {
   uint16_t                   sns_delta_x;                //!< [���-�001] ���������� �� ����� ������� //(min:-0.4 max:0.4 signed:4 bits:5..16 msb:0.2 ���)
   uint16_t                   sns_delta_y;                //!< [���-�002] ���������� �� �������� �������� //(min:-0.8 max:0.8 signed:4 bits:5..16 msb:0.4 ���)
   uint16_t                   sns_distance;               //!< [���-�005] �������������� ��������� �� ������ ��� ������� //(min:0 max:524.288 bits:4..19 msb:262.144 ��)
   uint16_t                   sns_channel_num;            //!< [���-�006] ��� ���������� ������ //(min:20001 max:39999 bits:4..16 lsb:1)
   rls_flag_word_b_t          rls_flag_word_b;            //!< [���] ����� �������� ���
   uint16_t                   rls_scale;                  //!< [���] ������ �������� //(min:1 max:1228.8 bits:4..19 msb:614.4)
   uint16_t                   rls_true_course;            //!< [���] ���� �������� (������� �������� ��70�) //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                   rls_latitude_high;          //!< [���] �������������� ������ �������������� ������� (������� �������� ��70�), ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:90�)
   uint16_t                   rls_latitude_low;           //!< [���] �������������� ������ �������������� ������� (������� �������� ��70�), ������� �����
   uint16_t                   rls_longitude_high;         //!< [���] �������������� ������� �������������� ������� (������� �������� ��70�), ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   rls_longitude_low;          //!< [���] �������������� ������� �������������� ������� (������� �������� ��70�), ������� �����
   group_flag_word_1_b_t      group_flag_word_1_b;        //!< [��� ��] ����� 1 �������� ��� �� � ������� ������� �����
   uint16_t                   group_selected_elevation;   //!< [��� ��-�093] �������� ���������� dh ����� ����� � �������� ������� ��������� //(min:-2000 max:2000 signed:4 bits:5..19 lsb:0.1 �)
   uint16_t                   group_selected_distance_z;  //!< [��� ��-�094] �������� �������� i ����� ����� � �������� ������� ��������� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t                   group_selected_distance_x;  //!< [��� ��-�095] �������� ��������� d ����� ����� � �������� ������� ��������� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   group_aircraft_numbers_b_t group_aircraft_numbers_b;   //!< [��� ��] ������ ��������� ������� �����, ���������� � ������� ����������
   uint16_t                   group_aircraft_a_angle;     //!< [��� ��-�033 � ��� ��-�047] �������� ���� �� �������� 1�15 ������� ����� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                   group_aircraft_a_distance;  //!< [��� ��-�063 � ��� ��-�077] ��������� D �� �������� 1�15 ������� ����� //(min:0 max:20000 bits:4..19 lsb:1 �)
   uint16_t                   group_aircraft_a_callsign;  //!< [��� ��-�001 � ��� ��-�015] �������� �������� 1�15 ������� ����� //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t                   group_aircraft_a_elevation; //!< [��� ��-�078 � ��� ��-�092] ���������� dh �������� 1�15 ������� ����� //(min:-2000 max:2000 signed:4 bits:5..19 lsb:0.1 �)
   uint16_t                   group_aircraft_b_angle;     //!< [��� ��-�033 � ��� ��-�047] �������� ���� �� �������� 1�15 ������� ����� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                   group_aircraft_b_distance;  //!< [��� ��-�063 � ��� ��-�077] ��������� D �� �������� 1�15 ������� ����� //(min:0 max:20000 bits:4..19 lsb:1 �)
   uint16_t                   group_aircraft_b_callsign;  //!< [��� ��-�001 � ��� ��-�015] �������� �������� 1�15 ������� ����� //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t                   group_aircraft_b_elevation; //!< [��� ��-�078 � ��� ��-�092] ���������� dh �������� 1�15 ������� ����� //(min:-2000 max:2000 signed:4 bits:5..19 lsb:0.1 �)
   uint16_t                   group_aircraft_c_angle;     //!< [��� ��-�033 � ��� ��-�047] �������� ���� �� �������� 1�15 ������� ����� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                   group_aircraft_c_distance;  //!< [��� ��-�063 � ��� ��-�077] ��������� D �� �������� 1�15 ������� ����� //(min:0 max:20000 bits:4..19 lsb:1 �)
   uint16_t                   group_aircraft_c_callsign;  //!< [��� ��-�001 � ��� ��-�015] �������� �������� 1�15 ������� ����� //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t                   group_aircraft_c_elevation; //!< [��� ��-�078 � ��� ��-�092] ���������� dh �������� 1�15 ������� ����� //(min:-2000 max:2000 signed:4 bits:5..19 lsb:0.1 �)
   uint16_t                   group_aircraft_d_angle;     //!< [��� ��-�033 � ��� ��-�047] �������� ���� �� �������� 1�15 ������� ����� //(min:0 max:360 signed:4 bits:5..19 msb:180�)
   uint16_t                   group_aircraft_d_distance;  //!< [��� ��-�063 � ��� ��-�077] ��������� D �� �������� 1�15 ������� ����� //(min:0 max:20000 bits:4..19 lsb:1 �)
   uint16_t                   group_aircraft_d_callsign;  //!< [��� ��-�001 � ��� ��-�015] �������� �������� 1�15 ������� ����� //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t                   group_aircraft_d_elevation; //!< [��� ��-�078 � ��� ��-�092] ���������� dh �������� 1�15 ������� ����� //(min:-2000 max:2000 signed:4 bits:5..19 lsb:0.1 �)
} mfci_in_sa_14_b_t;

//! ������� ��������� ����, �������� 15 ����-3.1 (12.5 ��, ������ ������������ � ����� ����)
typedef struct mfci_in_sa_15_b_t {
   group_flag_word_2_b_t group_flag_word_2_b;          //!< [��� ��] ����� 2 �������� ��� �� � ������� ������� �����
   group_flag_word_3_b_t group_flag_word_3_b;          //!< [��� ��] ����� 3 �������� ��� �� � ������� ������� �����
   uint16_t              group_aircraft_01_distance_x; //!< [��� ��-�018] ��������� d �� �������� 1 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_02_distance_x; //!< [��� ��-�019] ��������� d �� �������� 2 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_03_distance_x; //!< [��� ��-�020] ��������� d �� �������� 3 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_04_distance_x; //!< [��� ��-�021] ��������� d �� �������� 4 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_05_distance_x; //!< [��� ��-�022] ��������� d �� �������� 5 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_06_distance_x; //!< [��� ��-�023] ��������� d �� �������� 6 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_07_distance_x; //!< [��� ��-�024] ��������� d �� �������� 7 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_08_distance_x; //!< [��� ��-�025] ��������� d �� �������� 8 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_09_distance_x; //!< [��� ��-�026] ��������� d �� �������� 9 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_10_distance_x; //!< [��� ��-�027] ��������� d �� �������� 10 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_11_distance_x; //!< [��� ��-�028] ��������� d �� �������� 11 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_12_distance_x; //!< [��� ��-�029] ��������� d �� �������� 12 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_13_distance_x; //!< [��� ��-�030] ��������� d �� �������� 13 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_14_distance_x; //!< [��� ��-�031] ��������� d �� �������� 14 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_15_distance_x; //!< [��� ��-�032] ��������� d �� �������� 15 ������� ����� //(min:-20000 max:20000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_01_distance_z; //!< [��� ��-�048] �������� i ����� ����������� ��������� � ��������� 1 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_02_distance_z; //!< [��� ��-�049] �������� i ����� ����������� ��������� � ��������� 2 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_03_distance_z; //!< [��� ��-�050] �������� i ����� ����������� ��������� � ��������� 3 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_04_distance_z; //!< [��� ��-�051] �������� i ����� ����������� ��������� � ��������� 4 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_05_distance_z; //!< [��� ��-�052] �������� i ����� ����������� ��������� � ��������� 5 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_06_distance_z; //!< [��� ��-�053] �������� i ����� ����������� ��������� � ��������� 6 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_07_distance_z; //!< [��� ��-�054] �������� i ����� ����������� ��������� � ��������� 7 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_08_distance_z; //!< [��� ��-�055] �������� i ����� ����������� ��������� � ��������� 8 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_09_distance_z; //!< [��� ��-�056] �������� i ����� ����������� ��������� � ��������� 9 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_10_distance_z; //!< [��� ��-�057] �������� i ����� ����������� ��������� � ��������� 10 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_11_distance_z; //!< [��� ��-�058] �������� i ����� ����������� ��������� � ��������� 11 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_12_distance_z; //!< [��� ��-�059] �������� i ����� ����������� ��������� � ��������� 12 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_13_distance_z; //!< [��� ��-�060] �������� i ����� ����������� ��������� � ��������� 13 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_14_distance_z; //!< [��� ��-�061] �������� i ����� ����������� ��������� � ��������� 14 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
   uint16_t              group_aircraft_15_distance_z; //!< [��� ��-�062] �������� i ����� ����������� ��������� � ��������� 15 ������� ����� //(min:-1000 max:1000 signed:4 bits:5..19 lsb:1 �)
} mfci_in_sa_15_b_t;

//! ������� ��������� ����, �������� 16 ����-3.1 (12.5 ��, ������ ������������ � ����� ���)
typedef struct mfci_in_sa_16_b_t {
   uint16_t rap_course;                //!< [���-�001, ���-�014] ����, ������� (���-500 �/� 3 �� 1)
   uint16_t rap_uv_fire_name_1;        //!< [���-�020, ���-�021] �������� ������������� ��������� �������� �� �� (���-500 �/� 3 �� 2)
   uint16_t rap_uv_fire_name_2;        //!< [���-�022, ���-�023] �������� ������������� ��������� �������� �� �� (���-500 �/� 3 �� 3)
   uint16_t rap_uv_fire_name_recom_1;  //!< [��� �024, ���-�025] �������� ������������� ��������� �������� �� �� (���-500 �/� 3 �� 4)
   uint16_t rap_uv_fire_name_recom_2;  //!< [��� �026, ���-�027] �������� ������������� ��������� �������� �� �� (���-500 �/� 3 �� 5)
   uint16_t rap_uv_attacks_count;      //!< [���-�006, ���-�011] ���������� ���������� ���� � ����� � (���-500 �/� 3 �� 6)
   uint16_t rap_altitude_km;           //!< [���-�005, ���-�009] ������, ����� ��������, �������� ��-���� � ��-�� (���-500 �/� 3 �� 7)
   uint16_t rap_oes_subtypes;          //!< [���-�002, ���-�003] ��������� ���, ������ (���-500 �/� 3 �� 8)
   uint16_t rap_oes_1;                 //!< [���-�261, ���-�273] ������ ���� ��� 1 (���-500 �/� 3 �� 9)
   uint16_t rap_oes_2;                 //!< [���-�262, ���-�274] ������ ���� ��� 2 (���-500 �/� 3 �� 10)
   uint16_t rap_oes_3;                 //!< [���-�263, ���-�275] ������ ���� ��� 3 (���-500 �/� 3 �� 11)
   uint16_t rap_oes_4;                 //!< [���-�264, ���-�276] ������ ���� ��� 4 (���-500 �/� 3 �� 12)
   uint16_t rap_oes_5;                 //!< [���-�265, ���-�277] ������ ���� ��� 5 (���-500 �/� 3 �� 13)
   uint16_t rap_oes_6;                 //!< [���-�266, ���-�278] ������ ���� ��� 6 (���-500 �/� 3 �� 14)
   uint16_t rap_units_statuses;        //!< [���-�030����-�033] ��������� ������� 1-2 (��� � ���, ���-500 �/� 3 �� 15)
   uint16_t rap_uv_status;             //!< [���-�017����-�019] ��������� ��, �������� (���-500 �/� 3 �� 16)
   uint16_t rap_rtr_rap_statuses;      //!< [���-�040����-�053] ��������� ����������� ��� ��� � ��� ��� (���-500 �/� 3 �� 17)
   uint16_t rap_ric_1_damaging_range;  //!< [���-�301] ��������� ��������� ���� ��� 1 (���-500 �/� 3 �� 18) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_2_damaging_range;  //!< [���-�302] ��������� ��������� ���� ��� 2 (���-500 �/� 3 �� 19) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_3_damaging_range;  //!< [���-�303] ��������� ��������� ���� ��� 3 (���-500 �/� 3 �� 20) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_4_damaging_range;  //!< [���-�304] ��������� ��������� ���� ��� 4 (���-500 �/� 3 �� 21) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_5_damaging_range;  //!< [���-�305] ��������� ��������� ���� ��� 5 (���-500 �/� 3 �� 22) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_6_damaging_range;  //!< [���-�306] ��������� ��������� ���� ��� 6 (���-500 �/� 3 �� 23) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_7_damaging_range;  //!< [���-�307] ��������� ��������� ���� ��� 7 (���-500 �/� 3 �� 24) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_8_damaging_range;  //!< [���-�308] ��������� ��������� ���� ��� 8 (���-500 �/� 3 �� 25) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_9_damaging_range;  //!< [���-�309] ��������� ��������� ���� ��� 9 (���-500 �/� 3 �� 26) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_10_damaging_range; //!< [���-�310] ��������� ��������� ���� ��� 10 (���-500 �/� 3 �� 27) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_11_damaging_range; //!< [���-�311] ��������� ��������� ���� ��� 11 (���-500 �/� 3 �� 28) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_ric_12_damaging_range; //!< [���-�312] ��������� ��������� ���� ��� 12 (���-500 �/� 3 �� 29) //(min:0 max:1023 bits:5..14 lsb:1 ��)
   uint16_t rap_targets_count_sn;      //!< [���-�007, ���-�008] ���������� �������� ����� � ������� �/� (���-500 �/� 3 �� 30)
   uint16_t rap_ric_show;              //!< [���-�231���ϖ�242] �������� ������� ��������� ��� (���-500 �/� 4 �� 1)
   uint16_t rap_ric_flickering;        //!< [���-�201���ϖ�212] ������� �������� ��� (���-500 �/� 4 �� 2)
} mfci_in_sa_16_b_t;

//! ������� ��������� ����, �������� 17 ����-3.1 (12.5 ��, ������ ������������ � ����� ���)
typedef struct mfci_in_sa_17_b_t {
   uint16_t rap_ric_1_azimuth;     //!< [���-�131, ���-�201] �����, ������ ��� 1 (���-500 �/� 4 �� 3)
   uint16_t rap_ric_2_azimuth;     //!< [���-�132, ���-�202] �����, ������ ��� 2 (���-500 �/� 4 �� 4)
   uint16_t rap_ric_3_azimuth;     //!< [���-�133, ���-�203] �����, ������ ��� 3 (���-500 �/� 4 �� 5)
   uint16_t rap_ric_4_azimuth;     //!< [���-�134, ���-�204] �����, ������ ��� 4 (���-500 �/� 4 �� 6)
   uint16_t rap_ric_5_azimuth;     //!< [���-�135, ���-�205] �����, ������ ��� 5 (���-500 �/� 4 �� 7)
   uint16_t rap_ric_6_azimuth;     //!< [���-�136, ���-�206] �����, ������ ��� 6 (���-500 �/� 4 �� 8)
   uint16_t rap_ric_7_azimuth;     //!< [���-�137, ���-�207] �����, ������ ��� 7 (���-500 �/� 4 �� 9)
   uint16_t rap_ric_8_azimuth;     //!< [���-�138, ���-�208] �����, ������ ��� 8 (���-500 �/� 4 �� 10)
   uint16_t rap_ric_9_azimuth;     //!< [���-�139, ���-�209] �����, ������ ��� 9 (���-500 �/� 4 �� 11)
   uint16_t rap_ric_10_azimuth;    //!< [���-�140, ���-�210] �����, ������ ��� 10 (���-500 �/� 4 �� 12)
   uint16_t rap_ric_11_azimuth;    //!< [���-�141, ���-�211] �����, ������ ��� 11 (���-500 �/� 4 �� 13)
   uint16_t rap_ric_12_azimuth;    //!< [���-�142, ���-�212] �����, ������ ��� 12 (���-500 �/� 4 �� 14)
   uint16_t rap_ric_1_distance;    //!< [���-�101, ���-�161] �����, ��������� ��� 1 (���-500 �/� 4 �� 15)
   uint16_t rap_ric_2_distance;    //!< [���-�102, ���-�162] �����, ��������� ��� 2 (���-500 �/� 4 �� 16)
   uint16_t rap_ric_3_distance;    //!< [���-�103, ���-�163] �����, ��������� ��� 3 (���-500 �/� 4 �� 17)
   uint16_t rap_ric_4_distance;    //!< [���-�104, ���-�164] �����, ��������� ��� 4 (���-500 �/� 4 �� 18)
   uint16_t rap_ric_5_distance;    //!< [���-�105, ���-�165] �����, ��������� ��� 5 (���-500 �/� 4 �� 19)
   uint16_t rap_ric_6_distance;    //!< [���-�106, ���-�166] �����, ��������� ��� 6 (���-500 �/� 4 �� 20)
   uint16_t rap_ric_7_distance;    //!< [���-�107, ���-�167] �����, ��������� ��� 7 (���-500 �/� 4 �� 21)
   uint16_t rap_ric_8_distance;    //!< [���-�108, ���-�168] �����, ��������� ��� 8 (���-500 �/� 4 �� 22)
   uint16_t rap_ric_9_distance;    //!< [���-�109, ���-�169] �����, ��������� ��� 9 (���-500 �/� 4 �� 23)
   uint16_t rap_ric_10_distance;   //!< [���-�110, ���-�170] �����, ��������� ��� 10 (���-500 �/� 4 �� 24)
   uint16_t rap_ric_11_distance;   //!< [���-�111, ���-�171] �����, ��������� ��� 11 (���-500 �/� 4 �� 25)
   uint16_t rap_ric_12_distance;   //!< [���-�112, ���-�172] �����, ��������� ��� 12 (���-500 �/� 4 �� 26)
   uint16_t rap_ric_distance_high; //!< [���-�231����-�242] ��������� ���, ������� ������� (���-500 �/� 4 �� 27)
   uint16_t rap_ric_vz_noise;      //!< [���-�121���ϖ�132] �������� ������ � ������ �� (���-500 �/� 4 �� 28)
   uint16_t rap_buttons_word_1;    //!< ����� 1 ���������� ���������� ��� ��� (���-500 �/� 5 �� 1)
   uint16_t rap_buttons_word_2;    //!< ����� 2 ���������� ���������� ��� ��� (���-500 �/� 5 �� 2)
   uint16_t rap_buttons_word_3;    //!< ����� 3 ���������� ���������� ��� ��� (���-500 �/� 5 �� 3)
   uint16_t rap_buttons_word_4;    //!< ����� 4 ���������� ���������� ��� ��� (���-500 �/� 5 �� 4)
   uint16_t rap_menu_item_1;       //!< [���-�501����-�538] ������� ������ ������������ ��� 1 (���-500 �/� 5 �� 5)
   uint16_t rap_menu_item_2;       //!< [���-�501����-�538] ������� ������ ������������ ��� 2 (���-500 �/� 5 �� 6)
} mfci_in_sa_17_b_t;

//! ������� ��������� ����, �������� 18 ����-3.1 (12.5 ��, ������ ������������ � ����� ���)
typedef struct mfci_in_sa_18_b_t {
   uint16_t rap_menu_item_3;       //!< [���-�501����-�538] ������� ������ ������������ ��� 3 (���-500 �/� 5 �� 7)
   uint16_t rap_menu_item_4;       //!< [���-�501����-�538] ������� ������ ������������ ��� 4 (���-500 �/� 5 �� 8)
   uint16_t rap_menu_item_5;       //!< [���-�501����-�538] ������� ������ ������������ ��� 5 (���-500 �/� 5 �� 9)
   uint16_t rap_menu_item_6;       //!< [���-�501����-�538] ������� ������ ������������ ��� 6 (���-500 �/� 5 �� 10)
   uint16_t rap_menu_item_7;       //!< [���-�501����-�538] ������� ������ ������������ ��� 7 (���-500 �/� 5 �� 11)
   uint16_t rap_menu_item_8;       //!< [���-�501����-�538] ������� ������ ������������ ��� 8 (���-500 �/� 5 �� 12)
   uint16_t rap_ivz_flags;         //!< [���-�521����-�528] �������� ������������� ������������ ������ � ������ ��� (���-500 �/� 5 �� 13)
   uint16_t rap_bsv_version;       //!< [���-�703, ���-�704] ������ ��� ��� (���-500 �/� 6 �� 1)
   uint16_t rap_bpk_bpro_version;  //!< [���-�705, ���-�706] ������ ��� ��� � ���� (���-500 �/� 6 �� 2)
   uint16_t rap_bfp_version;       //!< [���-�707, ���-�708] ������ ��� ��� (���-500 �/� 6 �� 3)
   uint16_t rap_bou_version;       //!< [���-�709, ���-�710] ������ ��� ��� (���-500 �/� 6 �� 4)
   uint16_t rap_bsv_bu_version_1;  //!< [���-�811, ���-�812] ������ ���������� ����� �� (���-500 �/� 6 �� 5)
   uint16_t rap_bsv_bu_version_2;  //!< [���-�813, ���-�814] ������ ���������� ����� �� (���-500 �/� 6 �� 6)
   uint16_t rap_bsv_bu_version_3;  //!< [���-�815, ���-�816] ������ ���������� ����� �� (���-500 �/� 6 �� 7)
   uint16_t rap_bsv_bu_version_4;  //!< [���-�817, ���-�818] ������ ���������� ����� �� (���-500 �/� 6 �� 8)
   uint16_t rap_bsv_bu_version_5;  //!< [���-�819, ���-�820] ������ ���������� ����� �� (���-500 �/� 6 �� 9)
   uint16_t rap_bou_status;        //!< [���-�761, ���-�762] ��������� ���, ��� (���-500 �/� 6 �� 10)
   uint16_t rap_unit5_status;      //!< [���-�726����-�731] ��������� ������� 5 / �� (���-500 �/� 6 �� 11)
   uint16_t rap_bv_status;         //!< [��-�025, ��-�030] ����� � ��������� ����� ������� �� (���-500 �/� 6 �� 12)
   uint16_t rap_bv_weapon_types_1; //!< [��-�001, ��-�002] ���� ������� � ������� 1-2 ����� ������� �� (���-500 �/� 6 �� 13)
   uint16_t rap_bv_weapon_types_2; //!< [��-�001, ��-�002] ���� ������� � ������� 3-4 ����� ������� �� (���-500 �/� 6 �� 14)
   uint16_t rap_bv_weapon_types_3; //!< [��-�001, ��-�002] ���� ������� � ������� 5-6 ����� ������� �� (���-500 �/� 6 �� 15)
   uint16_t rap_bv_weapon_types_4; //!< [��-�001, ��-�002] ���� ������� � ������� 7-8 ����� ������� �� (���-500 �/� 6 �� 16)
   uint16_t rap_bv_weapon_types_5; //!< [��-�001, ��-�002] ���� ������� � ������� 9-10 ����� ������� �� (���-500 �/� 6 �� 17)
   uint16_t rap_bv_weapon_types_6; //!< [��-�001, ��-�002] ���� ������� � ������� 11-12 ����� ������� �� (���-500 �/� 6 �� 18)
   uint16_t rap_bv_weapon_types_7; //!< [��-�001, ��-�002] ���� ������� � ������� 13-14 ����� ������� �� (���-500 �/� 6 �� 19)
   uint16_t rap_unit1_status;      //!< [���-�713����-�719] ��������� ������� 1 / ��� (���-500 �/� 6 �� 20)
   uint16_t rap_unit2_status;      //!< [���-�720����-�725] ��������� ������� 2 / ���  (���-500 �/� 6 �� 21)
   uint16_t rap_rap_kzv_status;    //!< [���-�732����-�737] ��������� ��� � ��� (���-500 �/� 6 �� 23)
   uint16_t rap_recv_side_status;  //!< [���-�738����-�743] ��������� ������/������� ��������� ����� (���-500 �/� 6 �� 24)
   uint16_t rap_recv_rear_status;  //!< [���-�744����-�746] ��������� ������� ��������� ����� (���-500 �/� 6 �� 25)
   uint16_t rap_send_side_status;  //!< [���-�747����-�760] ��������� ����������� ����� (���-500 �/� 6 �� 26)
} mfci_in_sa_18_b_t;

//! ������� ��������� ����, �������� 19 ����-3.1 (6.25 ��, ������ ������������ � ����� ���)
typedef struct mfci_in_sa_19_b_t {
   sas_valid_word_1_b_t sas_valid_word_1_b;      //!< ����� 1 �������������� ���
   sas_valid_word_2_b_t sas_valid_word_2_b;      //!< ����� 2 �������������� ���
   sas_valid_word_3_b_t sas_valid_word_3_b;      //!< ����� 3 �������������� ���
   sas_valid_word_4_b_t sas_valid_word_4_b;      //!< ����� 4 �������������� ���
   sas_flag_word_1_b_t  sas_flag_word_1_b;       //!< ����� 1 �������� ���
   sas_flag_word_2_b_t  sas_flag_word_2_b;       //!< ����� 2 �������� ���
   sas_flag_word_3_b_t  sas_flag_word_3_b;       //!< ����� 3 �������� ���
   sas_flag_word_4_b_t  sas_flag_word_4_b;       //!< ����� 4 �������� ���
   uint16_t             sas_115_voltage_gen1_1;  //!< [���-�201] ���� 115�: ���������� ���� ���������� 1, ���� A //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen1_2;  //!< [���-�202] ���� 115�: ���������� ���� ���������� 1, ���� B //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen1_3;  //!< [���-�203] ���� 115�: ���������� ���� ���������� 1, ���� C //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen2_1;  //!< [���-�204] ���� 115�: ���������� ���� ���������� 2, ���� A //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen2_2;  //!< [���-�205] ���� 115�: ���������� ���� ���������� 2, ���� B //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen2_3;  //!< [���-�206] ���� 115�: ���������� ���� ���������� 2, ���� C //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen3_1;  //!< [���-�207] ���� 115�: ���������� ���� ���������� 3, ���� A //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen3_2;  //!< [���-�208] ���� 115�: ���������� ���� ���������� 3, ���� B //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen3_3;  //!< [���-�209] ���� 115�: ���������� ���� ���������� 3, ���� C //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen4_1;  //!< [���-�210] ���� 115�: ���������� ���� ���������� 4, ���� A //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen4_2;  //!< [���-�211] ���� 115�: ���������� ���� ���������� 4, ���� B //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_voltage_gen4_3;  //!< [���-�212] ���� 115�: ���������� ���� ���������� 4, ���� C //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t             sas_115_current_rap_1;   //!< [���-�213] ���� 115�: ��� ���, ���� A //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_current_rap_2;   //!< [���-�214] ���� 115�: ��� ���, ���� B //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_current_rap_3;   //!< [���-�215] ���� 115�: ��� ���, ���� C //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_current_vsu_1;   //!< [���-�216] ���� 115�: ��� ���������� ���, ���� A //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_current_vsu_2;   //!< [���-�217] ���� 115�: ��� ���������� ���, ���� B //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_current_vsu_3;   //!< [���-�218] ���� 115�: ��� ���������� ���, ���� C //(min:0 max:402 signed:4 bits:5..19 msb:201 �)
   uint16_t             sas_115_frequency_gen1;  //!< [���-�219] ���� 115�: ������� ���� ���������� 1 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t             sas_115_frequency_gen2;  //!< [���-�220] ���� 115�: ������� ���� ���������� 2 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t             sas_115_frequency_gen3;  //!< [���-�221] ���� 115�: ������� ���� ���������� 3 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t             sas_115_frequency_gen4;  //!< [���-�222] ���� 115�: ������� ���� ���������� 4 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t             sas_115_frequency_emrg1; //!< [���-�229] ���� 115�: ������� ��������� ���� 1 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t             sas_115_frequency_emrg2; //!< [���-�230] ���� 115�: ������� ��������� ���� 2 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
} mfci_in_sa_19_b_t;

//! ������� ��������� ����, �������� 20 ����-3.1 (6.25 ��, ������ ������������ � ����� ���, ���)
typedef struct mfci_in_sa_20_b_t {
   uint16_t               sas_115_voltage_emrg1_1;      //!< [���-�223] ���� 115�: ���������� ��������� ���� 1, ���� A //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_emrg1_2;      //!< [���-�224] ���� 115�: ���������� ��������� ���� 1, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_emrg1_3;      //!< [���-�225] ���� 115�: ���������� ��������� ���� 1, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_emrg2_1;      //!< [���-�226] ���� 115�: ���������� ��������� ���� 2, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_emrg2_2;      //!< [���-�227] ���� 115�: ���������� ��������� ���� 2, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_emrg2_3;      //!< [���-�228] ���� 115�: ���������� ��������� ���� 2, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_conv1_1;      //!< [���-�231] ���� 115�: ���������� �� ���� ��������������� 1, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_conv1_2;      //!< [���-�232] ���� 115�: ���������� �� ���� ��������������� 1, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_conv1_3;      //!< [���-�233] ���� 115�: ���������� �� ���� ��������������� 1, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_conv3l_1;     //!< [���-�237] ���� 115�: ���������� �� ���� ��������������� 3 �����, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_voltage_conv3r_1;     //!< [���-�238] ���� 115�: ���������� �� ���� ��������������� 3 ������, ���� � //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_frequency_conv1;      //!< [���-�239] ���� 115�: ������� �� ���� ��������������� 1 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t               sas_115_frequency_conv3;      //!< [���-�241] ���� 115�: ������� �� ���� ��������������� 3 //(min:320 max:482 signed:4 bits:5..19 msb:241 ��)
   uint16_t               sas_115_converter1_voltage;   //!< [���-�242] ���� 115�: ���������� ��������������� 1 //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_115_converter3_voltage;   //!< [���-�244] ���� 115�: ���������� ��������������� 3 //(min:0 max:142 signed:4 bits:5..19 msb:71 �)
   uint16_t               sas_27_current_battery_rap_1; //!< [���-�301] ���� 27�: ��� ������������ 1, ���1 //(min:-100 max:602 signed:4 bits:5..19 msb:301 �)
   uint16_t               sas_27_current_battery_rap_2; //!< [���-�302] ���� 27�: ��� ������������ 2, ���2 //(min:-100 max:602 signed:4 bits:5..19 msb:301 �)
   uint16_t               sas_27_voltage_battery_1;     //!< [���-�303] ���� 27�: ���������� ������������ 1 //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_battery_2;     //!< [���-�304] ���� 27�: ���������� ������������ 2 //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_current_vsu;           //!< [���-�305] ���� 27�: ��� ���������� ��� //(min:0 max:702 signed:4 bits:5..19 msb:351 �)
   uint16_t               sas_27_voltage_l_main1;       //!< [���-�308] ���� 27�: ���������� ���� �������� 1 ����� ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_l_main2;       //!< [���-�309] ���� 27�: ���������� ���� �������� 2 ����� ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_l_emrg1;       //!< [���-�310] ���� 27�: ���������� ���� ��������� 1 ����� ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_r_main1;       //!< [���-�311] ���� 27�: ���������� ���� �������� 1 ������ ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_r_main2;       //!< [���-�312] ���� 27�: ���������� ���� �������� 2 ������ ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   uint16_t               sas_27_voltage_r_emrg2;       //!< [���-�313] ���� 27�: ���������� ���� ��������� 2 ������ ���� //(min:0 max:35 signed:4 bits:5..19 msb:17.5 �)
   skv_gs_flag_word_1_b_t skv_gs_flag_word_1_b;         //!< ����� 1 �������� ���/����/��/���
   uint16_t               skv_temperature_pilots;       //!< [���-�001] ����������� � ������ ������� //(min:-60 max:70 signed:5 bits:13..19 msb:64��)
   uint16_t               skv_temperature_pgo;          //!< [���-�002] ����������� � �������� �������� ������ //(min:-60 max:70 signed:5 bits:13..19 msb:64��)
   uint16_t               skv_temperature_zgo;          //!< [���-�003] ����������� � ������ �������� ������ //(min:-60 max:70 signed:5 bits:13..19 msb:64��)
   uint16_t               skv_temperature_zto;          //!< [���-�004] ����������� � ������ ����������� ������ //(min:-60 max:70 signed:5 bits:13..19 msb:64��)
   uint16_t               kisl_pressure;                //!< [����-�001/����-�002] �������� ��������� (4�11� - �������� ������ �����, 12�19� - �������� �������, ��� = 14.81 ���) //(min:0 max:210)
} mfci_in_sa_20_b_t;

//! ������� ��������� ����, �������� 21 ����-3.1 (6.25 ��, ������ ������������ � ����� ���, ���, ��/�, ����)
typedef struct mfci_in_sa_21_b_t {
   uint16_t                 bcvm_vr;                    //!< [����-�018] �������� ������ ������� �������� ������ ����� VR //(min:250 max:390 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                 bcvm_v2;                    //!< [����-�019] ���������� �������� �� ������ V2 //(min:300 max:450 signed:4 bits:5..19 msb:948.224 ��/�)
   uint16_t                 bcvm_landing_run_tp;        //!< [����-�049] ��������� ����� ������� ��� ������� � ��������� ��������� //(min:1000 max:6000 bits:4..19 lsb:1 �)
   uint16_t                 bcvm_landing_run;           //!< [����-�050] ��������� ����� ������� ��� ������� ��� ���������� �������� //(min:1000 max:6000 bits:4..19 lsb:1 �)
   uint16_t                 bcvm_landing_runway_length; //!< [����-�051] ����� ��� ������� //(min:1000 max:6000 bits:4..19 lsb:1 �)
   uint16_t                 bcvm_takeoff_runway_length; //!< [����-�052] ����� ��� ������ //(min:1000 max:6000 bits:4..19 lsb:1 �)
   absu_flag_word_1_b_t     absu_flag_word_1_b;         //!< ����� 1 �������� ����
   absu_flag_word_2_b_t     absu_flag_word_2_b;         //!< ����� 2 �������� ����
   smk_supk_flag_word_1_b_t smk_supk_1_flag_word_1_b;   //!< ����� 1 �������� ���/���� (����� 1)
   smk_supk_flag_word_1_b_t smk_supk_2_flag_word_1_b;   //!< ����� 1 �������� ���/���� (����� 2)
   smk_supk_flag_word_2_b_t smk_supk_1_flag_word_2_b;   //!< ����� 2 �������� ���/���� (����� 1)
   smk_supk_flag_word_2_b_t smk_supk_2_flag_word_2_b;   //!< ����� 2 �������� ���/���� (����� 2)
   sur_valid_word_b_t       sur_valid_word_b;           //!< ����� �������������� ���
   uint16_t                 smk_flap_right;             //!< [���-�014] ��������� ������� �������� //(min:0 max:40 signed:4 bits:5..14 msb:40�)
   uint16_t                 smk_flap_left;              //!< [���-�015] ��������� ������ �������� //(min:0 max:40 signed:4 bits:5..14 msb:40�)
   uint16_t                 smk_slat_right;             //!< [���-�018] ��������� ������� ���������� //(min:0 max:21 signed:4 bits:5..14 msb:40�)
   uint16_t                 smk_slat_left;              //!< [���-�019] ��������� ������ ���������� //(min:0 max:21 signed:4 bits:5..14 msb:40�)
   uint16_t                 smk_wing_left;              //!< [���-�120] ��������� ����� ������� ����� //(min:20 max:65 signed:4 bits:5..14 msb:40�)
   uint16_t                 smk_wing_right;             //!< [���-�121] ��������� ������ ������� ����� //(min:20 max:65 signed:4 bits:5..14 msb:40�)
   uint16_t                 sur_course_balance;         //!< [���-�001] ������ ������������ �� ����� //(min:-10 max:10 signed:4 bits:5..19 msb:15�)
   uint16_t                 sur_pitch_balance;          //!< [���-�002] ��������� ������ ������������ �� ������� //(min:-16.5 max:12.25 signed:4 bits:5..19 msb:15�)
   uint16_t                 sur_fin;                    //!< [���-�003] ��������� ���� //(min:-22 max:22 signed:4 bits:5..19 msb:11�)
   uint16_t                 sur_stab;                   //!< [���-�004] ��������� ������������� //(min:-17 max:10 signed:4 bits:5..19 msb:8.5�)
   uint16_t                 sur_interceptor_r12;        //!< [���-�006] ��������� ������ I � II ������ ������������� //(min:0 max:49 signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_interceptor_r34;        //!< [���-�007] ��������� ������ III � IV ������ ������������� //(min:0 max:49 signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_interceptor_r56;        //!< [���-�008] ��������� ������ V � VI ������ ������������� //(min:0 max:49 signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_interceptor_l12;        //!< [���-�009] ��������� ������ I � II ������ ������������ //(min:0 max:49 signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_interceptor_l34;        //!< [���-�010] ��������� ������ III � IV ������ ������������ //(min:0 max:49 signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_interceptor_l56;        //!< [���-�011] ��������� ������ V � VI ������ ������������ //(min:0 max:� signed:4 bits:5..19 msb:24.5�)
   uint16_t                 sur_flaperon_left;          //!< [���-�020] ��������� ������ ��������� //(min:-15 max:27 signed:4 bits:5..19 msb:13.5�)
   uint16_t                 sur_flaperon_right;         //!< [���-�021] ��������� ������� ��������� //(min:-15 max:27 signed:4 bits:5..19 msb:13.5�)
   uint16_t                 sur_roll_balance;           //!< [���-�022] ������ ������������ �� ����� //(min:-12 max:12 signed:4 bits:5..19 msb:8�)
} mfci_in_sa_21_b_t;

//! ������� ��������� ����, �������� 22 ����-3.1 (6.25 ��, ������ ������������ � ������ ���, ����)
typedef struct mfci_in_sa_22_b_t {
   uint16_t              smk_wing;                //!< [���-�013] ��������� ����������� �������� ����� //(min:20 max:65 signed:4 bits:5..14 msb:40�)
   uint16_t              smk_ruk;                 //!< [���-�016] ��������� �������� ���������� ������ //(min:20 max:65 signed:4 bits:5..14 msb:40�)
   torm_flag_word_1_b_t  torm_flag_word_1_b;      //!< ����� 1 �������� ����
   torm_flag_word_2_b_t  torm_flag_word_2_b;      //!< ����� 2 �������� ����
   torm_valid_word_b_t   torm_valid_word_b;       //!< ����� �������������� ����
   uint16_t              torm_pressure_lf_1;      //!< [����-�401] �������� � �������� �������� ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_lm_1;      //!< [����-�402] �������� � �������� ������� ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_lr_1;      //!< [����-�403] �������� � �������� ������ ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rf_1;      //!< [����-�404] �������� � �������� �������� ���� ������ ������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rm_1;      //!< [����-�405] �������� � �������� ������� ���� ������ �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rr_1;      //!< [����-�406] �������� � �������� ������ ���� ������ �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_lf_2;      //!< [����-�601] �������� � �������� �������� ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_lm_2;      //!< [����-�602] �������� � �������� ������� ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_lr_2;      //!< [����-�603] �������� � �������� ������ ���� ����� �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rf_2;      //!< [����-�604] �������� � �������� �������� ���� ������ �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rm_2;      //!< [����-�605] �������� � �������� ������� ���� ������ �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_rr_2;      //!< [����-�606] �������� � �������� ������ ���� ������ �������, ���. //(min:0 max:210 signed:4 bits:5..19 msb:105 ���/��.��)
   uint16_t              torm_pressure_acc_fluid; //!< [����-�607] �������� �������� � ����������������� //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   uint16_t              torm_pressure_acc_nitro; //!< [����-�608] �������� ����� � ����������������� //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   topl_flag_word_1_b_t  topl_flag_word_1_b;      //!< ����� 1 �������� ����
   topl_flag_word_2_b_t  topl_flag_word_2_b;      //!< ����� 2 �������� ����
   topl_flag_word_3_b_t  topl_flag_word_3_b;      //!< ����� 3 �������� ����
   topl_flag_word_4_b_t  topl_flag_word_4_b;      //!< ����� 4 �������� ����
   topl_flag_word_5_b_t  topl_flag_word_5_b;      //!< ����� 5 �������� ����
   topl_flag_word_6_b_t  topl_flag_word_6_b;      //!< ����� 6 �������� ����
   topl_flag_word_7_b_t  topl_flag_word_7_b;      //!< ����� 7 �������� ����
   topl_flag_word_8_b_t  topl_flag_word_8_b;      //!< ����� 8 �������� ����
   topl_flag_word_9_b_t  topl_flag_word_9_b;      //!< ����� 9 �������� ����
   topl_flag_word_10_b_t topl_flag_word_10_b;     //!< ����� 10 �������� ����
   topl_flag_word_11_b_t topl_flag_word_11_b;     //!< ����� 11 �������� ����
   topl_flag_word_12_b_t topl_flag_word_12_b;     //!< ����� 12 �������� ����
   topl_flag_word_13_b_t topl_flag_word_13_b;     //!< ����� 13 �������� ����
} mfci_in_sa_22_b_t;

//! ������� ��������� ����, �������� 23 ����-3.1 (6.25 ��, ������ ������������ � ������ ����, ���)
typedef struct mfci_in_sa_23_b_t {
   topl_flag_word_14_b_t   topl_flag_word_14_b;      //!< ����� 14 �������� ����
   topl_flag_word_15_b_t   topl_flag_word_15_b;      //!< ����� 15 �������� ����
   topl_flag_word_16_b_t   topl_flag_word_16_b;      //!< ����� 16 �������� ����
   uint16_t                topl_fuel_selected;       //!< [����-�001] �������� �� ��������� �������� //(min:0 max:999 signed:4 bits:5..14 msb:512 �)
   uint16_t                topl_centering_selected;  //!< [����-�002] �������� ��������� //(min:45 max:65 signed:4 bits:5..18 msb:64 % ���)
   uint16_t                topl_centering;           //!< [����-�003] ����������� ��������� �������� //(min:45 max:65 signed:4 bits:5..18 msb:64 % ���)
   uint16_t                topl_fuel_1l;             //!< [����-�005] ���������� ������� � ���� �1� //(min:0 max:18200 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_1r;             //!< [����-�006] ���������� ������� � ���� �1� //(min:0 max:18200 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_2l;             //!< [����-�007] ���������� ������� � ���� �2� //(min:0 max:23500 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_2r;             //!< [����-�008] ���������� ������� � ���� �2� //(min:0 max:23500 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_4;              //!< [����-�009] ���������� ������� � ���� �4 //(min:0 max:23600 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_3l;             //!< [����-�010] ���������� ������� � ���� �3� //(min:0 max:4550 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_3r;             //!< [����-�011] ���������� ������� � ���� �3� //(min:0 max:4550 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_5;              //!< [����-�012] ���������� ������� � ���� �5 //(min:0 max:11600 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_6;              //!< [����-�013] ���������� ������� � ���� �6 //(min:0 max:11000 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb1;            //!< [����-�014] ���������� ������� � ���� ��1 //(min:0 max:4200 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb2;            //!< [����-�015] ���������� ������� � ���� ��2 //(min:0 max:3450 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb3;            //!< [����-�016] ���������� ������� � ���� ��3 //(min:0 max:3450 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb4;            //!< [����-�017] ���������� ������� � ���� ��4 //(min:0 max:4200 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_pressure;       //!< [����-�018] �������� � ��������� ������� (��������) //(min:0 max:12 signed:4 bits:5..16 msb:64 ���/��.��)
   uint16_t                topl_fuel_total_dz_start; //!< [����-�021] ����� ����������� ���������� ������� �� ���� ����� � ������ ������ �������� //(min:0 max:175000 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_3l_reserve;     //!< [����-�022] ����� ������� � ��������� ������ ���� �3� //(min:0 max:5000 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_3r_reserve;     //!< [����-�023] ����� ������� � ��������� ������ ���� �3� //(min:0 max:5000 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb1_reserve;    //!< [����-�024] ����� ������� � ��������� ������ ���� ��1 //(min:0 max:850 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb2_reserve;    //!< [����-�025] ����� ������� � ��������� ������ ���� ��2 //(min:0 max:1350 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb3_reserve;    //!< [����-�026] ����� ������� � ��������� ������ ���� ��3 //(min:0 max:1350 signed:4 bits:5..19 msb:131072 ��)
   uint16_t                topl_fuel_rb4_reserve;    //!< [����-�027] ����� ������� � ��������� ������ ���� ��4 //(min:0 max:850 signed:4 bits:5..19 msb:131072 ��)
   vsu_flag_valid_word_b_t vsu_flag_valid_word_b;    //!< ����� �������� � �������������� ���
   uint16_t                vsu_n;                    //!< [���-�001] �������� �������� ������ ��� //(min:3 max:110 bits:5..15 msb:102.4 %)
   uint16_t                vsu_n_max_2;              //!< [���-�002] ���������� �������� �������� ������ ��� //(min:3 max:110 bits:5..19 msb:102.4 %)
   uint16_t                vsu_n_max_1;              //!< [���-�003] ���������� �������� �������� ������ ��� //(min:3 max:110 bits:5..19 msb:102.4 %)
   uint16_t                vsu_tg;                   //!< [���-�004] ����������� ���� �� �������� ��� //(min:0 max:800 bits:7..15 msb:512��)
} mfci_in_sa_23_b_t;

//! ������� ��������� ����, �������� 24 ����-3.1 (6.25 ��, ������ ������������ � �����, ���, ���, ��)
typedef struct mfci_in_sa_24_b_t {
   uint16_t               vsu_tg_max_2;            //!< [���-�005] ���������� ����������� ���� �� �������� ��� //(min:0 max:800 bits:7..19 msb:512��)
   uint16_t               vsu_tg_max_1;            //!< [���-�007] ���������� ����������� ���� �� �������� ��� //(min:0 max:800 bits:7..19 msb:512��)
   uint16_t               vsu_oil_temperature;     //!< [���-�008] ����������� ����� � ��������� ��� //(min:-50 max:150 signed:0 bits:8..15 msb:128��)
   uint16_t               vsu_oil_temperature_max; //!< [���-�009] ���������� ����������� ����� � ��������� ��� //(min:-50 max:150 signed:7 bits:8..19 msb:128��)
   skv_gs_flag_word_2_b_t skv_gs_flag_word_2_b;    //!< ����� 2 �������� ���/����/��/���
   skv_gs_flag_word_3_b_t skv_gs_flag_word_3_b;    //!< ����� 3 �������� ���/����/��/���
   skv_gs_flag_word_4_b_t skv_gs_flag_word_4_b;    //!< ����� 4 �������� ���/����/��/���
   skv_gs_flag_word_5_b_t skv_gs_flag_word_5_b;    //!< ����� 5 �������� ���/����/��/���
   skv_gs_flag_word_6_b_t skv_gs_flag_word_6_b;    //!< ����� 6 �������� ���/����/��/���
   skv_gs_flag_word_7_b_t skv_gs_flag_word_7_b;    //!< ����� 7 �������� ���/����/��/���
   uint16_t               gs_pressure_1;           //!< [��-�001] �������� � ��1 //(min:0 max:382 signed:4 bits:5..19 msb:191 ���/��.��)
   uint16_t               gs_pressure_2;           //!< [��-�002] �������� � ��2 //(min:0 max:382 signed:4 bits:5..19 msb:191 ���/��.��)
   uint16_t               gs_pressure_3;           //!< [��-�003] �������� � ��3 //(min:0 max:382 signed:4 bits:5..19 msb:191 ���/��.��)
   uint16_t               gs_pressure_4;           //!< [��-�004] �������� � ��4 //(min:0 max:382 signed:4 bits:5..19 msb:191 ���/��.��)
   uint16_t               gs_pressure_acc_1;       //!< [��-�005] �������� ����������������� ��1 //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   uint16_t               gs_pressure_acc_2;       //!< [��-�006] �������� ����������������� ��2 //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   uint16_t               gs_pressure_acc_3;       //!< [��-�007] �������� ����������������� ��3 //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   uint16_t               gs_pressure_acc_4;       //!< [��-�008] �������� ����������������� ��4 //(min:0 max:352 signed:4 bits:5..19 msb:176 ���/��.��)
   uint16_t               gs_oil_level_1;          //!< [��-�009] ������� ������� �������� � ���� ��1 //(min:24 max:68 signed:4 bits:5..19 msb:34 �)
   uint16_t               gs_oil_level_2;          //!< [��-�010] ������� ������� �������� � ���� ��2 //(min:24 max:68 signed:4 bits:5..19 msb:34 �)
   uint16_t               gs_oil_level_3;          //!< [��-�011] ������� ������� �������� � ���� ��3 //(min:24 max:68 signed:4 bits:5..19 msb:34 �)
   uint16_t               gs_oil_level_4;          //!< [��-�012] ������� ������� �������� � ���� ��4 //(min:24 max:68 signed:4 bits:5..19 msb:34 �)
   uint16_t               gs_oil_temperature_1;    //!< [��-�013] ����������� ������� �������� � ���� ��1 //(min:-60 max:202 signed:4 bits:5..19 msb:101��)
   uint16_t               gs_oil_temperature_2;    //!< [��-�015] ����������� ������� �������� � ���� ��2 //(min:-60 max:202 signed:4 bits:5..19 msb:101��)
   uint16_t               gs_oil_temperature_3;    //!< [��-�017] ����������� ������� �������� � ���� ��3 //(min:-60 max:202 signed:4 bits:5..19 msb:101��)
   uint16_t               gs_oil_temperature_4;    //!< [��-�019] ����������� ������� �������� � ���� ��4 //(min:-60 max:202 signed:4 bits:5..19 msb:101��)
   uint16_t               gs_pressure_bulb_1;      //!< [��-�021] �������� � ������� ������� � 1 //(min:0 max:182 signed:4 bits:5..19 msb:91 ���/��.��)
   uint16_t               gs_pressure_bulb_2;      //!< [��-�022] �������� � ������� ������� � 2 //(min:0 max:182 signed:4 bits:5..19 msb:91 ���/��.��)
   uint16_t               gs_pressure_insuff_1;    //!< [��-�023] �������� ������� � ���� ��1 //(min:0 max:8 signed:4 bits:5..19 msb:4 ���/��.��)
   uint16_t               gs_pressure_insuff_2;    //!< [��-�024] �������� ������� � ���� ��2 //(min:0 max:8 signed:4 bits:5..19 msb:4 ���/��.��)
   uint16_t               gs_pressure_insuff_3;    //!< [��-�025] �������� ������� � ���� ��3 //(min:0 max:8 signed:4 bits:5..19 msb:4 ���/��.��)
   uint16_t               gs_pressure_insuff_4;    //!< [��-�026] �������� ������� � ���� ��4 //(min:0 max:8 signed:4 bits:5..19 msb:4 ���/��.��)
} mfci_in_sa_24_b_t;

//! ������� ��������� ����, �������� 25 ����-3.1 (1 ��, ���������� ���������)
typedef struct mfci_in_sa_25_b_t {
   mfci_formats_word_1_b_t    mfci_formats_1_b;                           //!< ����� 1-2 c ������� ���� 1-4
   mfci_formats_word_2_b_t    mfci_formats_2_b;                           //!< ����� 3-4 c ������� ���� 5-8
   mfci_formats_word_3_b_t    mfci_formats_3_b;                           //!< ����� 5-6 c ������� ���� 9-11
   upr_flag_word_common_1_b_t pilot_1_upr_flag_word_1_b;                  //!< ����� �������� ��� ��������� �������
   upr_flag_word_common_2_b_t pilot_1_upr_flag_word_2_b;                  //!< ����� �������� ��� ��������� �������
   upr_flag_word_common_1_b_t pilot_2_upr_flag_word_1_b;                  //!< ����� �������� ��� ��������� ��������� �������
   upr_flag_word_common_2_b_t pilot_2_upr_flag_word_2_b;                  //!< ����� �������� ��� ��������� ��������� �������
   upr_flag_word_common_1_b_t navigator_upr_flag_word_1_b;                //!< ����� �������� ��� ��������-����������
   upr_flag_word_common_2_b_t navigator_upr_flag_word_2_b;                //!< ����� �������� ��� ��������-����������
   upr_flag_word_common_1_b_t operator_upr_flag_word_1_b;                 //!< ����� �������� ��� ��������-���������
   upr_flag_word_common_2_b_t operator_upr_flag_word_2_b;                 //!< ����� �������� ��� ��������-���������
   mfci_sost_reset_b_t        mfci_sost_reset_b;                          //!< ����� � ���������� ����� �������� ����
   mfci_sign_show_b_t         mfci_sign_show_b;                           //!< ����� � ���������� ����������� ���� ����
   uint16_t                   mfpu2_to_mfci_msg1[MFPU_TO_MFCI_MSG1_SIZE]; //!< ��������� �� ���� 2 (������ �������������� ������� ����� ������)
   uint16_t                   mfpu3_to_mfci_msg1[MFPU_TO_MFCI_MSG1_SIZE]; //!< ��������� �� ���� 3 (������ �������������� ������� ����� ������)
} mfci_in_sa_25_b_t;

//! ������� ��������� ���� c ������� ����� ��� (����-3.1, 1 ��)
typedef struct mfci_in_svr_b_t {
   uint16_t          mfci_format;     //!< ���� ���� (MFCI_FORMAT_SVR)
   svr_flag_word_b_t svr_flag_word_b; //!< ����� �������� ���
   uint16_t          svr_date;        //!< [���-�001] ����� ���� (4�10� - ���, 11�14� - �����, 15�19� - ����)
   uint16_t          svr_time_high;   //!< [���-�002] ����� �������, ������� ����� (4�8� - ���, 9�14� - ���)
   uint16_t          svr_time_low;    //!< [���-�002] ����� �������, ������� ����� (4�9� - ���)
   uint16_t          svr_event;       //!< [���-�003] ����� ������� ������ //(min:1 max:99 bits:4..10 lsb:1)
} mfci_in_svr_b_t;

//! ������� ��������� ���� c ������� ����� ���� (����-3.1, 1 ��, �������� 1)
typedef struct mfci_in_bask_1_b_t {
   uint16_t mfci_format;        //!< ���� ���� (MFCI_FORMAT_BASK)
   uint16_t reserve;            //!< ������
   uint16_t failures_count[10]; //!< [����] ���������� ������� ������� � ������� ������ (���� �/� 1 �� 10�19) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t plan_numbers_1;     //!< [����] ����� 1 ��������� ������� (���� �/� 1 �� 25) //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t plan_numbers_2;     //!< [����] ����� 2 ��������� ������� (���� �/� 1 �� 26) //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t plan_numbers_3;     //!< [����] ����� 3 ��������� ������� (���� �/� 1 �� 27) //(min:0 max:999 bits:4..19 lsb:1)
   uint16_t time_test_end_1;    //!< [����] ����� 1 ������� ��������� �������� (���� �/� 1 �� 30)
   uint16_t time_test_end_2;    //!< [����] ����� 2 ������� ��������� �������� (���� �/� 1 �� 31)
   uint16_t time_common_low;    //!< [����] ����� � ����� (�������, � ��������� ��� ������ ��������), ������� ����� (���� �/� 1 �� 32)
} mfci_in_bask_1_b_t;

//! ������� ��������� ���� c ������� ����� ���� (����-3.1, 1 ��, �������� 2)
typedef struct mfci_in_bask_2_b_t {
   uint16_t mfci_format;       //!< ���� ���� (MFCI_FORMAT_BASK)
   uint16_t page_number;       //!< [����] ������� ����� �������� � ������������� ������� ����� ���� (���� �/� 2 �� 2)
   uint16_t pages_count;       //!< [����] ����� ���������� ������� (���� �/� 2 �� 3) //(min:1 max:255 bits:4..13 lsb:1)
   uint16_t headers_id_1;      //!< [����] ����� 1 ������ ��������� ����� (���� �/� 2 �� 4)
   uint16_t headers_id_2;      //!< [����] ����� 2 ������ ��������� ����� (���� �/� 2 �� 5)
   uint16_t buttons_state_1;   //!< [����] ����� 1 ��������� ����� ������ (���� �/� 2 �� 6)
   uint16_t buttons_state_2;   //!< [����] ����� 2 ��������� ����� ������ (���� �/� 2 �� 7)
   uint16_t hull_number_1;     //!< [����] ����� 1 ��������� ������ (���� �/� 2 �� 8) //(min:0 max:99999999)
   uint16_t hull_number_2;     //!< [����] ����� 2 ��������� ������ (���� �/� 2 �� 9) //(min:0 max:99999999)
   uint16_t flight_1_date;     //!< [����] ���� ������ 1 (���� �/� 2 �� 10)
   uint16_t flight_1_time;     //!< [����] ����� � ����� ������ 1 (���� �/� 2 �� 11)
   uint16_t flight_2_date;     //!< [����] ���� ������ 2 (���� �/� 2 �� 12)
   uint16_t flight_2_time;     //!< [����] ����� � ����� ������ 2 (���� �/� 2 �� 13)
   uint16_t flight_3_date;     //!< [����] ���� ������ 3 (���� �/� 2 �� 14)
   uint16_t flight_3_time;     //!< [����] ����� � ����� ������ 3 (���� �/� 2 �� 15)
   uint16_t flight_4_date;     //!< [����] ���� ������ 4 (���� �/� 2 �� 16)
   uint16_t flight_4_time;     //!< [����] ����� � ����� ������ 4 (���� �/� 2 �� 17)
   uint16_t flight_5_date;     //!< [����] ���� ������ 5 (���� �/� 2 �� 18)
   uint16_t flight_5_time;     //!< [����] ����� � ����� ������ 5 (���� �/� 2 �� 19)
   uint16_t flight_6_date;     //!< [����] ���� ������ 6 (���� �/� 2 �� 20)
   uint16_t flight_6_time;     //!< [����] ����� � ����� ������ 6 (���� �/� 2 �� 21)
   uint16_t button_1_text_id;  //!< [����] �������������� ������ ������ 1 (���� �/� 2 �� 22) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_2_text_id;  //!< [����] �������������� ������ ������ 2 (���� �/� 2 �� 23) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_3_text_id;  //!< [����] �������������� ������ ������ 3 (���� �/� 2 �� 24) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_4_text_id;  //!< [����] �������������� ������ ������ 4 (���� �/� 2 �� 25) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_5_text_id;  //!< [����] �������������� ������ ������ 5 (���� �/� 2 �� 26) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_6_text_id;  //!< [����] �������������� ������ ������ 6 (���� �/� 2 �� 27) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_7_text_id;  //!< [����] �������������� ������ ������ 7 (���� �/� 2 �� 28) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_8_text_id;  //!< [����] �������������� ������ ������ 8 (���� �/� 2 �� 29) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_9_text_id;  //!< [����] �������������� ������ ������ 9 (���� �/� 2 �� 30) //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t button_10_text_id; //!< [����] �������������� ������ ������ 10 (���� �/� 2 �� 31) //(min:0 max:65535 bits:4..19 lsb:1)
} mfci_in_bask_2_b_t;

//! ������� ��������� ���� c ������� ����� ���� (����-3.1, 1 ��, �������� 3)
typedef struct mfci_in_bask_3_b_t {
   uint16_t mfci_format;      //!< ���� ���� (MFCI_FORMAT_BASK)
   uint16_t lines_id[29];     //!< [����] �������������� � �������� ������� ����� (���� �/� 3 �� 2�30) //(min:0 max:65535 bits:4..19
   uint16_t date_common;      //!< [����] ���� (�������, � ��������� ��� ������ ��������, ���� �/� 3 �� 31)
   uint16_t time_common_high; //!< [����] ����� � ����� (�������, � ��������� ��� ������ ��������), ������� ����� (���� �/� 3 �� 32)
} mfci_in_bask_3_b_t;

//! ������� ��������� ���� c ������� ����� ���� (����-3.1, 1 ��, �������� 1)
typedef struct mfci_in_msrp_1_b_t {
   uint16_t           mfci_format;          //!< ���� ���� (MFCI_FORMAT_MSRP)
   uint16_t           reserve;              //!< ������
   msrp_flag_word_b_t msrp_flag_word_b;     //!< ����� �������� ����
   uint16_t           message_array_number; //!< ����� ��������� �������� ������ (����� ������������ ������� ������, 0-��� ������) //(min:0 max:12 bits:4..19 lsb:1)
   uint16_t           message_array[28];    //!< �������� �������� ������ (��������� ������ ������)
} mfci_in_msrp_1_b_t;

//! ������� ��������� ���� c ������� ����� ���� (����-3.1, 1 ��, �������� 2)
typedef struct mfci_in_msrp_2_b_t {
   uint16_t mfci_format;          //!< ���� ���� (MFCI_FORMAT_MSRP)
   uint16_t message_array_number; //!< ����� ��������� �������� ������ (����� ������������ ������� ������, 0-��� ������) //(min:0 max:12 bits:4..19 lsb:1)
   uint16_t message_array[4];     //!< �������� �������� ������ (��������� ������ ������)
} mfci_in_msrp_2_b_t;

//! ������� ��������� ���� c ������� ����� ����� (����-3.1, 1 ��, �������� 1)
typedef struct mfci_in_blocks_1_b_t {
   uint16_t                              mfci_format;           //!< ���� ���� (MFCI_FORMAT_BLOCKS)
   mfci_in_blocks_mkio_status_word_b_t   mkio_status_word_b;    //!< ����� ��������� ����
   mfci_in_blocks_bis_status_word_1_b_t  bis1_status_word_1_b;  //!< ����� 1 ��������� ��� 1
   mfci_in_blocks_bis_status_word_2_b_t  bis1_status_word_2_b;  //!< ����� 2 ��������� ��� 1
   mfci_in_blocks_bis_status_word_3_b_t  bis1_status_word_3_b;  //!< ����� 3 ��������� ��� 1
   mfci_in_blocks_bis_status_word_4_b_t  bis1_status_word_4_b;  //!< ����� 4 ��������� ��� 1
   mfci_in_blocks_bis_status_word_5_b_t  bis1_status_word_5_b;  //!< ����� 5 ��������� ��� 1
   mfci_in_blocks_bis_status_word_6_b_t  bis1_status_word_6_b;  //!< ����� 6 ��������� ��� 1
   mfci_in_blocks_bis_status_word_7_b_t  bis1_status_word_7_b;  //!< ����� 7 ��������� ��� 1
   mfci_in_blocks_bis_status_word_8_b_t  bis1_status_word_8_b;  //!< ����� 8 ��������� ��� 1
   mfci_in_blocks_bis_status_word_9_b_t  bis1_status_word_9_b;  //!< ����� 9 ��������� ��� 1
   mfci_in_blocks_bis_status_word_10_b_t bis1_status_word_10_b; //!< ����� 10 ��������� ��� 1
   mfci_in_blocks_bis_status_word_11_b_t bis1_status_word_11_b; //!< ����� 11 ��������� ��� 1
   mfci_in_blocks_bis_status_word_12_b_t bis1_status_word_12_b; //!< ����� 12 ��������� ��� 1
   mfci_in_blocks_bis_status_word_13_b_t bis1_status_word_13_b; //!< ����� 13 ��������� ��� 1
   mfci_in_blocks_bis_status_word_14_b_t bis1_status_word_14_b; //!< ����� 14 ��������� ��� 1
   mfci_in_blocks_bis_status_word_15_b_t bis1_status_word_15_b; //!< ����� 15 ��������� ��� 1
   mfci_in_blocks_bis_status_word_1_b_t  bis2_status_word_1_b;  //!< ����� 1 ��������� ��� 2
   mfci_in_blocks_bis_status_word_2_b_t  bis2_status_word_2_b;  //!< ����� 2 ��������� ��� 2
   mfci_in_blocks_bis_status_word_3_b_t  bis2_status_word_3_b;  //!< ����� 3 ��������� ��� 2
   mfci_in_blocks_bis_status_word_4_b_t  bis2_status_word_4_b;  //!< ����� 4 ��������� ��� 2
   mfci_in_blocks_bis_status_word_5_b_t  bis2_status_word_5_b;  //!< ����� 5 ��������� ��� 2
   mfci_in_blocks_bis_status_word_6_b_t  bis2_status_word_6_b;  //!< ����� 6 ��������� ��� 2
   mfci_in_blocks_bis_status_word_7_b_t  bis2_status_word_7_b;  //!< ����� 7 ��������� ��� 2
   mfci_in_blocks_bis_status_word_8_b_t  bis2_status_word_8_b;  //!< ����� 8 ��������� ��� 2
   mfci_in_blocks_bis_status_word_9_b_t  bis2_status_word_9_b;  //!< ����� 9 ��������� ��� 2
   mfci_in_blocks_bis_status_word_10_b_t bis2_status_word_10_b; //!< ����� 10 ��������� ��� 2
   mfci_in_blocks_bis_status_word_11_b_t bis2_status_word_11_b; //!< ����� 11 ��������� ��� 2
   mfci_in_blocks_bis_status_word_12_b_t bis2_status_word_12_b; //!< ����� 12 ��������� ��� 2
   mfci_in_blocks_bis_status_word_13_b_t bis2_status_word_13_b; //!< ����� 13 ��������� ��� 2
   mfci_in_blocks_bis_status_word_14_b_t bis2_status_word_14_b; //!< ����� 14 ��������� ��� 2
   mfci_in_blocks_bis_status_word_15_b_t bis2_status_word_15_b; //!< ����� 15 ��������� ��� 2
} mfci_in_blocks_1_b_t;

//! ������� ��������� ���� c ������� ����� ����� (����-3.1, 1 ��, �������� 2)
typedef struct mfci_in_blocks_2_b_t {
   uint16_t                                mfci_format;            //!< ���� ���� (MFCI_FORMAT_BLOCKS)
   mfci_in_blocks_bis_status_word_16_b_t   bis1_status_word_16_b;  //!< ����� 16 ��������� ��� 1
   mfci_in_blocks_bis_status_word_16_b_t   bis2_status_word_16_b;  //!< ����� 16 ��������� ��� 2
   mfci_in_blocks_bis_status_word_17_b_t   bis1_status_word_17_b;  //!< ����� 17 ��������� ��� 1
   mfci_in_blocks_bis_status_word_17_b_t   bis2_status_word_17_b;  //!< ����� 17 ��������� ��� 2
   mfci_in_blocks_bcvm_status_word_1_b_t   bcvm1_status_word_1_b;  //!< ����� 1 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_2_b_t   bcvm1_status_word_2_b;  //!< ����� 2 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_3_b_t   bcvm1_status_word_3_b;  //!< ����� 3 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_4_b_t   bcvm1_status_word_4_b;  //!< ����� 4 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_5_b_t   bcvm1_status_word_5_b;  //!< ����� 5 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_6_b_t   bcvm1_status_word_6_b;  //!< ����� 6 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_7_b_t   bcvm1_status_word_7_b;  //!< ����� 7 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_8_b_t   bcvm1_status_word_8_b;  //!< ����� 8 ��������� ���� 1
   mfci_in_blocks_bcvm_status_word_1_b_t   bcvm2_status_word_1_b;  //!< ����� 1 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_2_b_t   bcvm2_status_word_2_b;  //!< ����� 2 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_3_b_t   bcvm2_status_word_3_b;  //!< ����� 3 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_4_b_t   bcvm2_status_word_4_b;  //!< ����� 4 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_5_b_t   bcvm2_status_word_5_b;  //!< ����� 5 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_6_b_t   bcvm2_status_word_6_b;  //!< ����� 6 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_7_b_t   bcvm2_status_word_7_b;  //!< ����� 7 ��������� ���� 2
   mfci_in_blocks_bcvm_status_word_8_b_t   bcvm2_status_word_8_b;  //!< ����� 8 ��������� ���� 2
   mfci_in_blocks_bvd_status_word_1_b_t    bvd1_status_word_1_b;   //!< ����� 1 ��������� ��� 1
   mfci_in_blocks_bvd_status_word_2_b_t    bvd1_status_word_2_b;   //!< ����� 2 ��������� ��� 1
   mfci_in_blocks_bvd_status_word_3_b_t    bvd1_status_word_3_b;   //!< ����� 3 ��������� ��� 1
   mfci_in_blocks_bvd_status_word_1_b_t    bvd2_status_word_1_b;   //!< ����� 1 ��������� ��� 2
   mfci_in_blocks_bvd_status_word_2_b_t    bvd2_status_word_2_b;   //!< ����� 2 ��������� ��� 2
   mfci_in_blocks_bvd_status_word_3_b_t    bvd2_status_word_3_b;   //!< ����� 3 ��������� ��� 2
   mfci_in_blocks_uks_status_word_b_t      uks_status_word_b;      //!< ����� ��������� ���
   mfci_in_blocks_bgs_status_word_1_b_t    bgs1_status_word_1_b;   //!< ����� 1 ��������� ��� 1
   mfci_in_blocks_bgs_status_word_2_b_t    bgs1_status_word_2_b;   //!< ����� 2 ��������� ��� 1
   mfci_in_blocks_bgs_status_word_3_b_t    bgs1_status_word_3_b;   //!< ����� 3 ��������� ��� 1
} mfci_in_blocks_2_b_t;

//! ������� ��������� ���� c ������� ����� ����� (����-3.1, 1 ��, �������� 3)
typedef struct mfci_in_blocks_3_b_t {
   uint16_t                               mfci_format;           //!< ���� ���� (MFCI_FORMAT_BLOCKS)
   mfci_in_blocks_bgs_status_word_1_b_t   bgs2_status_word_1_b;  //!< ����� 1 ��������� ��� 2
   mfci_in_blocks_bgs_status_word_2_b_t   bgs2_status_word_2_b;  //!< ����� 2 ��������� ��� 2
   mfci_in_blocks_bgs_status_word_3_b_t   bgs2_status_word_3_b;  //!< ����� 3 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_1_b_t   kvi1_status_word_1_b;  //!< ����� 1 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_2_b_t   kvi1_status_word_2_b;  //!< ����� 2 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_3_b_t   kvi1_status_word_3_b;  //!< ����� 3 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_4_b_t   kvi1_status_word_4_b;  //!< ����� 4 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_5_b_t   kvi1_status_word_5_b;  //!< ����� 5 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_6_b_t   kvi1_status_word_6_b;  //!< ����� 6 ��������� ��� 1
   mfci_in_blocks_kvi_status_word_1_b_t   kvi2_status_word_1_b;  //!< ����� 1 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_2_b_t   kvi2_status_word_2_b;  //!< ����� 2 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_3_b_t   kvi2_status_word_3_b;  //!< ����� 3 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_4_b_t   kvi2_status_word_4_b;  //!< ����� 4 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_5_b_t   kvi2_status_word_5_b;  //!< ����� 5 ��������� ��� 2
   mfci_in_blocks_kvi_status_word_6_b_t   kvi2_status_word_6_b;  //!< ����� 6 ��������� ��� 2
   mfci_in_blocks_boards_status_word_b_t  boards_status_word_b;  //!< ����� ��������� ���, ���, 1�2�, 1�8�
   mfci_in_blocks_mfpu_status_word_b_t    mfpu_status_word_b;    //!< ����� ��������� ����
   mfci_in_blocks_mfci_status_word_1_b_t  mfci_status_word_1_b;  //!< ����� 1 ��������� ����
   mfci_in_blocks_mfci_status_word_2_b_t  mfci_status_word_2_b;  //!< ����� 2 ��������� ����
   mfci_in_blocks_mfci_status_word_3_b_t  mfci_status_word_3_b;  //!< ����� 3 ��������� ����
   mfci_in_blocks_mfci_status_word_4_b_t  mfci_status_word_4_b;  //!< ����� 4 ��������� ����
   mfci_in_blocks_mfci_status_word_5_b_t  mfci_status_word_5_b;  //!< ����� 5 ��������� ����
   mfci_in_blocks_mfci_status_word_6_b_t  mfci_status_word_6_b;  //!< ����� 6 ��������� ����
   mfci_in_blocks_mfci_status_word_7_b_t  mfci_status_word_7_b;  //!< ����� 7 ��������� ����
   mfci_in_blocks_mfci_status_word_8_b_t  mfci_status_word_8_b;  //!< ����� 8 ��������� ����
   mfci_in_blocks_mfci_status_word_9_b_t  mfci_status_word_9_b;  //!< ����� 9 ��������� ����
   mfci_in_blocks_mfci_status_word_10_b_t mfci_status_word_10_b; //!< ����� 10 ��������� ����
   mfci_in_blocks_selected_systems_1_b_t  selected_systems_1_b;  //!< ��������� ��� �������������� ������� (����� 1)
   mfci_in_blocks_selected_systems_2_b_t  selected_systems_2_b;  //!< ��������� ��� �������������� ������� (����� 2)
   mfci_in_blocks_selected_systems_3_b_t  selected_systems_3_b;  //!< ��������� ��� �������������� ������� (����� 3)
   uint16_t                               build_number;          //!< ����� ������ //(min:1 max:65535 bits:4..19 lsb:1)
} mfci_in_blocks_3_b_t;

//! ������� ��������� ���� c ������� ����� �����-��� (����-3.1, 1 ��, �������� 1)
typedef struct mfci_in_blocks_szi_1_b_t {
   uint16_t                            mfci_format;       //!< ���� ���� (MFCI_FORMAT_BLOCKS_SZI)
   mfci_in_blocks_szi_1_valid_word_b_t valid_word_b;      //!< �������� ������� ������ ��� (��� ��������� 1)
   mfci_in_blocks_szi_messages_b_t     bis1_messages_1_b; //!< ������� ������� ��� ��� 1 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bis1_messages_2_b; //!< ������� ������� ��� ��� 1 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bis1_messages_3_b; //!< ������� ������� ��� ��� 1 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bis1_messages_4_b; //!< ������� ������� ��� ��� 1 (����� 4)
   mfci_in_blocks_szi_messages_b_t     bis1_messages_5_b; //!< ������� ������� ��� ��� 1 (����� 5)
   mfci_in_blocks_szi_messages_b_t     bis2_messages_1_b; //!< ������� ������� ��� ��� 2 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bis2_messages_2_b; //!< ������� ������� ��� ��� 2 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bis2_messages_3_b; //!< ������� ������� ��� ��� 2 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bis2_messages_4_b; //!< ������� ������� ��� ��� 2 (����� 4)
   mfci_in_blocks_szi_messages_b_t     bis2_messages_5_b; //!< ������� ������� ��� ��� 2 (����� 5)
   mfci_in_blocks_szi_messages_b_t     bgs1_messages_1_b; //!< ������� ������� ��� ��� 1 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bgs1_messages_2_b; //!< ������� ������� ��� ��� 1 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bgs1_messages_3_b; //!< ������� ������� ��� ��� 1 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bgs1_messages_4_b; //!< ������� ������� ��� ��� 1 (����� 4)
   mfci_in_blocks_szi_messages_b_t     bgs2_messages_1_b; //!< ������� ������� ��� ��� 2 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bgs2_messages_2_b; //!< ������� ������� ��� ��� 2 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bgs2_messages_3_b; //!< ������� ������� ��� ��� 2 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bgs2_messages_4_b; //!< ������� ������� ��� ��� 2 (����� 4)
   mfci_in_blocks_szi_messages_b_t     kvi1_messages_1_b; //!< ������� ������� ��� ��� 1 (����� 1)
   mfci_in_blocks_szi_messages_b_t     kvi1_messages_2_b; //!< ������� ������� ��� ��� 1 (����� 2)
   mfci_in_blocks_szi_messages_b_t     kvi1_messages_3_b; //!< ������� ������� ��� ��� 1 (����� 3)
   mfci_in_blocks_szi_messages_b_t     kvi1_messages_4_b; //!< ������� ������� ��� ��� 1 (����� 4)
   mfci_in_blocks_szi_messages_b_t     kvi1_messages_5_b; //!< ������� ������� ��� ��� 1 (����� 5)
   mfci_in_blocks_szi_messages_b_t     kvi2_messages_1_b; //!< ������� ������� ��� ��� 2 (����� 1)
   mfci_in_blocks_szi_messages_b_t     kvi2_messages_2_b; //!< ������� ������� ��� ��� 2 (����� 2)
   mfci_in_blocks_szi_messages_b_t     kvi2_messages_3_b; //!< ������� ������� ��� ��� 2 (����� 3)
   mfci_in_blocks_szi_messages_b_t     kvi2_messages_4_b; //!< ������� ������� ��� ��� 2 (����� 4)
   mfci_in_blocks_szi_messages_b_t     kvi2_messages_5_b; //!< ������� ������� ��� ��� 2 (����� 5)
} mfci_in_blocks_szi_1_b_t;

//! ������� ��������� ���� c ������� ����� �����-��� (����-3.2, 1 ��, �������� 2)
typedef struct mfci_in_blocks_szi_2_b_t {
   uint16_t                            mfci_format;        //!< ���� ���� (MFCI_FORMAT_BLOCKS_SZI)
   mfci_in_blocks_szi_2_valid_word_b_t valid_word_b;       //!< �������� ������� ������ ��� (��� ��������� 2)
   mfci_in_blocks_szi_messages_b_t     bcvm1_messages_1_b; //!< ������� ������� ��� ���� 1 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bcvm1_messages_2_b; //!< ������� ������� ��� ���� 1 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bcvm1_messages_3_b; //!< ������� ������� ��� ���� 1 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bcvm1_messages_4_b; //!< ������� ������� ��� ���� 1 (����� 4)
   mfci_in_blocks_szi_messages_b_t     bcvm1_messages_5_b; //!< ������� ������� ��� ���� 1 (����� 5)
   mfci_in_blocks_szi_messages_b_t     bcvm2_messages_1_b; //!< ������� ������� ��� ���� 2 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bcvm2_messages_2_b; //!< ������� ������� ��� ���� 2 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bcvm2_messages_3_b; //!< ������� ������� ��� ���� 2 (����� 3)
   mfci_in_blocks_szi_messages_b_t     bcvm2_messages_4_b; //!< ������� ������� ��� ���� 2 (����� 4)
   mfci_in_blocks_szi_messages_b_t     bcvm2_messages_5_b; //!< ������� ������� ��� ���� 2 (����� 5)
   mfci_in_blocks_szi_messages_b_t     bvd1_messages_1_b;  //!< ������� ������� ��� ��� 1 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bvd1_messages_2_b;  //!< ������� ������� ��� ��� 1 (����� 2)
   mfci_in_blocks_szi_messages_b_t     bvd2_messages_1_b;  //!< ������� ������� ��� ��� 2 (����� 1)
   mfci_in_blocks_szi_messages_b_t     bvd2_messages_2_b;  //!< ������� ������� ��� ��� 2 (����� 2)
} mfci_in_blocks_szi_2_b_t;

//! ������� ��������� ���� c ������� ����� ��� (����-3.1, 1 ��)
typedef struct mfci_in_tar_b_t {
   uint16_t                        mfci_format;         //!< ���� ���� (MFCI_FORMAT_TAR)
   mfci_in_tar_status_word_b_t     status_word_b;       //!< ����� ���������
   mfci_in_tar_status_word_adc_b_t status_word_adc1_b;  //!< ����� ��������� ����� ���-1 ����������� ���������
   mfci_in_tar_status_word_adc_b_t status_word_adc2_b;  //!< ����� ��������� ����� ���-2 ����������� ���������
   uint16_t                        current_code_adc1;   //!< ������� ��� ���-1 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        current_code_adc2;   //!< ������� ��� ���-2 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_1_adc1;         //!< ��� ���-1 ������� ����� 1 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_1_adc2;         //!< ��� ���-2 ������� ����� 1 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_2_adc1;         //!< ��� ���-1 ������� ����� 2 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_2_adc2;         //!< ��� ���-2 ������� ����� 2 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_3_adc1;         //!< ��� ���-1 ������� ����� 3 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_3_adc2;         //!< ��� ���-2 ������� ����� 3 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_4_adc1;         //!< ��� ���-1 ������� ����� 4 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_4_adc2;         //!< ��� ���-2 ������� ����� 4 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_5_adc1;         //!< ��� ���-1 ������� ����� 5 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_5_adc2;         //!< ��� ���-2 ������� ����� 5 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_6_adc1;         //!< ��� ���-1 ������� ����� 6 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_6_adc2;         //!< ��� ���-2 ������� ����� 6 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_7_adc1;         //!< ��� ���-1 ������� ����� 7 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        code_7_adc2;         //!< ��� ���-2 ������� ����� 7 ����������� ��������� //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                        uks1_table_crc_low;  //!< ����������� ����� ������� ��������� ���-1 (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t                        uks1_table_crc_high; //!< ����������� ����� ������� ��������� ���-1 (������� �����)
   uint16_t                        uks2_table_crc_low;  //!< ����������� ����� ������� ��������� ���-2 (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t                        uks2_table_crc_high; //!< ����������� ����� ������� ��������� ���-2 (������� �����)
   uint16_t                        uks3_table_crc_low;  //!< ����������� ����� ������� ��������� ���-3 (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t                        uks3_table_crc_high; //!< ����������� ����� ������� ��������� ���-3 (������� �����)
   uint16_t                        uks4_table_crc_low;  //!< ����������� ����� ������� ��������� ���-4 (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t                        uks4_table_crc_high; //!< ����������� ����� ������� ��������� ���-4 (������� �����)
   uint16_t                        command_counter;     //!< �������� �������� ��������� ����������� ������� ��� (��������� �� upr_flag_word_tar_3_b_t::command_counter) //(min:1 max:65535 bits:4..19 lsb:1)
} mfci_in_tar_b_t;

//! ������� ��������� ���� c ������� ���� (6.25 ��, �������� 24 ����-3.2)
typedef struct mfci_in_fovb_b_t {
   uint16_t             fovb_section_0_low;     //!< ������� 0 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_0_high;    //!< ������� 0 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_1_low;     //!< ������� 1 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_1_high;    //!< ������� 1 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_2_low;     //!< ������� 2 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_2_high;    //!< ������� 2 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_3_low;     //!< ������� 3 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_3_high;    //!< ������� 3 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_4_low;     //!< ������� 4 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_4_high;    //!< ������� 4 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_5_low;     //!< ������� 5 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   uint16_t             fovb_section_5_high;    //!< ������� 5 ������� ������������ ������� ��������� ����� (fovb_section_b_t, ������� �����)
   fovb_sections_id_b_t fovb_sections_id_b;     //!< ��������� ������� ������������ ������� ��������� �����
   uint16_t             fovb_trail_1_id_1_low;  //!< ��������� ��������� ����� 1 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   uint16_t             fovb_trail_1_id_1_high; //!< ��������� ��������� ����� 1 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   fovb_trail_id_2_b_t  fovb_trail_1_id_2_b;    //!< ��������� ��������� ����� 1 (����� 2)
   uint16_t             fovb_trail_2_id_1_low;  //!< ��������� ��������� ����� 2 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   uint16_t             fovb_trail_2_id_1_high; //!< ��������� ��������� ����� 2 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   fovb_trail_id_2_b_t  fovb_trail_2_id_2_b;    //!< ��������� ��������� ����� 2 (����� 2)
   uint16_t             fovb_trail_3_id_1_low;  //!< ��������� ��������� ����� 3 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   uint16_t             fovb_trail_3_id_1_high; //!< ��������� ��������� ����� 3 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   fovb_trail_id_2_b_t  fovb_trail_3_id_2_b;    //!< ��������� ��������� ����� 3 (����� 2)
   uint16_t             fovb_trail_4_id_1_low;  //!< ��������� ��������� ����� 4 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   uint16_t             fovb_trail_4_id_1_high; //!< ��������� ��������� ����� 4 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   fovb_trail_id_2_b_t  fovb_trail_4_id_2_b;    //!< ��������� ��������� ����� 4 (����� 2)
   uint16_t             fovb_trail_5_id_1_low;  //!< ��������� ��������� ����� 5 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   uint16_t             fovb_trail_5_id_1_high; //!< ��������� ��������� ����� 5 (����� 1, fovb_trail_id_1_b_t, ������� �����)
   fovb_trail_id_2_b_t  fovb_trail_5_id_2_b;    //!< ��������� ��������� ����� 5 (����� 2)
   uint16_t             fovb_speed_min;         //!< [����-�001] ������������� ��������� �������� ����������� //(min:0 max:1023 bits:10..19 lsb:1 ��/�)
   uint16_t             fovb_speed_max;         //!< [����-�002] ������������� ��������� �������� ������������ //(min:0 max:1023 bits:10..19 lsb:1 ��/�)
   fovb_rates_b_t       fovb_rates_b;           //!< [����-�003�����-�004] ����� ������������� ������������ ��������� ����
   fovb_valid_word_b_t  fovb_valid_word_b;      //!< ����� �������������� ����
} mfci_in_fovb_b_t;

//! ������� ��������� ���� � ����������� ������ �� �������� ������� �������� ��� �������, �������� 29 ����-3.1 (6.25 ��)
typedef struct mfci_in_active_path_b_t {
   mfci_active_path_legs_id_1_b_t legs_id_1_b;      //!< �����-������������� 1 �������� ���������� ������ �� �������� ������� ��������
   mfci_active_path_legs_id_2_b_t legs_id_2_b;      //!< �����-������������� 2 �������� ���������� ������ �� �������� ������� ��������
   uint16_t                       point_1_lat_high; //!< ������ ����� 1 ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                       point_1_lat_low;  //!< ������ ����� 1 ������� ����������, ������� �����
   uint16_t                       point_1_lon_high; //!< ������� ����� 1 ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                       point_1_lon_low;  //!< ������� ����� 1 ������� ����������, ������� �����
   uint16_t                       point_2_lat_high; //!< ������ ����� 2 ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                       point_2_lat_low;  //!< ������ ����� 2 ������� ����������, ������� �����
   uint16_t                       point_2_lon_high; //!< ������� ����� 2 ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                       point_2_lon_low;  //!< ������� ����� 2 ������� ����������, ������� �����
   uint16_t                       point_3_lat_high; //!< ������ ����� 3 ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                       point_3_lat_low;  //!< ������ ����� 3 ������� ����������, ������� �����
   uint16_t                       point_3_lon_high; //!< ������� ����� 3 ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                       point_3_lon_low;  //!< ������� ����� 3 ������� ����������, ������� �����
   uint16_t                       point_4_lat_high; //!< ������ ����� 4 ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                       point_4_lat_low;  //!< ������ ����� 4 ������� ����������, ������� �����
   uint16_t                       point_4_lon_high; //!< ������� ����� 4 ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                       point_4_lon_low;  //!< ������� ����� 4 ������� ����������, ������� �����
   uint16_t                       point_5_lat_high; //!< ������ ����� 5 ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                       point_5_lat_low;  //!< ������ ����� 5 ������� ����������, ������� �����
   uint16_t                       point_5_lon_high; //!< ������� ����� 5 ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                       point_5_lon_low;  //!< ������� ����� 5 ������� ����������, ������� �����
   uint16_t                       leg_1_radius;     //!< ������ ���� ��������� ������� 1 ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                       leg_2_radius;     //!< ������ ���� ��������� ������� 2 ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                       leg_3_radius;     //!< ������ ���� ��������� ������� 3 ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                       leg_4_radius;     //!< ������ ���� ��������� ������� 4 ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                       leg_5_radius;     //!< ������ ���� ��������� ������� 5 ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                       leg_1_subtense;   //!< ����������� ���� ���� ������� 1 ���������� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                       leg_2_subtense;   //!< ����������� ���� ���� ������� 2 ���������� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                       leg_3_subtense;   //!< ����������� ���� ���� ������� 3 ���������� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                       leg_4_subtense;   //!< ����������� ���� ���� ������� 4 ���������� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                       leg_5_subtense;   //!< ����������� ���� ���� ������� 5 ���������� //(min:0 max:360 bits:4..19 msb:180�)
} mfci_in_active_path_b_t;

//! ������� ��������� ���� � ���������� ����� ������, �������� 30 ����-3.1 (6.25 ��)
typedef struct mfci_in_flight_plan_b_t {
   mfci_leg_id_1_b_t          leg_id_1_b;               //!< �����-������������� 1 ����� ������� ����������
   mfci_leg_id_2_b_t          leg_id_2_b;               //!< �����-������������� 2 ����� ������� ����������
   uint16_t                   leg_lat_high;             //!< ������ ����� ������� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                   leg_lat_low;              //!< ������ ����� ������� ����������, ������� �����
   uint16_t                   leg_lon_high;             //!< ������� ����� ������� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   leg_lon_low;              //!< ������� ����� ������� ����������, ������� �����
   uint16_t                   leg_radius;               //!< ������ ���� ��������� ���������� ������� ���������� (0-������ �������) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t                   leg_subtense_distance;    //!< ����������� ���� ���� ���������� ������� ���������� ��� ������� �������� //(min:0 max:360 bits:4..19 msb:180�) / ����� ���������� ������� ���������� ��� ������ �������� //(min:0 max:65535 bits:4..19 lsb:1 ��)
   mfci_point_id_1_b_t        point_id_1_b;             //!< �����-������������� 1 ����� �������� ��� ����������
   mfci_point_id_2_b_t        point_id_2_b;             //!< �����-������������� 2 ����� �������� ��� ����������
   mfci_point_id_3_b_t        point_id_3_b;             //!< �����-������������� 3 ����� �������� ��� ����������
   mfci_point_id_4_b_t        point_id_4_b;             //!< �����-������������� 4 ����� �������� ��� ����������
   mfci_point_id_5_b_t        point_id_5_b;             //!< �����-������������� 5 ����� �������� ��� ����������
   mfci_text_word_b_t         point_name_1_b;           //!< �������� ����� �������� ��� ���������� (������� 1-2)
   mfci_text_word_b_t         point_name_2_b;           //!< �������� ����� �������� ��� ���������� (������� 3-4)
   mfci_text_word_b_t         point_name_3_b;           //!< �������� ����� �������� ��� ���������� (������ 5), �������� �������������� ����� (������ 1)
   mfci_text_word_b_t         point_name_4_b;           //!< �������� �������������� ����� (������� 2-3)
   mfci_text_word_b_t         point_name_5_b;           //!< �������� �������������� ����� (������� 4-5)
   uint16_t                   point_lat_high;           //!< ������ ����� �������� ��� ����������, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                   point_lat_low;            //!< ������ ����� �������� ��� ����������, ������� �����
   uint16_t                   point_lon_high;           //!< ������� ����� �������� ��� ����������, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   point_lon_low;            //!< ������� ����� �������� ��� ����������, ������� �����
   uint16_t                   point_orientation;        //!< ���������� ����� �������� ��� ���������� (��� ���, ��� � ���) //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                   point_param;              //!< �������� ����� �������� ��� ���������� (��� ��� ����, ��� 0.01 ���/0.1 ���, ����� � ������ ��� ����� ���, ������ ��� ���/�����������/������ ������/������ ��������)
   mfci_single_point_id_1_b_t single_point_id_1_b;      //!< �����-������������� 1 �������������� �����
   mfci_single_point_id_2_b_t single_point_id_2_b;      //!< �����-������������� 2 �������������� �����
   uint16_t                   single_point_lat_high;    //!< ������ �������������� �����, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                   single_point_lat_low;     //!< ������ �������������� �����, ������� �����
   uint16_t                   single_point_lon_high;    //!< ������� �������������� �����, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   single_point_lon_low;     //!< ������� �������������� �����, ������� �����
   uint16_t                   single_point_orientation; //!< ���������� ����� �������� ��� ���������� (��� ���, ��� � ���) //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                   single_point_param;       //!< �������� �������������� ����� (��� ��� ����, ������� ��� 0.01 ���/0.1 ���, ����� � ������ ��� ����� ���, ������ ��� �����������/������ ������/������ ��������, �������� ��� ������ �������/����������, ������ ��� ��� ��� 0.1 ��)
} mfci_in_flight_plan_b_t;

//! ������ ������������� �����������/������������ ���������� ��-504/506 (�� ������� 1 ���)
typedef struct mfci_in_suo_50x_path_init_b_t {
   mfci_in_suo_50x_path_flag_word_1_b_t flag_word_1_b;            //!< ����� 1 �������� ������������� ����������
   mfci_in_suo_50x_path_flag_word_2_b_t flag_word_2_b;            //!< ����� 2 �������� ������������� ����������
   uint16_t                             rzp_start_point_distance; //!< [��-504/506-�124.11/�125.11] ���������� �� �������� ������� ��� ("�") //(min:-20200 max:20200 signed:4 bits:5..19 lsb:1 ��)
   uint16_t                             ready_point_distance;     //!< [��-504/506-�124.12/�125.12] ���������� �� ������ ���������� ������� //(min:0 max:20200 bits:4..19 lsb:1 ��)
   uint16_t                             speed_correction_rzp;     //!< [��-504/506-�104] ������������� ��������� ��������� �������� ��� ������ � ���/���� ��� ��� ��� (������ ��� ������������ ���) //(min:-999 max:999 signed:4 bits:5..19 lsb:1 ��/�)
   uint16_t                             redundant_time_rzp;       //!< [��-504/506-�106] ������� ������� ��� ������ � ���/���� ��� ��� ��� (������ ��� ������������ ���) //(min:-3599 max:3599 signed:4 bits:5..19 lsb:1 �)
} mfci_in_suo_50x_path_init_b_t;

//! ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1 ���), �������� 1 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_1_b_t {
   uint16_t                     counter;                  //!< ������� �������� ������������� ������ //(min:0 max:65535 bits:4..19 lsb:1)
   uint16_t                     header_revision;          //!< ������� ������������� (MFCI_IO_REVISION)
   uint16_t                     suo_variant;              //!< ������� ������� (SUO_VARIANT_50X)
   bp_50x_aur1_flag_word_1_b_t  bp_50x_flag_word_1_b;     //!< ����� 1 �������� ��-504/506
   bp_50x_aur1_flag_word_2_b_t  bp_50x_flag_word_2_b;     //!< ����� 2 �������� ��-504/506
   bp_50x_aur1_flag_word_3_b_t  bp_50x_flag_word_3_b;     //!< ����� 3 �������� ��-504/506
   bp_50x_aur1_flag_word_4_b_t  bp_50x_flag_word_4_b;     //!< ����� 4 �������� ��-504/506
   bp_50x_aur1_flag_word_5_b_t  bp_50x_flag_word_5_b;     //!< ����� 5 �������� ��-504/506
   bp_50x_aur1_flag_word_6_b_t  bp_50x_flag_word_6_b;     //!< ����� 6 �������� ��-504/506
   bp_50x_aur1_flag_word_7_b_t  bp_50x_flag_word_7_b;     //!< ����� 7 �������� ��-504/506
   bp_50x_aur1_flag_word_8_b_t  bp_50x_flag_word_8_b;     //!< ����� 8 �������� ��-504/506
   bp_50x_aur1_flag_word_9_b_t  bp_50x_flag_word_9_b;     //!< ����� 9 �������� ��-504/506
   bp_50x_aur1_flag_word_10_b_t bp_50x_flag_word_10_b;    //!< ����� 10 �������� ��-504/506
   bp_50x_aur1_flag_word_11_b_t bp_50x_flag_word_11_b;    //!< ����� 11 �������� ��-504/506
   bp_50x_aur1_flag_word_12_b_t bp_50x_flag_word_12_b;    //!< ����� 12 �������� ��-504/506
   bp_50x_aur1_flag_word_13_b_t bp_50x_flag_word_13_b;    //!< ����� 13 �������� ��-504/506
   bp_50x_aur1_flag_word_14_b_t bp_50x_flag_word_14_b;    //!< ����� 14 �������� ��-504/506
   bp_50x_aur1_flag_word_15_b_t bp_50x_flag_word_15_b;    //!< ����� 15 �������� ��-504/506
   bp_50x_aur1_flag_word_16_b_t bp_50x_flag_word_16_b;    //!< ����� 16 �������� ��-504/506
   bp_50x_aur1_flag_word_17_b_t bp_50x_flag_word_17_b;    //!< ����� 17 �������� ��-504/506
   bp_50x_aur1_flag_word_18_b_t bp_50x_flag_word_18_b;    //!< ����� 18 �������� ��-504/506
   uint16_t                     bp_prepare_time_rem;      //!< [��-504/506-�006] ���������� ����� �� ������� �������� ������� ���/���� //(min:0 max:35999 bits:4..19 lsb:1 �)
   uint16_t                     bp_route_number_high;     //!< [��-504/506-�013] ����� ������� �������, ������� ����� //(min:1 max:9999999 bits:4..19 lsb:1)
   uint16_t                     bp_route_number_low;      //!< [��-504/506-�013] ����� ������� �������, ������� �����
   uint16_t                     bp_speed_correction;      //!< [��-504/506-�018] ������������� ��������� ��������� �������� ��� ������ � ���/���� //(min:-999 max:999 signed:4 bits:5..19 lsb:1 ��/�)
   uint16_t                     bp_redundant_time;        //!< [��-504/506-�022] ������� ������� ��� ������ �� ����� ����� //(min:-3599 max:3599 signed:4 bits:5..19 lsb:1 �)
   uint16_t                     bp_track_angle;           //!< [��-504/506-�030.1] �������� ������� ���� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                     bp_course;                //!< [��-504/506-�030.2] �������� ���� //(min:0 max:360 bits:4..19 msb:180�)
   uint16_t                     bp_asu_route_number_high; //!< [��-504/506-�068.1] ����� �� � ���������� ���� 3 ���. 1 "������� ��", "������ ��, ������� ����� //(min:1 max:9999999 bits:4..19 lsb:1)
   uint16_t                     bp_asu_route_number_low;  //!< [��-504/506-�068.1] ����� �� � ���������� ���� 3 ���. 1 "������� ��", "������ ��, ������� �����
   uint16_t                     bp_unit_delta_z;          //!< [��-504/506-�134] �������� ������� ��������� ������� �� ����� ��������� ���� //(min:-99.9 max:99.9 signed:4 bits:5..19 lsb:0.1 ��)
} mfci_in_suo_50x_1_b_t;

//! ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1 ���), �������� 2 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_2_b_t {
   mfci_in_suo_50x_path_init_b_t bp_path_init_b;              //!< ������ ������������� ����������� ����������
   mfci_in_suo_50x_path_init_b_t bp_proposed_path_init_b;     //!< ������ ������������� ������������ ����������
   uint16_t                      bp_rzp_start_point_lat_high; //!< [��-504/506-�051.1] ������ ��������� ����� ��� ���/���� ("A"), ������� ����� //(min:-324000 max:324000 signed:4 bits:5..19 lsb:0.001")
   uint16_t                      bp_rzp_start_point_lat_low;  //!< [��-504/506-�051.1] ������ ��������� ����� ��� ���/���� ("A"), ������� �����
   uint16_t                      bp_rzp_start_point_lon_high; //!< [��-504/506-�051.2] ������� ��������� ����� ��� ���/���� ("A"), ������� ����� //(min:-648000 max:648000 signed:4 bits:5..19 lsb:0.001")
   uint16_t                      bp_rzp_start_point_lon_low;  //!< [��-504/506-�051.2] ������� ��������� ����� ��� ���/���� ("A"), ������� �����
   uint16_t                      bp_rzp_end_point_lat_high;   //!< [��-504/506-�052.1] ������ �������� ����� ��� ���/���� ("B"), ������� ����� //(min:-324000 max:324000 signed:4 bits:5..19 lsb:0.001")
   uint16_t                      bp_rzp_end_point_lat_low;    //!< [��-504/506-�052.1] ������ �������� ����� ��� ���/���� ("B"), ������� �����
   uint16_t                      bp_rzp_end_point_lon_high;   //!< [��-504/506-�052.2] ������� �������� ����� ��� ���/���� ("B"), ������� ����� //(min:-648000 max:648000 signed:4 bits:5..19 lsb:0.001")
   uint16_t                      bp_rzp_end_point_lon_low;    //!< [��-504/506-�052.2] ������� �������� ����� ��� ���/���� ("B"), ������� �����
   uint16_t                      bp_rzp_width;                //!< [��-504/506-�112] ������ ���/���� //(min:1000 max:50000 bits:4..19 lsb:1 �)
   uint16_t                      bp_message_1l_time_rem_high; //!< [��-504/506-�054.2] ���������� ����� ��� ������ 1 �����, ������� ����� //(min:0 max:86399 bits:4..19 lsb:1 �)
   uint16_t                      bp_message_1l_time_rem_low;  //!< [��-504/506-�054.2] ���������� ����� ��� ������ 1 �����, ������� �����
   uint16_t                      bp_message_1m_time_rem;      //!< [��-504/506-�055.2] ���������� ����� ��� ������ 1 �� ������ //(min:0 max:35999 bits:4..19 lsb:1 �)
   uint16_t                      bp_align_value_units;        //!< [��-504/506-�061.2] ����� �������� ������� //(min:0 max:1440 bits:4..19 lsb:1 �)
   uint16_t                      bp_signal_alt_up;            //!< [��-504/506-�068.4] ������ � ��������� ���� 3 ���. 1 "������� ������" //(min:300 max:3500 bits:4..19 lsb:1 �)
   uint16_t                      bp_signal_alt_down;          //!< [��-504/506-�068.5] ������ � ��������� ���� 3 ���. 1 "������� ������" //(min:5000 max:13000 bits:4..19 lsb:1 �)
} mfci_in_suo_50x_2_b_t;

//! ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 2 ���), �������� 3 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_3_b_t {
   bp_50x_aur2_flag_word_1_b_t bp_50x_flag_word_1_b;           //!< ����� 1 �������� ��-504/506
   bp_50x_aur2_flag_word_2_b_t bp_50x_flag_word_2_b;           //!< ����� 2 �������� ��-504/506
   uint16_t                    bp_m_g_to_gx_1;                 //!< [��-504/506-�200.1] ������� �������� � ����� �������� ��� ���, ������ 1, ������� 1 //(min:-1 max:1 signed:4 bits:5..19 msb:0.5)
   uint16_t                    bp_m_g_to_gx_2;                 //!< [��-504/506-�200.1] ������� �������� � ����� �������� ��� ���, ������ 2, ������� 1 //(min:-1 max:1 signed:4 bits:5..19 msb:0.5)
   uint16_t                    bp_m_g_to_gx_3;                 //!< [��-504/506-�200.1] ������� �������� � ����� �������� ��� ���, ������ 1, ������� 2 //(min:-1 max:1 signed:4 bits:5..19 msb:0.5)
   uint16_t                    bp_m_g_to_gx_4;                 //!< [��-504/506-�200.1] ������� �������� � ����� �������� ��� ���, ������ 2, ������� 2 //(min:-1 max:1 signed:4 bits:5..19 msb:0.5)
   uint16_t                    bp_proj_c_lat_high;             //!< [��-504/506-�200.2] ������ ������ ������������� �������� ��� ���, ������� ����� (��� ��/2 ���) //(min:-1.570796326795 max:1.570796326795 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_proj_c_lat_low;              //!< [��-504/506-�200.2] ������ ������ ������������� �������� ��� ���, ������� �����
   uint16_t                    bp_proj_c_lon_high;             //!< [��-504/506-�200.2] ������� ������ ������������� �������� ��� ���, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_proj_c_lon_low;              //!< [��-504/506-�200.2] ������� ������ ������������� �������� ��� ���, ������� �����
   uint16_t                    bp_first_waypoint_x_high;       //!< [��-504/506-�200.3] ���������� x ��� � 1 ��� ��������� ������� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_first_waypoint_x_low;        //!< [��-504/506-�200.3] ���������� x ��� � 1 ��� ��������� ������� �� ��������, ������� �����
   uint16_t                    bp_first_waypoint_y_high;       //!< [��-504/506-�200.3] ���������� y ��� � 1 ��� ��������� ������� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_first_waypoint_y_low;        //!< [��-504/506-�200.3] ���������� y ��� � 1 ��� ��������� ������� �� ��������, ������� �����
   uint16_t                    bp_cursor_point_mfpu_x_high;    //!< [��-504/506-�215.1.1] ���������� x ������� ��� ����������� ������ ���� �� ������ ���� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_cursor_point_mfpu_x_low;     //!< [��-504/506-�215.1.1] ���������� x ������� ��� ����������� ������ ���� �� ������ ���� �� ��������, ������� �����
   uint16_t                    bp_cursor_point_mfpu_y_high;    //!< [��-504/506-�215.1.2] ���������� y ������� ��� ����������� ������ ���� �� ������ ���� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_cursor_point_mfpu_y_low;     //!< [��-504/506-�215.1.2] ���������� y ������� ��� ����������� ������ ���� �� ������ ���� �� ��������, ������� �����
   uint16_t                    bp_rzp_center_x_high;           //!< [��-504/506-�215.2.1] ���������� x ������ ����������� ��� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_rzp_center_x_low;            //!< [��-504/506-�215.2.1] ���������� x ������ ����������� ��� �� ��������, ������� �����
   uint16_t                    bp_rzp_center_y_high;           //!< [��-504/506-�215.2.2] ���������� y ������ ����������� ��� �� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t                    bp_rzp_center_y_low;            //!< [��-504/506-�215.2.2] ���������� y ������ ����������� ��� �� ��������, ������� �����
   uint16_t                    bp_prepare_end_point_dist_high; //!< [��-504/506-�216.2] ����������� ������ �������� ������� ��� �� ��� �������� ��� ��, ������� ����� //(min:0 max:9999 bits:4..19 msb:500 ��)
   uint16_t                    bp_prepare_end_point_dist_low;  //!< [��-504/506-�216.2] ����������� ������ �������� ������� ��� �� ��� �������� ��� ��, ������� �����
   uint16_t                    bp_orzp_shift_x;                //!< [��-504/506-�219] ���������� ���������� ���� �� ��� //(min:-9999 max:9999 signed:4 bits:5..19 lsb:1 ��)
   uint16_t                    bp_orzp_shift_z;                //!< [��-504/506-�221] ������� ���������� ���� �� ��� //(min:-9999 max:9999 signed:4 bits:5..19 lsb:1 ��)
} mfci_in_suo_50x_3_b_t;

//! ������� ��������� ���� c ������� ���������� ����� ���-504/506 (�� ������� 1 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_path_b_t {
   uint16_t          sa_type;        //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_PATH/MFCI_IN_SUO_50X_SA_PROPOSED_PATH)
   bp_path_id_b_t    id_b;           //!< �����-������������� ������������ ������ �������� ���������� ��-504/506
   mfci_bp_coord_b_t points_b[5];    //!< [��-504/506-�124/�125.2] �������� ������� ��������� ����� ����������, ������� � �������� � �������� (id_b.start_number - 1)
   uint16_t          radiuses[5];    //!< [��-504/506-�124/�125.4] �������� ������� �������� ��������� �� �������� ����������, ������� � �������� � �������� (id_b.start_number - 1) //(min:0 max:100 bits:4..19 msb:50 ��)
   uint16_t          arc_lengths[5]; //!< [��-504/506-�124/�125.5] �������� ������� ������� �������� ��� ����������, ������� � �������� � �������� (id_b.start_number - 1) //(min:0 max:360 bits:4..19 msb:180�)
} mfci_in_suo_50x_path_b_t;

//! ������� ��������� ���� c ������� ���������� � ������ ����������� ������ ����� ���-504/506 (�� ������� 1 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_trk_ap_b_t {
   uint16_t                             sa_type;                   //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_TRK_AP)
   mfci_in_suo_50x_trk_ap_flag_word_b_t flag_word_b;               //!< ����� �������� ���������� � ������ ����������� ������
   uint16_t                             bp_waypoint_distance_high; //!< [��-504/506-�138] ���������� �� ���������� ���, ������� ����� //(min:0 max:15000000 bits:4..19 lsb:1 �)
   uint16_t                             bp_waypoint_distance_low;  //!< [��-504/506-�138] ���������� �� ���������� ���, ������� �����
   uint16_t                             bp_delta_z;                //!< [��-504/506-�140] �������� ������� ��������� �� ����� ��������� ���� //(min:-99.9 max:99.9 signed:4 bits:5..19 lsb:0.1 ��)
} mfci_in_suo_50x_trk_ap_b_t;

//! ������� ��������� ���� c ������� ������������� ��� ���-504/506 (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_rvp_init_b_t {
   uint16_t                               sa_type;     //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_RVP_INIT)
   mfci_in_suo_50x_rvp_init_flag_word_b_t flag_word_b; //!< ����� �������� ������������� ���
   float                                  csr;         //!< [��-504/506-�208.4] ���� �������� ������� ��������� ����� ��� �� ���� �������� (���) //(min:0 max:1.570796326795)
} mfci_in_suo_50x_rvp_init_b_t;

//! ������� ��������� ���� c ������� ����� ��� ����� ���-504/506 (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_rvp_points_b_t {
   uint16_t                                 sa_type;      //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_RVP_POINTS)
   mfci_in_suo_50x_rvp_points_flag_word_b_t flag_word_b;  //!< ����� �������� �������� ������ ����� ���
   mfci_bp_rvp_point_b_t                    points_b[15]; //!< [��-504/506-�208.1] �������� ������� ����� ���, ������� � �������� � �������� (start_number - 1)
} mfci_in_suo_50x_rvp_points_b_t;

//! ������� ��������� ���� c ������� �������� ��������� ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_rvp_polygons_b_t {
   uint16_t                                   sa_type;        //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_RVP_POLYGONS)
   mfci_in_suo_50x_rvp_polygons_flag_word_b_t flag_word_b;    //!< ����� �������� �������� ������ �������� ��������� ���
   mfci_bp_rvp_polygon_b_t                    polygons_b[30]; //!< [��-504/506-�208.2/3] �������� ������� �������� ��������� ���, ������� � �������� � �������� (start_number - 1)
} mfci_in_suo_50x_rvp_polygons_b_t;

//! ������� ��������� ���� c ������� ������������ ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_osp_init_b_t {
   uint16_t                               sa_type;     //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_OSP_INIT)
   mfci_in_suo_50x_osp_init_flag_word_b_t flag_word_b; //!< ����� ���������� ���
} mfci_in_suo_50x_osp_init_b_t;

//! ������� ��������� ���� c ������� ����� ������� ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_osp_outer_points_b_t {
   uint16_t                     sa_type;         //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_OSP_OUTER_POINTS)
   uint16_t                     start_number;    //!< ����� ������� �������� � ������� ����� ������� ��� points_b //(min:1 max:135 bits:4..19 lsb:1)
   bp_50x_osp_units_count_1_b_t units_count_1_b; //!< [��-504/506-�117.3] ����� 1 ���������� ��� � ������ ������� ���
   bp_50x_osp_units_count_2_b_t units_count_2_b; //!< [��-504/506-�117.3] ����� 2 ���������� ��� � ������ ������� ���
   mfci_bp_coord_b_t            points_b[7];     //!< [��-504/506-�117.1] �������� ������� ����� ������� ���, ������� � �������� � �������� (start_number - 1)
} mfci_in_suo_50x_osp_outer_points_b_t;

//! ������� ��������� ���� c ������� ����� ������ ������ ������ ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_osp_inner_points_b_t {
   uint16_t          sa_type;      //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_OSP_INNER_POINTS)
   uint16_t          start_number; //!< ����� ������� �������� � ������� ����� ������ ������ ������ ��� points_b //(min:1 max:45 bits:4..19 lsb:1)
   uint16_t          reserve_1;    //!< ������
   uint16_t          reserve_2;    //!< ������
   mfci_bp_coord_b_t points_b[7];  //!< [��-504/506-�117.2] �������� ������� ����� ������ ������ ������ ���, ������� � �������� � �������� (start_number - 1)
} mfci_in_suo_50x_osp_inner_points_b_t;

//! ������� ��������� ���� c ������� ����� ��������� � ������� ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_areas_points_b_t {
   uint16_t          sa_type;      //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_AREAS_POINTS)
   uint16_t          start_number; //!< ����� ������� �������� � ������� ����� ��������� � ������� ��� points_b //(min:1 max:256 bits:4..19 lsb:1)
   uint16_t          reserve_1;    //!< ������
   uint16_t          reserve_2;    //!< ������
   mfci_bp_coord_b_t points_b[7];  //!< [��-504/506-�129.1] ���������� ����� ��������� � ������� ���
} mfci_in_suo_50x_areas_points_b_t;

//! ������� ��������� ���� c ������� �������� ��������� ��������� � ������� ��� (�� ������� 2 ���), ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_areas_b_t {
   uint16_t         sa_type;      //!< ������������� ��������� (MFCI_IN_SUO_50X_SA_AREAS)
   uint16_t         start_number; //!< ����� ������� �������� � ������� �������� ��������� � ������� ��� areas_b //(min:1 max:85 bits:4..19 lsb:1)
   mfci_bp_area_b_t areas_b[30];  //!< [��-504/506-�129.2/�129] �������� ������� �������� ��������� ��� ������� ���, ������� � �������� � �������� (start_number - 1)
} mfci_in_suo_50x_areas_b_t;

//! ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1/2 ���), �������� 4-20 ����-3.2 (12.5 ��)
typedef union mfci_in_suo_50x_4_20_b_t {
   mfci_in_suo_50x_path_b_t             path_b;             //!< ������ ����������� ��� ������������ ���������� (�� ������� 1 ���)
   mfci_in_suo_50x_trk_ap_b_t           trk_ap_b;           //!< ������ ���������� � ������ ����������� ������ (�� ������� 1 ���)
   mfci_in_suo_50x_rvp_init_b_t         rvp_init_b;         //!< ������ ������������� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_rvp_points_b_t       rvp_points_b;       //!< ������ ����� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_rvp_polygons_b_t     rvp_polygons_b;     //!< ������ �������� ��������� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_osp_init_b_t         osp_init_b;         //!< ������ ������������� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_osp_outer_points_b_t osp_outer_points_b; //!< ������ ����� ������� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_osp_inner_points_b_t osp_inner_points_b; //!< ������ ����� ������ ������ ������ ��� (�� ������� 2 ���)
   mfci_in_suo_50x_areas_points_b_t     areas_points_b;     //!< ������ ����� ��������� � ������� ��� (�� ������� 2 ���)
   mfci_in_suo_50x_areas_b_t            areas_b;            //!< ������ �������� ��������� ��������� � ������� ��� (�� ������� 2 ���)
} mfci_in_suo_50x_4_20_b_t;

//! ������� ��������� ���� c ������� � �� � ����������� ������ ���� � ����� ���-504/506 (��� �������� �� ���� � ���)
typedef struct mfci_soi_ti_cursor_b_t {
   uint16_t soi_ti_x_high;                //!< [���] ���������� x ����� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t soi_ti_x_low;                 //!< [���] ���������� x ����� ��������, ������� �����
   uint16_t soi_ti_y_high;                //!< [���] ���������� y ����� ��������, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t soi_ti_y_low;                 //!< [���] ���������� y ����� ��������, ������� �����
   uint16_t soi_cursor_point_mfci_x_high; //!< [���] ���������� x ������� ��� ����������� ������ ���� �� ������� ����, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t soi_cursor_point_mfci_x_low;  //!< [���] ���������� x ������� ��� ����������� ������ ���� �� ������� ����, ������� �����
   uint16_t soi_cursor_point_mfci_y_high; //!< [���] ���������� y ������� ��� ����������� ������ ���� �� ������� ����, ������� ����� (��� ��/2 ���) //(min:-3.14159265359 max:3.14159265359 signed:4 bits:5..19 msb:1.570796326795 ���)
   uint16_t soi_cursor_point_mfci_y_low;  //!< [���] ���������� y ������� ��� ����������� ������ ���� �� ������� ����, ������� �����
} mfci_soi_ti_cursor_b_t;

//! ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 21 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_21_b_t {
   mfci_soi_ti_cursor_b_t mfci_1_4_ti_cursor_b[4]; //!< [���] ������ � �� � ����������� ������ ���� �� ���� �� 1-4 � ���
} mfci_in_suo_50x_21_b_t;

//! ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 22 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_22_b_t {
   mfci_soi_ti_cursor_b_t mfci_5_8_ti_cursor_b[4]; //!< [���] ������ � �� � ����������� ������ ���� �� ���� �� 5-8 � ���
} mfci_in_suo_50x_22_b_t;

//! ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 23 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_50x_23_b_t {
   mfci_soi_ti_cursor_b_t mfci_9_11_ti_cursor_b[3]; //!< [���] ������ � �� � ����������� ������ ���� �� ���� �� 9-11 � ���
} mfci_in_suo_50x_23_b_t;

//! ������� ��������� ���� c ������� ����� ���-����, �������� 26 ����-3.2 (12.5 ��)
typedef struct mfci_in_suo_iipa_b_t {
   uint16_t reserve; //!< ������
} mfci_in_suo_iipa_b_t;

//! ������� ��������� ����, �������� 27-29 ����-3.2 (6.25 ��, c ������� ����� ���)
typedef struct mfci_in_asu_b_t {
   asu_header_word_1_b_t    asu_header_word_1_b;                  //!< ��������� ��������� ��� (����� 1)
   asu_header_word_2_b_t    asu_header_word_2_b;                  //!< ��������� ��������� ��� (����� 2)
   asu_header_word_3_b_t    asu_header_word_3_b;                  //!< ��������� ��������� ��� (����� 3)
   asu_header_word_4_b_t    asu_header_word_4_b;                  //!< ��������� ��������� ��� (����� 4)
   asu_header_word_5_b_t    asu_header_word_5_b;                  //!< ��������� ��������� ��� (����� 5)
   asu_header_word_6_b_t    asu_header_word_6_b;                  //!< ��������� ��������� ��� (����� 6)
   asu_header_word_7_in_b_t asu_header_word_7_b;                  //!< ��������� ��������� ��� (����� 7)
   asu_header_word_8_b_t    asu_header_word_8_b;                  //!< ��������� ��������� ��� (����� 8)
   uint16_t                 asu_segment[ASU_SEGMENT_WORDS_COUNT]; //!< C������ ������� �� ��� � ���/����
} mfci_in_asu_b_t;

//! ������� ��������� ����, �������� 30 ����-3.2 (1 ��, c ������� ����� ��� � 19-��)
typedef struct mfci_in_asu_u19_b_t {
   uint16_t            mfpu_to_mfci_msg2[MFPU_TO_MFCI_MSG2_SIZE]; //!< ��������� �� ��������� ���� (������ ���)
   u19_flag_word_1_b_t u19_flag_word_1_b;                         //!< ����� 1 �������� 19-��
   u19_flag_word_2_b_t u19_flag_word_2_b;                         //!< ����� 2 �������� 19-��
   u19_flag_word_3_b_t u19_flag_word_3_b;                         //!< ����� 3 �������� 19-��
} mfci_in_asu_u19_b_t;

//! ����� �������� ��� ���� (1 ��, ��� �������� � ��� �� SpaceWire � � �������� ���������� 1-3 ����-3.1)
typedef struct mfci_in_upr_flag_words_b_t {
   upr_flag_word_common_1_b_t common_1_b; //!< ����� 1 �������� ��� (����� ��� ���� ������)
   upr_flag_word_common_2_b_t common_2_b; //!< ����� 2 �������� ��� (����� ��� ���� ������)
   upr_flag_word_common_3_b_t common_3_b; //!< ����� 3 �������� ��� (����� ��� ���� ������)
   upr_flag_word_common_4_b_t common_4_b; //!< ����� 4 �������� ��� (����� ��� ���� ������)
   upr_flag_word_format_b_t   format_1_b; //!< ����� 1 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   format_2_b; //!< ����� 2 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   format_3_b; //!< ����� 3 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   format_4_b; //!< ����� 4 �������� ��� ��� ������������� �����
} mfci_in_upr_flag_words_b_t;

//! ������ �� ���� � ��� (1 ��, ��� �������� � ��� �� SpaceWire)
typedef struct mfci_to_bgs_sw_b_t {
   mfci_in_upr_flag_words_b_t upr_flag_words_b[MFCI_COUNT]; //!< ����� �������� ��� ����
   uint16_t                   mup1_latitude_high;           //!< �������������� ������ ������� ��� 1, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                   mup1_latitude_low;            //!< �������������� ������ ������� ��� 1, ������� �����
   uint16_t                   mup1_longitude_high;          //!< �������������� ������� ������� ��� 1, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   mup1_longitude_low;           //!< �������������� ������� ������� ��� 1, ������� �����
   uint16_t                   mup2_latitude_high;           //!< �������������� ������ ������� ��� 2, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t                   mup2_latitude_low;            //!< �������������� ������ ������� ��� 2, ������� �����
   uint16_t                   mup2_longitude_high;          //!< �������������� ������� ������� ��� 2, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t                   mup2_longitude_low;           //!< �������������� ������� ������� ��� 2, ������� �����
} mfci_to_bgs_sw_b_t;

//! ������ �� ���� � ��� (1 ��, ��� �������� � ��� � �������� ���������� 1-3 ����-3.1)
typedef struct mfci_to_bgs_mkio_b_t {
   uint16_t sa1_b[32]; //!< ������ �� ���� � ��� (�������� 1)
   uint16_t sa2_b[32]; //!< ������ �� ���� � ��� (�������� 2)
   uint16_t sa3_b[32]; //!< ������ �� ���� � ��� (�������� 3)
} mfci_to_bgs_mkio_b_t;

//! ������ �� ���� � ��� (1 ��, ��� �������� � ��� �� SpaceWire � � �������� ���������� 1-3 ����-3.1)
typedef union mfci_to_bgs_b_t {
   mfci_to_bgs_sw_b_t sw_b;     //!< ������ �� ���� � ��� (��� �������� � ��� �� SpaceWire)
   mfci_to_bgs_mkio_b_t mkio_b; //!< ������ �� ���� � ��� (��� �������� � �������� ���������� 1-3)
} mfci_to_bgs_b_t;

//! ������ ����������� ���� (1 ��, ������ ��� �������� �� SpaceWire)
typedef struct mfci_in_blocks_crc_sw_b_t {
   uint16_t                    crc_start_index;              //!< ������ ������� �������� � ������� crc_b //(min:0 max:59 bits:4..19 lsb:1)
   uint16_t                    crc_count;                    //!< ����� ���������� ����������� ���� ��� �������� crc_b //(min:0 max:60 bits:4..19 lsb:1)
   mfci_in_blocks_crc_unit_b_t crc_b[CRC_PO_PER_MESSAGE_IN]; //!< ������ � ����������� ����� �� �������
} mfci_in_blocks_crc_sw_b_t;

//! ������� ��������� ���� c ������� ����������� ���� (����-3.1, 1 ��, �������� 1-3)
typedef struct mfci_in_blocks_crc_mkio_b_t {
   uint16_t                         mfci_format;     //!< ���� ���� (MFCI_FORMAT_BLOCKS_CRC)
   uint16_t                         reserve;         //!< ������
   mfci_in_blocks_crc_mkio_id_1_b_t id_1_b;          //!< ����� 1 ������������� ������ � ������ �� ������/�������
   mfci_in_blocks_crc_mkio_id_2_b_t id_2_b;          //!< ����� 2 ������������� ������ � ������ �� ������/�������
   uint16_t                         crc_start_index; //!< ������ ������������� �������� ����������� ���� (������ ������) //(min:0 max:59 bits:4..19 lsb:1)
   uint16_t                         crc_count;       //!< ����� ���������� ����������� ���� ��� �������� crc_b //(min:0 max:60 bits:4..19 lsb:1)
   mfci_in_blocks_crc_unit_b_t      crc_b;           //!< ������ � ����������� ����� �� ������
} mfci_in_blocks_crc_mkio_b_t;

//! ������� ������ ���� �� ������� 25 �� �� ��� (��������� 1-6 ����-3.1)
typedef struct mfci_in_25hz_bis_b_t {
   uint32_t         counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_sa_1_b_t sa_1_b;  //!< ������� ��������� ����, �������� 1 ����-3.1
   mfci_in_sa_2_b_t sa_2_b;  //!< ������� ��������� ����, �������� 2 ����-3.1
   mfci_in_sa_3_b_t sa_3_b;  //!< ������� ��������� ����, �������� 3 ����-3.1
   mfci_in_sa_4_b_t sa_4_b;  //!< ������� ��������� ����, �������� 4 ����-3.1
   mfci_in_sa_5_b_t sa_5_b;  //!< ������� ��������� ����, �������� 5 ����-3.1
   mfci_in_sa_6_b_t sa_6_b;  //!< ������� ��������� ����, �������� 6 ����-3.1
} mfci_in_25hz_bis_b_t;

//! ������� ������ ���� �� ������� 12.5 �� �� ��� (��������� 7-18 ����-3.1)
typedef struct mfci_in_12hz_bis_b_t {
   uint32_t          counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_sa_7_b_t  sa_7_b;  //!< ������� ��������� ����, �������� 7 ����-3.1
   mfci_in_sa_8_b_t  sa_8_b;  //!< ������� ��������� ����, �������� 8 ����-3.1
   mfci_in_sa_9_b_t  sa_9_b;  //!< ������� ��������� ����, �������� 9 ����-3.1
   mfci_in_sa_10_b_t sa_10_b; //!< ������� ��������� ����, �������� 10 ����-3.1
   mfci_in_sa_11_b_t sa_11_b; //!< ������� ��������� ����, �������� 11 ����-3.1
   mfci_in_sa_12_b_t sa_12_b; //!< ������� ��������� ����, �������� 12 ����-3.1
   mfci_in_sa_13_b_t sa_13_b; //!< ������� ��������� ����, �������� 13 ����-3.1
   mfci_in_sa_14_b_t sa_14_b; //!< ������� ��������� ����, �������� 14 ����-3.1
   mfci_in_sa_15_b_t sa_15_b; //!< ������� ��������� ����, �������� 15 ����-3.1
   mfci_in_sa_16_b_t sa_16_b; //!< ������� ��������� ����, �������� 16 ����-3.1
   mfci_in_sa_17_b_t sa_17_b; //!< ������� ��������� ����, �������� 17 ����-3.1
   mfci_in_sa_18_b_t sa_18_b; //!< ������� ��������� ����, �������� 18 ����-3.1
} mfci_in_12hz_bis_b_t;

//! ������� ������ ���� �� ������� 12.5 �� �� ���� (��������� 1-22, 26 ����-3.2)
typedef struct mfci_in_12hz_bcvm_b_t {
   uint32_t                 counter;            //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_suo_50x_1_b_t    suo_50x_1_b;        //!< ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1 ���), �������� 1 ���� 3.2
   mfci_in_suo_50x_2_b_t    suo_50x_2_b;        //!< ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1 ���), �������� 2 ���� 3.2
   mfci_in_suo_50x_3_b_t    suo_50x_3_b;        //!< ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 2 ���), �������� 3 ���� 3.2
   mfci_in_suo_50x_4_20_b_t suo_50x_4_20_b[17]; //!< ������� ��������� ���� c ������� ����� ���-504/506 (�� ������� 1/2 ���), �������� 4-20 ���� 3.2
   mfci_in_suo_50x_21_b_t   suo_50x_21_b;       //!< ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 21 ���� 3.2
   mfci_in_suo_50x_22_b_t   suo_50x_22_b;       //!< ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 22 ���� 3.2
   mfci_in_suo_50x_23_b_t   suo_50x_23_b;       //!< ������� ��������� ��� c ������� ����� ���-504/506 (�� ����), �������� 23 ���� 3.2
   mfci_in_suo_iipa_b_t     suo_iipa_b;         //!< ������� ��������� ���� c ������� ����� ���-����, �������� 26 ���� 3.2
} mfci_in_12hz_bcvm_b_t;

//! ������� ������ ���� �� ������� 6.25 �� �� ��� (��������� 19-24, 29-30 ����-3.1)
typedef struct mfci_in_6hz_bis_b_t {
   uint32_t                counter;       //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_sa_19_b_t       sa_19_b;       //!< ������� ��������� ����, �������� 19 ����-3.1
   mfci_in_sa_20_b_t       sa_20_b;       //!< ������� ��������� ����, �������� 20 ����-3.1
   mfci_in_sa_21_b_t       sa_21_b;       //!< ������� ��������� ����, �������� 21 ����-3.1
   mfci_in_sa_22_b_t       sa_22_b;       //!< ������� ��������� ����, �������� 22 ����-3.1
   mfci_in_sa_23_b_t       sa_23_b;       //!< ������� ��������� ����, �������� 23 ����-3.1
   mfci_in_sa_24_b_t       sa_24_b;       //!< ������� ��������� ����, �������� 24 ����-3.1
   mfci_in_active_path_b_t active_path_b; //!< ������� ��������� ���� � ����������� ������ �� �������� ������� �������� (�������� 29 ����-3.1)
   mfci_in_flight_plan_b_t flight_plan_b; //!< ������� ��������� ���� � ������ ������ (�������� 30 ����-3.1)
} mfci_in_6hz_bis_b_t;

//! ������� ������ ���� �� ������� 6.25 �� �� ���� (��������� 24, 27-29 ����-3.2)
typedef struct mfci_in_6hz_bcvm_b_t {
   uint32_t         counter;             //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_fovb_b_t fovb_b;              //!< ������� ��������� ���� c ������� ���� (�������� 24 ����-3.2)
   mfci_in_asu_b_t  asu_b[ASU_SA_COUNT]; //!< ������� ��������� ���� � ������� ��� (��������� 27-29 ����-3.2)
} mfci_in_6hz_bcvm_b_t;

//! ������� ������ ���� �� ������� 1 �� �� ��� (��������� 25-28 ����-3.1, �������� ��������� 1-3, ������ �� ���� � ���)
typedef struct mfci_in_1hz_bis_b_t {
   uint32_t                 counter;        //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_sa_25_b_t        sa_25_b;        //!< ������� ������ ���� (�������� 25 �� ����-3.1)
   mfci_in_svr_b_t          svr_b;          //!< ������� ��������� ���� c ������� ����� ��� (�������� 26 ����-3.1)
   mfci_in_bask_1_b_t       bask_1_b;       //!< ������� ��������� ���� c ������� ����� ���� (�������� 1, �������� 26 ����-3.1)
   mfci_in_bask_2_b_t       bask_2_b;       //!< ������� ��������� ���� c ������� ����� ���� (�������� 2, �������� 27 ����-3.1)
   mfci_in_bask_3_b_t       bask_3_b;       //!< ������� ��������� ���� c ������� ����� ���� (�������� 3, �������� 28 ����-3.1)
   mfci_in_msrp_1_b_t       msrp_1_b;       //!< ������� ��������� ���� c ������� ����� ���� (�������� 1, �������� 26 ����-3.1)
   mfci_in_msrp_2_b_t       msrp_2_b;       //!< ������� ��������� ���� c ������� ����� ���� (�������� 2, �������� 27 ����-3.1)
   mfci_in_blocks_1_b_t     blocks_1_b;     //!< ������� ��������� ���� c ������� ����� ����� (�������� 1, �������� 26 ����-3.1)
   mfci_in_blocks_2_b_t     blocks_2_b;     //!< ������� ��������� ���� c ������� ����� ����� (�������� 2, �������� 27 ����-3.1)
   mfci_in_blocks_3_b_t     blocks_3_b;     //!< ������� ��������� ���� c ������� ����� ����� (�������� 3, �������� 28 ����-3.1)
   mfci_in_blocks_szi_1_b_t blocks_szi_1_b; //!< ������� ��������� ���� c ������� ����� �����-��� (�������� 1, �������� 26 ����-3.1)
   mfci_in_tar_b_t          tar_b;          //!< ������� ��������� ���� c ������� ����� ��� (�������� 26 ����-3.1)
   mfci_to_bgs_b_t          mfci_to_bgs_b;  //!< ������ �� ���� � ��� (��� �������� � ��� �� SpaceWire � � �������� ���������� 1-3 ����-3.1)
} mfci_in_1hz_bis_b_t;

//! ������� ������ ���� �� ������� 1 �� �� ���� (��������� 25, 30 ����-3.2)
typedef struct mfci_in_1hz_bcvm_b_t {
   uint32_t                 counter;        //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_blocks_szi_2_b_t blocks_szi_2_b; //!< ������� ��������� ���� c ������� ����� �����-��� (�������� 2, �������� 25 ����-3.2)
   mfci_in_asu_u19_b_t      asu_u19_b;      //!< ������� ��������� ���� � ������� ��� � 19-�� (�������� 30 ����-3.2)
} mfci_in_1hz_bcvm_b_t;

//! ������� ������ ���� �� ������� 25 ��
typedef struct mfci_in_25hz_b_t {
   uint32_t             counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_25hz_bis_b_t bis_b;   //!< ������� ������ ���� �� ������� 25 �� �� ��� (��������� 1-6 ����-3.1)
} mfci_in_25hz_b_t;

//! ������� ������ ���� �� ������� 12.5 ��
typedef struct mfci_in_12hz_b_t {
   uint32_t              counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_12hz_bis_b_t  bis_b;   //!< ������� ������ ���� �� ������� 12.5 �� �� ��� (��������� 7-18 ����-3.1)
   mfci_in_12hz_bcvm_b_t bcvm_b;  //!< ������� ������ ���� �� ������� 12.5 �� �� ���� (��������� 1-23, 26 ����-3.2)
} mfci_in_12hz_b_t;

//! ������� ������ ���� �� ������� 6.25 ��
typedef struct mfci_in_6hz_b_t {
   uint32_t             counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_6hz_bis_b_t  bis_b;   //!< ������� ������ ���� �� ������� 6.25 �� �� ��� (��������� 19-24, 29-30 ����-3.1)
   mfci_in_6hz_bcvm_b_t bcvm_b;  //!< ������� ������ ���� �� ������� 6.25 �� �� ���� (��������� 24, 27-29 ����-3.2)
} mfci_in_6hz_b_t;

//! ������� ������ ���� �� ������� 1 ��
typedef struct mfci_in_1hz_b_t {
   uint32_t             counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_1hz_bis_b_t  bis_b;   //!< ������� ������ ���� �� ������� 1 �� �� ��� (��������� 25-28 ����-3.1, ����� �������� ���)
   mfci_in_1hz_bcvm_b_t bcvm_b;  //!< ������� ������ ���� �� ������� 1 �� �� ���� (��������� 25, 30 ����-3.2)
} mfci_in_1hz_b_t;

//! ������� ������ ����
typedef struct mfci_in_b_t {
   uint32_t                    counter;                    //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_25hz_b_t            mfci_in_25hz_b;             //!< ������� ������ ���� �� ������� 25 ��
   mfci_in_12hz_b_t            mfci_in_12hz_b;             //!< ������� ������ ���� �� ������� 12.5 ��
   mfci_in_6hz_b_t             mfci_in_6hz_b;              //!< ������� ������ ���� �� ������� 6.25 ��
   mfci_in_1hz_b_t             mfci_in_1hz_b;              //!< ������� ������ ���� �� ������� 1 ��
   mfci_in_blocks_crc_mkio_b_t blocks_crc_b[CRC_SA_COUNT]; //!< ������� ��������� ���� c ������� ����� �����-�� (�������� 1-3, �������� 26-28 ����-3.1)
} mfci_in_b_t;

//! ������� ������ ��-100 ��� �� ������� 25 ��
typedef struct bgs_in_25hz_b_t {
   uint32_t         counter;        //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_25hz_b_t mfci_in_25hz_b; //!< ������� ������ ���� �� ������� 25 ��
   mfci_in_12hz_b_t mfci_in_12hz_b; //!< ������� ������ ���� �� ������� 12.5 ��
   mfci_in_6hz_b_t  mfci_in_6hz_b;  //!< ������� ������ ���� �� ������� 6.25 ��
} bgs_in_25hz_b_t;

//! ������� ������ ��-100 ��� �� ������� 12.5 ��
typedef struct bgs_in_12hz_b_t {
   uint32_t        counter;       //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_1hz_b_t mfci_in_1hz_b; //!< ������� ������ ���� �� ������� 1 ��
} bgs_in_12hz_b_t;

//! ������� ������ ��-100 ��� �� ������� 12.5 ��
typedef struct bgs_in_crc_b_t {
   uint32_t                  counter;                     //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_in_blocks_crc_sw_b_t blocks_crc_b[BGS_CPU_COUNT]; //!< ������ ����������� ���� (������ ��� �������� �� SpaceWire)
} bgs_in_crc_b_t;

//! �������� ������ ��-100 ���
typedef struct bgs_out_queuing_b_t {
   uint8_t                     bgs_cpu_la;                        //!< ���������� ����� ����������, � �������� �������� ������ �/� //(min:0 max:255)
   mfci_in_blocks_crc_unit_b_t out_crc_b[CRC_PO_PER_MESSAGE_OUT]; //!< ������ ����������� ���� (������ ��� �������� �� SpaceWire)
} bgs_out_queuing_b_t;

//! �������� ������ ���� (�������� 1 ����-3.1/3.2, ��������� � ����������� �������)
typedef struct mfci_out_sa1_b_t {
   mfci_status_word_1_b_t     status_word_1_b;          //!< ����� 1 ���������
   mfci_status_word_2_b_t     status_word_2_b;          //!< ����� 2 ���������
   mfci_status_word_3_b_t     status_word_3_b;          //!< ����� 3 ���������
   upr_flag_word_common_1_b_t upr_flag_word_common_1_b; //!< ����� 1 �������� ��� (����� ��� ���� ������ ����)
   upr_flag_word_common_2_b_t upr_flag_word_common_2_b; //!< ����� 2 �������� ��� (����� ��� ���� ������ ����)
   upr_flag_word_common_3_b_t upr_flag_word_common_3_b; //!< ����� 3 �������� ��� (����� ��� ���� ������ ����)
   upr_flag_word_common_4_b_t upr_flag_word_common_4_b; //!< ����� 4 �������� ��� (����� ��� ���� ������ ����)
   upr_flag_word_format_b_t   upr_flag_word_format_1_b; //!< ����� 1 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   upr_flag_word_format_2_b; //!< ����� 2 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   upr_flag_word_format_3_b; //!< ����� 3 �������� ��� ��� ������������� �����
   upr_flag_word_format_b_t   upr_flag_word_format_4_b; //!< ����� 4 �������� ��� ��� ������������� �����
} mfci_out_sa1_b_t;

//! �������� ������ ���� (�������� 2 ����-3.1, ������ � ����������� ����� ��)
typedef struct mfci_out_sa2_b_t {
   uint16_t         mv_fpo_revision;       //!< ��� �B: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mv_fpo_version_b;      //!< ��� �B: ������ � ���������
   mfci_date_b_t    mv_fpo_date_b;         //!< ��� �B: ���� ������
   uint16_t         mv_fpo_crc_high;       //!< ��� �B: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mv_fpo_crc_low;        //!< ��� �B: ����������� ����� (������� �����)
   uint16_t         mv_poos_revision;      //!< ��-�� ��: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mv_poos_version_b;     //!< ��-�� ��: ������ � ���������
   mfci_date_b_t    mv_poos_date_b;        //!< ��-�� ��: ���� ������
   uint16_t         mv_poos_crc_high;      //!< ��-�� ��: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mv_poos_crc_low;       //!< ��-�� ��: ����������� ����� (������� �����)
   uint16_t         mg24_fonts_revision;   //!< ������ ��24: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mg24_fonts_version_b;  //!< ������ ��24: ������ � ���������
   mfci_date_b_t    mg24_fonts_date_b;     //!< ������ ��24: ���� ������
   uint16_t         mg24_fonts_crc_high;   //!< ������ ��24: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mg24_fonts_crc_low;    //!< ������ ��24: ����������� ����� (������� �����)
   uint16_t         mg24_bpo_revision;     //!< ��� ��24: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mg24_bpo_version_b;    //!< ��� ��24: ������ � ���������
   mfci_date_b_t    mg24_bpo_date_b;       //!< ��� ��24: ���� ������
   uint16_t         mg24_bpo_crc_high;     //!< ��� ��24: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mg24_bpo_crc_low;      //!< ��� ��24: ����������� ����� (������� �����)
   uint16_t         mg428_fonts_revision;  //!< ������ ��428: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mg428_fonts_version_b; //!< ������ ��428: ������ � ���������
   mfci_date_b_t    mg428_fonts_date_b;    //!< ������ ��428: ���� ������
   uint16_t         mg428_fonts_crc_high;  //!< ������ ��428: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mg428_fonts_crc_low;   //!< ������ ��428: ����������� ����� (������� �����)
   uint16_t         mg428_bpo_revision;    //!< ��� ��428: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t mg428_bpo_version_b;   //!< ��� ��428: ������ � ���������
   mfci_date_b_t    mg428_bpo_date_b;      //!< ��� ��428: ���� ������
   uint16_t         mg428_bpo_crc_high;    //!< ��� ��428: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         mg428_bpo_crc_low;     //!< ��� ��428: ����������� ����� (������� �����)
} mfci_out_sa2_b_t;

//! �������� ������ ���� (�������� 3 ����-3.1, ������ � ����������� ����� ��)
typedef struct mfci_out_sa3_b_t {
   uint16_t         config_revision;         //!< ������������: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t config_version_b;        //!< ������������: ������ � ���������
   mfci_date_b_t    config_date_b;           //!< ������������: ���� ������
   uint16_t         config_crc_high;         //!< ������������: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         config_crc_low;          //!< ������������: ����������� ����� (������� �����)
   uint16_t         signals_table_revision;  //!< ������� ������ ������������: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t signals_table_version_b; //!< ������� ������ ������������: ������ � ���������
   mfci_date_b_t    signals_table_date_b;    //!< ������� ������ ������������: ���� ������
   uint16_t         signals_table_crc_high;  //!< ������� ������ ������������: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         signals_table_crc_low;   //!< ������� ������ ������������: ����������� ����� (������� �����)
   uint16_t         kkd_table_revision;      //!< ������� ������ ���: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t kkd_table_version_b;     //!< ������� ������ ���: ������ � ���������
   mfci_date_b_t    kkd_table_date_b;        //!< ������� ������ ���: ���� ������
   uint16_t         kkd_table_crc_high;      //!< ������� ������ ���: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         kkd_table_crc_low;       //!< ������� ������ ���: ����������� ����� (������� �����)
   uint16_t         rla_table_revision;      //!< ������� ������ ���: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t rla_table_version_b;     //!< ������� ������ ���: ������ � ���������
   mfci_date_b_t    rla_table_date_b;        //!< ������� ������ ���: ���� ������
   uint16_t         rla_table_crc_high;      //!< ������� ������ ���: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         rla_table_crc_low;       //!< ������� ������ ���: ����������� ����� (������� �����)
   uint16_t         bask_table_revision;     //!< ������� ������ �������� ����: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t bask_table_version_b;    //!< ������� ������ �������� ����: ������ � ���������
   mfci_date_b_t    bask_table_date_b;       //!< ������� ������ �������� ����: ���� ������
   uint16_t         bask_table_crc_high;     //!< ������� ������ �������� ����: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         bask_table_crc_low;      //!< ������� ������ �������� ����: ����������� ����� (������� �����)
   uint16_t         load_table_revision;     //!< ������� ��������: �������� //(min:1 max:99 bits:4..19 lsb:1)
   mfci_version_b_t load_table_version_b;    //!< ������� ��������: ������ � ���������
   mfci_date_b_t    load_table_date_b;       //!< ������� ��������: ���� ������
   uint16_t         load_table_crc_high;     //!< ������� ��������: ����������� ����� (������� �����) //(min:0 max:4294967295 bits:4..19 lsb:1)
   uint16_t         load_table_crc_low;      //!< ������� ��������: ����������� ����� (������� �����)
} mfci_out_sa3_b_t;

//! �������� ������ ���� (�������� 4 ����-3.2, ������� �� ���� � ���)
typedef struct mfci_out_sa4_b_t {
   asu_header_word_1_b_t     asu_header_word_1_b;                  //!< ��������� ��������� ��� (����� 1)
   asu_header_word_2_b_t     asu_header_word_2_b;                  //!< ��������� ��������� ��� (����� 2)
   asu_header_word_3_b_t     asu_header_word_3_b;                  //!< ��������� ��������� ��� (����� 3)
   asu_header_word_4_b_t     asu_header_word_4_b;                  //!< ��������� ��������� ��� (����� 4)
   asu_header_word_5_b_t     asu_header_word_5_b;                  //!< ��������� ��������� ��� (����� 5)
   asu_header_word_6_b_t     asu_header_word_6_b;                  //!< ��������� ��������� ��� (����� 6)
   asu_header_word_7_out_b_t asu_header_word_7_b;                  //!< ��������� ��������� ��� (����� 7)
   asu_header_word_8_b_t     asu_header_word_8_b;                  //!< ��������� ��������� ��� (����� 8)
   uint16_t                  asu_segment[ASU_SEGMENT_WORDS_COUNT]; //!< C������ ������� �� ���/���� � ���
} mfci_out_sa4_b_t;

//! �������� ������ ���� (�������� 5 ����-3.1, ���������� ������� ���)
typedef struct mfci_out_sa5_b_t {
   uint16_t mup_format;         //!< ����, ��� �������� ���������� ���������� ������� ��� (mfci_format_t, MFCI_FORMAT_ND - ���������� �� ����������) //(min:0 max:33 bits:4..19 lsb:1)
   uint16_t mup_latitude_high;  //!< �������������� ������ ������� ���, ������� ����� //(min:-90 max:90 signed:4 bits:5..19 msb:45�)
   uint16_t mup_latitude_low;   //!< �������������� ������ ������� ���, ������� �����
   uint16_t mup_longitude_high; //!< �������������� ������� ������� ���, ������� ����� //(min:-180 max:180 signed:4 bits:5..19 msb:90�)
   uint16_t mup_longitude_low;  //!< �������������� ������� ������� ���, ������� �����
} mfci_out_sa5_b_t;

//! �������� ������ ���� (�������� 6 ����-3.2, ������� �� ���� � ����)
typedef struct mfci_out_sa6_b_t {
   uint16_t asu_template_text[32]; //!< ����� ������� ��������� �� ���� � ���� � ������ (�������� 1)
} mfci_out_sa6_b_t;

//! �������� ������ ���� (�������� 7 ����-3.2, ������� �� ���� � ����)
typedef struct mfci_out_sa7_b_t {
   uint16_t asu_template_text[32]; //!< ����� ������� ��������� �� ���� � ���� � ������ (�������� 2)
} mfci_out_sa7_b_t;

//! �������� ������ ���� (�������� 8 ����-3.2, ������ �� � ������� ���-504/506 �� ���� � ���)
typedef struct mfci_out_sa8_b_t {
   mfci_soi_ti_cursor_b_t ti_cursor_b; //!< ������� � �� � ����������� ������ ���� � ����� ���-504/506 (��� �������� � ���)
} mfci_out_sa8_b_t;

//! �������� ������ ���� ��� ��� (����-3.1)
typedef struct mfci_out_bis_b_t {
   uint32_t         counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_out_sa1_b_t sa1_b;   //!< �������� ������ ���� (�������� 1 ����-3.1, ��������� � ����������� �������)
   mfci_out_sa5_b_t sa5_b;   //!< �������� ������ ���� (�������� 5 ����-3.1, ���������� ������� ���)
} mfci_out_bis_b_t;

//! �������� ������ ���� ��� ��� (������ � ����������� ����� ��, ����-3.1)
typedef struct mfci_out_crc_b_t {
   uint32_t         counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_out_sa2_b_t sa2_b;   //!< �������� ������ ���� (�������� 2 ����-3.1, ������ � ����������� ����� ��)
   mfci_out_sa3_b_t sa3_b;   //!< �������� ������ ���� (�������� 3 ����-3.1, ������ � ����������� ����� ��)
} mfci_out_crc_b_t;

//! �������� ������ ���� ��� ���� (����-3.2)
typedef struct mfci_out_bcvm_b_t {
   uint32_t         counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_out_sa1_b_t sa1_b;   //!< �������� ������ ���� (�������� 1 ����-3.2, ��������� � ����������� �������)
   mfci_out_sa4_b_t sa4_b;   //!< �������� ������ ���� (�������� 4 ����-3.2, ������� �� ���� � ���)
   mfci_out_sa6_b_t sa6_b;   //!< �������� ������ ���� (�������� 6 ����-3.2, ������� �� ���� � ����)
   mfci_out_sa7_b_t sa7_b;   //!< �������� ������ ���� (�������� 7 ����-3.2, ������� �� ���� � ����)
   mfci_out_sa8_b_t sa8_b;   //!< �������� ������ ���� (�������� 8 ����-3.2, �� � ������ ���-504/506, ���������� �� ���� � ���)
} mfci_out_bcvm_b_t;

//! �������� ������ ����
typedef struct mfci_out_b_t {
   uint32_t          counter; //!< ������� �������� ������������� ������ //(min:0 max:4294967295)
   mfci_out_bis_b_t  bis_b;   //!< �������� ������ ���� ��� ��� (����-3.1)
   mfci_out_crc_b_t  crc_b;   //!< �������� ������ ���� ��� ��� (������ � ����������� ����� ��, ����-3.1)
   mfci_out_bcvm_b_t bcvm_b;  //!< �������� ������ ���� ��� ���� (����-3.2)
} mfci_out_b_t;

//! ������ ����
typedef struct mfci_b_t {
   mfci_in_b_t  mfci_in_b;  //!< ������� ������ ����
   mfci_out_b_t mfci_out_b; //!< �������� ������ ����
} mfci_b_t;
