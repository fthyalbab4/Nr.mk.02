// rea decompile_all
// name: FUN_0056793c
// address: 0x56793c
// body: available
// range: 0x56793c-0x567a1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56795f (push 0x567a1f followed by fs-segment stack chaining); handler 0x567a1f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056793c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = (undefined1 *)0x567954;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_00567a1f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00567578(param_1,&local_10);
  FUN_005687b0(param_1,local_10,&local_c);
  FUN_00407eb8(param_1 + 0x2a0,local_8);
  iVar4 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar4 = FUN_00407048(&local_8,local_8);
  }
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = *(undefined4 *)(iVar4 + -4);
  }
  uVar5 = FUN_00566728(*(undefined4 *)(param_1 + 0x2a0),uVar5);
  *(undefined4 *)(param_1 + 0x2a8) = uVar5;
  uVar2 = FUN_00566390(local_8);
  *(undefined1 *)(param_1 + 0x2ac) = uVar2;
  uVar3 = FUN_0056651c(local_8);
  *(undefined2 *)(param_1 + 0x2a4) = uVar3;
  FUN_00568768(param_1,local_c,1,&local_14);
  FUN_00407f0c(&local_c,local_14);
  FUN_00567510(param_1,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00567a26;
  puStack_24 = (undefined1 *)0x567a1e;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
