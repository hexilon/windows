// VideoImageConvertDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CVideoImageConvertDlg 对话框
class CVideoImageConvertDlg : public CDialog
{
// 构造
public:
	CVideoImageConvertDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_VIDEOIMAGECONVERT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
