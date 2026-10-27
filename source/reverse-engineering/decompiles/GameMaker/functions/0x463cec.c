// rea decompile_all
// name: FUN_00463cec
// address: 0x463cec
// body: available
// range: 0x463cec-0x463d83 inclusive
// range: 0x463d9c-0x463dbf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463d60 (push 0x463d84 followed by fs-segment stack chaining); handler 0x463d84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463cec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 local_5c [21];
  undefined4 local_8;

  bVar5 = 0;
  iVar1 = param_1[10];
  if (param_2 != *(int *)(iVar1 + 0x10)) {
    if ((param_2 == 0) && (*(int *)(iVar1 + 4) == 1)) {
      puStack_6c = (undefined4 *)0x463d19;
      FUN_00459a80(*(undefined4 *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      puStack_6c = (undefined4 *)0x463d27;
      FUN_00462ef0(param_1);
      puStack_6c = (undefined4 *)0x463d2e;
      FUN_00462f00(param_1);
      puVar3 = (undefined4 *)(iVar1 + 0x18);
      puVar4 = local_5c;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puStack_6c = local_5c;
      uStack_70 = 0;
      puStack_74 = (undefined1 *)0x463d52;
      local_8 = FUN_00461870(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),param_2);
      puStack_78 = &LAB_00463d84;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      uVar6 = 0;
      puStack_74 = &stack0xfffffffc;
      FUN_00463324(param_1,local_8,param_2,0,*(undefined1 *)(iVar1 + 0x71),local_5c);
      *in_FS_OFFSET = uVar6;
    }
    FUN_00461768(*(undefined4 *)(param_1[10] + 0x14),param_2,param_1[10] + 0x18);
    *(undefined1 *)((int)param_1 + 0x22) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}
