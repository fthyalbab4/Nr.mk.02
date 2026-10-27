// rea decompile_all
// name: FUN_005bff40
// address: 0x5bff40
// body: available
// range: 0x5bff40-0x5bffed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bff40(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;

  iVar1 = param_2[2];
  local_10 = param_2[6] * iVar1 * 0x80;
  iVar4 = 0;
  while( true ) {
    if (param_2[4] <= iVar4) {
      return;
    }
    if (param_2[5] < param_2[4] - iVar4) {
      iVar2 = param_2[5];
    }
    else {
      iVar2 = param_2[4] - iVar4;
    }
    iVar3 = param_2[6] + iVar4;
    if (param_2[7] - iVar3 <= iVar2) {
      iVar2 = param_2[7] - iVar3;
    }
    if (param_2[1] - iVar3 <= iVar2) {
      iVar2 = param_2[1] - iVar3;
    }
    if (iVar2 < 1) break;
    iVar2 = iVar2 * iVar1 * 0x80;
    if (param_3 == 0) {
      (*(code *)param_2[0xc])
                (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar4 * 4),iVar2,local_10);
    }
    else {
      (*(code *)param_2[0xd])
                (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar4 * 4),iVar2,local_10);
    }
    local_10 = local_10 + iVar2;
    iVar4 = iVar4 + param_2[5];
  }
  return;
}
