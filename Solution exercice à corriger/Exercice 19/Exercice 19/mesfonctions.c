#include "Header.h"

void ShowInfo(S_DefRectangle res_rectangle) {
	if (strcmp(D_S, res_rectangle.Text) == 0) {
		printf("la surface est de %lf \n ", res_rectangle.Rectangle.rs.sp);
	}
	else {
		printf("le perimetre est de %lf \n ", res_rectangle.Rectangle.rp.sp);
	}
}

void CalculeSurface(S_DefRectangle* pt_Rectangle) {
	//surface = largeur * hauteur 
	pt_Rectangle->Rectangle.rs.sp = pt_Rectangle->Rectangle.rs.l * pt_Rectangle->Rectangle.rs.h;
}

void CalculePerimetre(S_DefRectangle* pt_Rectangle) {
	pt_Rectangle->Rectangle.rp.sp = pt_Rectangle->Rectangle.rp.l * pt_Rectangle->Rectangle.rp.h;
}