#pragma once
#include "hinh.h"
class hinhvuong :public hinh
{
private:

public:
	int x1, x2, y1, y2;
	hinhvuong(CPoint p1, CPoint p2);
	int chonhinh(CPoint p);
	void xuatlai(CClientDC *pDC);
	void vehinh(CClientDC *pDC);
	void thietlap(int mx1, int my1, int mx2, int my2);
	void phongto();
	void phongtovavehinh(CClientDC *pDC);
	void thunho();
	void thunhovavehinh(CClientDC *pDC);
	int dientich();
	int chuvi();
	void xoahinh(CClientDC *pDC);
	void dichuyen(int dx, int dy, CClientDC *pDC);
	hinhvuong();
	~hinhvuong();
};

