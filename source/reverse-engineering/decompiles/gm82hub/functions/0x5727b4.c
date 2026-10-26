// rea decompile_all
// name: FUN_005727b4
// address: 0x5727b4
// body: available
// range: 0x5727b4-0x572835 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5727d8 (push 0x572836 followed by fs-segment stack chaining); handler 0x572836 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005727b4(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x5727cd;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_00572836;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = -1;
  puStack_20 = &stack0xfffffffc;
  iVar2 = local_c;
  if (-1 < DAT_00686ab8 + -1) {
    iVar5 = 0;
    uVar6 = true;
    puVar3 = &DAT_00845324;
    iVar4 = DAT_00686ab8;
    puStack_20 = &stack0xfffffffc;
    do {
      FUN_00408508(&local_10,puVar3);
      FUN_0040891c(local_10,local_8);
      iVar2 = iVar5;
      if ((bool)uVar6) break;
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 0x50;
      iVar4 = iVar4 + -1;
      uVar6 = iVar4 == 0;
      iVar2 = local_c;
    } while (!(bool)uVar6);
  }
  local_c = iVar2;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0057283d;
  puStack_24 = (undefined1 *)0x57282d;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x572835;
  thunk_FUN_004072d8(&local_8);
  return;
}
