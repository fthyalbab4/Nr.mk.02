// rea decompile_all
// name: FUN_004be3ac
// address: 0x4be3ac
// body: available
// range: 0x4be3ac-0x4be69e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be3ac(int param_1,WPARAM param_2)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    FUN_00404f08(&local_70,0x60,0);
    iVar2 = FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
    pHVar3 = (HWND)FUN_004f76a8(param_1);
    iVar4 = FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
    SendMessageW(pHVar3,0x1096,*(WPARAM *)(iVar4 + 0x14),0);
    local_6c = 0xc;
    if (*(int *)(iVar2 + 0xc) != 0) {
      local_6c = 0xd;
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      local_6c = local_6c | 2;
    }
    local_70 = 0x60;
    local_68 = FUN_00407f44(*(undefined4 *)(iVar2 + 0xc));
    local_60 = FUN_00407f44(*(undefined4 *)(iVar2 + 0x10));
    local_48 = FUN_00407f44(*(undefined4 *)(iVar2 + 0x1c));
    local_38 = FUN_00407f44(*(undefined4 *)(iVar2 + 0x20));
    local_30 = FUN_00407f44(*(undefined4 *)(iVar2 + 0x24));
    local_64 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      local_64 = *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4);
    }
    local_5c = 0;
    if (*(int *)(iVar2 + 0x10) != 0) {
      local_5c = *(undefined4 *)(*(int *)(iVar2 + 0x10) + -4);
    }
    local_44 = 0;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      local_44 = *(undefined4 *)(*(int *)(iVar2 + 0x1c) + -4);
    }
    local_34 = 0;
    if (*(int *)(iVar2 + 0x20) != 0) {
      local_34 = *(undefined4 *)(*(int *)(iVar2 + 0x20) + -4);
    }
    local_2c = 0;
    if (*(int *)(iVar2 + 0x24) != 0) {
      local_2c = *(undefined4 *)(*(int *)(iVar2 + 0x24) + -4);
    }
    local_54 = 0;
    local_50 = 0;
    FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
    FUN_004c7f24();
    FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
    uVar5 = FUN_004c7f24();
    if ((uVar5 & 2) != 0) {
      local_50 = local_50 | 2;
    }
    local_4c = 0;
    cVar1 = FUN_0041d030(6,0);
    if (cVar1 != '\0') {
      uVar5 = local_6c | 0x3000;
      if (*(int *)(iVar2 + 0x1c) != 0) {
        uVar5 = local_6c | 0x3100;
      }
      local_6c = uVar5;
      if (*(int *)(iVar2 + 0x20) != 0) {
        local_6c = local_6c | 0x400;
      }
      if (*(int *)(iVar2 + 0x24) != 0) {
        local_6c = local_6c | 0x800;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 8) != 0) {
        local_50 = local_50 | 4;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 0x10) != 0) {
        local_50 = local_50 | 8;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 4) != 0) {
        local_50 = local_50 | 1;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 0x20) != 0) {
        local_50 = local_50 | 0x10;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 0x40) != 0) {
        local_50 = local_50 | 0x20;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 0x80) != 0) {
        local_50 = local_50 | 0x40;
      }
      FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
      uVar5 = FUN_004c7f24();
      if ((uVar5 & 0x100) != 0) {
        local_50 = local_50 | 0x80;
      }
      cVar1 = *(char *)(iVar2 + 0x1b);
      if (cVar1 == '\0') {
        local_4c = local_4c | 8;
      }
      else if (cVar1 == '\x01') {
        local_4c = local_4c | 0x20;
      }
      else if (cVar1 == '\x02') {
        local_4c = local_4c | 0x10;
      }
    }
    cVar1 = *(char *)(iVar2 + 0x1a);
    if (cVar1 == '\0') {
      local_4c = local_4c | 1;
    }
    else if (cVar1 == '\x01') {
      local_4c = local_4c | 4;
    }
    else if (cVar1 == '\x02') {
      local_4c = local_4c | 2;
    }
    local_28 = *(undefined4 *)(iVar2 + 0x28);
    local_24 = *(undefined4 *)(iVar2 + 0x2c);
    local_6c = local_6c | 0x10;
    iVar2 = FUN_004c8304(*(undefined4 *)(param_1 + 0x3f8),param_2);
    local_58 = *(undefined4 *)(iVar2 + 0x14);
    pHVar3 = (HWND)FUN_004f76a8(param_1);
    SendMessageW(pHVar3,0x1091,param_2,(LPARAM)&local_70);
  }
  return;
}
