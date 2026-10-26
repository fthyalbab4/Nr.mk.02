// rea decompile_all
// name: FUN_00426058
// address: 0x426058
// body: available
// range: 0x426058-0x42608a inclusive
// range: 0x4260e3-0x4262de inclusive
// range: 0x426337-0x4264ad inclusive
// range: 0x4264d5-0x4264e1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42606f (push 0x4264ae followed by fs-segment stack chaining); handler 0x4264ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00426058(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_14 [2];
  ushort *local_c;

  puStack_24 = &stack0xfffffffc;
  puStack_28 = &LAB_004264ae;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = *param_1;
  local_c = param_1;
  switch(uVar1) {
  case 0:
    local_14[0] = 0;
    break;
  case 1:
    if (DAT_0067ce6c != '\0') {
      puStack_24 = &stack0xfffffffc;
      FUN_00424264(1,0x14);
    }
    local_14[0] = 0;
    break;
  case 2:
    local_14[0] = (uint)(short)param_1[4];
    break;
  case 3:
    local_14[0] = *(uint *)(param_1 + 4);
    break;
  case 4:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_004048b8();
    break;
  case 5:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_004048b8();
    break;
  case 6:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_004048b8();
    break;
  case 7:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_004048b8();
    break;
  case 8:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00425ea0(param_1);
    break;
  case 9:
  case 0xd:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00425df4(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      puStack_24 = &stack0xfffffffc;
      local_14[0] = FUN_00425ea0(param_1);
    }
    else if (uVar1 == 0x101) {
      puStack_24 = &stack0xfffffffc;
      local_14[0] = FUN_00425fa0(param_1);
    }
    else if (uVar1 == 0x102) {
      puStack_24 = &stack0xfffffffc;
      local_14[0] = FUN_00425ea0(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      puStack_24 = &stack0xfffffffc;
      cVar2 = FUN_0042600c(param_1,local_14);
      if (cVar2 == '\0') {
        local_14[0] = FUN_00425df4(local_c);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00425df4(param_1);
        break;
      case 2:
        local_14[0] = (uint)**(short **)(param_1 + 4);
        break;
      case 3:
        local_14[0] = **(uint **)(param_1 + 4);
        break;
      case 4:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_004048b8();
        break;
      case 5:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_004048b8();
        break;
      case 6:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_004048b8();
        break;
      case 7:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_004048b8();
        break;
      case 8:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00425ea0(param_1);
        break;
      case 0xb:
        local_14[0] = (uint)**(short **)(param_1 + 4);
        break;
      case 0xc:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00426058(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        local_14[0] = (uint)**(char **)(param_1 + 4);
        break;
      case 0x11:
        local_14[0] = (uint)**(byte **)(param_1 + 4);
        break;
      case 0x12:
        local_14[0] = (uint)**(ushort **)(param_1 + 4);
        break;
      case 0x13:
        local_14[0] = **(uint **)(param_1 + 4);
        break;
      case 0x14:
        local_14[0] = **(uint **)(param_1 + 4);
        break;
      case 0x15:
        local_14[0] = **(uint **)(param_1 + 4);
      }
    }
    break;
  case 0xb:
    local_14[0] = (uint)(short)param_1[4];
    break;
  case 0xc:
    local_14[0] = FUN_00426058(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    local_14[0] = (uint)(char)param_1[4];
    break;
  case 0x11:
    local_14[0] = (uint)(byte)param_1[4];
    break;
  case 0x12:
    local_14[0] = (uint)param_1[4];
    break;
  case 0x13:
    local_14[0] = *(uint *)(param_1 + 4);
    break;
  case 0x14:
    local_14[0] = *(uint *)(param_1 + 4);
    break;
  case 0x15:
    local_14[0] = *(uint *)(param_1 + 4);
  }
  *in_FS_OFFSET = uStack_2c;
  return local_14[0];
}
