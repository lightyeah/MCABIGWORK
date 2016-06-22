
// MCA_FView.h : CMCA_FView 类的接口
//

#pragma once


class CMCA_FView : public CView
{
protected: // 仅从序列化创建
	CMCA_FView();
	DECLARE_DYNCREATE(CMCA_FView)

// 特性
public:
	CMCA_FDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMCA_FView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MCA_FView.cpp 中的调试版本
inline CMCA_FDoc* CMCA_FView::GetDocument() const
   { return reinterpret_cast<CMCA_FDoc*>(m_pDocument); }
#endif

