// 
// AUTHOR
// N. Nielsen
//
// LICENSE
// This software is in the public domain.
//
// The software is provided "as is", without warranty of any kind,
// express or implied, including but not limited to the warranties
// of merchantability, fitness for a particular purpose, and
// noninfringement. In no event shall the author(s) be liable for any
// claim, damages, or other liability, whether in an action of
// contract, tort, or otherwise, arising from, out of, or in connection
// with the software or the use or other dealings in the software.
// 
// SUPPORT
// Send bug reports to: <nielsen@memberwebs.com>
//


#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <tchar.h>
#include <winioctl.h>

// Get first CD-ROM Drive letter
TCHAR GetCDROM()
{
	TCHAR buff[4];
	TCHAR i;

	_tcscpy(buff, "X:\\");

	for(i = _T('A'); i <= _T('Z'); i++)
	{
		buff[0] = i;
		if(GetDriveType(buff) == DRIVE_CDROM)
			return i;
	}

	return 0;
}

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{

	TCHAR buff[7];
	HANDLE hDevice;

	// Create a CD-ROM drive string
	_tcscpy(buff, "\\\\.\\X:");
	buff[4] = GetCDROM();

	if(buff[4] == 0)
	{
		MessageBox(NULL, _T("No CD-ROM drives found on system."), _T("Eject"), MB_OK | MB_ICONSTOP);
		return 2;
	}

	// Open the CD device
	hDevice = CreateFile(buff, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, 
						 NULL, OPEN_EXISTING, 0, NULL);
    
	if(hDevice != INVALID_HANDLE_VALUE)
	{
		DWORD code = IOCTL_STORAGE_EJECT_MEDIA;
		DWORD bytesRet = 0;

		// If specified with the '-load' parameter then load 
		// the drive rather than eject
		if(strstr(lpCmdLine, "-load"))
			code = IOCTL_STORAGE_LOAD_MEDIA;

		DeviceIoControl(hDevice, code, NULL, 0, NULL, 0, &bytesRet, NULL);
	}

	return 0;
}



