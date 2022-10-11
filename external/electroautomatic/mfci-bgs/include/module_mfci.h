/*!
 * @file module_mfci.h
 * @brief ���������� ������ ����/��� ��� ���������� � ���������� ������� 45.03�, 70� � 70�-506
 * @author ����� �����
 * @author ���� �������
 * @copyright �� ��� "�����������������", ���-1
 * @details
 * #### ����� ����
 *    ���
 * #### �����������
 *    ���
 */
#pragma once
#ifndef MODULE_MFCI_API
#if defined(_WIN32) && defined(MODULE_MFCI_EXPORTS)
#define MODULE_MFCI_API __declspec(dllexport)
#elif defined(_WIN32)
#define MODULE_MFCI_API __declspec(dllimport)
#elif defined(__GNUC__) && defined(MODULE_MFCI_EXPORTS)
#define MODULE_MFCI_API __attribute__((visibility("default")))
#else
#define MODULE_MFCI_API
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

//! ����� ������ ������ ������ ����/���
typedef enum module_mfci_mode_t {
   MODULE_MFCI_MODE_EA,   //!< ����� ������ ������ ����� UDP (��� ������ ��)
   MODULE_MFCI_MODE_MIEA, //!< ����� ������ ������ ����� UDP (��� ������ ����)
   MODULE_MFCI_MODE_TU,   //!< ����� ������ ������ �������� ����� module_mfci_set_sa, module_mfci_get_sa (��� ������� ��)
   MODULE_MFCI_MODE_ESVO  //!< ����� ������ ������ ����� ����������� ������ (��� ��������� ����)
} module_mfci_mode_t;

//! ������ ������������� ������ ����/���
typedef struct module_mfci_init_data_t {
   module_mfci_mode_t mode;       //!< ����� ������ ������
   unsigned int number;           //!< ����� ���� (1�11)
   const char *font_filename;     //!< ���� � ����� �� ������� ���� (������ ��� ������ MODULE_MFCI_MODE_ESVO)
   const char *shm_in_data_id;    //!< ������������� ����������� ������ � �������� ������� (������ ��� ������ MODULE_MFCI_MODE_ESVO)
   const char *shm_out_data_id;   //!< ������������� ����������� ������ � ��������� ������� (������ ��� ������ MODULE_MFCI_MODE_ESVO)
   const char *shm_in_buttons_id; //!< ������������� ����������� ������ � ����� ������� ������ (������ ��� ������ MODULE_MFCI_MODE_ESVO)
} module_mfci_init_data_t;

/*!
 * ��������� � �������������� ������ ����/���
 * @param init_data ������ �������������
 * @return ��������� ���������� (0 - �������)
 */
MODULE_MFCI_API int module_mfci_create(const module_mfci_init_data_t *init_data);

/*!
 * ������������� ������ ����/���
 * @return ��������� ���������� (0 - �������)
 */
MODULE_MFCI_API int module_mfci_destroy(void);

/*!
 * ��������� ��������� ������ ����/���
 * @return ��������� ���������� (0 - �������)
 */
MODULE_MFCI_API int module_mfci_update(void);

/*!
 * ���������� ������ ��������� � ������ ����/���
 * @param[in] channel_number ����� ������
 * @param[in] sa_number ����� ���������
 * @param[in] sa ����� ������ ���������
 * @param[in] words_count ���������� ���� ������ ���������
 * @return ��������� ���������� (0 - �������)
 * @note ������ ��� ������ MODULE_MFCI_MODE_TU
 */
MODULE_MFCI_API int module_mfci_set_sa(const unsigned int channel_number, const unsigned int sa_number, const unsigned short *sa, const unsigned int words_count);

/*!
 * ������ ������ ��������� �� ������ ����/���
 * @param[in] channel_number ����� ������
 * @param[in] sa_number ����� ���������
 * @param[out] sa ����� ������ ���������
 * @param[in] words_count ���������� ���� ������ ���������
 * @return ��������� ���������� (0 - �������)
 * @note ������ ��� ������ MODULE_MFCI_MODE_TU
 */
MODULE_MFCI_API int module_mfci_get_sa(const unsigned int channel_number, const unsigned int sa_number, unsigned short *sa, const unsigned int words_count);

#ifdef __cplusplus
}
#endif
