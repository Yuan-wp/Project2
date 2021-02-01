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
//		Model model;
//		void setx(double mag, double ang);
//		void sety(double mag, double ang);
//		double setmag();
//		double setang();
//	public:
//		Vector();
//		Vector(double a, double b, Model form = RECT);
//		void reset(double a, double b, Model form = RECT);
//		~Vector();
//		
//		double xval()const { return x; };
//		double yval() const { return y; };
//		double magval() ;
//		double angval();
//		void polar_model();
//		void rect_model();
//		Vector operator+(const Vector& b)const;
//		Vector operator-(const Vector& b)const;
//		Vector operator*(double n)const;
//		friend Vector operator *(double n, const Vector& b);
//		friend std::ostream& operator<<(std::ostream& os,  Vector& b);
//	};
//}
//#endif // !VECTOR_H_
