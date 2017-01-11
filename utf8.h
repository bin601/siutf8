#ifndef __UTF8__H__
#define __UTF8__H__

//utf8תmb
void utf8_to_mb(const char* u8,char* mb,DWORD* mbsize);

//mbתutf8
void mb_to_utf8(const char* mb,char* u8,DWORD* u8size);

//2 utf8 dom
//1 utf8
//0 not utf8
int IsUtf8(char* buf,int size);


#endif
