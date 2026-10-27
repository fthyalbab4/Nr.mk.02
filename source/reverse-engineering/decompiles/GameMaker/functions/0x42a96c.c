// rea decompile_all
// name: FUN_0042a96c
// address: 0x42a96c
// body: available
// range: 0x42a96c-0x42a9ae inclusive
// range: 0x42a9db-0x42aa43 inclusive
// range: 0x42aa70-0x42ab60 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a9e6 (push 0x42aa44 followed by fs-segment stack chaining); handler 0x42aa44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a96c(ushort *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *local_24;
  uint local_20;

  bVar1 = false;
  puStack_3c = (undefined1 *)0x42a988;
  local_24 = (undefined1 *)FUN_004261e0(param_1);
  puStack_3c = (undefined1 *)0x42a996;
  puVar2 = (undefined1 *)FUN_004261e0(param_2);
  local_20 = extraout_EDX;
  switch(param_3) {
  case 0:
  case 1:
  case 2:
    puStack_40 = &LAB_0042aa44;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    if (param_3 == 0) {
      bVar3 = CARRY4((uint)local_24,(uint)puVar2);
      local_24 = local_24 + (int)puVar2;
      local_20 = extraout_EDX + extraout_EDX_00 + (uint)bVar3;
    }
    else if (param_3 == 1) {
      bVar3 = local_24 < puVar2;
      local_24 = local_24 + -(int)puVar2;
      local_20 = (extraout_EDX - extraout_EDX_00) - (uint)bVar3;
    }
    else if (param_3 == 2) {
      puStack_3c = &stack0xfffffffc;
      local_24 = (undefined1 *)FUN_0040946c(local_24,extraout_EDX);
      local_20 = extraout_EDX_01;
    }
    *in_FS_OFFSET = uStack_44;
    break;
  case 3:
    bVar1 = true;
    break;
  case 4:
    uStack_44 = 0x42aa88;
    puStack_40 = puVar2;
    local_24 = (undefined1 *)FUN_004094b4(local_24,extraout_EDX);
    local_20 = extraout_EDX_02;
    break;
  case 5:
    uStack_44 = 0x42aaa4;
    puStack_40 = puVar2;
    local_24 = (undefined1 *)FUN_00409594(local_24,extraout_EDX);
    local_20 = extraout_EDX_03;
    break;
  case 6:
    puStack_3c = (undefined1 *)0x42aabc;
    local_24 = (undefined1 *)FUN_00409660(local_24,extraout_EDX,puVar2);
    local_20 = extraout_EDX_04;
    break;
  case 7:
    puStack_3c = (undefined1 *)0x42aad4;
    local_24 = (undefined1 *)FUN_00409680(local_24,extraout_EDX,puVar2);
    local_20 = extraout_EDX_05;
    break;
  case 8:
    local_24 = (undefined1 *)((uint)local_24 & (uint)puVar2);
    local_20 = extraout_EDX & extraout_EDX_00;
    break;
  case 9:
    local_24 = (undefined1 *)((uint)local_24 | (uint)puVar2);
    local_20 = extraout_EDX | extraout_EDX_00;
    break;
  case 10:
    local_24 = (undefined1 *)((uint)local_24 ^ (uint)puVar2);
    local_20 = extraout_EDX ^ extraout_EDX_00;
    break;
  default:
    puStack_3c = (undefined1 *)0x42ab1d;
    FUN_00424220();
  }
  if (bVar1) {
    puStack_3c = (undefined1 *)0x42ab2f;
    FUN_0042a748(param_1,param_2,param_3);
  }
  else {
    if ((*param_1 & 0xbfe8) != 0) {
      puStack_3c = (undefined1 *)0x42ab43;
      FUN_00424940(param_1);
    }
    *(undefined1 **)(param_1 + 4) = local_24;
    *(uint *)(param_1 + 6) = local_20;
    *param_1 = 0x14;
  }
  return;
}
