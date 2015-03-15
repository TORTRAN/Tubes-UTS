#ifndef EDGE_H
#define EDGE_H
class Edge
{
public:
	int ymin;
	int ymax;
	int x0, y0, x1, y1;
	int x;

	double m;

	void calculateGradient(int x0, int y0, int x1, int y1);

	Edge(int x0, int y0, int x1, int y1);

	bool operator< (const Edge& edge) const;

};

#endif