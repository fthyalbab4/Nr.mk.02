// rea decompile_all
// name: FUN_0052a448
// address: 0x52a448
// body: available
// range: 0x52a448-0x52a4f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052a448(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;

  if ((param_1 == (int *)0x0) || (param_1[7] == 0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    piVar1 = (int *)param_1[7];
    if (*piVar1 != 0xd) {
      *piVar1 = 0xd;
      piVar1[1] = 0;
    }
    iVar5 = param_1[1];
    if (iVar5 == 0) {
      uVar3 = 0xfffffffb;
    }
    else {
      pcVar6 = (char *)*param_1;
      uVar4 = *(uint *)(param_1[7] + 4);
      while ((iVar5 != 0 && (uVar4 < 4))) {
        if (*pcVar6 == (&DAT_00779524)[uVar4]) {
          uVar4 = uVar4 + 1;
        }
        else if (*pcVar6 == '\0') {
          uVar4 = 4 - uVar4;
        }
        else {
          uVar4 = 0;
        }
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar5 + -1;
      }
      param_1[2] = (int)(pcVar6 + (param_1[2] - *param_1));
      *param_1 = (int)pcVar6;
      param_1[1] = iVar5;
      *(uint *)(param_1[7] + 4) = uVar4;
      if (uVar4 == 4) {
        iVar5 = param_1[2];
        iVar2 = param_1[5];
        FUN_00529e50(param_1);
        param_1[2] = iVar5;
        param_1[5] = iVar2;
        uVar3 = 0;
        *(undefined4 *)param_1[7] = 7;
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
  }
  return uVar3;
}
