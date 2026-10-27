// rea decompile_all
// name: FUN_004ade84
// address: 0x4ade84
// body: available
// range: 0x4ade84-0x4ae009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4adea5 (push 0x4ae00a followed by fs-segment stack chaining); handler 0x4ae00a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ade84(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  int local_16;
  undefined1 local_12;
  byte local_11;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_40 = &stack0xfffffffc;
  local_8 = 0;
  puStack_44 = &LAB_004ae00a;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_2;
  FUN_00407f0c(&local_8,*(undefined4 *)(param_1 + 8));
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  local_11 = 0;
  if (iVar3 != 0) {
    local_11 = (byte)*(undefined4 *)(iVar3 + -4);
  }
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + -4);
  }
  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  local_11 = (byte)uVar4;
  local_10 = (uVar4 & 0xff) * 2 + 0x1e;
  local_2e = *(undefined4 *)(param_1 + 0x14);
  local_2a = *(undefined4 *)(param_1 + 0x18);
  local_22 = *(undefined4 *)(param_1 + 0x1c);
  local_26 = *(undefined4 *)(param_1 + 0x20);
  local_1a = *(undefined4 *)(param_1 + 0xc);
  local_1e = *(undefined4 *)(param_1 + 0x28);
  local_12 = *(char *)(param_1 + 0x26) != '\0';
  iVar3 = FUN_004ad490(param_1);
  if ((iVar3 == 0) && (cVar2 = FUN_004ad044(param_1), cVar2 != '\0')) {
    local_16 = -1;
  }
  else {
    local_16 = FUN_004ad490(param_1);
  }
  FUN_0043f4c0(local_c,&local_10,4);
  FUN_0043f4c0(local_c,&local_2e,0x1e);
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    FUN_00407048(&local_8,local_8);
  }
  uVar5 = thunk_FUN_004089c0(&local_8);
  FUN_0043f4c0(local_c,uVar5,(uint)local_11 * 2);
  if (-1 < local_16 + -1) {
    iVar6 = 0;
    iVar3 = local_16;
    do {
      uVar5 = FUN_004ad3b4(param_1,iVar6);
      FUN_004ade84(uVar5,local_c);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004ae011;
  puStack_44 = (undefined1 *)0x4ae009;
  thunk_FUN_00406e5c(&local_8,uStack_48,puVar1);
  return;
}
