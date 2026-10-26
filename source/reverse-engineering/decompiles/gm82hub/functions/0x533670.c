// rea decompile_all
// name: FUN_00533670
// address: 0x533670
// body: available
// range: 0x533670-0x53373e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5336a5 (push 0x53373f followed by fs-segment stack chaining); handler 0x53373f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533670(int param_1,char param_2,undefined4 param_3)

{
  DWORD DVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_5;

  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_48 = (undefined1 *)0x533693;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_4c = &LAB_0053373f;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  DVar1 = GetLastError();
  *(DWORD *)(param_1 + 0x18) = DVar1;
  FUN_0041b234(DVar1,&local_c);
  FUN_00408194(param_1 + 0x1c,local_c);
  local_1c = *(undefined4 *)(param_1 + 0x1c);
  local_18 = 0x11;
  local_14 = *(undefined4 *)(param_1 + 0x18);
  local_10 = 0;
  puVar6 = &local_1c;
  uVar5 = 1;
  FUN_0040b9d0(param_3,&local_24);
  puVar3 = &DAT_00533774;
  uVar4 = local_24;
  FUN_0040b9d0(PTR_LAB_00688cfc,&local_28);
  uVar2 = local_28;
  FUN_0040875c(&local_20,3);
  FUN_0041bd88(param_1,0,local_20,uVar2,puVar3,uVar4,uVar5,puVar6);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_004072fc(&local_28,3,uVar4,&LAB_00533746);
  thunk_FUN_004072d8(&local_c);
  return;
}
