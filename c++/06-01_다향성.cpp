#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal add" << endl; }
	virtual ~Animal() { cout << "Animal delete" << endl; }

	void eat(void) { cout << "동물먹이" << endl; }
	//roar함수를 가상함수테이블에 등록(동적 바인딩)
	virtual void roar(void) { cout << "동물짖어" << endl; }
	void walk(void) { cout << "동물걸어" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tigel add" << endl; }
	virtual ~Tiger() { cout << "Tigel delete" << endl; }
	void roar(void) override { cout << "어흥" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog add" << endl; }
	virtual ~Dog() { cout << "Dog delete" << endl; }
	void roar(void) { cout << "멍멍" << endl; }
};

void main(void)
{
	Animal* animal = new Animal();
	delete animal;
}