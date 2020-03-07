/**
  * @file  plc_type_define.h
  * @brief     ͨ���������Ͷ���
  * @author    hyafz
  */
#ifndef _PLC_TYPE_DEFINE_H_
#define _PLC_TYPE_DEFINE_H_

/* Basic Data Type typedef --------------------------------------------------*/
/*8 bits*/
typedef unsigned char                BOOL;
typedef unsigned char                BYTE;
typedef signed char                  SINT;
typedef unsigned char                USINT;
/*16 bits*/
typedef unsigned short               WORD;
typedef signed short                 INT;
typedef unsigned short               UINT;
/*32 bits*/
typedef unsigned int                 DWORD;
typedef signed int                   DINT;
typedef unsigned int                 UDINT;
typedef float                        REAL;
/* 
  ���ʱ��
  ��msΪ��λ�����4294967295ms. 
*/
typedef unsigned int                 TIME;
/* 
  ����
  ��XXXX��XX��XX����ʼ������(���4294967295��)����ʼ������һ������. 
*/
typedef unsigned int                 DATE;
/* 
  ʱ��
  ��20λΪ��0ʱ0��0���ʱ��������(���86399��)��
  ��12λΪ��ǰ������(���999ms). 
*/
typedef unsigned int                 TIME_OF_DAY; 
typedef TIME_OF_DAY                  TOD;
/* 
  ���ں�ʱ��
  ��15λΪ��XXXX��XX��XX����ʼ�����������32767�죩��
  ��17λΪ��ǰʱ�̾൱��0ʱ0��0�������������������86399�룩��
  �����Ҫ����ȷ�Ļ����Χ��ʱ�����ڣ���-��-�� ʱ:��:��:���룩��
  ʹ��DATE��TOD�����. 
*/
typedef unsigned int                 DATE_AND_TIME;  
typedef DATE_AND_TIME                DT;

/*64 bits*/
typedef unsigned long                LWORD;
typedef signed long                  LINT;
typedef unsigned long                ULINT;
typedef double                       LREAL;

/* data type in bit numbers */
typedef unsigned char                UINT8;
typedef unsigned short               UINT16;
typedef unsigned int                 UINT32;
typedef unsigned long long           UINT64;

#endif







