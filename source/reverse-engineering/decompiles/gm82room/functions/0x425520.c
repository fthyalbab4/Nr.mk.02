// rea decompile_all
// name: FUN_00425520
// address: 0x425520
// body: available
// range: 0x425520-0x425552 inclusive
// range: 0x4255ab-0x4257ae inclusive
// range: 0x425807-0x4259a0 inclusive
// range: 0x4259bf-0x4259c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x425537 (push 0x4259a1 followed by fs-segment stack chaining); handler 0x4259a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00425520(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_10;
  ushort *local_c;

  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_004259a1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = *param_1;
  local_c = param_1;
  switch(uVar1) {
  case 0:
    local_10 = 0;
    break;
  case 1:
    if (DAT_0067ce6c != '\0') {
      puStack_20 = &stack0xfffffffc;
      FUN_00424264(1,3);
    }
    local_10 = 0;
    break;
  case 2:
    local_10 = (uint)(short)param_1[4];
    break;
  case 3:
    local_10 = *(uint *)(param_1 + 4);
    break;
  case 4:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004048b8();
    if ((int)local_10 >> 0x1f != extraout_EDX) {
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 5:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004048b8();
    if ((int)local_10 >> 0x1f != extraout_EDX_00) {
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 6:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004048b8();
    if ((int)local_10 >> 0x1f != extraout_EDX_01) {
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 7:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004048b8();
    if ((int)local_10 >> 0x1f != extraout_EDX_02) {
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 8:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00425388(param_1);
    break;
  case 9:
  case 0xd:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_0042543c(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425388(param_1);
    }
    else if (uVar1 == 0x101) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425478(param_1);
    }
    else if (uVar1 == 0x102) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425388(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      puStack_20 = &stack0xfffffffc;
      cVar2 = FUN_004254dc(param_1,&local_10);
      if (cVar2 == '\0') {
        local_10 = FUN_0042543c(local_c);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_0042543c(param_1);
        break;
      case 2:
        local_10 = (uint)**(short **)(param_1 + 4);
        break;
      case 3:
        local_10 = **(uint **)(param_1 + 4);
        break;
      case 4:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004048b8();
        if ((int)local_10 >> 0x1f != extraout_EDX_03) {
          local_10 = thunk_FUN_00404480();
        }
        break;
      case 5:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004048b8();
        if ((int)local_10 >> 0x1f != extraout_EDX_04) {
          local_10 = thunk_FUN_00404480();
        }
        break;
      case 6:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004048b8();
        if ((int)local_10 >> 0x1f != extraout_EDX_05) {
          local_10 = thunk_FUN_00404480();
        }
        break;
      case 7:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004048b8();
        if ((int)local_10 >> 0x1f != extraout_EDX_06) {
          local_10 = thunk_FUN_00404480();
        }
        break;
      case 8:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00425388(param_1);
        break;
      case 0xb:
        local_10 = (uint)**(short **)(param_1 + 4);
        break;
      case 0xc:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00425520(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        local_10 = (uint)**(char **)(param_1 + 4);
        break;
      case 0x11:
        local_10 = (uint)**(byte **)(param_1 + 4);
        break;
      case 0x12:
        local_10 = (uint)**(ushort **)(param_1 + 4);
        break;
      case 0x13:
        local_10 = **(uint **)(param_1 + 4);
        if ((int)local_10 < 0) {
          puStack_20 = &stack0xfffffffc;
          local_10 = thunk_FUN_00404480(local_10,param_1);
        }
        break;
      case 0x14:
        local_10 = **(uint **)(param_1 + 4);
        if ((int)local_10 >> 0x1f != (*(uint **)(param_1 + 4))[1]) {
          puStack_20 = &stack0xfffffffc;
          local_10 = thunk_FUN_00404480();
        }
        break;
      case 0x15:
        local_10 = **(uint **)(param_1 + 4);
        if ((int)local_10 >> 0x1f != (*(uint **)(param_1 + 4))[1]) {
          puStack_20 = &stack0xfffffffc;
          local_10 = thunk_FUN_00404480();
        }
      }
    }
    break;
  case 0xb:
    local_10 = (uint)(short)param_1[4];
    break;
  case 0xc:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00425520(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    local_10 = (uint)(char)param_1[4];
    break;
  case 0x11:
    local_10 = (uint)(byte)param_1[4];
    break;
  case 0x12:
    local_10 = (uint)param_1[4];
    break;
  case 0x13:
    local_10 = *(uint *)(param_1 + 4);
    if ((int)local_10 < 0) {
      puStack_20 = &stack0xfffffffc;
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 0x14:
    local_10 = *(uint *)(param_1 + 4);
    if ((int)local_10 >> 0x1f != *(int *)(param_1 + 6)) {
      puStack_20 = &stack0xfffffffc;
      local_10 = thunk_FUN_00404480();
    }
    break;
  case 0x15:
    local_10 = *(uint *)(param_1 + 4);
    if ((int)local_10 >> 0x1f != *(int *)(param_1 + 6)) {
      local_10 = thunk_FUN_00404480();
    }
  }
  *in_FS_OFFSET = uStack_28;
  return local_10;
}
