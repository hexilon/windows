// VideoImageConvertDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CVideoImageConvertDlg �Ի���
class CVideoImageConvertDlg : public CDialog
{
// ����
public:
	CVideoImageConvertDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_VIDEOIMAGECONVERT_DIALOG };

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
    afx_msg void OnBnClickedButtonPath();
    afx_msg void OnBnClickedButtonOutPath();
    afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
    afx_msg void OnBnClickedRadioJpg();
    afx_msg void OnBnClickedRadioPng();
    afx_msg void OnBnClickedRadioBmp();
    afx_msg void OnBnClickedCancel();
	afx_msg LRESULT OnSaveImage(WPARAM wparam,LPARAM lparam);
	afx_msg LRESULT OnSaveImageFinish(WPARAM wparam,LPARAM lparam);
	afx_msg LRESULT OnVideoFrameTotal(WPARAM wparam,LPARAM lparam);
private:
    // video path
    CString m_strVideoPath;
    // output path
    CString m_strOutPath;
    int m_iImgFormat;
    int m_iVideoFrameTotal;
    // Show saved image recently
    CString m_strImgSave;
    CButton m_btnConvert;
    CButton m_btnCancel;
    CProgressCtrl m_ctrlProgress;
    CString m_strProgress;
};
