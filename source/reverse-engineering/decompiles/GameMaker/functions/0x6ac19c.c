// rea decompile_all
// name: FUN_006ac19c
// address: 0x6ac19c
// body: available
// range: 0x6ac19c-0x6ac511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ac1c4 (push 0x6ac512 followed by fs-segment stack chaining); handler 0x6ac512 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac19c(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_14 = 10;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_006ac512;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0x6ac1ce;
  local_8 = local_14;
  FUN_006ab2bc(0);
  sVar1 = *(short *)(*param_1 + -2 + *param_2 * 2);
  if (sVar1 == 0x7b) {
    local_30 = 0;
    local_34 = 0x6ac1e8;
    FUN_00408034(&local_8,0x7b);
    local_34 = 0x6ac1f7;
    FUN_006ab2d8(0xb,local_8,*param_2);
  }
  else if (sVar1 == 0x7d) {
    local_30 = 0;
    local_34 = 0x6ac20d;
    FUN_00408034(&local_c,0x7d);
    local_34 = 0x6ac21c;
    FUN_006ab2d8(0xc,local_c,*param_2);
  }
  else if (sVar1 == 0x3d) {
    local_30 = 0;
    local_34 = 0x6ac232;
    FUN_00408034(&local_10,0x3d);
    local_34 = 0x6ac241;
    FUN_006ab2d8(0x65,local_10,*param_2);
  }
  else if (sVar1 == 0x28) {
    local_30 = 0;
    local_34 = 0x6ac257;
    FUN_00408034(&local_14,0x28);
    local_34 = 0x6ac266;
    FUN_006ab2d8(0x6a,local_14,*param_2);
  }
  else if (sVar1 == 0x29) {
    local_30 = 0;
    local_34 = 0x6ac27c;
    FUN_00408034(&stack0xffffffe8,0x29);
    local_34 = 0x6ac28b;
    FUN_006ab2d8(0x6b,unaff_EBX,*param_2);
  }
  else if (sVar1 == 0x5b) {
    local_30 = 0;
    local_34 = 0x6ac2a1;
    FUN_00408034(&stack0xffffffe4,0x5b);
    local_34 = 0x6ac2b0;
    FUN_006ab2d8(0x6e,unaff_ESI,*param_2);
  }
  else if (sVar1 == 0x5d) {
    local_30 = 0;
    local_34 = 0x6ac2c6;
    FUN_00408034(&stack0xffffffe0,0x5d);
    local_34 = 0x6ac2d5;
    FUN_006ab2d8(0x6f,unaff_EDI,*param_2);
  }
  else if (sVar1 == 0x3b) {
    local_30 = 0;
    local_34 = 0x6ac2eb;
    FUN_00408034(&local_24,0x3b);
    local_34 = 0x6ac2fa;
    FUN_006ab2d8(0x6c,local_24,*param_2);
  }
  else if (sVar1 == 0x3a) {
    local_30 = 0;
    local_34 = 0x6ac310;
    FUN_00408034(&local_28,0x3a);
    local_34 = 0x6ac31f;
    FUN_006ab2d8(0x71,local_28,*param_2);
  }
  else if (sVar1 == 0x2c) {
    local_30 = 0;
    local_34 = 0x6ac335;
    FUN_00408034(&local_2c,0x2c);
    local_34 = 0x6ac344;
    FUN_006ab2d8(0x6d,local_2c,*param_2);
  }
  else if (sVar1 == 0x3c) {
    local_30 = 0;
    local_34 = 0x6ac35a;
    FUN_00408034(&local_30,0x3c);
    local_34 = 0x6ac369;
    FUN_006ab2d8(0xcc,local_30,*param_2);
  }
  else if (sVar1 == 0x3e) {
    local_30 = 0;
    local_34 = 0x6ac37f;
    FUN_00408034(&local_34,0x3e);
    uVar2 = local_34;
    local_34 = 0x6ac38e;
    FUN_006ab2d8(0xd1,uVar2,*param_2);
  }
  else if (sVar1 == 0x2b) {
    local_30 = 0;
    local_34 = 0x6ac3a4;
    FUN_00408034(&local_38,0x2b);
    local_34 = 0x6ac3b3;
    FUN_006ab2d8(0xd2,local_38,*param_2);
  }
  else if (sVar1 == 0x2d) {
    local_30 = 0;
    local_34 = 0x6ac3c9;
    FUN_00408034(&local_3c,0x2d);
    local_34 = 0x6ac3d8;
    FUN_006ab2d8(0xd3,local_3c,*param_2);
  }
  else if (sVar1 == 0x2a) {
    local_30 = 0;
    local_34 = 0x6ac3ee;
    FUN_00408034(&local_40,0x2a);
    local_34 = 0x6ac3fd;
    FUN_006ab2d8(0xd4,local_40,*param_2);
  }
  else if (sVar1 == 0x2f) {
    local_30 = 0;
    local_34 = 0x6ac413;
    FUN_00408034(&local_44,0x2f);
    local_34 = 0x6ac422;
    FUN_006ab2d8(0xd5,local_44,*param_2);
  }
  else if (sVar1 == 0x21) {
    local_30 = 0;
    local_34 = 0x6ac438;
    FUN_00408034(&local_48,0x21);
    local_34 = 0x6ac447;
    FUN_006ab2d8(0xcb,local_48,*param_2);
  }
  else if (sVar1 == 0x2e) {
    local_30 = 0;
    local_34 = 0x6ac45d;
    FUN_00408034(&local_4c,0x2e);
    local_34 = 0x6ac46c;
    FUN_006ab2d8(0x70,local_4c,*param_2);
  }
  else if (sVar1 == 0x7c) {
    local_30 = 0;
    local_34 = 0x6ac482;
    FUN_00408034(&local_50,0x7c);
    local_34 = 0x6ac491;
    FUN_006ab2d8(0xd9,local_50,*param_2);
  }
  else if (sVar1 == 0x26) {
    local_30 = 0;
    local_34 = 0x6ac4a4;
    FUN_00408034(&local_54,0x26);
    local_34 = 0x6ac4b3;
    FUN_006ab2d8(0xda,local_54,*param_2);
  }
  else if (sVar1 == 0x5e) {
    local_30 = 0;
    local_34 = 0x6ac4c6;
    FUN_00408034(&local_58,0x5e);
    local_34 = 0x6ac4d5;
    FUN_006ab2d8(0xdb,local_58,*param_2);
  }
  else if (sVar1 == 0x7e) {
    local_30 = 0;
    local_34 = 0x6ac4e8;
    FUN_00408034(&local_5c,0x7e);
    local_34 = 0x6ac4f7;
    FUN_006ab2d8(0xdc,local_5c,*param_2);
  }
  puVar3 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = &LAB_006ac519;
  local_2c = 0x6ac511;
  thunk_FUN_00406e80(&local_5c,0x16,puVar3);
  return;
}
