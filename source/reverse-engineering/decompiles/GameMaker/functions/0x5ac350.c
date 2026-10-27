// rea decompile_all
// name: FUN_005ac350
// address: 0x5ac350
// body: available
// range: 0x5ac350-0x5ac5c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ac36a (push 0x5ac5c3 followed by fs-segment stack chaining); handler 0x5ac5c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ac350(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  MCIERROR MVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined *local_10;
  undefined4 local_c;

  puStack_38 = &stack0xfffffffc;
  local_2c = 0;
  puStack_3c = &LAB_005ac5c3;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_00404f08(&local_18,0x14,0);
  if (*(char *)(param_1 + 0x349) != '\0') {
    FUN_005ac5d8(param_1);
  }
  local_18 = 0;
  local_10 = (&PTR_DAT_0077d418)[*(byte *)(param_1 + 0x35c)];
  local_c = FUN_00407f44(*(undefined4 *)(param_1 + 0x380));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x356) == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 2;
  }
  else {
    if (*(char *)(param_1 + 0x354) != '\0') {
      *(undefined4 *)(param_1 + 0x350) = 2;
    }
    *(undefined1 *)(param_1 + 0x356) = 0;
  }
  if (*(char *)(param_1 + 0x357) != '\0') {
    if (*(char *)(param_1 + 0x355) != '\0') {
      *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 1;
    }
    *(undefined1 *)(param_1 + 0x357) = 0;
  }
  if (*(char *)(param_1 + 0x35c) != '\0') {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 0x2000;
  }
  if (*(char *)(param_1 + 0x35c) == '\0') {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 0x200;
  }
  else {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 0x2000;
  }
  if (*(int *)(param_1 + 0x380) != 0) {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 0x200;
  }
  if (*(char *)(param_1 + 0x387) != '\0') {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 0x100;
  }
  local_18 = FUN_004f76a8(param_1);
  MVar3 = mciSendCommandW(0,0x803,*(DWORD_PTR *)(param_1 + 0x350),(DWORD_PTR)&local_18);
  *(MCIERROR *)(param_1 + 0x36c) = MVar3;
  if (MVar3 == 0) {
    *(undefined1 *)(param_1 + 0x349) = 1;
    *(undefined2 *)(param_1 + 0x35a) = local_14;
    iVar4 = FUN_005ad6a4(param_1);
    *(int *)(param_1 + 0x368) = iVar4 / 10;
    FUN_005ad4b0(param_1,iVar4 % 10);
    if (*(char *)(param_1 + 0x34f) != '\0') {
      FUN_005ad2ac(param_1,*(undefined4 *)(param_1 + 0x374));
      FUN_005ad45c(param_1,&local_28);
      *(int *)(param_1 + 0x378) = local_20 - local_28;
      *(int *)(param_1 + 0x37c) = local_1c - local_24;
    }
    if ((*(char *)(param_1 + 0x35c) == '\x02') || (*(char *)(param_1 + 0x35c) == '\v')) {
      FUN_005ad270(param_1,10);
    }
    *(undefined2 *)(param_1 + 0x30e) = 0x18;
    if (*(char *)(param_1 + 0x34c) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x60;
    }
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    if (*(char *)(param_1 + 0x34d) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x100;
    }
    cVar2 = FUN_005ad734(param_1);
    if (cVar2 == '\x02') {
      FUN_00405d08(param_1,0);
    }
    FUN_005ab5f0(param_1);
  }
  else {
    FUN_005ad800(param_1,&local_2c);
    FUN_0041beb8(&PTR_LAB_005aa104,1,local_2c);
    FUN_00406618();
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_005ac5ca;
  puStack_3c = (undefined1 *)0x5ac5c2;
  thunk_FUN_00406e5c(&local_2c,uStack_40,puVar1);
  return;
}
