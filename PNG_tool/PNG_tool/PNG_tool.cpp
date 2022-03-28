// PNG_tool.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "PNG_tool.h"

#define MAX_LOADSTRING 100

// 全局变量:
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名

// 此代码模块中包含的函数的前向声明:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK DialogProc(
    HWND hwndDlg,  // handle to dialog box			
    UINT uMsg,     // message			
    WPARAM wParam, // first message parameter			
    LPARAM lParam  // second message parameter			
);
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    DialogBox(
        hInstance,  // handle to module
        MAKEINTRESOURCE(IDD_PNGTOOL_DIALOG),   // dialog box template
        NULL,      // handle to owner window
        DialogProc  // dialog box procedure
    );

}

BOOL CALLBACK DialogProc(
    HWND hwndDlg,  // handle to dialog box			
    UINT uMsg,     // message			
    WPARAM wParam, // first message parameter			
    LPARAM lParam  // second message parameter			
)
{
    return false;
}
