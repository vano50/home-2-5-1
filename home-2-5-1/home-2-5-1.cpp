#include <iostream>
#include <string>


class Figure{
protected:
	int sides_count;
	std::string name;
public:
	Figure(int sides_count, std::string name) {}
	Figure() { sides_count = 0, name = "Фигура: "; }
	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; }
};

class Triangle : public Figure {
public:
	Triangle() { sides_count = 3, name = "Треугольник: "; }
	
};

class Quadrangle : public Figure {
public:
	Quadrangle() { sides_count = 4, name = "Четырёхугольник: "; }
	
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	Figure fdsa;
	Triangle qwerty;
	Quadrangle asdf;
	
	std::cout << fdsa.get_name() << fdsa.get_sides_count() << std::endl;
	std::cout << qwerty.get_name() << qwerty.get_sides_count() << std::endl;
	std::cout << asdf.get_name() << asdf.get_sides_count();
}