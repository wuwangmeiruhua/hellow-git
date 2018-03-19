#pragma once
#include "panel.h"
//ȫ����ʾ��������
class CMenuBar :
	public CPanel
{
public:
	CMenuBar(void);
	~CMenuBar(void);
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
	void showCloseFullScreenBtn();
private:
	CButton nextPart;
	CButton priorPart;
	CButton fullScreen;
private:
	void OnNextPart();
	void OnPriorPart();
	void OnFullScreen();
};


