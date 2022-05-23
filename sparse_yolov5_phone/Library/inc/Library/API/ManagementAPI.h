#pragma once

namespace Library
{
namespace API
{
/*
	Note : 
		ManagementAPI Ŭ������ Ȱ���ϱ� ���ؼ��� 
		WindowProfile::Initialize(string)�� ������ ȣ���� �־���մϴ�.
*/
class ManagementAPI
{
public:
	// Control Panel Appearance setting functions.
	static bool DisableAllControlPanels(array<string> astrExceptIDs);
	static bool DisablecontrolPanelsXpStyle(array<string> astrCpls);
	static bool DisableDisplaySetting();

	static bool HideNetworkIcon();
	
	// �������� ǥ�� ���� ����.
	static bool SetupFolderHideOption(bool fHide);
	
	// #4460. [�� BlueTooth ȯ��] ������ ����.
	static void DeleteBluetoothIcon();

	static void DisableRecycleBin();
	static void DisableRecycleBinProperty();
	static void SetRecycleBinMaxCapacity(string strDrive, DWORD dwMaxCapacity, bool fSharedHDD = false);
	
	// ����ȭ�� ������Ʈ Ű ����
	static void CreateDesktopUpdateKey();

	// ���� �޴� ��ġ �� ������ ����
	static void DisablePrintMenuOnStart();

	static void RemoveLinkFolderOfUser();
	static void DeleteLibrariesAndLinksOfUser();

	static void SetShowNetworkList(bool fShow);
	static void SetShowHomegroupList(bool fShow);
	static void SetShowPersonalFolder(bool fShow);
	static void SetShowFavorites(bool fShow);
	static void SetShowLibraries(bool fShow);

	// win10
	static void SetEnableOneDrive(bool fEnable);
	static void SetShowQuickAccessList(bool fShow);
	static void RemoveThisPCLinks(array<string> astrExceptLinks);
	static void Remove3DObjectFolder();

	// #16107. Hide win10 GameBar panel.
	static void HideGameBarPanel();

	// explorer runas ����
	static void DisableExplorerRunAs();

	// packageApps disable
	static void EnableBlockPackageApps();
	static void DisableBlockPackageApps();
	static bool IsBlockedPackageApps();

	// printer
	static void UninstallVirtualPrinter();
	static void UninstallVirtualPrinterOldVersion();

	// safe mode
	static bool IsSafeBootMode();

private:
	static bool LoadMUIString(HKEY hKey, string strName, string& strValue, string strDirectory);
	static array<string> GetAllControlPanelNames(array<string> astrExceptIDs);
	static string GetVolumeGUID(string strDrive);
	static string GetSystemVolumeGUID();

	static bool SetGroupPolicy(string strPolicyPath);
	static bool ResetGroupPolicy(string strPolicyPath, string strLocalPolicyPath);
};

}
}