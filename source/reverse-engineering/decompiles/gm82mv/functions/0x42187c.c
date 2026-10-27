// rea decompile_all
// name: FUN_0042187c
// address: 0x42187c
// body: available
// range: 0x42187c-0x42196d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4218a2 (push 0x42196e followed by fs-segment stack chaining); handler 0x42196e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042187c(undefined4 *param_1,int param_2,int param_3,int param_4)

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

  puStack_20 = (undefined1 *)0x421897;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_24 = &LAB_0042196e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if (param_3 < 1) {
    local_c = 0;
    puStack_20 = &stack0xfffffffc;
    local_10 = param_3;
    FUN_0041bf50(&LAB_00414078,1,PTR_LAB_006892b0,0,&local_10);
    FUN_00406ab4();
  }
  if (param_4 < 0) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041bf50(&LAB_00414078,1,PTR_LAB_00688e8c,0,&local_10);
    FUN_00406ab4();
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if ((iVar3 - param_3) + 1 < param_4) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041bf50(&LAB_00414078,1,PTR_LAB_00688e8c,0,&local_10);
    FUN_00406ab4();
  }
  (**(code **)*param_1)(param_1,local_8 + -2 + param_3 * 2,param_4);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00421975;
  puStack_24 = (undefined1 *)0x42196d;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
