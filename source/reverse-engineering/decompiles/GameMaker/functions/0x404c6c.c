// rea decompile_all
// name: FUN_00404c6c
// address: 0x404c6c
// body: available
// range: 0x404c6c-0x404cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00404c6c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 code *param_5,uint param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;

  local_8 = param_3;
  if (param_6 == (*(ushort *)(param_1 + 1) & param_6)) {
    iVar1 = (*param_5)(*param_1,(int)((ulonglong)
                                      ((longlong)(int)param_1[2] * (longlong)(int)param_3) >> 0x20),
                       param_3,*param_1,param_2,
                       (int)((longlong)(int)param_1[2] * (longlong)(int)param_3),&local_8,0);
    if (iVar1 == 0) {
      GetLastError();
      FUN_004044a4();
      local_8 = 0;
    }
    else {
      uVar2 = local_8 / (uint)param_1[2];
      uVar3 = local_8 % (uint)param_1[2];
      local_8 = uVar2;
      if (param_7 == (uint *)0x0) {
        if (param_3 != uVar2) {
          FUN_004044a4(param_4,uVar3);
          local_8 = 0;
        }
      }
      else {
        *param_7 = uVar2;
      }
    }
  }
  else {
    FUN_004044a4(0x67);
    local_8 = 0;
  }
  return local_8;
}
