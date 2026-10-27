// rea decompile_all
// name: FUN_007504fc
// address: 0x7504fc
// body: available
// range: 0x7504fc-0x7505f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007504fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;

  pcVar2 = (char *)(param_4 + -0x1a);
  piVar3 = (int *)(param_4 + -0x10);
  pcVar4 = (char *)(param_4 + -1);
  **(undefined1 **)(param_4 + -0x18) = 0;
  *pcVar4 = '\0';
  *pcVar2 = '\0';
  while( true ) {
    FUN_007504b8(param_4,param_2,param_3);
    if ((*pcVar2 != '\0') && (*pcVar4 == '\0')) {
      *pcVar2 = '\0';
    }
    if (*(char *)*piVar3 == '$') {
      **(undefined1 **)(param_4 + -0x18) = 1;
      goto LAB_007505d1;
    }
    if (*(char *)*piVar3 != '@') goto LAB_007505d1;
    if (*(char *)(*piVar3 + 1) == '\0') {
      **(undefined1 **)(param_4 + -0x18) = 5;
      goto LAB_007505d1;
    }
    if (*(char *)(*piVar3 + 1) == '$') break;
    FUN_007503b0(param_4,extraout_EDX,param_4);
    **(undefined1 **)(param_4 + -8) = 0x2e;
    *(int *)(param_4 + -8) = *(int *)(param_4 + -8) + 1;
    *piVar3 = *piVar3 + 1;
    param_3 = param_4;
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(*piVar3 + 2) == 'b') {
    if (*(char *)(*piVar3 + 3) == 'c') {
      **(undefined1 **)(param_4 + -0x18) = 2;
    }
    else if (*(char *)(*piVar3 + 3) == 'd') {
      **(undefined1 **)(param_4 + -0x18) = 3;
    }
    *piVar3 = *piVar3 + 6;
  }
  else {
    **(undefined1 **)(param_4 + -0x18) = 1;
  }
LAB_007505d1:
  if (*pcVar4 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_4 + -0x18) + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  if (*pcVar2 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_4 + -0x18) + 1);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}
