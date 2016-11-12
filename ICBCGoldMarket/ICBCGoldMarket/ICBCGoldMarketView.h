// ICBCGoldMarketView.h : CICBCGoldMarketView 类的接口
//


#pragma once
#include "explorer.h"
#include "afxcmn.h"


class CICBCGoldMarketView : public CFormView
{
protected: // 仅从序列化创建
	CICBCGoldMarketView();
	DECLARE_DYNCREATE(CICBCGoldMarketView)

public:
	enum{ IDD = IDD_ICBCGOLDMARKET_FORM };

// 属性
public:
	CICBCGoldMarketDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CICBCGoldMarketView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // ICBCGoldMarketView.cpp 中的调试版本
inline CICBCGoldMarketDoc* CICBCGoldMarketView::GetDocument() const
   { return reinterpret_cast<CICBCGoldMarketDoc*>(m_pDocument); }
#endif

