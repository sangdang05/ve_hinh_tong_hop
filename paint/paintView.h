
// paintView.h : interface of the CpaintView class
//

#pragma once
#include "hinh.h"
#include "hcn.h"
#include "hinhtron.h"
#include "hinhvuong.h"
#include "tamgiac.h"
#include"dongxu.h"
#include"ngoisao.h"
#include "nutbam.h"
#include "menu.h"


class CpaintView : public CView
{
protected: // create from serialization only
	CpaintView() noexcept;
	DECLARE_DYNCREATE(CpaintView)

// Attributes
public:
	CpaintDoc* GetDocument() const;

// Operations
public:
	CPoint p1, p2;
	nutbam b1, b2, b3, b4, b5, b6, b7, pt, tn, dc, xh;//nut tren menu
	int o1, o2, o3, o4, o5, o6;//dk bam lai chon hinh
	int pt1, pt2, pt3, pt4, pt5, pt6;//dk de bam vao nut phong to
	int tn1, tn2, tn3, tn4, tn5, tn6;//dk de bam vao nut thu nho
	int dc1, dc2, dc3, dc4, dc5, dc6;//dk de bam vao nut di chuyen
	int xh1, xh2, xh3, xh4, xh5, xh6;//dk de bam vao nut xoa hinh
	menu menu1;
	hinh *A[100];
	int n;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CpaintView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in paintView.cpp
inline CpaintDoc* CpaintView::GetDocument() const
   { return reinterpret_cast<CpaintDoc*>(m_pDocument); }
#endif

