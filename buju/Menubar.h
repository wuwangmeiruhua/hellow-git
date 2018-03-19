#pragma once
#include "panel.h"
//全屏显示工具条类
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


