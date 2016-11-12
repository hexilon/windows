// AnimationAutoGen.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CAnimationAutoGenApp:
// 有关此类的实现，请参阅 AnimationAutoGen.cpp
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

// 重写
	public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
protected:
	CString m_strTextPath;
	bool ZipCompressAddFolder(HZIP *hp, CString path, CString subFolder);
};

extern CAnimationAutoGenApp theApp;