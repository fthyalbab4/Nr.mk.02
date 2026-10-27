// rea decompile_all
// name: FUN_00440358
// address: 0x440358
// body: available
// range: 0x440358-0x440415 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440384 (push 0x440416 followed by fs-segment stack chaining); handler 0x440416 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440358(int param_1,char param_2,int param_3)

{
  short sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined2 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;

  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x440372;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_34 = &LAB_00440416;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (param_3 == 0) {
    sVar1 = *(short *)PTR_DAT_00781864;
  }
  else {
    sVar1 = *(short *)(param_3 + -0xc);
  }
  local_c = param_3;
  if (sVar1 == 0) {
    puStack_30 = &stack0xfffffffc;
    uVar3 = FUN_00421f48();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  else {
    if (param_3 == 0) {
      uVar4 = *(undefined2 *)PTR_DAT_00781864;
    }
    else {
      uVar4 = *(undefined2 *)(param_3 + -0xc);
    }
    puStack_30 = &stack0xfffffffc;
    uVar3 = FUN_00421f88(uVar4);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  FUN_004224d0(param_3,&local_10);
  FUN_004400bc(param_1,0,local_10);
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0044041d;
  puStack_34 = (undefined1 *)0x440415;
  FUN_00409ce0(&local_10,&DAT_004108f8,puVar2);
  return;
}
