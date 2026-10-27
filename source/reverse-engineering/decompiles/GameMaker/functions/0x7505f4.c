// rea decompile_all
// name: FUN_007505f4
// address: 0x7505f4
// body: available
// range: 0x7505f4-0x75078d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x750627 (push 0x75078e followed by fs-segment stack chaining); handler 0x75078e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007505f4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1d;
  int local_1c;
  byte *local_14;
  undefined1 *local_10;
  undefined1 *local_c;

  puStack_3c = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_40 = &LAB_0075078e;
  puStack_44 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_44;
  local_1c = param_3;
  FUN_00408144(&local_2c,param_1);
  puStack_44 = (undefined1 *)0x75063c;
  uVar3 = FUN_00406e5c(&local_28);
  puStack_44 = (undefined1 *)0x750646;
  cVar2 = FUN_00733db8(local_2c,uVar3);
  if (cVar2 == '\0') {
    puStack_44 = (undefined1 *)0x750659;
    FUN_0040810c(&local_28,param_1,0);
  }
  puStack_44 = (undefined1 *)0x750661;
  local_14 = (byte *)FUN_00407670(local_28);
  local_1d = '\x03';
  uVar4 = (uint)*local_14;
  if (uVar4 < 0x41) {
    if (uVar4 == 0x3f) {
      local_1d = '\x02';
    }
    else if (uVar4 == 0x40) {
      local_1d = '\0';
    }
  }
  else if (((uVar4 - 0x41 < 0x1a) || (uVar4 == 0x5f)) || (uVar4 - 0x61 < 0x1a)) {
    local_1d = '\x01';
  }
  if (local_1d == '\0') {
    local_14 = local_14 + 1;
    puStack_44 = (undefined1 *)0x7506c0;
    FUN_004078e4(&local_24,0x400,0);
    puStack_44 = (undefined1 *)0x7506c8;
    local_10 = (undefined1 *)FUN_00407670(local_24);
    *(undefined1 *)(local_1c + 1) = 0;
    *param_4 = 1;
    bVar1 = *local_14;
    local_c = local_10;
    if (bVar1 == 0x24) {
      puStack_44 = &stack0xfffffffc;
      FUN_00750454();
    }
    else {
      cVar2 = bVar1 + 0xa5;
      if ((((byte)(bVar1 + 0xbf) < 0x1a) || (cVar2 = '\0', bVar1 == 0x5f)) ||
         (cVar2 = bVar1 + 0x85, (byte)(bVar1 + 0x9f) < 0x1a)) {
        puStack_44 = &stack0xfffffffc;
        FUN_007504fc(cVar2);
      }
      else {
        local_1d = '\x03';
      }
    }
    *local_c = 0;
    puStack_44 = (undefined1 *)0x750727;
    FUN_00407670(local_24);
    puStack_44 = (undefined1 *)0x75072c;
    uVar3 = FUN_00417640();
    puStack_44 = (undefined1 *)0x750738;
    FUN_004078e4(&local_24,uVar3,0);
    puStack_44 = (undefined1 *)0x750740;
    uVar3 = FUN_00407a78(&local_30);
    puStack_44 = (undefined1 *)0x75074a;
    cVar2 = FUN_00733cc8(local_24,uVar3);
    puStack_44 = (undefined1 *)0x750757;
    FUN_00408130(param_2,local_30);
    if (cVar2 == '\0') {
      puStack_44 = (undefined1 *)0x750766;
      FUN_004080e4(param_2,local_24);
    }
  }
  *in_FS_OFFSET = puStack_40;
  puStack_3c = (undefined1 *)0x750780;
  FUN_00407a90(&local_30,2,unaff_EBX);
  puStack_3c = (undefined1 *)0x75078d;
  FUN_00406e80(&local_28,2);
  return;
}
