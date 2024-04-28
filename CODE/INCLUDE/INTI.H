#ifndef __INIT_H__  
#define __INIT_H__  
#define LEFT 0x4b00   /*�����������*/   
#define RIGHT 0x4d00  /*�����������*/  
#define DOWN 0x5000    /*�����������*/
#define UP 0x4800     /*�����������*/  
#define ESC 0x011b    /*ESC����ȡ���˵��򿪲���*/  
#define ENTER 0x1c0d  /*�س���������*/
#define TAB 0x0f09    /*TAB���������ĸ��ո�*/  
#define DEL 21248     /*DEL����ɾ����ǰ�ַ�*/  
#define BACK 3592     /*BackSpace����ɾ����ǰ���λ��ǰһ���ַ�*/   
#define CL 29440      /*ctrl+��������������ѡ���ı�*/ 
#define CR 29696      /*ctrl+�����������ң�ѡ���ı�*/    
#define Cc 11779      /*ctrl+c ������ѡ���ı�������һ�ݵ���������*/  
#define Cv 12054      /*ctrl+v �������������е����ݸ��Ƶ���ǰλ��*/  
#define Cx 11544      /*ctrl+x ������ѡ���ı���ִ�м��в���*/  
#define F1 15104       /*F1�������ļ��˵�*/  
#define F2 15360      /*F2�����򿪱༭�˵�*/ 
#define F3 15616      /*F3�����򿪰����˵�*/  
#define F4 15872      /*F4���������˵�*/   
#define F10 17408     /*F10��:ˢ��*/
#define SPACE 0x3920	//�ո�� 
#define FIRST 0x0231
#define SECOND 0x0332
#define THIRD 0x0433
#define FOURTH 0x0534
#define FIFTH 0x00635
#define SIXTH 0x0736
#define SEVENTH 0x0837
#define EIGHTH 0x0938
#define NINTH 0x0A39
#define ZIERO 0x0B30
#define MAXPY 7
#define SUCCESS 1
#define FAIL 0
#define LASTLINE 0x4800
#define NEXTLINE 0x5000
#define kuandu 600

typedef struct node
{	
	char txt[3];
	int flag;//��ɫ 
	unsigned short sign;		//����ָʾ�ڵ㴢��������Ļ���Ӣ�ģ�Ӣ��Ϊ0������Ϊ1��
	struct node*next;
}node;

typedef struct Lnode
{
	node* next;
	struct Lnode*nextl;
}Lnode;


#endif 