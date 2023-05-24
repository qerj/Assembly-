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
		
		; we dont clean the stack because we are using a win32 api function which is all using stdcall which requires the callee to clean the stack.
	}
}
