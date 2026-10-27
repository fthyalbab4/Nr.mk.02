// rea decompile_all
// name: FUN_0041f484
// address: 0x41f484
// body: available
// range: 0x41f484-0x41f57d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41f4aa (push 0x41f57e followed by fs-segment stack chaining); handler 0x41f57e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041f484(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined1 local_c;
  int local_8;

  puStack_20 = (undefined1 *)0x41f49f;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_0041f57e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar2 = local_8;
  puStack_20 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_20 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < param_4 + param_3) {
    local_c = 0;
    local_10 = param_3;
    FUN_0041c0bc(&PTR_LAB_004117f4,CONCAT31((int3)((uint)(param_4 + param_3) >> 8),1),
                 PTR_PTR_007824e4,0,&local_10);
    FUN_00406618();
  }
  if (param_3 < 0) {
    local_c = 0;
    local_10 = param_3;
    FUN_0041c0bc(&PTR_LAB_004117f4,1,PTR_PTR_007824e4,0,&local_10);
    FUN_00406618();
  }
  FUN_00420ddc(param_1,*(int *)(param_1 + 8) + param_4);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  FUN_0040450c(iVar2 + param_3 * 2,*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - param_4) * 2,
               param_4 * 2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041f585;
  puStack_24 = (undefined1 *)0x41f57d;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
