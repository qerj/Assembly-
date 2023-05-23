#include <iostream>
#include <Windows.h>

int main()
{
	LPCSTR Caption = "Hi";
	LPCSTR Title = "Alerto!";

	__asm
	{
		mov eax, 0
		mov ebx, Caption
		mov ecx, Title
		mov edx, 0

		push edx
		push ecx
		push ebx
		push eax

		call MessageBoxA

		add esp, 0x16
	}
}
