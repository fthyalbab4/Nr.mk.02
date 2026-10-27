// rea decompile_all
// name: FUN_004be9cc
// address: 0x4be9cc
// body: available
// range: 0x4be9cc-0x4beafc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4be9f5 (push 0x4beafd followed by fs-segment stack chaining); handler 0x4beafd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be9cc(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_c;
  undefined1 local_5;

  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x4be9e5;
    param_1 = FUN_00406510();
    local_5 = extraout_DL;
  }
  puStack_2c = &LAB_004beafd;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_004ba2b8(param_1,0);
  uVar2 = FUN_004476b8();
  *(undefined4 *)(param_1 + 0x25c) = uVar2;
  uVar2 = FUN_0045c120(&PTR_FUN_00455620,1);
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  FUN_0045c2e4(uVar2,*(undefined4 *)(param_1 + 0x6c));
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x1ee) = 1;
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1cc) = 3;
  if (*(int *)(PTR_DAT_00689688 + 4) == 0x11) {
    FUN_00408194(param_1 + 0x1d0,0);
  }
  else {
    FUN_004e8bf0(*(undefined4 *)PTR_DAT_00689620,&local_c);
    FUN_00408194(param_1 + 0x1d0,local_c);
  }
  *(undefined1 *)(param_1 + 0x1eb) = 0;
  *(undefined1 *)(param_1 + 0x1ae) = 0xf;
  *(undefined1 *)(param_1 + 0x1af) = 2;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x160) = 1;
  iVar3 = FUN_004caf34(&PTR_LAB_004ae9f4,1,param_1);
  puVar1 = puStack_28;
  *(int *)(param_1 + 0x1bc) = iVar3;
  *(int *)(iVar3 + 0x1c) = param_1;
  *(undefined1 **)(iVar3 + 0x18) = &LAB_004c647c;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004beb04;
  puStack_2c = (undefined1 *)0x4beafc;
  thunk_FUN_004072d8(&local_c,uStack_30,puVar1);
  return;
}
