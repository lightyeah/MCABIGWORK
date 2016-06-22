
// MCA_FView.cpp : CMCA_FView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MCA_F.h"
#endif

#include "MCA_FDoc.h"
#include "MCA_FView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMCA_FView

IMPLEMENT_DYNCREATE(CMCA_FView, CView)

BEGIN_MESSAGE_MAP(CMCA_FView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMCA_FView ����/����

CMCA_FView::CMCA_FView()
{
	// TODO: �ڴ˴���ӹ������

}

CMCA_FView::~CMCA_FView()
{
}

BOOL CMCA_FView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMCA_FView ����

void CMCA_FView::OnDraw(CDC* /*pDC*/)
{
	CMCA_FDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMCA_FView ��ӡ

BOOL CMCA_FView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMCA_FView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMCA_FView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMCA_FView ���

#ifdef _DEBUG
void CMCA_FView::AssertValid() const
{
	CView::AssertValid();
}

void CMCA_FView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMCA_FDoc* CMCA_FView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMCA_FDoc)));
	return (CMCA_FDoc*)m_pDocument;
}
#endif //_DEBUG


// CMCA_FView ��Ϣ�������
