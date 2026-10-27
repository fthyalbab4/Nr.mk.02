// rea decompile_all
// name: FUN_00676cb4
// address: 0x676cb4
// body: available
// range: 0x676cb4-0x676d3b inclusive
// range: 0x676d43-0x676d47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x676cf5 (push 0x676d3c followed by fs-segment stack chaining); handler 0x676d3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676cb4(int *param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (param_2 != *(char *)((int)param_1 + 0x28f)) {
    *(char *)((int)param_1 + 0x28f) = param_2;
    puStack_14 = (undefined1 *)0x676cdc;
    iVar2 = (**(code **)(*param_1 + 0x130))();
    if (0 < iVar2) {
      *(short *)(param_1 + 0x6b) = (short)param_1[0x6b] + 1;
      puStack_18 = &LAB_00676d3c;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      iVar2 = (**(code **)(*param_1 + 0x130))();
      if (-1 < iVar2 + -1) {
        iVar4 = 0;
        do {
          piVar3 = (int *)(**(code **)(*param_1 + 0x124))(param_1,iVar4);
          (**(code **)(*piVar3 + 0xf8))();
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x676d43;
      puStack_18 = (undefined1 *)0x676d3b;
      FUN_004f2c1c(param_1,uStack_1c,puVar1);
      return;
    }
  }
  return;
}
