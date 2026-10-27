// rea decompile_all
// name: FUN_004256a8
// address: 0x4256a8
// body: available
// range: 0x4256a8-0x4256da inclusive
// range: 0x425733-0x425936 inclusive
// range: 0x42598f-0x425b28 inclusive
// range: 0x425b47-0x425b50 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4256bf (push 0x425b29 followed by fs-segment stack chaining); handler 0x425b29 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004256a8(ushort *param_1)

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
  puStack_24 = &LAB_00425b29;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = *param_1;
  local_c = param_1;
  switch(uVar1) {
  case 0:
    local_10 = 0;
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      puStack_20 = &stack0xfffffffc;
      FUN_00424184(1,3);
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
    local_10 = FUN_00404878();
    if ((int)local_10 >> 0x1f != extraout_EDX) {
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 5:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00404878();
    if ((int)local_10 >> 0x1f != extraout_EDX_00) {
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 6:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00404878();
    if ((int)local_10 >> 0x1f != extraout_EDX_01) {
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 7:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00404878();
    if ((int)local_10 >> 0x1f != extraout_EDX_02) {
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 8:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_00425510(param_1);
    break;
  case 9:
  case 0xd:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004255c4(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425510(param_1);
    }
    else if (uVar1 == 0x101) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425600(param_1);
    }
    else if (uVar1 == 0x102) {
      puStack_20 = &stack0xfffffffc;
      local_10 = FUN_00425510(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      puStack_20 = &stack0xfffffffc;
      cVar2 = FUN_00425664(param_1,&local_10);
      if (cVar2 == '\0') {
        local_10 = FUN_004255c4(local_c);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004255c4(param_1);
        break;
      case 2:
        local_10 = (uint)**(short **)(param_1 + 4);
        break;
      case 3:
        local_10 = **(uint **)(param_1 + 4);
        break;
      case 4:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00404878();
        if ((int)local_10 >> 0x1f != extraout_EDX_03) {
          local_10 = thunk_FUN_00404478();
        }
        break;
      case 5:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00404878();
        if ((int)local_10 >> 0x1f != extraout_EDX_04) {
          local_10 = thunk_FUN_00404478();
        }
        break;
      case 6:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00404878();
        if ((int)local_10 >> 0x1f != extraout_EDX_05) {
          local_10 = thunk_FUN_00404478();
        }
        break;
      case 7:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00404878();
        if ((int)local_10 >> 0x1f != extraout_EDX_06) {
          local_10 = thunk_FUN_00404478();
        }
        break;
      case 8:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_00425510(param_1);
        break;
      case 0xb:
        local_10 = (uint)**(short **)(param_1 + 4);
        break;
      case 0xc:
        puStack_20 = &stack0xfffffffc;
        local_10 = FUN_004256a8(*(undefined4 *)(param_1 + 4));
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
          local_10 = thunk_FUN_00404478(local_10,param_1);
        }
        break;
      case 0x14:
        local_10 = **(uint **)(param_1 + 4);
        if ((int)local_10 >> 0x1f != (*(uint **)(param_1 + 4))[1]) {
          puStack_20 = &stack0xfffffffc;
          local_10 = thunk_FUN_00404478();
        }
        break;
      case 0x15:
        local_10 = **(uint **)(param_1 + 4);
        if ((int)local_10 >> 0x1f != (*(uint **)(param_1 + 4))[1]) {
          puStack_20 = &stack0xfffffffc;
          local_10 = thunk_FUN_00404478();
        }
      }
    }
    break;
  case 0xb:
    local_10 = (uint)(short)param_1[4];
    break;
  case 0xc:
    puStack_20 = &stack0xfffffffc;
    local_10 = FUN_004256a8(*(undefined4 *)(param_1 + 4));
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
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 0x14:
    local_10 = *(uint *)(param_1 + 4);
    if ((int)local_10 >> 0x1f != *(int *)(param_1 + 6)) {
      puStack_20 = &stack0xfffffffc;
      local_10 = thunk_FUN_00404478();
    }
    break;
  case 0x15:
    local_10 = *(uint *)(param_1 + 4);
    if ((int)local_10 >> 0x1f != *(int *)(param_1 + 6)) {
      local_10 = thunk_FUN_00404478();
    }
  }
  *in_FS_OFFSET = uStack_28;
  return local_10;
}
