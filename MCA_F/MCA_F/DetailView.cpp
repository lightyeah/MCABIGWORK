// DetailView.cpp : 实现文件
//

#include "stdafx.h"
#include "MCA_F.h"
#include "DetailView.h"


// CDetailView

IMPLEMENT_DYNCREATE(CDetailView, CView)

CDetailView::CDetailView()
{

}

CDetailView::~CDetailView()
{
}

BEGIN_MESSAGE_MAP(CDetailView, CView)
END_MESSAGE_MAP()


// CDetailView 绘图

void CDetailView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 在此添加绘制代码
}


// CDetailView 诊断

#ifdef _DEBUG
void CDetailView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CDetailView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDetailView 消息处理程序
