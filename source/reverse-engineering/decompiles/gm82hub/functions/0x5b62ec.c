// rea decompile_all
// name: FUN_005b62ec
// address: 0x5b62ec
// body: available
// range: 0x5b62ec-0x5b6376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b62ec(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;

  *(undefined4 *)(param_1 + 0x398) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  iVar4 = 1;
  piVar3 = &DAT_0084f048;
  do {
    piVar2 = (int *)FUN_005b599c(&PTR_FUN_005b54d8,1,DAT_0084f044);
    *piVar3 = (int)piVar2;
    (**(code **)(*piVar2 + 0x78))(piVar2,DAT_0084f044);
    iVar1 = *piVar3;
    *(int *)(iVar1 + 0xc) = iVar4;
    FUN_005b5744(iVar1,*(undefined4 *)(param_1 + 0x390));
    iVar1 = *piVar3;
    *(int *)(iVar1 + 0x114) = param_1;
    *(undefined1 **)(iVar1 + 0x110) = &LAB_005b62d4;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 != 4);
  return;
}
