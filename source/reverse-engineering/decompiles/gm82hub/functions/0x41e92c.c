// rea decompile_all
// name: FUN_0041e92c
// address: 0x41e92c
// body: available
// range: 0x41e92c-0x41ea6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41e954 (push 0x41ea6e followed by fs-segment stack chaining); handler 0x41ea6e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e92c(undefined4 param_1,int *param_2,undefined4 param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  int *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_14;
  undefined1 local_10;
  undefined4 *local_c;
  int *local_8;

  local_20 = &stack0xfffffffc;
  local_14 = 4;
  do {
    local_c = (undefined4 *)0x0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_0041ea6e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (int *)0x41e95e;
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_0041e86c(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    local_2c = (int *)0x41e96c;
    FUN_0041e8f4(param_1,&stack0xffffffe4);
    local_2c = (int *)0x41e977;
    FUN_004172fc(unaff_ESI,&stack0xffffffe8);
    local_10 = 0x11;
    local_2c = &local_14;
    uVar6 = 0;
    local_14 = unaff_EBX;
    FUN_0040b9d0(PTR_LAB_00689054,&local_20);
    FUN_0041bd88(&LAB_00412144,1,local_20,uVar6);
    puVar2 = (undefined4 *)FUN_00406ab4();
  }
  _ImgDelayDescr_Module_Handle_00000000 = *puVar2;
  piVar5 = puVar2 + 2;
  iVar4 = puVar2[1];
  local_c = puVar2;
  if (-1 < iVar4 + -1) {
    do {
      local_2c = local_8;
      FUN_0040b9bc((int)piVar5 + 1,0xff,&local_24);
      (*param_4)(local_24,1,0);
      local_2c = (int *)0x41e9e8;
      iVar3 = FUN_004175f4((int)piVar5 + 1);
      piVar5 = (int *)((int)piVar5 + iVar3 + 2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *piVar5;
  piVar5 = piVar5 + 1;
  if (-1 < iVar4 + -1) {
    do {
      local_2c = local_8;
      FUN_0040b9bc((undefined1 *)((int)piVar5 + 2),0xff,&local_28);
      (*param_4)(local_28,0,(char)*piVar5);
      local_2c = (int *)0x41ea24;
      iVar3 = FUN_004175f4((undefined1 *)((int)piVar5 + 2));
      piVar5 = (int *)((int)piVar5 + iVar3 + 3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(byte *)((int)local_c + 3) & 0x40) != 0) {
    local_2c = local_8;
    FUN_0040b9bc((undefined1 *)((int)piVar5 + 1),0xff,&local_2c);
    (*param_4)(local_2c,2,0);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0041ea75;
  local_24 = (undefined1 *)0x41ea6d;
  thunk_FUN_004072fc(&local_2c,6,puVar1);
  return;
}
