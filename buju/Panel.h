//�������������Ļ���
#pragma once


// CPanel

class CPanel : public CWnd
{
	DECLARE_DYNAMIC(CPanel)

public:
	CPanel();
	virtual ~CPanel();

protected:
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	virtual BOOL Create(LPCTSTR lpszClassName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
};


