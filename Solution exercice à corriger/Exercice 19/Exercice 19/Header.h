// TYPE + NOM = DECLARATION
#ifndef MESFOCTION_h
#define MESFOCTION_h
#define D_S "surface"
#define D_P "perimetre"

typedef struct {
	double h;
	double l;
	double sp;
}S_Rect;

typedef union {
	S_Rect rs;
	S_Rect rp;
}u1;

typedef struct {
	char Text[16];
	u1 Rectangle;
} S_DefRectangle;


void ShowInfo(S_DefRectangle res_rectangle);
void CalculeSurface(S_DefRectangle* pt_Rectangle);
void CalculePerimetre(S_DefRectangle* pt_Rectangle);
#endif