/*



 */

#include <fncall.h>
#include <cf3.defs.h>

int IsExecutable(const char *file)
{
  //MAla
}

void CloseLog(void)
{
  //MAla
}

void OpenLog(int facility)
{
  //MAla
}

void OpenNetwork(void)
{
  //MAla
}

void CloseNetwork(void)
{
  //MAla
}

int NovaWin_GetWinDir(char *winDir, int winDirSz)
{
  //MAla
}

int NovaWin_GetSysDir(char *sysDir, int sysDirSz)
{
  //MAla
}

int NovaWin_GetProgDir(char *progDir, int progDirSz)
{
  //MAla
}

int NovaWin_GetEnv(char *varName, char *varContents, int varContentsSz)
{
  //MAla
}

int NovaWin_FileExists(const char *fileName)
{
  //MAla
}

int NovaWin_IsDir(char *fileName)
{
  //MAla
}

int NovaWin_PackageListInstalledFromAPI(EvalContext *ctx, PackageItem ** pkgList, Attributes a, Promise *pp)
{
  //MAla
}

const char *GetDefaultWorkDir(void)
{
  //MAla
}

const char *GetDefaultLogDir(void)
{
  //MAla
}

const char *GetDefaultPidDir(void)
{
  //MAla
}

const char *GetDefaultMasterDir(void)
{
  //MAla
}

const char *GetDefaultInputDir(void)
{
  //MAla
}

FnCallResult FnCallUserExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
}

FnCallResult FnCallGroupExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
}

off_t GetDiskUsage(char *file, CfSize type)
{
  //MAla
}

void InitializeWindows(void)
{
  //MAla
}

void CreateEmptyFile(char *name)
{
  //MAla
}

int LoadProcessTable()
{
  //MAla
}

bool ShellCommandReturnsZero(void)
{
  //MAla
}

int CopyACLs(ARG_UNUSED const char *src, ARG_UNUSED const char *dst)
{
  return true;
}

int ExclusiveLockFile(int fd)
{
  return true;
}

int ExclusiveUnlockFile(int fd)
{
  return true;
}
bool BootstrapAllowed(void)
{
  //MAla
}
