#ifndef __SIHANDLEMGR__H__
#define __SIHANDLEMGR__H__

#include <windows.h>

//����ṹ
typedef struct SiHandleInfo
{
	HANDLE handle;
	int u8flag;
	char orgfile[512];
	char mbfile[512];
};


//��ӵ�����
void SiHandle_Add(HANDLE handle,int u8flag,char* orgfile,char* mbfile);


//������ɾ��
void SiHandle_Del(HANDLE handle);

//����
void SiHandle_Debug(void);

//�������в��Ҿ��
struct SiHandleInfo* FindSiHandleFromLink(HANDLE handle);

#endif

