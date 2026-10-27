// rea decompile_all
// name: FUN_004be628
// address: 0x4be628
// body: available
// range: 0x4be628-0x4be727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4be64e (push 0x4be728 followed by fs-segment stack chaining); handler 0x4be728 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be628(int param_1,int *param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int *local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  puStack_2c = &LAB_004be728;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar3 = param_3;
  if (param_3 == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
  }
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (iVar3 == 0) {
    local_14 = *(undefined4 *)(param_1 + 8);
    local_10 = 0x11;
    FUN_0040b9d0(PTR_LAB_00689270,&local_18,param_3,0,&local_14);
    FUN_0041bd88(&LAB_0042dc24,1,local_18);
    FUN_00406ab4();
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  *param_4 = *local_c;
  param_4[1] = local_c[1];
  *param_4 = *param_4 + *(int *)(local_8 + 0x40);
  param_4[1] = param_4[1] + *(int *)(local_8 + 0x44);
  for (iVar2 = *(int *)(local_8 + 0x34); (iVar2 != 0 && (iVar3 != iVar2));
      iVar2 = *(int *)(iVar2 + 0x34)) {
    if (*(int *)(iVar2 + 0x34) != 0) {
      *param_4 = *param_4 + *(int *)(iVar2 + 0x40);
      param_4[1] = param_4[1] + *(int *)(iVar2 + 0x44);
    }
  }
  if (iVar2 == 0) {
    local_14 = *(undefined4 *)(local_8 + 8);
    local_10 = 0x11;
    puVar5 = &local_14;
    uVar4 = 0;
    FUN_0040b9d0(PTR_LAB_00688e04,&local_1c);
    FUN_0041bd88(&LAB_0042dc24,1,local_1c,uVar4,puVar5);
    FUN_00406ab4();
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004be72f;
  puStack_2c = (undefined1 *)0x4be727;
  thunk_FUN_004072fc(&local_1c,2,puVar1);
  return;
}
