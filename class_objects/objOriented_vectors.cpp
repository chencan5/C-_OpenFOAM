  #include <iostream>
#include <string>
#include <cmath>

using namespace std;


class 	Vectors
{
	public:
	// cinstructor
	Vectors();

	//destructor
	~Vectors();

	int printVectors1();
	int printVectors2();

	int printAdded_Vectors();
	void addVectors();
	double vector_length();

	void setVector1();
	void setVector2();
	protected:
	private:
	
	double vector1[3][1];
	double vector2[3][1];
	double vector_add_result[3][1];

};



int main()
{

	Vectors vec; //importing a class into your main file, is known as creating an object
	vec.setVector1();
	vec.setVector2();
	vec.addVectors();
	vec.printAdded_Vectors();
		
	double l = vec.vector_length();
	
	cout << "printing vector length ..." << endl;
	cout << l << endl;	
	
	return 0;
}

double Vectors::vector_length()
{
	double l;
	l = sqrt(pow(vector_add_result[0][0],2.0)+pow(vector_add_result[1][0],2.0)+pow(vector_add_result[2][0],2.0));
	return l;
}


void Vectors::addVectors()
{
	for(int i = 0 ; i<3 ; i++)
	{
		vector_add_result[i][0] = vector1[i][0] + vector2[i][0];
	}
}

Vectors::Vectors(){
	// initialise vector1 = zeros(3,1)
	cout << "initialising the vectors ..." << endl;
	for (int i =0 ; i<3 ; i++)
	{
		
		vector1[i][0] = 0;
		vector2[i][0] = 0;
 	}
}

Vectors::~Vectors(){
	cout << "end of object, destructor running ..." << endl;
}

int Vectors::printVectors1(){
	cout << "we are starting a print out vector1: ..." <<endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "vector 1 row" << i <<" column " << " 1 is ..." << endl;
		cout << vector1[i][0] << endl;

	}	
	
	return 0;
}


int Vectors::printVectors2(){
	cout << "we are starting a print out vector2: ..." <<endl;
	
	for (int i = 0; i < 3; i++)
	{

		cout << "vector 2 row" << i <<" column " << " 1 is ..." << endl;
		cout << vector2[i][0] << endl;
	}	
	
	return 0;
}

int Vectors::printAdded_Vectors(){
	cout << "we are starting a print out vector_add_result: ..." <<endl;
	
	for (int i = 0; i < 3; i++)
	{

		cout << "vector_add_result row" << i <<" column " << " 1 is ..." << endl;
		cout << vector_add_result[i][0] << endl;
	}	
	
	return 0;
}


void Vectors::setVector1(){

	std::cout << "vector1 input x " << std::endl;
	std::cin >> vector1[0][0];

	std::cout << "vector1 input y " << std::endl;
	std::cin >> vector1[1][0];
	
	std::cout << "vector1 input z " << std::endl;
	std::cin >> vector1[2][0];

}

void Vectors::setVector2(){

	std::cout << "vector2 input x " << std::endl;
	std::cin >> vector2[0][0];

	std::cout << "vector2 input y " << std::endl;
	std::cin >> vector2[1][0];
	
	std::cout << "vector2 input z " << std::endl;
	std::cin >> vector2[2][0];




}








