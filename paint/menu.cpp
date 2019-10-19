#include "stdafx.h"
#include "menu.h"


menu::menu()
{
}
void menu::thanhmenu(CClientDC *pDC)
{
	CBrush *B1, *B2;
	B1 = new CBrush(RGB(79, 79, 79));
	B2 = new CBrush(RGB(90, 90, 90));
	CPen *pen1, *pen2;
	pen1 = new CPen(PS_SOLID, 1, RGB(79, 79, 79));
	pen2 = new CPen(PS_SOLID, 2, RGB(60, 60, 60));

	pDC->SelectObject(B1);
	pDC->SelectObject(pen2);
	hcn1.thietlap(0, 0, 1400, 60); hcn1.vehinh(pDC);

	pDC->SelectObject(B2);
	pDC->SelectObject(pen2);
	hcn1.thietlap(135, 10, 800, 52); hcn1.vehinh(pDC);
}
void menu::sideba(CClientDC *pDC)
{
	CBrush *B2;							//khai bao mau but
	B2 = new CBrush(RGB(236, 236, 236));
	CBrush *olderbrush;						//khai bao mau to
	CPen  *pen2;
	CPen *olderpen;
	pen2 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	olderbrush = pDC->SelectObject(B2);
	olderpen = pDC->SelectObject(pen2);
	hcn1.thietlap(0, 60, 134, 700); hcn1.vehinh(pDC);
	pDC->MoveTo(130, 60); pDC->LineTo(130, 700);
}
menu::~menu()
{
}
