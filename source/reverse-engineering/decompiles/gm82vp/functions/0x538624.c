// rea decompile_all
// name: FUN_00538624
// address: 0x538624
// body: available
// range: 0x538624-0x538754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00538624(int param_1,char param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID lpBaseAddress;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  DWORD DVar4;
  DWORD dwDesiredAccess;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  iVar1 = FUN_00416988(param_3,param_4);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == -1) {
    FUN_0041ebf4();
  }
  if ((param_4 & 0xf) == 2) {
    DVar4 = 8;
    dwDesiredAccess = 1;
  }
  else {
    DVar4 = 2;
    dwDesiredAccess = 4;
  }
  pvVar2 = CreateFileMappingW(*(HANDLE *)(param_1 + 0x10),(LPSECURITY_ATTRIBUTES)0x0,DVar4,0,0,
                              (LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x14) = pvVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00538784(param_1);
    FUN_00533670(&LAB_00538374,1,PTR_LAB_00688eec);
    FUN_00406ab4();
  }
  lpBaseAddress = MapViewOfFile(*(HANDLE *)(param_1 + 0x14),dwDesiredAccess,0,0,0);
  if (lpBaseAddress == (LPVOID)0x0) {
    FUN_00538784(param_1);
    FUN_00533670(&LAB_00538424,1,PTR_LAB_00689428);
    FUN_00406ab4();
  }
  DVar4 = GetFileSize(*(HANDLE *)(param_1 + 0x10),(LPDWORD)0x0);
  if (DVar4 == 0xffffffff) {
    UnmapViewOfFile(lpBaseAddress);
    FUN_00538784(param_1);
    FUN_00533670(&LAB_00538424,1,PTR_LAB_00689214);
    DVar4 = FUN_00406ab4();
  }
  FUN_0043d3f4(param_1,lpBaseAddress,DVar4);
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}
