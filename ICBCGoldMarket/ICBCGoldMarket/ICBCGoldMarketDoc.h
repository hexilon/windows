// ICBCGoldMarketDoc.h : CICBCGoldMarketDoc ��Ľӿ�
//


#pragma once


class CICBCGoldMarketDoc : public CDocument
{
protected: // �������л�����
	CICBCGoldMarketDoc();
	DECLARE_DYNCREATE(CICBCGoldMarketDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CICBCGoldMarketDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


