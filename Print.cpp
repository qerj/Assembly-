#include <iostream>
#include <Windows.h>

int main()
{
	const char* format = "%s";
	const char* message = "Printed from assembly";

	__asm
	{
		mov eax, format
		mov ecx, message
		push ecx
		push eax
		call printf
		add esp, 8 ; printf is a cdecl calling convention which will require the caller to clean the stack.
	}
}
