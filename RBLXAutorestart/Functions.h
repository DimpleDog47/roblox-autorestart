#pragma once
#include "Includes.h"

class Functions
{
public:
	void Log(const std::string& text, bool error = false);
	void Debounce(int t, int c);
	void CreateConfig();
	void KillProccess(const char* pname);
	void RunBrowsers();
	void KillBrowsers();
	void LockWindow();
	bool FindString(const char* a, const char* b);
	int CountInstances();
	bool IsProcessRunning(const TCHAR* const executableName);
	bool IsNumber(const std::string& s);
	double WindowsDeployment();
	void wait(int ms);
	void _usleep(int microseconds);
	std::vector<std::string> Browsers = {};
	std::string VIP = "";
	int RestartTime = 0;
	bool OnlyVIP = false;
	bool SafeMode = false;
	bool MinimizeRoblox = true;
	bool DetectErrors = true;
	bool DetectSynapse = false;
};

class Roblox
{
public:
	void Unlock();
	bool FindError();
	void Kill();
	void Minimize(const char* pname);
	bool FindRoblox();
};
