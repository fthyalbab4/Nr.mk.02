// rea decompile_all
// name: FUN_005a2a30
// address: 0x5a2a30
// body: available
// range: 0x5a2a30-0x5a2b24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2a30(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;

  FUN_00404f08(*param_3,param_4,0);
  if (*(char *)(param_1 + 9) != '\0') {
    pbVar3 = (byte *)*param_2;
    iVar2 = param_5;
    do {
      *pbVar3 = (&DAT_0077c7f4)[*pbVar3];
      pbVar3 = pbVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = param_5;
  *(int *)(param_1 + 0x28) = *param_3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x2c) = 8;
LAB_005a2aa5:
  FUN_005a2978();
  *(undefined1 *)(param_1 + 8) = 1;
  do {
    if (*(char *)(param_1 + 8) == '\0') {
      iVar2 = FUN_005a25f4(param_1);
    }
    else {
      iVar2 = FUN_005a2680(param_1);
    }
    if (iVar2 < 0) {
      if (iVar2 != -1) break;
    }
    else {
      cVar1 = FUN_005a2500(param_1,iVar2);
      if (cVar1 != '\0') break;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) ^ 1;
    }
    if ((iVar2 == -1) || (*(int *)(param_1 + 0x1c) == 0)) break;
  } while( true );
  FUN_005a29ec();
  if ((*(int *)(param_1 + 0x1c) == 0) || (param_4 <= *(int *)(param_1 + 0x28) - *param_3)) {
    return;
  }
  goto LAB_005a2aa5;
}
