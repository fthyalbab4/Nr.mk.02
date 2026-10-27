// rea decompile_all
// name: FUN_004f2214
// address: 0x4f2214
// body: available
// range: 0x4f2214-0x4f2322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2246 (push 0x4f2323 followed by fs-segment stack chaining); handler 0x4f2323 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2214(undefined4 *param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar5;
  int *in_FS_OFFSET;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  uVar5 = 0;
  if (param_2 != '\0') {
    puStack_3c = (undefined1 *)0x4f2233;
    param_1 = (undefined4 *)FUN_00406510();
    param_3 = extraout_ECX;
    uVar5 = extraout_DL;
  }
  uStack_10 = CONCAT13(uVar5,(undefined3)uStack_10);
  puStack_40 = &LAB_004f2323;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  puStack_3c = &stack0xfffffffc;
  local_14 = param_3;
  FUN_00405fac(param_1,0);
  FUN_00405eb4(*param_1,&local_c);
  FUN_00405eb4(*param_1,&local_18);
  local_1c = local_18;
  uVar4 = 0;
  if (local_18 != 0) {
    uVar4 = *(undefined4 *)(local_18 + -4);
  }
  FUN_00408984(local_c,7,uVar4);
  FUN_004083e8(&local_8,local_20,0);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_8,local_8,0);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 == 4) {
    uVar4 = thunk_FUN_00407af8(&local_8);
    FUN_00404514(uVar4,param_1 + 4,4);
  }
  uVar4 = FUN_00404324(1);
  puVar1 = puStack_40;
  param_1[1] = uVar4;
  param_1[2] = 0;
  param_1[3] = local_14;
  *in_FS_OFFSET = (int)&local_20;
  puStack_40 = &LAB_004f232a;
  iStack_44 = 0x4f230a;
  thunk_FUN_004072d8(&local_20,&local_20,puVar1);
  iStack_44 = 0x4f2312;
  thunk_FUN_004072d8(&local_18);
  iStack_44 = 0x4f231a;
  thunk_FUN_004072d8(&local_c);
  iStack_44 = 0x4f2322;
  FUN_004072d8(&local_8);
  return;
}
