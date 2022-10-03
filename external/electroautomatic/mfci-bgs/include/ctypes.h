/*!
 * @file ctypes.h
 * @brief Базовые типы данных для проектов НИЦ-1
 * @author Игорь Рогов
 * @author Илья Кулаков
 * @copyright АО ОКБ "Электроавтоматика", НИЦ-1
 * @details
 * #### Номер ВИДК
 *    нет
 */

/* clang-format off*/
#ifndef __CTYPES_NIC1__
#define __CTYPES_NIC1__

#if !defined(_WIN32) && (defined(__WIN32__) || defined(__WIN32) || defined(WIN32) || defined(_WINDOWS))
/*! Windows*/
#define _WIN32
#endif

#if !defined(__NIX__) && (defined(__UNIX__) || defined(__UNIX) || defined(_UNIX) || defined(UNIX) ||  defined(LINUX) || defined(__LINUX) || defined(__LINUX__))
/*! Linux*/
#define __NIX__
#endif
#if !defined(_LINUX) && (defined(__UNIX__) || defined(__UNIX) || defined(_UNIX) || defined(UNIX) ||  defined(LINUX) || defined(__LINUX) || defined(__LINUX__))
/*! Linux*/
#define _LINUX
#endif

#ifdef __EOS__
#ifndef _EOS
/*! ЭОС*/
#define _EOS
#endif
#ifdef _WIN32
#undef _WIN32
#endif
#ifdef __NIX__
#undef __NIX__
#endif
#ifdef _LINUX
#undef _LINUX
#endif
#ifdef _MIPS
#undef _MIPS
#endif
#ifdef _R3000
#undef _R3000
#endif
#endif

#if defined(R3000_CMP) || defined(C3_CMP)
#ifndef _R3000
/*! R3000*/
#define _R3000
#endif
#ifdef _WIN32
#undef _WIN32
#endif
#ifdef __NIX__
#undef __NIX__
#endif
#ifdef _LINUX
#undef _LINUX
#endif
#ifdef _MIPS
#undef _MIPS
#endif
#ifdef _EOS
#undef _EOS
#endif
#endif

#ifdef MIPS_CMP
#ifndef _MIPS
/*! MIPS*/
#define _MIPS
#endif
#ifdef _WIN32
#undef _WIN32
#endif
#ifdef __NIX__
#undef __NIX__
#endif
#ifdef _LINUX
#undef _LINUX
#endif
#ifdef _R3000
#undef _R3000
#endif
#ifdef _EOS
#undef _EOS
#endif
#endif

#ifdef __NIX__
#include <limits.h>
#if defined(__LP64__) || defined(_LP64) || (defined(__WORDSIZE) && __WORDSIZE == 64)
/*! Linux x64*/
#define __NIX64__
/*! Linux x64*/
#define _LINUX64
#endif
#endif

#if !defined(TGT_PC) && (defined(_WIN32) || defined(__NIX__))
/*! Версия для ПК (Windows/Linux)*/
#define TGT_PC
#endif

#if defined(TGT_PC) && defined(_WIN32)
/* Платформа Windows:*/
#ifdef __cplusplus
#include <ctime>
#else
#include <time.h>
#endif
#define  __static__ static                      /*!< Атрибут локальной функции*/
#define  __gldata__                             /*!< Атрибут размещения в GL-секции*/
#define  __restrict__                           /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __restrict                             /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __register__                           /*!< Ключевое слово, предписывающее сделать переменную регистровой*/
#define  __inline__                             /*!< Ключевое слово, предписывающее сделать функцию встраиваемой*/
/*define __stdcall                              -    Соглашение о вызовах (определено)*/
/*define APIENTRY                               -    Соглашение о вызовах (определено)*/
/*define WINAPI                                 -    Соглашение о вызовах (определено)*/
/*define INVALID_HANDLE_VALUE                   -    Некорректный дескриптор (определено)*/
/*define HANDLE                                 -    Дескриптор (определено)*/
#define __attribute__(a)                        /*!< Ключевое слово для присвоения атрибута объекту*/
#define aligned()                               /*!< Ключевое слово для задания выравнивания в структуре*/
#define __volatile__(a)                         /*!< Ключевое слово volatile*/
#define __asm__                                 /*!< Ключевое слово команды ассеблера*/

#elif defined(TGT_PC) && defined(__NIX__)
/* Платформа Linux:*/
#ifdef __cplusplus
#include <ctime>
#else
#include <time.h>
#endif
#define  __static__ static                      /*!< Атрибут локальной функции*/
#define  __gldata__                             /*!< Атрибут размещения в GL-секции*/
#define  __restrict__                           /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __restrict                             /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __register__                           /*!< Ключевое слово, предписывающее сделать переменную регистровой*/
#define  __inline__                             /*!< Ключевое слово, предписывающее сделать функцию встраиваемой*/
#define  __stdcall                              /*!< Соглашение о вызовах*/
#define  APIENTRY                               /*!< Соглашение о вызовах*/
#define  WINAPI                                 /*!< Соглашение о вызовах*/
#define  INVALID_HANDLE_VALUE (-1)              /*!< Некорректный дескриптор*/
typedef  int HANDLE;                            /*!< Дескриптор*/
/*#define __attribute__(a)                      - Ключевое слово для присвоения атрибута объекту (определено)*/
/*#define aligned()                             - Ключевое слово для задания выравнивания в структур (определено)*/
/*#define __volatile__(a)                       - Ключевое слово volatile (определено)*/
/*#define __asm__                               - Ключевое слово команды ассеблера (определено)*/

#elif defined(__EOS__)
/* Платформа ЭОС:*/
#define  __static__                                     /*!< Атрибут локальной функции*/
#define  __gldata__ __attribute__((section ("gldata"))) /*!< Атрибут размещения в GL-секции*/
/*define __restrict__                                   -    Ключевое слово, обозначающее уникальность значения указателя (определено)*/
/*define __restrict                                     -    Ключевое слово, обозначающее уникальность значения указателя (определено)*/
#define  __register__ register                          /*!< Ключевое слово, предписывающее сделать переменную регистровой*/
#define  __inline__ inline                              /*!< Ключевое слово, предписывающее сделать функцию встраиваемой*/
#define  __stdcall                                      /*!< Соглашение о вызовах*/
#define  APIENTRY                                       /*!< Соглашение о вызовах*/
#define  WINAPI                                         /*!< Соглашение о вызовах*/
#define  INVALID_HANDLE_VALUE (-1)                      /*!< Некорректный дескриптор*/
typedef  int HANDLE;                                    /*!< Дескриптор*/
/*#define __attribute__(a)                              - Ключевое слово для присвоения атрибута объекту (определено)*/
/*#define aligned()                                     - Ключевое слово для задания выравнивания в структур (определено)*/
/*#define __volatile__(a)                               - Ключевое слово volatile (определено)*/
/*#define __asm__                                       - Ключевое слово команды ассеблера (определено)*/

#elif defined(MIPS_CMP)
/* Платформа MIPS:*/
#define  __static__                  /*!< Атрибут локальной функции*/
#define  __gldata__                  /*!< Атрибут размещения в GL-секции*/
#define  __restrict__                /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __restrict                  /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define  __register__ register       /*!< Ключевое слово, предписывающее сделать переменную регистровой*/
#define  __inline__ inline           /*!< Ключевое слово, предписывающее сделать функцию встраиваемой*/
#define  __stdcall                   /*!< Соглашение о вызовах*/
#define  APIENTRY                    /*!< Соглашение о вызовах*/
#define  WINAPI                      /*!< Соглашение о вызовах*/
#define  INVALID_HANDLE_VALUE (-1)   /*!< Некорректный дескриптор*/
typedef  int HANDLE;                 /*!< Дескриптор*/
/*#define __attribute__(a)           - Ключевое слово для присвоения атрибута объекту (определено)*/
/*#define aligned()                  - Ключевое слово для задания выравнивания в структур (определено)*/
/*#define __volatile__(a)            - Ключевое слово volatile (определено)*/
/*#define __asm__                    - Ключевое слово команды ассеблера (определено)*/

#elif defined(R3000_CMP) || defined(C3_CMP)
/* Платформа R-3000:*/
#define __static__                /*!< Атрибут локальной функции*/
#define __gldata__                /*!< Атрибут размещения в GL-секции*/
#define __restrict__              /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define __restrict                /*!< Ключевое слово, обозначающее уникальность значения указателя*/
#define __register__ register     /*!< Ключевое слово, предписывающее сделать переменную регистровой*/
#define __inline__ inline         /*!< Ключевое слово, предписывающее сделать функцию встраиваемой*/
#define __stdcall                 /*!< Соглашение о вызовах*/
#define APIENTRY                  /*!< Соглашение о вызовах*/
#define WINAPI                    /*!< Соглашение о вызовах*/
#define INVALID_HANDLE_VALUE (-1) /*!< Некорректный дескриптор*/
typedef int HANDLE;               /*!< Дескриптор*/
#define __attribute__(a)          /*!< Ключевое слово для присвоения атрибута объекту*/
#define aligned()                 /*!< Ключевое слово для задания выравнивания в структур*/
#define __volatile__(a)           /*!< Ключевое слово volatile*/
#define __asm__                   /*!< Ключевое слово команды ассеблера (определено)*/

#else
/* Неизвестная платформа*/
#error "ctypes error: platform not supported"
#endif

#if !defined(TGT_PC) || !defined(__cplusplus)
/*! Пользовательское исключение (срабатывает при компиляции, если условие @a condition не выполняется)*/
#define static_assert(condition, message) extern int array_for_static_assert[(condition) ? 1 : -1]
#endif

#ifdef TGT_PC
#ifdef __cplusplus
#include <cassert>
#else
#include <assert.h>
#endif
#else
#if defined(RELEASE) || !defined(DEBUG)
/*! Пользовательское исключение (срабатывает при выполнении, если условие @a condition не выполняется)*/
#define assert(condition) ((void)0)
#else
/*! Пользовательское исключение (срабатывает при выполнении, если условие @a condition не выполняется)*/
#define assert(condition) ((condition) ? ((void)0) : (void)(*(int *)(nullptr) = 0))
#endif
#endif

#ifndef BOOLEAN_SIZE
#define BOOLEAN_SIZE 1 /*! Размер типа boolean*/
#endif
#ifdef boolean
#undef boolean
#endif

#if defined(_WIN32) && defined(__cplusplus)
/* Платформа Windows C++:*/
#include <cstddef>
#include <cstdint>
#include <Windows.h>
/*typedef                  uint8_t;     -    Беззнаковый целочисленный 8-разрядный тип (определен)*/
/*typedef                  int8_t;      -    Целочисленный 8-разрядный тип со знаком (определен)*/
/*typedef                  uint16_t;    -    Беззнаковый целочисленный 16-разрядный тип (определен)*/
/*typedef                  int16_t;     -    Целочисленный 16-разрядный тип со знаком (определен)*/
/*typedef                  uint32_t;    -    Беззнаковый целочисленный 32-разрядный тип (определен)*/
/*typedef                  int32_t;     -    Целочисленный 32-разрядный тип со знаком (определен)*/
/*typedef                  uint64_t;    -    Беззнаковый целочисленный 64-разрядный тип (определен)*/
/*typedef                  int64_t;     -    Целочисленный 64-разрядный тип со знаком (определен)*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
/*typedef                  uintptr_t;   -    Указатель (определен)*/
/*typedef                  intptr_t;    -    Указатель, представленный знаковым типом (определен)*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#define boolean            bool         /*!< Логический тип (true или false)*/
/*define                   false        -    Значение "Ложь" (определено)*/
/*define                   true         -    Значение "Истина" (определено)*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
/*define                   nullptr      -    Нулевой (пустой) указатель (определен)*/

#elif defined(_WIN32) && !defined(__cplusplus)
/* Платформа Windows C:*/
#include <stddef.h>
#include <stdint.h>
#include <Windows.h>
/*typedef                  uint8_t;     -    Беззнаковый целочисленный 8-разрядный тип (определен)*/
/*typedef                  int8_t;      -    Целочисленный 8-разрядный тип со знаком (определен)*/
/*typedef                  uint16_t;    -    Беззнаковый целочисленный 16-разрядный тип (определен)*/
/*typedef                  int16_t;     -    Целочисленный 16-разрядный тип со знаком (определен)*/
/*typedef                  uint32_t;    -    Беззнаковый целочисленный 32-разрядный тип (определен)*/
/*typedef                  int32_t;     -    Целочисленный 32-разрядный тип со знаком (определен)*/
/*typedef                  uint64_t;    -    Беззнаковый целочисленный 64-разрядный тип (определен)*/
/*typedef                  int64_t;     -    Целочисленный 64-разрядный тип со знаком (определен)*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
/*typedef                  uintptr_t;   -    Указатель (определен)*/
/*typedef                  intptr_t;    -    Указатель, представленный знаковым типом (определен)*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
#define false              ((boolean)0) /*!< Значение "Ложь"*/
#define true               ((boolean)1) /*!< Значение "Истина"*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            ((void*)0)   /*!< Нулевой (пустой) указатель*/

#elif defined(__NIX__) && defined(__cplusplus)
/* Платформа Linux C++:*/
#include <cstddef>
#include <cstdint>
#include <sys/types.h>
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
#ifndef __NIX64__
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
#endif
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  ulong;       -    Беззнаковый целочисленный 64-разрядный тип (определен)*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
/*typedef                  uintptr_t;   -    Указатель (определен)*/
/*typedef                  intptr_t;    -    Указатель, представленный знаковым типом (определен)*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#define boolean            bool         /*!< Логический тип (true или false)*/
/*define                   false        -    Значение "Ложь" (определено)*/
/*define                   true         -    Значение "Истина" (определено)*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
/*define                   nullptr      -    Нулевой (пустой) указатель (определен)*/

#elif defined(__NIX__) && !defined(__cplusplus)
/* Платформа Linux C:*/
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
#ifndef __NIX64__
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
#endif
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  ulong;       -    Беззнаковый целочисленный 64-разрядный тип (определен)*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
/*typedef                  uintptr_t;   -    Указатель (определен)*/
/*typedef                  intptr_t;    -    Указатель, представленный знаковым типом (определен)*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
#define false              ((boolean)0) /*!< Значение "Ложь"*/
#define true               ((boolean)1) /*!< Значение "Истина"*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            ((void*)0)   /*!< Нулевой (пустой) указатель*/

#elif defined(__EOS__) && defined(__cplusplus)
/* Платформа ЭОС C++:*/
#include <stddef.h>
#define _STDINT_H
#define _SYS_TYPES_H
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
typedef unsigned int       uintptr_t;   /*!< Указатель*/
typedef signed int         intptr_t;    /*!< Указатель, представленный знаковым типом*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
/*define                   false        -    Значение "Ложь" (определено)*/
/*define                   true         -    Значение "Истина" (определено)*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            0            /*!< Нулевой (пустой) указатель*/

#elif defined(__EOS__) && !defined(__cplusplus)
/* Платформа ЭОС C:*/
#include <stddef.h>
#define _STDINT_H
#define _SYS_TYPES_H
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
typedef unsigned int       uintptr_t;   /*!< Указатель*/
typedef signed int         intptr_t;    /*!< Указатель, представленный знаковым типом*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
#define false              ((boolean)0) /*!< Значение "Ложь"*/
#define true               ((boolean)1) /*!< Значение "Истина"*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            ((void*)0)   /*!< Нулевой (пустой) указатель*/

#elif defined(MIPS_CMP) && defined(__cplusplus)
/* Платформа MIPS C++:*/
#include <stddef.h>
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
typedef unsigned int       uintptr_t;   /*!< Указатель*/
typedef signed int         intptr_t;    /*!< Указатель, представленный знаковым типом*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
/*define                   false        -    Значение "Ложь" (определено)*/
/*define                   true         -    Значение "Истина" (определено)*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            0            /*!< Нулевой (пустой) указатель*/

#elif defined(MIPS_CMP) && !defined(__cplusplus)
/* Платформа MIPS C:*/
#include <stddef.h>
typedef unsigned char      uint8_t;     /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char        int8_t;      /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short     uint16_t;    /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short       int16_t;     /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int       uint32_t;    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int         int32_t;     /*!< Целочисленный 32-разрядный тип со знаком*/
typedef unsigned long long uint64_t;    /*!< Беззнаковый целочисленный 64-разрядный тип*/
typedef signed long long   int64_t;     /*!< Целочисленный 64-разрядный тип со знаком*/
typedef uint8_t            uchar;       /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t           ushort;      /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t           uint;        /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t           ulong;       /*!< Беззнаковый целочисленный 32-разрядный тип*/
/*typedef                  size_t;      -    Тип для хранения размера (определен)*/
typedef unsigned int       uintptr_t;   /*!< Указатель*/
typedef signed int         intptr_t;    /*!< Указатель, представленный знаковым типом*/
typedef signed int         diffptr_t;   /*!< Разница между указателями*/
typedef int                bool_t;      /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean            uint32_t     /*!< Логический тип (true или false)*/
#else
#define boolean            uint8_t      /*!< Логический тип (true или false)*/
#endif
#define false              ((boolean)0) /*!< Значение "Ложь"*/
#define true               ((boolean)1) /*!< Значение "Истина"*/
#define FALSE              0            /*!< Значение "Ложь"*/
#define TRUE               1            /*!< Значение "Истина"*/
#define nullptr            ((void*)0)   /*!< Нулевой (пустой) указатель*/

#elif (defined(R3000_CMP) || defined(C3_CMP)) && defined(__cplusplus)
/* Платформа R3000 C++: не поддерживается*/
extern int r3000_cpp_assert[-1];

#elif (defined(R3000_CMP) || defined(C3_CMP)) && !defined(__cplusplus)
/* Платформа R3000 C:*/

typedef unsigned char uint8_t;            /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef signed char int8_t;               /*!< Целочисленный 8-разрядный тип со знаком*/
typedef unsigned short uint16_t;          /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef signed short int16_t;             /*!< Целочисленный 16-разрядный тип со знаком*/
typedef unsigned int uint32_t;            /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef signed int int32_t;               /*!< Целочисленный 32-разрядный тип со знаком*/
#define uint64_t "uint64_t not supported" /*!< Беззнаковый целочисленный 64-разрядный тип (не поддерживается)*/
#define int64_t "int64_t not supported"   /*!< Целочисленный 64-разрядный тип (не поддерживается)*/
typedef uint8_t uchar;                    /*!< Беззнаковый целочисленный 8-разрядный тип*/
typedef uint16_t ushort;                  /*!< Беззнаковый целочисленный 16-разрядный тип*/
typedef uint32_t uint;                    /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef uint32_t ulong;                   /*!< Беззнаковый целочисленный 32-разрядный тип*/
typedef unsigned int size_t;              /*!< Тип для хранения размера (определен)*/
typedef unsigned int uintptr_t;           /*!< Указатель*/
typedef signed int intptr_t;              /*!< Указатель, представленный знаковым типом*/
typedef signed int diffptr_t;             /*!< Разница между указателями*/
typedef int bool_t;                       /*!< Логический тип (true или false)*/
#if BOOLEAN_SIZE == 4
#define boolean uint32_t /*!< Логический тип (true или false)*/
#else
#define boolean uint8_t /*!< Логический тип (true или false)*/
#endif
#define false ((boolean)0)  /*!< Значение "Ложь"*/
#define true ((boolean)1)   /*!< Значение "Истина"*/
#define FALSE 0             /*!< Значение "Ложь"*/
#define TRUE 1              /*!< Значение "Истина"*/
#define nullptr ((void *)0) /*!< Нулевой (пустой) указатель*/
#else
/* Неизвестная платформа*/
#error "ctypes error: platform not supported"
#endif

#ifdef __cplusplus
/*! Определяет битовые операторы для работы с 32-разрядным типом-перечислением enum_type как с флагами*/
#define ENABLE_FLAGS_FOR_ENUM_32(enum_type)                             \
   inline enum_type operator~(enum_type a) {                            \
      return (enum_type)(~((uint32_t)a));                               \
   }                                                                    \
   inline enum_type operator|(enum_type a, enum_type b) {               \
      return (enum_type)((uint32_t)a | (uint32_t)b);                    \
   }                                                                    \
   inline enum_type operator&(enum_type a, enum_type b) {               \
      return (enum_type)((uint32_t)a & (uint32_t)b);                    \
   }                                                                    \
   inline enum_type operator^(enum_type a, enum_type b) {               \
      return (enum_type)((uint32_t)a ^ (uint32_t)b);                    \
   }                                                                    \
   inline enum_type &operator|=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint32_t)a | (uint32_t)b)); \
   }                                                                    \
   inline enum_type &operator&=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint32_t)a & (uint32_t)b)); \
   }                                                                    \
   inline enum_type &operator^=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint32_t)a ^ (uint32_t)b)); \
   }

/*! Определяет битовые операторы для работы с 64-разрядным типом-перечислением enum_type как с флагами*/
#define ENABLE_FLAGS_FOR_ENUM_64(enum_type)                             \
   inline enum_type operator~(enum_type a) {                            \
      return (enum_type)(~((uint64_t)a));                               \
   }                                                                    \
   inline enum_type operator|(enum_type a, enum_type b) {               \
      return (enum_type)((uint64_t)a | (uint64_t)b);                    \
   }                                                                    \
   inline enum_type operator&(enum_type a, enum_type b) {               \
      return (enum_type)((uint64_t)a & (uint64_t)b);                    \
   }                                                                    \
   inline enum_type operator^(enum_type a, enum_type b) {               \
      return (enum_type)((uint64_t)a ^ (uint64_t)b);                    \
   }                                                                    \
   inline enum_type &operator|=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint64_t)a | (uint64_t)b)); \
   }                                                                    \
   inline enum_type &operator&=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint64_t)a & (uint64_t)b)); \
   }                                                                    \
   inline enum_type &operator^=(enum_type &a, enum_type b) {            \
      return (enum_type &)(a = (enum_type)((uint64_t)a ^ (uint64_t)b)); \
   }
#endif

#ifdef NULL
#undef NULL
#endif
#define NULL nullptr /*!< Нулевой (пустой) указатель*/

#ifdef BOOLEAN_SIZE
#undef BOOLEAN_SIZE
#endif
#define BOOLEAN_SIZE sizeof(boolean) /*! Размер типа boolean*/

/*! Ключевое слово для задания выравнивания в структур*/
#define _ALIGN(a) __attribute__((aligned(a)))

typedef void *p_void;         /*!< Пустой указатель*/
typedef char *p_char;         /*!< Указатель на символ*/
typedef uint32_t *p_uint32_t; /*!< Указатель на беззнаковый целочисленный 32-разрядный тип*/
typedef int32_t *p_int32_t;   /*!< Указатель на знаковый целочисленный 32-разрядный тип*/
typedef uint16_t *p_uint16_t; /*!< Указатель на беззнаковый целочисленный 16-разрядный тип*/
typedef int16_t *p_int16_t;   /*!< Указатель на знаковый целочисленный 16-разрядный тип*/
typedef uint8_t *p_uint8_t;   /*!< Указатель на беззнаковый целочисленный 8-разрядный тип*/
typedef int8_t *p_int8_t;     /*!< Указатель на знаковый целочисленный 8-разрядный тип*/
#if !(defined(R3000_CMP) || defined(C3_CMP))
typedef uint64_t *p_uint64_t; /*!< Указатель на беззнаковый целочисленный 64-разрядный тип*/
typedef int64_t *p_int64_t;   /*!< Указатель на знаковый целочисленный 64-разрядный тип*/
#endif

#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif
#ifdef small
#undef small
#endif
#ifdef MB_RIGHT
#undef MB_RIGHT
#endif
#ifdef NO_ERROR
#undef NO_ERROR
#endif

/*! Статический ассерт на размер типа*/
#define CTYPES_SIZE_CHECK(condition, message) extern int ctypes_size_assert[(condition) ? 1 : -1]

CTYPES_SIZE_CHECK(sizeof(uint8_t) == 1, "size uint8_t must be 1 byte");    /*!< Статический ассерт на размер типа uint8_t*/
CTYPES_SIZE_CHECK(sizeof(int8_t) == 1, "size int8_t must be 1 byte");      /*!< Статический ассерт на размер типа int8_t*/
CTYPES_SIZE_CHECK(sizeof(uint16_t) == 2, "size uint16_t must be 2 bytes"); /*!< Статический ассерт на размер типа uint16_t*/
CTYPES_SIZE_CHECK(sizeof(int16_t) == 2, "size int16_t must be 2 bytes");   /*!< Статический ассерт на размер типа int16_t*/
CTYPES_SIZE_CHECK(sizeof(uchar) == 1, "size uchar must be 1 byte");        /*!< Статический ассерт на размер типа uchar*/
CTYPES_SIZE_CHECK(sizeof(uint32_t) == 4, "size uint32_t must be 4 bytes"); /*!< Статический ассерт на размер типа uint32_t*/
CTYPES_SIZE_CHECK(sizeof(int32_t) == 4, "size int32_t must be 4 bytes");   /*!< Статический ассерт на размер типа int32_t*/
#if !(defined(R3000_CMP) || defined(C3_CMP))
CTYPES_SIZE_CHECK(sizeof(uint64_t) == 8, "size uint64_t must be 8 bytes"); /*!< Статический ассерт на размер типа uint64_t*/
CTYPES_SIZE_CHECK(sizeof(int64_t) == 8, "size int64_t must be 8 bytes");   /*!< Статический ассерт на размер типа int64_t*/
#endif
CTYPES_SIZE_CHECK(sizeof(uchar) == 1, "size uchar must be 1 byte");        /*!< Статический ассерт на размер типа uchar*/
CTYPES_SIZE_CHECK(sizeof(ushort) == 2, "ushort uchar must be 2 bytes");    /*!< Статический ассерт на размер типа ushort*/
CTYPES_SIZE_CHECK(sizeof(uint) == 4, "size uint must be 4 bytes");         /*!< Статический ассерт на размер типа uint*/
#ifdef __NIX64__
CTYPES_SIZE_CHECK(sizeof(ulong) == 8, "size ulong must be 8 bytes");       /*!< Статический ассерт на размер типа ulong*/
#else
CTYPES_SIZE_CHECK(sizeof(ulong) == 4, "size ulong must be 4 bytes");       /*!< Статический ассерт на размер типа ulong*/
#endif
#undef CTYPES_SIZE_CHECK

#ifdef _MSC_VER
#pragma warning(disable : 6385)
#pragma warning(disable : 26400)
#pragma warning(disable : 26401)
#pragma warning(disable : 26402)
#pragma warning(disable : 26408)
#pragma warning(disable : 26409)
#pragma warning(disable : 26415)
#pragma warning(disable : 26418)
#pragma warning(disable : 26426)
#pragma warning(disable : 26427)
#pragma warning(disable : 26429)
#pragma warning(disable : 26430)
#pragma warning(disable : 26432)
#pragma warning(disable : 26433)
#pragma warning(disable : 26434)
#pragma warning(disable : 26435)
#pragma warning(disable : 26436)
#pragma warning(disable : 26437)
#pragma warning(disable : 26439)
#pragma warning(disable : 26440)
#pragma warning(disable : 26443)
#pragma warning(disable : 26446)
#pragma warning(disable : 26447)
#pragma warning(disable : 26450)
#pragma warning(disable : 26451)
#pragma warning(disable : 26455)
#pragma warning(disable : 26456)
#pragma warning(disable : 26460)
#pragma warning(disable : 26461)
#pragma warning(disable : 26462)
#pragma warning(disable : 26466)
#pragma warning(disable : 26471)
#pragma warning(disable : 26472)
#pragma warning(disable : 26474)
#pragma warning(disable : 26476)
#pragma warning(disable : 26478)
#pragma warning(disable : 26481)
#pragma warning(disable : 26482)
#pragma warning(disable : 26485)
#pragma warning(disable : 26486)
#pragma warning(disable : 26487)
#pragma warning(disable : 26489)
#pragma warning(disable : 26490)
#pragma warning(disable : 26491)
#pragma warning(disable : 26492)
#pragma warning(disable : 26493)
#pragma warning(disable : 26494)
#pragma warning(disable : 26495)
#pragma warning(disable : 26496)
#pragma warning(disable : 26497)
#pragma warning(disable : 26498)
#pragma warning(disable : 26812)
#pragma warning(disable : 26814)
#pragma warning(disable : 28251)
#endif

#ifndef __CTYPES_H_INCLUDED__
#define __CTYPES_H_INCLUDED__
#endif

#endif
