// rea decompile_all
// name: FUN_004b8d5c
// address: 0x4b8d5c
// body: available
// range: 0x4b8d5c-0x4b8e16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004b8d5c(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 in_ZF;
  undefined4 uVar7;

  uVar3 = FUN_00408640(param_2,*(undefined4 *)(param_1 + 0x20));
  if (!(bool)in_ZF) {
    FUN_00407eb8(param_1 + 0x20,param_2);
    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2b4) == '\0') {
      uVar7 = 0xffffffff;
      uVar4 = FUN_004b920c(param_1);
      uVar5 = FUN_004b8b7c(param_1);
      FUN_0040faa4(uVar5,uVar4,0,uVar7);
    }
    FUN_004b8b50(param_1);
    cVar2 = FUN_004bbe00();
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      iVar6 = FUN_004b8b50(param_1);
      bVar1 = 0 < *(int *)(*(int *)(*(int *)(iVar6 + 0x2ac) + 8) + 8);
    }
    if (bVar1) {
      uVar4 = FUN_004b8b50(param_1);
      iVar6 = FUN_004bdc68(uVar4,0);
      if (0x7fffffff < *(uint *)(iVar6 + 0x24)) {
        FUN_004b8b50(param_1);
        FUN_004be22c();
      }
    }
    iVar6 = FUN_004b8b50(param_1);
    uVar3 = (uint)(byte)(*(char *)(iVar6 + 0x299) - 4);
    if ((byte)(*(char *)(iVar6 + 0x299) - 2U) < 2) {
      FUN_004b8b50(param_1);
      uVar3 = FUN_004bd920();
    }
  }
  return uVar3;
}
