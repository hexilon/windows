// MainFrm.h : CMainFrame ��Ľӿ�
//


#pragma once

#define WM_ONTRAY WM_USER+1

class CMainFrame : public CFrameWnd
{
	
protected: // �������л�����
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // �ؼ���Ƕ���Ա
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    LRESULT OnTray(WPARAM wParam,LPARAM lParam);
    DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnClose();

private:
    NOTIFYICONDATA mNotifyData;
public:
    afx_msg void OnMenuMainscreen();
    afx_msg void OnMenuExit();
};


