// rea decompile_all
// name: FUN_004054e0
// address: 0x4054e0
// body: available
// range: 0x4054e0-0x4055bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004054e0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  DWORD dwDesiredAccess;
  HANDLE pvVar2;
  DWORD DVar3;
  DWORD dwCreationDisposition;

  if (*(ushort *)(param_1 + 1) != 0xd7b0) {
    if (3 < *(ushort *)(param_1 + 1) - 0xd7b0) {
      DVar3 = 0x66;
      goto LAB_004055b5;
    }
    iVar1 = (*(code *)param_1[9])();
    if (iVar1 != 0) {
      FUN_004044ac();
    }
  }
  *(undefined2 *)(param_1 + 1) = 0xd7b3;
  param_1[2] = param_2;
  param_1[9] = &LAB_004054b8;
  param_1[7] = &LAB_004049c0;
  if (*(short *)(param_1 + 0x12) == 0) {
    param_1[9] = &LAB_004049c0;
    if (param_3 == 3) {
      DVar3 = 0xfffffff5;
    }
    else {
      DVar3 = 0xfffffff6;
    }
    pvVar2 = GetStdHandle(DVar3);
  }
  else {
    dwDesiredAccess = 0xc0000000;
    DVar3 = *(DWORD *)(&DAT_0067c7a0 + ((DAT_0067c00c & 0x70) >> 2));
    dwCreationDisposition = 2;
    if ((param_3 != 3) && (dwCreationDisposition = 3, param_3 != 2)) {
      dwDesiredAccess = 0x40000000;
      *(undefined2 *)(param_1 + 1) = 0xd7b2;
      if (param_3 != 1) {
        dwDesiredAccess = 0x80000000;
        *(undefined2 *)(param_1 + 1) = 0xd7b1;
      }
    }
    pvVar2 = CreateFileW((LPCWSTR)(param_1 + 0x12),dwDesiredAccess,DVar3,(LPSECURITY_ATTRIBUTES)0x0,
                         dwCreationDisposition,0x80,(HANDLE)0x0);
  }
  if (pvVar2 != (HANDLE)0xffffffff) {
    *param_1 = pvVar2;
    return;
  }
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  DVar3 = GetLastError();
LAB_004055b5:
  FUN_004044ac(DVar3);
  return;
}
