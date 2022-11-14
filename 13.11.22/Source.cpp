#include <windows.h>
#include <tchar.h>
#include "resource.h"
#include "Time.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

HWND hB[9];
HBITMAP hO, hX;
int a = 0;
int j = 0;
short player[9] = {3, 4, 5, 6, 7, 8, 9, 10, 11};

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	srand(time(0));
	// создаём главное окно приложения на основе модального диалога
	return  DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wp, LPARAM lp)
{
	switch (message)
	{
	case WM_INITDIALOG:
		for (int i = 0; i < 9; i++)
			hB[i] = GetDlgItem(hWnd, IDC_BUTTON1 + i);
		hO = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_O));
		hX = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_X));
		return TRUE;
	case WM_COMMAND:
		if (LOWORD(wp) == IDC_BUTTON1)
		{
			SendMessage(hB[0], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[0], FALSE);
			player[0] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON2)
		{
			SendMessage(hB[1], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[1], FALSE);
			player[1] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON3)
		{
			SendMessage(hB[2], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[2], FALSE);
			player[2] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON4)
		{
			SendMessage(hB[3], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[3], FALSE);
			player[3] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON6)
		{
			SendMessage(hB[4], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[4], FALSE);
			player[4] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON7)
		{
			SendMessage(hB[5], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[5], FALSE);
			player[5] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON8)
		{
			SendMessage(hB[6], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[6], FALSE);
			player[6] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON9)
		{
			SendMessage(hB[7], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[7], FALSE);
			player[7] = 1;
		}
		if (LOWORD(wp) == IDC_BUTTON10)
		{
			SendMessage(hB[8], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hX);
			EnableWindow(hB[8], FALSE);
			player[8] = 1;
		}
		if (player[0] == player[3] == player[6])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}
			}
		}
		if (player[2] == player[5] == player[8])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[1] == player[4] == player[7])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[0] == player[1] == player[2])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[3] == player[4] == player[5])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[6] == player[7] == player[8])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[0] == player[4] == player[8])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		if (player[2] == player[4] == player[6])
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		for (int i = 0; i < 9; i++)
		{
			if (1 == player[i] || 2 == player[i])
				j++;
		}
		if (j == 9)
		{
			MessageBox(hWnd, TEXT("Начать новую игру?"), TEXT("ИГРА"), MB_YESNO);
			if (LOWORD(wp) == IDNO)
			{
				EndDialog(hWnd, 0);
				return TRUE;
			}
			if (LOWORD(wp) == IDYES)
			{
				j = 0;
				for (int i = 0; i < 9; i++)
				{
					EnableWindow(hB[i], TRUE);
					SendMessage(hB[i], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), NULL);
					player[i] = i + 3;
				}

			}
		}
		while (true)
		{
			a = rand() % 8;
			if (1 != player[a] && 2 != player[a])
				break;
		}
		SendMessage(hB[a], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), (LPARAM)hO);
		EnableWindow(hB[a], FALSE);
		player[a] = 2;
		j = 0;

		return TRUE;
	case WM_CLOSE:
		EndDialog(hWnd, 0);
		return TRUE;
	}
	return FALSE;
}