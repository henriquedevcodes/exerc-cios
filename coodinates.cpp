class Coordinate2D {
	private:
		int x, y;
	public:
		Coordinate2D(int, int);
		int getX();
		int getY();
};

Coordinate2D::Coordinate2D(int x, int y) {
	this->x = x;
	this->y = y;
}

int Coordinate2D::getX() {
	return x;
}

int Coordinate2D::getY() {
	return y;
}

class Coordinate3D : public Coordinate2D {
	private:
		int z;
	public:
		Coordinate3D(int, int, int);
		int getZ();
};

Coordinate3D::Coordinate3D(int x, int y, int z)
	: Coordinate2D(x, y){
	this->z = z;
}

int Coordinate3D::getZ() {
	return z;
}
