// rea decompile_all
// name: FUN_0068ddd0
// address: 0x68ddd0
// body: available
// range: 0x68ddd0-0x68de52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68ddea (push 0x68de53 followed by fs-segment stack chaining); handler 0x68de53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068ddd0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_28 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  uStack_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_0068de53;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *(undefined1 *)(param_1 + 0x1660) = 0;
  iVar2 = FUN_006588c4(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x1648),
                       *(undefined4 *)(param_1 + 0x164c));
  if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(param_1 + 0x61c) + 0x2f0))) {
    FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),iVar2,&local_1c);
    FUN_0062cde0(local_14);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0068de5a;
  puStack_2c = (undefined1 *)0x68de52;
  FUN_00408df4(&local_1c,&DAT_00656108,puVar1);
  return;
}
