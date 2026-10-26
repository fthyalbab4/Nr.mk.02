// rea decompile_all
// name: FUN_00759cd4
// address: 0x759cd4
// body: available
// range: 0x759cd4-0x759d86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x759cf2 (push 0x759d87 followed by fs-segment stack chaining); handler 0x759d87 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00759cd4(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x759ce7;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_18 = &LAB_00759d87;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
    puStack_14 = &stack0xfffffffc;
    iVar3 = FUN_00407078(&local_8,local_8,0);
  }
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + -4);
  }
  FUN_004078e4(param_2,uVar4,0);
  pbVar6 = (byte *)*param_2;
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    iVar3 = FUN_00407078(&local_8,local_8,0);
  }
  puVar1 = puStack_14;
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  if (0 < iVar5) {
    iVar3 = 1;
    do {
      bVar2 = *(byte *)(local_8 + -1 + iVar3);
      if (bVar2 != 0xaa) {
        bVar2 = bVar2 ^ 0xaa;
      }
      *pbVar6 = bVar2;
      pbVar6 = pbVar6 + 1;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00759d8e;
  puStack_18 = (undefined1 *)0x759d86;
  FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
