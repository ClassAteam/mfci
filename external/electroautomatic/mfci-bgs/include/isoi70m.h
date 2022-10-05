/*!
 * @file isoi70m.h
 * @brief Упакованные входные и выходные данные СОИ для проекта ИСОИ-70М
 * @author Илья Кулаков
 * @copyright АО ОКБ "Электроавтоматика", НИЦ-1
 * @details
 * #### Номер ВИДК
 *    нет
 * #### Комментарии
 *    нет
 * #### Дата последнего изменения файла
 *    21 марта 2021 г.
 */
// clang-format off
#pragma once
#if defined(SOI45) || defined(SOI70)
#include <ctypes.h>
#else
#include "addefs.h"
#endif

#include "mfci_io_70.h"
#include "mfpu_io.h"

//! Идентификатор кнопки МФЦИ
typedef enum isoi70m_mfci_button_t {
   ISOI70M_MFCI_BUTTON_NONE,                   //!< Отсутствие нажатия на кнопку
   ISOI70M_MFCI_BUTTON_LEFT_1 = 0x90,          //!< Левая многофункциональная кнопка 1
   ISOI70M_MFCI_BUTTON_LEFT_2 = 0x70,          //!< Левая многофункциональная кнопка 2
   ISOI70M_MFCI_BUTTON_LEFT_3 = 0x50,          //!< Левая многофункциональная кнопка 3
   ISOI70M_MFCI_BUTTON_LEFT_4 = 0x30,          //!< Левая многофункциональная кнопка 4
   ISOI70M_MFCI_BUTTON_LEFT_5 = 0x83,          //!< Левая многофункциональная кнопка 5
   ISOI70M_MFCI_BUTTON_LEFT_6 = 0x63,          //!< Левая многофункциональная кнопка 6
   ISOI70M_MFCI_BUTTON_LEFT_7 = 0x43,          //!< Левая многофункциональная кнопка 7
   ISOI70M_MFCI_BUTTON_LEFT_8 = 0x23,          //!< Левая многофункциональная кнопка 8
   ISOI70M_MFCI_BUTTON_RIGHT_1 = 0x24,         //!< Правая многофункциональная кнопка 1
   ISOI70M_MFCI_BUTTON_RIGHT_2 = 0x44,         //!< Правая многофункциональная кнопка 2
   ISOI70M_MFCI_BUTTON_RIGHT_3 = 0x64,         //!< Правая многофункциональная кнопка 3
   ISOI70M_MFCI_BUTTON_RIGHT_4 = 0x84,         //!< Правая многофункциональная кнопка 4
   ISOI70M_MFCI_BUTTON_RIGHT_5 = 0x22,         //!< Правая многофункциональная кнопка 5
   ISOI70M_MFCI_BUTTON_RIGHT_6 = 0x42,         //!< Правая многофункциональная кнопка 6
   ISOI70M_MFCI_BUTTON_RIGHT_7 = 0x62,         //!< Правая многофункциональная кнопка 7
   ISOI70M_MFCI_BUTTON_RIGHT_8 = 0x82,         //!< Правая многофункциональная кнопка 8
   ISOI70M_MFCI_BUTTON_TOP_1 = 0x88,           //!< Верхняя многофункциональная кнопка 1
   ISOI70M_MFCI_BUTTON_TOP_2 = 0x68,           //!< Верхняя многофункциональная кнопка 2
   ISOI70M_MFCI_BUTTON_TOP_3 = 0x48,           //!< Верхняя многофункциональная кнопка 3
   ISOI70M_MFCI_BUTTON_TOP_4 = 0x28,           //!< Верхняя многофункциональная кнопка 4
   ISOI70M_MFCI_BUTTON_TOP_5 = 8,              //!< Верхняя многофункциональная кнопка 5
   ISOI70M_MFCI_BUTTON_TOP_6 = 0x98,           //!< Верхняя многофункциональная кнопка 6
   ISOI70M_MFCI_BUTTON_TOP_7 = 0x87,           //!< Верхняя многофункциональная кнопка 7
   ISOI70M_MFCI_BUTTON_TOP_8 = 0x67,           //!< Верхняя многофункциональная кнопка 8
   ISOI70M_MFCI_BUTTON_TOP_9 = 0x47,           //!< Верхняя многофункциональная кнопка 9
   ISOI70M_MFCI_BUTTON_TOP_10 = 0x27,          //!< Верхняя многофункциональная кнопка 10
   ISOI70M_MFCI_BUTTON_TOP_11 = 7,             //!< Верхняя многофункциональная кнопка 11
   ISOI70M_MFCI_BUTTON_TOP_12 = 0x97,          //!< Верхняя многофункциональная кнопка 12
   ISOI70M_MFCI_BUTTON_BOTTOM_1 = 0xa2,        //!< Нижняя многофункциональная кнопка 1
   ISOI70M_MFCI_BUTTON_BOTTOM_2 = 0xa4,        //!< Нижняя многофункциональная кнопка 2
   ISOI70M_MFCI_BUTTON_BOTTOM_3 = 0xa3,        //!< Нижняя многофункциональная кнопка 3
   ISOI70M_MFCI_BUTTON_BOTTOM_4 = 0xb0,        //!< Нижняя многофункциональная кнопка 4
   ISOI70M_MFCI_BUTTON_BOTTOM_5 = 0xa8,        //!< Нижняя многофункциональная кнопка 5
   ISOI70M_MFCI_BUTTON_BOTTOM_6 = 0xb2,        //!< Нижняя многофункциональная кнопка 6
   ISOI70M_MFCI_BUTTON_BOTTOM_7 = 0xc2,        //!< Нижняя многофункциональная кнопка 7
   ISOI70M_MFCI_BUTTON_BOTTOM_8 = 0xc4,        //!< Нижняя многофункциональная кнопка 8
   ISOI70M_MFCI_BUTTON_BOTTOM_9 = 0xc3,        //!< Нижняя многофункциональная кнопка 9
   ISOI70M_MFCI_BUTTON_BOTTOM_10 = 0xd0,       //!< Нижняя многофункциональная кнопка 10
   ISOI70M_MFCI_BUTTON_BOTTOM_11 = 0xc8,       //!< Нижняя многофункциональная кнопка 11
   ISOI70M_MFCI_BUTTON_BOTTOM_12 = 0xd2,       //!< Нижняя многофункциональная кнопка 12
   ISOI70M_MFCI_BUTTON_CONTRAST_UP = 0x56,     //!< Кнопка увеличения контрастности
   ISOI70M_MFCI_BUTTON_CONTRAST_DOWN =  0x55,  //!< Кнопка уменьшения контрастности
   ISOI70M_MFCI_BUTTON_BRIGHTNESS_UP = 0x58,   //!< Кнопка увеличения яркости
   ISOI70M_MFCI_BUTTON_BRIGHTNESS_DOWN =  0x57 //!< Кнопка уменьшения яркости
} isoi70m_mfci_button_t;

//! Идентификатор кнопки МФПУ
typedef enum isoi70m_mfpu_button_t {
   ISOI70M_MFPU_BUTTON_NONE,                  //!< Отсутствие нажатия на кнопку
   ISOI70M_MFPU_BUTTON_LEFT_1 =  5,           //!< Левая многофункциональная кнопка 1
   ISOI70M_MFPU_BUTTON_LEFT_2 =  4,           //!< Левая многофункциональная кнопка 2
   ISOI70M_MFPU_BUTTON_LEFT_3 =  3,           //!< Левая многофункциональная кнопка 3
   ISOI70M_MFPU_BUTTON_LEFT_4 =  2,           //!< Левая многофункциональная кнопка 4
   ISOI70M_MFPU_BUTTON_LEFT_5 =  1,           //!< Левая многофункциональная кнопка 5
   ISOI70M_MFPU_BUTTON_RIGHT_1 =  28,         //!< Правая многофункциональная кнопка 1
   ISOI70M_MFPU_BUTTON_RIGHT_2 =  27,         //!< Правая многофункциональная кнопка 2
   ISOI70M_MFPU_BUTTON_RIGHT_3 =  26,         //!< Правая многофункциональная кнопка 3
   ISOI70M_MFPU_BUTTON_RIGHT_4 =  25,         //!< Правая многофункциональная кнопка 4
   ISOI70M_MFPU_BUTTON_RIGHT_5 =  24,         //!< Правая многофункциональная кнопка 5
   ISOI70M_MFPU_BUTTON_BRIGHTNESS_UP =  82,   //!< Кнопка увеличения яркости
   ISOI70M_MFPU_BUTTON_BRIGHTNESS_DOWN =  81, //!< Кнопка уменьшения яркости
   ISOI70M_MFPU_BUTTON_Q =  33,               //!< Кнопка набора текста "Q / Й"
   ISOI70M_MFPU_BUTTON_W =  34,               //!< Кнопка набора текста "W / Ц"
   ISOI70M_MFPU_BUTTON_E =  35,               //!< Кнопка набора текста "E / У"
   ISOI70M_MFPU_BUTTON_R =  36,               //!< Кнопка набора текста "R / К"
   ISOI70M_MFPU_BUTTON_T =  37,               //!< Кнопка набора текста "T / Е"
   ISOI70M_MFPU_BUTTON_Y =  38,               //!< Кнопка набора текста "Y / Н"
   ISOI70M_MFPU_BUTTON_U =  39,               //!< Кнопка набора текста "U / Г"
   ISOI70M_MFPU_BUTTON_I =  40,               //!< Кнопка набора текста "I / Ш"
   ISOI70M_MFPU_BUTTON_O =  41,               //!< Кнопка набора текста "O / Щ"
   ISOI70M_MFPU_BUTTON_P =  42,               //!< Кнопка набора текста "P / З"
   ISOI70M_MFPU_BUTTON_RUS_KH =  43,          //!< Кнопка набора текста "Х" (рус.)
   ISOI70M_MFPU_BUTTON_A =  50,               //!< Кнопка набора текста "A / Ф"
   ISOI70M_MFPU_BUTTON_S =  51,               //!< Кнопка набора текста "S / Ы"
   ISOI70M_MFPU_BUTTON_D =  52,               //!< Кнопка набора текста "D / В"
   ISOI70M_MFPU_BUTTON_F =  53,               //!< Кнопка набора текста "F / А"
   ISOI70M_MFPU_BUTTON_G =  54,               //!< Кнопка набора текста "G / П"
   ISOI70M_MFPU_BUTTON_H =  55,               //!< Кнопка набора текста "H / Р"
   ISOI70M_MFPU_BUTTON_J =  56,               //!< Кнопка набора текста "J / О"
   ISOI70M_MFPU_BUTTON_K =  57,               //!< Кнопка набора текста "K / Л"
   ISOI70M_MFPU_BUTTON_L =  58,               //!< Кнопка набора текста "L / Д"
   ISOI70M_MFPU_BUTTON_RUS_ZH =  59,          //!< Кнопка набора текста "Ж" (рус.)
   ISOI70M_MFPU_BUTTON_RUS_A =  60,           //!< Кнопка набора текста "Э" (рус.)
   ISOI70M_MFPU_BUTTON_Z =  65,               //!< Кнопка набора текста "Z / Я"
   ISOI70M_MFPU_BUTTON_X =  66,               //!< Кнопка набора текста "X / Ч"
   ISOI70M_MFPU_BUTTON_C =  67,               //!< Кнопка набора текста "C / С"
   ISOI70M_MFPU_BUTTON_V =  68,               //!< Кнопка набора текста "V / М"
   ISOI70M_MFPU_BUTTON_B =  69,               //!< Кнопка набора текста "B / И"
   ISOI70M_MFPU_BUTTON_N =  70,               //!< Кнопка набора текста "N / Т"
   ISOI70M_MFPU_BUTTON_M =  71,               //!< Кнопка набора текста "M / Ь"
   ISOI70M_MFPU_BUTTON_COMMA =  72,           //!< Кнопка набора текста ", / Б"
   ISOI70M_MFPU_BUTTON_DOT =  73,             //!< Кнопка набора текста ". / Ю"
   ISOI70M_MFPU_BUTTON_SLASH =  74,           //!< Кнопка набора текста "/ / Ъ"
   ISOI70M_MFPU_BUTTON_0 =  86,               //!< Кнопка набора текста "0"
   ISOI70M_MFPU_BUTTON_1 =  87,               //!< Кнопка набора текста "1"
   ISOI70M_MFPU_BUTTON_2_UP =  88,            //!< Кнопка набора текста "2 / вверх"
   ISOI70M_MFPU_BUTTON_3 =  89,               //!< Кнопка набора текста "3"
   ISOI70M_MFPU_BUTTON_4_LEFT =  102,         //!< Кнопка набора текста "4 / влево"
   ISOI70M_MFPU_BUTTON_5 =  105,              //!< Кнопка набора текста "5 / ." (точка)
   ISOI70M_MFPU_BUTTON_6_RIGHT =  106,        //!< Кнопка набора текста "6 / вправо"
   ISOI70M_MFPU_BUTTON_7 =  103,              //!< Кнопка набора текста "7"
   ISOI70M_MFPU_BUTTON_8_DOWN =  104,         //!< Кнопка набора текста "8 / вниз"
   ISOI70M_MFPU_BUTTON_9 =  107,              //!< Кнопка набора текста "9"
   ISOI70M_MFPU_BUTTON_SPACE =  100,          //!< Кнопка набора текста "_" (пробел)
   ISOI70M_MFPU_BUTTON_PLUS_MINUS =  101,     //!< Кнопка набора текста "плюс-минус"
   ISOI70M_MFPU_BUTTON_ENTER =  75,           //!< Режимная кнопка "ВВД"
   ISOI70M_MFPU_BUTTON_ERASE =  90,           //!< Режимная кнопка "СТИР"
   ISOI70M_MFPU_BUTTON_RESET =  92,           //!< Режимная кнопка "СБР"
   ISOI70M_MFPU_BUTTON_MENU =  91,            //!< Режимная кнопка "МЕНЮ"
   ISOI70M_MFPU_BUTTON_FLIGHT_PLAN =  6,      //!< Режимная кнопка "ПЛАН ПОЛ"
   ISOI70M_MFPU_BUTTON_ACTIVE_ROUTE =  7,     //!< Режимная кнопка "ВЫП ПОЛ"
   ISOI70M_MFPU_BUTTON_DIRECT =  8,           //!< Режимная кнопка "ПРЯМО НА"
   ISOI70M_MFPU_BUTTON_19 =  9,               //!< Режимная кнопка "19"
   ISOI70M_MFPU_BUTTON_SUO =  10,             //!< Режимная кнопка "СУО"
   ISOI70M_MFPU_BUTTON_BASU =  11,            //!< Режимная кнопка "БАСУ"
   ISOI70M_MFPU_BUTTON_FLIGHT_DATA =  12,     //!< Режимная кнопка "ПОЛ.ДАНН"
   ISOI70M_MFPU_BUTTON_NAV =  17,             //!< Режимная кнопка "НАВ"
   ISOI70M_MFPU_BUTTON_SELECTED_TIME =  18,   //!< Режимная кнопка "Тз"
   ISOI70M_MFPU_BUTTON_RTS =  19,             //!< Режимная кнопка "РТС"
   ISOI70M_MFPU_BUTTON_MANEUVER =  20,        //!< Режимная кнопка "МАНЕВР"
   ISOI70M_MFPU_BUTTON_ARV_ARP =  21,         //!< Режимная кнопка "АРВ АРП"
   ISOI70M_MFPU_BUTTON_CORR =  22,            //!< Режимная кнопка "КОРР"
   ISOI70M_MFPU_BUTTON_ISP =  23,             //!< Режимная кнопка "ИСП"
   ISOI70M_MFPU_BUTTON_MFPU_CONTROL =  83,    //!< Режимная кнопка "УПР МФПУ"
   ISOI70M_MFPU_BUTTON_BKS =  84,             //!< Режимная кнопка "ИНФ БКС"
   ISOI70M_MFPU_BUTTON_ENG =  85,             //!< Режимная кнопка "ENG"
   ISOI70M_MFPU_BUTTON_MODE_ROW4_1 =  97,     //!< Режимная кнопка 1 четвертого ряда
   ISOI70M_MFPU_BUTTON_MODE_ROW4_2 =  98      //!< Режимная кнопка 2 четвертого ряда
   ISOI70M_MFPU_BUTTON_DIGITS =  99,          //!< Режимная кнопка "ЦИФР"
} isoi70m_mfpu_button_t;

//! Идентификатор сигнального огня у кнопки МФПУ
typedef enum isoi70m_mfpu_fire_t {
   ISOI70M_MFPU_FIRE_FLIGHT_PLAN,      //!< Сигнальный огонь у кнопки "ПЛАН ПОЛ"
   ISOI70M_MFPU_FIRE_ACTIVE_ROUTE,     //!< Сигнальный огонь у кнопки "ВЫП ПОЛ"
   ISOI70M_MFPU_FIRE_DIRECT,           //!< Сигнальный огонь у кнопки "ПРЯМО НА"
   ISOI70M_MFPU_FIRE_19,               //!< Сигнальный огонь у кнопки "19"
   ISOI70M_MFPU_FIRE_SUO,              //!< Сигнальный огонь у кнопки "СУО"
   ISOI70M_MFPU_FIRE_BASU,             //!< Сигнальный огонь у кнопки "БАСУ"
   ISOI70M_MFPU_FIRE_FLIGHT_DATA = 8,  //!< Сигнальный огонь у кнопки "ПОЛ.ДАНН"
   ISOI70M_MFPU_FIRE_NAV,              //!< Сигнальный огонь у кнопки "НАВ"
   ISOI70M_MFPU_FIRE_SELECTED_TIME,    //!< Сигнальный огонь у кнопки "Тз"
   ISOI70M_MFPU_FIRE_RTS,              //!< Сигнальный огонь у кнопки "РТС"
   ISOI70M_MFPU_FIRE_MANEUVER,         //!< Сигнальный огонь у кнопки "МАНЕВР"
   ISOI70M_MFPU_FIRE_ARV_ARP,          //!< Сигнальный огонь у кнопки "АРВ АРП"
   ISOI70M_MFPU_FIRE_CORR = 16,        //!< Сигнальный огонь у кнопки "КОРР"
   ISOI70M_MFPU_FIRE_ISP,              //!< Сигнальный огонь у кнопки "ИСП"
   ISOI70M_MFPU_FIRE_MFPU_CONTROL,     //!< Сигнальный огонь у кнопки "УПР МФПУ"
   ISOI70M_MFPU_FIRE_BKS,              //!< Сигнальный огонь у кнопки "ИНФ БКС"
   ISOI70M_MFPU_FIRE_ENG,              //!< Сигнальный огонь у кнопки "ENG"
   ISOI70M_MFPU_FIRE_MODE_ROW4_1,      //!< Сигнальный огонь у режимной кнопки 1 четвертого ряда
   ISOI70M_MFPU_FIRE_MODE_ROW4_2 = 24, //!< Сигнальный огонь у режимной кнопки 2 четвертого ряда
   ISOI70M_MFPU_FIRE_DIGITS            //!< Сигнальный огонь у кнопки "ЦИФР"
} isoi70m_mfpu_fire_t;

//! Входные данные МФЦИ (для всех МФЦИ)
typedef struct isoi70m_mfci_in_b_t {
   mfci_in_b_t data_b;        //!< Данные (для всех МФЦИ)
   uint32_t    bgs_connected; //!< Признак наличия связи с БГС (признак основного режима, 0 - нет связи, 1 - есть связь) //(min:0 max:1)
   uint32_t    crc;           //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfci_in_b_t;

//! Данные нажатий на кнопки МФЦИ (для одного МФЦИ)
typedef struct isoi70m_mfci_buttons_b_t {
   uint32_t              counter; //!< Счётчик контроля достоверности данных //(min:0 max:4294967295)
   isoi70m_mfci_button_t button;  //!< Идентификатор нажатой кнопки //(min:0 max:210)
   uint32_t              crc;     //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfci_buttons_b_t;

//! Выходные данные МФЦИ (от одного МФЦИ)
typedef struct isoi70m_mfci_out_b_t {
   mfci_out_b_t data; //!< Данные (от одного МФЦИ)
   uint32_t     crc;  //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfci_out_b_t;

//! Входные данные МФПУ (для всех МФПУ)
typedef struct isoi70m_mfpu_in_b_t {
   mfpu_in_b_t data_b; //!< Данные (для всех МФПУ)
   uint32_t    crc;    //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfpu_in_b_t;

//! Выходные данные МФПУ (от одного МФПУ)
typedef struct isoi70m_mfpu_out_b_t {
   mfpu_out_b_t data_b; //!< Данные (от одного МФПУ)
   uint32_t     crc;    //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfpu_out_b_t;

//! Данные нажатий на кнопки МФПУ (для одного МФПУ)
typedef struct isoi70m_mfpu_buttons_b_t {
   uint32_t              counter; //!< Счётчик контроля достоверности данных //(min:0 max:4294967295)
   isoi70m_mfpu_button_t button;  //!< Идентификатор нажатой кнопки //(min:0 max:107)
   uint32_t              crc;     //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfpu_buttons_b_t;

//! Данные сигнальных огней у кнопок МФПУ (от одного МФПУ)
typedef struct isoi70m_mfpu_fires_b_t {
   uint32_t counter; //!< Счётчик контроля достоверности данных //(min:0 max:4294967295)
   uint32_t fires;   //!< Слово подсвета кнопок (комбинация флагов isoi70m_mfpu_fire_t) //(min:0 max:54476607)
   uint32_t crc;     //!< Контрольная сумма //(min:0 max:4294967295)
} isoi70m_mfpu_fires_b_t;

//! Входные данные СОИ
typedef struct isoi70m_in_b_t {
   isoi70m_mfci_in_b_t      mfci_data_b;                //!< Входные данные МФЦИ
   isoi70m_mfpu_in_b_t      mfpu_data_b;                //!< Входные данные МФПУ
   isoi70m_mfci_buttons_b_t mfci_buttons_b[MFCI_COUNT]; //!< Данные нажатий на кнопки МФЦИ
   isoi70m_mfpu_buttons_b_t mfpu_buttons_b[MFPU_COUNT]; //!< Данные нажатий на кнопки МФПУ
} isoi70m_in_b_t;

//! Выходные данные СОИ
typedef struct isoi70m_out_b_t {
   isoi70m_mfci_out_b_t   mfci_data_b[MFCI_COUNT];  //!< Выходные данные МФЦИ
   isoi70m_mfpu_out_b_t   mfpu_data_b[MFPU_COUNT];  //!< Выходные данные МФПУ
   isoi70m_mfpu_fires_b_t mfpu_fires_b[MFPU_COUNT]; //!< Данные сигнальных огней у кнопок МФПУ
} isoi70m_out_b_t;

//! Данные СОИ
typedef struct isoi70m_b_t {
   isoi70m_in_b_t  in_b;  //!< Входные данные СОИ
   isoi70m_out_b_t out_b; //!< Выходные данные СОИ
} isoi70m_b_t;
