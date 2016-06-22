
// MCA_FView.cpp : CMCA_FView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMCA_FView 构造/析构

CMCA_FView::CMCA_FView()
{
	// TODO: 在此处添加构造代码

}

CMCA_FView::~CMCA_FView()
{
}

BOOL CMCA_FView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMCA_FView 绘制

void CMCA_FView::OnDraw(CDC* /*pDC*/)
{
	CMCA_FDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMCA_FView 打印

BOOL CMCA_FView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMCA_FView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMCA_FView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMCA_FView 诊断

#ifdef _DEBUG
void CMCA_FView::AssertValid() const
{
	CView::AssertValid();
}

void CMCA_FView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMCA_FDoc* CMCA_FView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMCA_FDoc)));
	return (CMCA_FDoc*)m_pDocument;
}
#endif //_DEBUG


// CMCA_FView 消息处理程序
