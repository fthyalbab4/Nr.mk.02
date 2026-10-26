// rea decompile_all
// name: FUN_00552d3c
// address: 0x552d3c
// body: available
// range: 0x552d3c-0x552e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00552d3c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *local_10;
  int local_c;

  local_c = param_2;
  if (param_3 < param_4) {
    iVar2 = FUN_00552bf0(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    local_c = *(int *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  param_3 = param_3 - param_4;
  uVar3 = local_c >> ((byte)param_3 & 0x1f) & (1 << ((byte)param_4 & 0x1f)) - 1U;
  local_10 = (int *)(param_5 + param_4 * 4);
  do {
    if ((int)uVar3 <= *local_10) {
      *(int *)(param_1 + 8) = local_c;
      *(int *)(param_1 + 0xc) = param_3;
      if (param_4 < 0x11) {
        uVar3 = (uint)*(byte *)(*(int *)(param_5 + 0x8c) + uVar3 + 0x11 +
                               *(int *)(param_5 + 0x48 + param_4 * 4));
      }
      else {
        piVar1 = *(int **)(param_1 + 0x10);
        *(undefined4 *)(*piVar1 + 0x14) = 0x76;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        uVar3 = 0;
      }
      return uVar3;
    }
    if (param_3 < 1) {
      iVar2 = FUN_00552bf0(param_1,local_c,param_3,1);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      local_c = *(int *)(param_1 + 8);
      param_3 = *(int *)(param_1 + 0xc);
    }
    param_3 = param_3 + -1;
    uVar3 = uVar3 * 2 | local_c >> ((byte)param_3 & 0x1f) & 1U;
    param_4 = param_4 + 1;
    local_10 = local_10 + 1;
  } while( true );
}
