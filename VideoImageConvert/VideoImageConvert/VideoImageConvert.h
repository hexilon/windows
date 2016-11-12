// VideoImageConvert.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CVideoImageConvertApp:
// �йش����ʵ�֣������ VideoImageConvert.cpp
//

typedef enum 
{
    IMG_JPG,
    IMG_PNG,
    IMG_BMP
}IMAGE_FORMAT;

#define MESSAGE_ID_IMG_SAVE        WM_USER+1000
#define MESSAGE_ID_IMG_SAVE_FINISH   WM_USER+1001
#define MESSAGE_ID_IMG_FRAME_TOTAL WM_USER+1002

struct ThreadParameter{
    HWND m_hWnd;
	CString m_strVideoPath;
	CString m_strOutPath;
    IMAGE_FORMAT m_iImgFormat;
};

class CVideoImageConvertApp : public CWinApp
{
public:
	CVideoImageConvertApp();
    bool SelectFolder(TCHAR *title, TCHAR * outFolder);
    bool SelectFile(TCHAR *title, TCHAR *filter, CString& outFolder);
    bool StartConvertVideoToImage(HWND hwnd, CString videoPath, CString OutPath, IMAGE_FORMAT format);
    bool StopConvertVideoToImage();
// ��д
	public:
	virtual BOOL InitInstance();

private:
   	ThreadParameter m_threadParam;
	CWinThread *m_winThread;
    static UINT ConvertVideoToImageThread(LPVOID pParam);
// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CVideoImageConvertApp theApp;