#pragma once
class CPermissionControl
{
public:
	CPermissionControl(void);
	~CPermissionControl(void);
	CString GetCode();
	bool IsSuperUser(CString username, CString password);
	bool IsPermissionUser(CString code);
	static CString GetLocalMac();
private:
	CString GenerateCode(CString mac);
	bool DecodeCode(CString code);
public:

private:
	CString mStrCode;
	static CString mStrMac;
	static BYTE mAddress[MAX_ADAPTER_ADDRESS_LENGTH];
};


