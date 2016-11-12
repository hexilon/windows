// AnimationAutoGen.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAnimationAutoGenApp:
// �йش����ʵ�֣������ AnimationAutoGen.cpp
//

#define ANIMATION_BOOT_NAME _T("bootanimation.zip")
#define ANIMATION_SHUT_NAME _T("shutanimation.zip")
#define ANIMATION_TEXT_NAME _T("desc.txt")

class CAnimationAutoGenApp : public CWinApp
{
public:
	CAnimationAutoGenApp();
	bool OpenFolder(TCHAR *title, TCHAR * outFolder);
	bool GenerateAnimationTxt(CString path, CString *subFolder, int folderCount, int *playTimes, int *pause, int rate);
	bool ZipCompressAnimation(CString path, CString *subFolder, int folderCount, int isBoot);

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
protected:
	CString m_strTextPath;
	bool ZipCompressAddFolder(HZIP *hp, CString path, CString subFolder);
};

extern CAnimationAutoGenApp theApp;