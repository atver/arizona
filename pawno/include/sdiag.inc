//SDiag by Nexius v1.0

#if defined _sdiag_included
	#endinput
#endif
#define _sdiag_included

#include <a_samp>

#define SDIAG_VERSION		"1.0"

static bool:sdiag_IsFilterscript;

public OnFilterScriptInit()
{
	sdiag_IsFilterscript = true;

	#if !defined FILTERSCRIPT
		print("[SDiag: FS] One of your filterscripts doesn't have FILTERSCRIPT define");
	#endif

	if(MAX_PLAYERS != GetMaxPlayers()) print("[SDiag: FS] Your MAX_PLAYERS define isn't equal to the real number of player slots");

	new strtmp[10];
	GetServerVarAsString("version", strtmp, sizeof strtmp);
	if(strfind(strtmp, "0.3.7") != -1)
	{
		#if !defined OnVehicleSirenStateChange
			print("[SDiag: FS] The SA-MP includes version doesn't match with the server version. Please update them");
		#else
			if(!strcmp(strtmp, "0.3.7-R2") || !strcmp(strtmp, "0.3.7-R3"))
			{
				#if !defined GetConsoleVarAsInt
					print("[SDiag: FS] The SA-MP includes version doesn't match with the server version. Please update them");
				#endif
			}
		#endif
	}
	else if(strfind(strtmp, "0.3.DL") != -1)
	{
		#if !defined GetPlayerCustomSkin
			print("[SDiag: FS] The SA-MP includes version doesn't match with the server version. Please update them");
		#endif
	}

	#if defined sdiag_OnFilterScriptInit
		return sdiag_OnFilterScriptInit();
	#else
		return 1;
	#endif
}

#if defined _ALS_OnFilterScriptInit
	#undef OnFilterScriptInit
#else
	#define _ALS_OnFilterScriptInit
#endif
#define OnFilterScriptInit sdiag_OnFilterScriptInit
#if defined sdiag_OnFilterScriptInit
	forward sdiag_OnFilterScriptInit();
#endif

public OnGameModeInit()
{
	if(!sdiag_IsFilterscript)
	{
		if(GetTickCount() < 0) print("[SDiag: GM] GetTickCount is less than 0. Please restart your computer");

		if(MAX_PLAYERS != GetMaxPlayers()) print("[SDiag: GM] Your MAX_PLAYERS define isn't equal to the real number of player slots");

		new strtmp[10];
		GetServerVarAsString("version", strtmp, sizeof strtmp);
		if(strfind(strtmp, "0.3.7") != -1)
		{
			#if !defined OnVehicleSirenStateChange
				print("[SDiag: GM] The SA-MP includes version doesn't match with the server version. Please update them");
			#else
				if(!strcmp(strtmp, "0.3.7-R2") || !strcmp(strtmp, "0.3.7-R3"))
				{
					#if !defined GetConsoleVarAsInt
						print("[SDiag: GM] The SA-MP includes version doesn't match with the server version. Please update them");
					#endif
				}
			#endif
		}
		else if(strfind(strtmp, "0.3.DL") != -1)
		{
			#if !defined GetPlayerCustomSkin
				print("[SDiag: GM] The SA-MP includes version doesn't match with the server version. Please update them");
			#endif
		}

		new File:fhandle = fopen("sdiag_testfile.txt");
		if(!fhandle) print("[SDiag: GM] Your scriptfiles folder isn't created or you don't have access to it (some scripts may not work correctly)");
		else
		{
			fclose(fhandle);
			fremove("sdiag_testfile.txt");
		}
	}
	#if defined sdiag_OnGameModeInit
		return sdiag_OnGameModeInit();
	#else
		return 1;
	#endif
}

#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif
#define OnGameModeInit sdiag_OnGameModeInit
#if defined sdiag_OnGameModeInit
	forward sdiag_OnGameModeInit();
#endif
