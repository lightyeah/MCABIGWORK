// DetailView.cpp : ʵ���ļ�
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


// CDetailView ��ͼ

void CDetailView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: �ڴ���ӻ��ƴ���
}


// CDetailView ���

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


// CDetailView ��Ϣ�������
