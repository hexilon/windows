#pragma once
#include <afxinet.h>

#define DEFAULT_ICBC_URL _T("http://m.icbc.com.cn/WapDynamicSite/Windroid/GoldMarket/AccResponse.aspx")
#define WM_MSG_DATA_UPDATE WM_USER+1

typedef struct {
	CString mName;
	float mPrice;
	float mChange;
	float mDifferent;
}GoldType;

typedef enum {
	GOLD_TYPE_BEGIN = 0,
	GOLD_TYPE_RMB_GOLD = GOLD_TYPE_BEGIN,//����һƽ�
	GOLD_TYPE_RMB_SILVER,//����Ұ���
	GOLD_TYPE_RMB_PT,//����Ҳ���
	GOLD_TYPE_RMB_PD,//������ٽ�
	GOLD_TYPE_US_GOLD,//��Ԫ�ƽ�
	GOLD_TYPE_US_SILVER,//��Ԫ����
	GOLD_TYPE_US_PT,//��Ԫ����
	GOLD_TYPE_US_PD,//��Ԫ�ٽ�
	GOLD_TYPE_MAX
}GOLD_TYPE_ENUM;

class CHttpFileParse
{
public:
	CHttpFileParse(void);
	CHttpFileParse(CString url);
	~CHttpFileParse(void);

    void SetDisplayView(CView *view);
	static int GetWebCodePage(CString url);
	float GetGoldPrice(GOLD_TYPE_ENUM type);
	float GetGoldChange(GOLD_TYPE_ENUM type);
	float GetGoldDiffence(GOLD_TYPE_ENUM type);
	CString GetUrl();
	void StartParse(CWnd* wnd);
	void StopParseThread();

private:
	CString GetExePath();
	void StartParseThread();
	static UINT HttpFileParseThread(LPVOID pParam);
	static bool ParseGoldHttpString(CHttpFileParse *hfp, CString httpString);

private:
	CString m_strUrl;
	CInternetSession *m_pSession;
	CInternetConnection *m_pConnection;
	GoldType mGoldElements[GOLD_TYPE_MAX];
	CWinThread *m_winThread;
	volatile bool m_bStop;
	CWnd *m_wnd;
};
