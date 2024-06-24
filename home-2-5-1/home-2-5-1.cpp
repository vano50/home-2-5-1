#include <iostream>
#include <string>


class Figure{
protected:
	int sides_count;
public:
	Figure(int sides_count) {}
	Figure() { sides_count = 0; }
	int get_sides_count() { return sides_count; }
};

class Triangle : public Figure {
public:
	Triangle() { sides_count = 3; }
	
};

class Quadrangle : public Figure {
public:
	Quadrangle() { sides_count = 4; }
	
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	Figure fdsa;
	Triangle qwerty;
	Quadrangle asdf;
	
	std::cout << "Фигура: " << fdsa.get_sides_count() << std::endl;
	std::cout << "Треугольник: " << qwerty.get_sides_count() << std::endl;
	std::cout << "Четырёхугольник: " << asdf.get_sides_count();
}