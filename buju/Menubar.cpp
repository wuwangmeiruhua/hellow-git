#include "Stdafx.h"
#include "MenuBar.h"


CMenuBar::CMenuBar(void)
{
}


CMenuBar::~CMenuBar(void)
{
}
BEGIN_MESSAGE_MAP(CMenuBar, CPanel)
	ON_WM_CREATE()
	ON_BN_CLICKED(10001, OnPriorPart)
	ON_BN_CLICKED(10002, OnNextPart)
	ON_BN_CLICKED(10003, OnFullScreen)
END_MESSAGE_MAP()


int CMenuBar::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CPanel::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	CRect rc;
	GetClientRect(rc);
	/*rc.bottom = rc.bottom - 2;
	rc.top = rc.top + 2;
	rc.right = rc.left + 50;
	priorPart.Create("上一块", WS_CHILD | WS_VISIBLE, rc, this, 10001);
	rc.left = rc.right + 10;
	rc.right = rc.left + 50;
	nextPart.Create("下一块", WS_CHILD | WS_VISIBLE, rc, this, 10002);
	rc.left = rc.right + 10;
	rc.right = rc.left + 100;
	fullScreen.Create("退出全屏", WS_CHILD | WS_VISIBLE, rc, this, 10003);*/
	return 0;
}

void CMenuBar::OnNextPart(){
	CWnd* pwnd = GetParent();
	//pwnd->SendMessage(WM_NEXT_PART);
}
void CMenuBar::OnPriorPart(){
	CWnd* pwnd = GetParent();
	//pwnd->SendMessage(WM_PRIOR_PART);
}
void CMenuBar::OnFullScreen(){
	CWnd* pwnd = GetParent();
	//pwnd->SendMessage(WM_FULL_SCREEN);
}
