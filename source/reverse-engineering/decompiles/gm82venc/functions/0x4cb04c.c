// rea decompile_all
// name: FUN_004cb04c
// address: 0x4cb04c
// body: available
// range: 0x4cb04c-0x4cb125 inclusive
// range: 0x4cb12d-0x4cb135 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cb08a (push 0x4cb126 followed by fs-segment stack chaining); handler 0x4cb126 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cb04c(int param_1,int param_2,int param_3,char param_4,int param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    if (param_4 != '\0') {
      *(undefined1 *)(iVar2 + 0x178) = 1;
      *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) | 0x4000;
    }
    puStack_20 = &LAB_004cb126;
    iStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_24;
    piVar3 = *(int **)(param_1 + 4);
    if ((*(byte *)((int)piVar3 + 0x52) & 0x10) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = piVar3[0xd] != 0;
    }
    if (bVar4) {
      param_5 = param_5 - (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
      puStack_1c = &stack0xfffffffc;
      (**(code **)(*piVar3 + 0x98))
                (piVar3,*(int *)(param_1 + 8) + param_2,*(int *)(param_1 + 0xc) + param_3,param_5,
                 param_6 - (*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)));
    }
    else {
      (**(code **)(*piVar3 + 0x98))(piVar3,param_2,param_3,param_5,param_6);
    }
    *in_FS_OFFSET = param_5;
    if (param_4 != '\0') {
      iVar2 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar2 + 0x178) = 0;
      puVar1 = (uint *)(iVar2 + 0x54);
      *puVar1 = *puVar1 & 0xffffbfff;
    }
    return;
  }
  return;
}
