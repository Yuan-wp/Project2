//#ifndef VECTOR_H_
//#define VECTOR_H_
//namespace VECTOR
//{
//	class Vector
//	{
//	public:
//		enum Model { RECT, POL };
//	private:
//		double x;
//		double y;
//		double mag;
//		double ang;
//		void setx();
//		void sety();
//		void setmag();
//		void setang();
//		Model model;
//	public:
//		Vector();
//		Vector(double, double, Model form = RECT);
//		void reset(double, double, Model form = RECT);
//		~Vector();
//		double xval()const { return x; };
//		double yval() const { return y; };
//		double magval()const { return mag; };
//		double angval()const { return ang; };
//		void polar_model();
//		void rect_model();
//		Vector operator+(const Vector& b)const;
//		Vector operator-(const Vector& b)const;
//		Vector operator*(double n)const;
//		friend Vector operator *(double n, const Vector& b);
//		friend std::ostream& operator<<(std::ostream& os, const Vector& b);
//	};
//}
//#endif // !VECTOR_H_
