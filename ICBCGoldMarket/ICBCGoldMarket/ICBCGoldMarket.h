// ICBCGoldMarket.h : ICBCGoldMarket Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CICBCGoldMarketApp:
// �йش����ʵ�֣������ ICBCGoldMarket.cpp
//

class CICBCGoldMarketApp : public CWinApp
{
public:
	CICBCGoldMarketApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CICBCGoldMarketApp theApp;