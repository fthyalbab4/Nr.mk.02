// rea decompile_all
// name: FUN_007006f8
// address: 0x7006f8
// body: available
// range: 0x7006f8-0x70087f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x700711 (push 0x700880 followed by fs-segment stack chaining); handler 0x700880 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007006f8(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LPCWSTR lpDirectory;
  LPCWSTR lpParameters;
  LPCWSTR lpFile;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  INT nShowCmd;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_00700880;
  puStack_34 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  uVar3 = FUN_004524c4(&DAT_004512d4,1,0x100);
  FUN_00452568(uVar3,0x80000002);
  uVar4 = FUN_004524c4(&DAT_004512d4,1,0x100);
  FUN_00452568(uVar4,0x80000001);
  FUN_00407f0c(&local_8,L"\\Software\\GM81");
  FUN_00407f0c(&local_c,L"\\Software\\GameMaker81");
  cVar2 = FUN_004539f4(uVar4,local_8);
  if ((cVar2 == '\0') && (cVar2 = FUN_004539f4(uVar3,local_8), uVar4 = uVar3, cVar2 == '\0')) {
    cVar2 = FUN_004539f4(uVar3,local_c);
    if (cVar2 == '\0') goto LAB_00700865;
    FUN_00407f0c(&local_8,local_c);
  }
  FUN_004527e4(uVar4,local_8);
  FUN_004530e0(uVar4,L"Install_Dir",&local_10);
  FUN_0040839c(&local_14,local_10,L"\\GameMaker.exe");
  FUN_00407f0c(&local_18,L"--YYGMParams=");
  iVar5 = FUN_004046c8();
  if (0 < iVar5) {
    iVar6 = 1;
    do {
      FUN_00404728(iVar6,&local_1c);
      puStack_34 = &DAT_007009dc;
      FUN_00408480(&local_18,4);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00407f0c(&local_18,local_18);
  nShowCmd = 1;
  lpDirectory = (LPCWSTR)FUN_00407f44(local_10);
  lpParameters = (LPCWSTR)FUN_00407f44(local_18);
  lpFile = (LPCWSTR)FUN_00407f44(local_14);
  ShellExecuteW((HWND)0x0,L"open",lpFile,lpParameters,lpDirectory,nShowCmd);
LAB_00700865:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = puStack_34;
  puStack_2c = &LAB_00700887;
  puStack_30 = (undefined1 *)0x70087f;
  thunk_FUN_00406e80(&local_1c,6,puVar1);
  return;
}
