// rea decompile_all
// name: FUN_005212f0
// address: 0x5212f0
// body: available
// range: 0x5212f0-0x521385 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_005212f0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(DAT_007882f0 + 100);
  if (iVar4 == 0) {
LAB_0052131b:
    iVar3 = *(int *)(param_1 + 0x44);
    if ((iVar4 != iVar3) && (iVar3 != 0)) {
      iVar4 = FUN_004efb90(iVar3,param_2,0,param_3);
      if (iVar4 == 1) goto LAB_0052133b;
    }
    cVar1 = '\0';
  }
  else {
    iVar3 = FUN_004efb90(iVar4,param_2,0,param_3);
    if (iVar3 != 1) goto LAB_0052131b;
LAB_0052133b:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    cVar2 = FUN_00405c98(param_3,&PTR_FUN_00509914);
    if ((((cVar2 != '\0') && (*(char *)(param_3 + 0x6a) != '\0')) &&
        (*(char *)(param_3 + 0x60) != '\0')) && ((*(byte *)(param_3 + 0x1c) & 0x10) == 0)) {
      FUN_0050aef0(param_3,*(short *)(param_3 + 0x42) != 0);
    }
  }
  return cVar1;
}
