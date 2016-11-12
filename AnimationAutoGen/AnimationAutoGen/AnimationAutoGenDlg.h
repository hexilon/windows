// AnimationAutoGenDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

#define DEFAULT_RATE 12
#define MAX_SUB_FOLDER 10

// CAnimationAutoGenDlg �Ի���
class CAnimationAutoGenDlg : public CDialog
{
// ����
public:
	CAnimationAutoGenDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ANIMATIONAUTOGEN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	void Init(void);
protected:
	// root animation folder
	CString m_strPath;
	int m_iSubFolderTotal;
	CString m_strSubFolder[MAX_SUB_FOLDER];
	int m_iPlayTimes[MAX_SUB_FOLDER];
	int m_iPause[MAX_SUB_FOLDER];

public:
	int m_iRate;
	afx_msg void OnBnClickedButtonPath();
protected:
	CButton m_btnOK;
	int ParseFolder(CString strPath);
	void HideAllSubFolder(void);
public:
	afx_msg void OnBnClickedRadioBoot();
protected:
	int m_iBoot;
};
