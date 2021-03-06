// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// HellriegelMiddlewareServerView.cpp : implementation of the CHellriegelMiddlewareServerView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "HellriegelMiddlewareServer.h"
#endif

#include "HellriegelMiddlewareServerDoc.h"
#include "HellriegelMiddlewareServerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHellriegelMiddlewareServerView

IMPLEMENT_DYNCREATE(CHellriegelMiddlewareServerView, CView)

BEGIN_MESSAGE_MAP(CHellriegelMiddlewareServerView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CHellriegelMiddlewareServerView construction/destruction

CHellriegelMiddlewareServerView::CHellriegelMiddlewareServerView()
{
	// TODO: add construction code here

}

CHellriegelMiddlewareServerView::~CHellriegelMiddlewareServerView()
{
}

BOOL CHellriegelMiddlewareServerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CHellriegelMiddlewareServerView drawing

void CHellriegelMiddlewareServerView::OnDraw(CDC* /*pDC*/)
{
	CHellriegelMiddlewareServerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CHellriegelMiddlewareServerView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CHellriegelMiddlewareServerView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CHellriegelMiddlewareServerView diagnostics

#ifdef _DEBUG
void CHellriegelMiddlewareServerView::AssertValid() const
{
	CView::AssertValid();
}

void CHellriegelMiddlewareServerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHellriegelMiddlewareServerDoc* CHellriegelMiddlewareServerView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHellriegelMiddlewareServerDoc)));
	return (CHellriegelMiddlewareServerDoc*)m_pDocument;
}
#endif //_DEBUG


// CHellriegelMiddlewareServerView message handlers
