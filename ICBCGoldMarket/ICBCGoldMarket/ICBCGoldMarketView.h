// ICBCGoldMarketView.h : CICBCGoldMarketView ��Ľӿ�
//


#pragma once
#include "explorer.h"
#include "afxcmn.h"


class CICBCGoldMarketView : public CFormView
{
protected: // �������л�����
	CICBCGoldMarketView();
	DECLARE_DYNCREATE(CICBCGoldMarketView)

public:
	enum{ IDD = IDD_ICBCGOLDMARKET_FORM };

// ����
public:
	CICBCGoldMarketDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CICBCGoldMarketView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CExplorer m_ctrlBowser;

private:
	CHttpFileParse *mParse;
	CListCtrl m_listGoldElements;
	GOLD_TYPE_ENUM m_currGoldType;
	GoldType m_currGoldElements[GOLD_TYPE_MAX];
	int m_iNotifyElements[GOLD_TYPE_MAX];

private:
	afx_msg LRESULT OnMsgUpdateDataHandler(WPARAM w, LPARAM l);
public:
	afx_msg void OnDestroy();
	GoldType* GetCurrGoldElements();
	int* GetNofityElementsFlag();
};

#ifndef _DEBUG  // ICBCGoldMarketView.cpp �еĵ��԰汾
inline CICBCGoldMarketDoc* CICBCGoldMarketView::GetDocument() const
   { return reinterpret_cast<CICBCGoldMarketDoc*>(m_pDocument); }
#endif

