
// MCA_FView.h : CMCA_FView ��Ľӿ�
//

#pragma once


class CMCA_FView : public CView
{
protected: // �������л�����
	CMCA_FView();
	DECLARE_DYNCREATE(CMCA_FView)

// ����
public:
	CMCA_FDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMCA_FView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MCA_FView.cpp �еĵ��԰汾
inline CMCA_FDoc* CMCA_FView::GetDocument() const
   { return reinterpret_cast<CMCA_FDoc*>(m_pDocument); }
#endif

