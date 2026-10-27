// rea decompile_all
// name: FUN_006ddc10
// address: 0x6ddc10
// body: available
// range: 0x6ddc10-0x6ddd45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ddc2a (push 0x6ddd46 followed by fs-segment stack chaining); handler 0x6ddd46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ddc10(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_006ddd46;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_0041666c(param_1 / 10,&local_c,10,L"page",DAT_00790108);
  FUN_0041666c(param_1 % 10,&local_10,10,local_c);
  uVar2 = local_10;
  FUN_00408480(&local_8,5);
  FUN_00408144(&local_14,local_8);
  FUN_005de458(*(undefined4 *)(DAT_00790100 + 0x610),local_14);
  FUN_004ee5c0(*(undefined4 *)(DAT_00790100 + 0x600),1 < param_1);
  FUN_0041666c((param_1 + 1) / 10,&local_18,10,L"page",DAT_00790108,uVar2);
  uVar2 = local_18;
  FUN_0041666c((param_1 + 1) % 10,&local_1c);
  FUN_00408480(&local_8,5);
  uVar1 = FUN_00416e40(local_8);
  FUN_004ee5c0(*(undefined4 *)(DAT_00790100 + 0x604),uVar1);
  _DAT_0077f460 = param_1;
  *in_FS_OFFSET = L".html";
  thunk_FUN_00406e80(&local_1c,2,uVar2,&LAB_006ddd4d);
  FUN_00407a78(&local_14);
  thunk_FUN_00406e80(&local_10,3);
  return;
}
