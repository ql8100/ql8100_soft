#ifndef     __PUBLIC_H
#define     __PUBLIC_H
/*
*�������˵���� 
*              ���������һ��32λ�ĳ���������ɣ�ÿ�ĸ��ֽڴ���һλ���룬��๲8λ���롣
*/
/*
    1��ģ�����빦�����������⣬��������ID��ʱ�п������������16λ�����и����������������롣
*/
#define ID_RANGE        100;            //ID�ŵķ�Χ

extern unsigned long gucOnePassword;                    //һ��������ռ�õĿռ�
extern unsigned long gucAllPassword[ID_RANGE];           //Ԥ��������ID���룬�������Ը���ĶԱ����롣


void software_init(void);
void hardware_init(void);
//void uart_init(uint16_t uiBuad);

#endif
