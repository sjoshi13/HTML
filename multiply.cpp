#include<iostream>
#include <emscripten.h>
	using namespace std;
extern "C"{
	 EMSCRIPTEN_KEEPALIVE
	int multiply(float x,float y)
	{
		return x*y;
	
	}
}
	int main()
	{
		cout << "initialized";
		return 0;
	}
