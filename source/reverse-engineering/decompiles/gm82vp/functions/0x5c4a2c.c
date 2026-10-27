// rea decompile_all
// name: FUN_005c4a2c
// address: 0x5c4a2c
// body: available
// range: 0x5c4a2c-0x5c4b45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005c4a2c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  while( true ) {
    if (param_4 <= param_3) {
      return param_3;
    }
    if (param_4 < param_3 * 2) {
      piVar1 = (int *)FUN_005c4634(param_2,param_3);
    }
    else {
      piVar1 = (int *)FUN_005c4608(param_2,param_3);
    }
    if (piVar1 == (int *)0x0) break;
    piVar5 = (int *)(param_3 * 0x20 + param_2);
    piVar5[1] = piVar1[1];
    piVar5[3] = piVar1[3];
    piVar5[5] = piVar1[5];
    *piVar5 = *piVar1;
    piVar5[2] = piVar1[2];
    piVar5[4] = piVar1[4];
    iVar3 = (piVar1[3] - piVar1[2]) * 0xc;
    iVar4 = (piVar1[5] - piVar1[4]) * 0x10;
    iVar2 = 1;
    if (iVar3 < iVar4) {
      iVar2 = 2;
      iVar3 = iVar4;
    }
    if (iVar3 < (piVar1[1] - *piVar1) * 8) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar4 = piVar1[1] + *piVar1 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((piVar1[1] + *piVar1 & 1U) != 0);
      }
      piVar1[1] = iVar4;
      *piVar5 = iVar4 + 1;
    }
    else if (iVar2 == 1) {
      iVar4 = piVar1[3] + piVar1[2] >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((piVar1[3] + piVar1[2] & 1U) != 0);
      }
      piVar1[3] = iVar4;
      piVar5[2] = iVar4 + 1;
    }
    else if (iVar2 == 2) {
      iVar4 = piVar1[5] + piVar1[4] >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((piVar1[5] + piVar1[4] & 1U) != 0);
      }
      piVar1[5] = iVar4;
      piVar5[4] = iVar4 + 1;
    }
    FUN_005c465c(param_1,piVar1);
    FUN_005c465c(param_1,piVar5);
    param_3 = param_3 + 1;
  }
  return param_3;
}
