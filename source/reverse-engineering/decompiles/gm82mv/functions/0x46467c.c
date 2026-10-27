// rea decompile_all
// name: FUN_0046467c
// address: 0x46467c
// body: available
// range: 0x46467c-0x464953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046467c(int param_1,int *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_43c;
  uint local_438;
  int local_434;
  HGDIOBJ pvStack_430;
  undefined2 local_42c;
  int iStack_42a;
  int iStack_422;
  undefined4 uStack_41e;
  undefined2 uStack_41a;
  undefined2 uStack_418;
  undefined2 uStack_416;
  undefined2 uStack_414;
  RGBQUAD local_412 [256];

  FUN_00404f38(&local_42c,0xe,0);
  local_42c = 0x4d42;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x6c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0046353c(param_1);
    if ((*(short *)(*(int *)(param_1 + 0x28) + 0x3e) == 0x20) &&
       (*(char *)(param_1 + 0x39) == '\x01')) {
      FUN_004633d0(param_1);
    }
    iVar2 = *(int *)(param_1 + 0x28);
    local_43c = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      FUN_0045e734(*(int *)(iVar2 + 0x14),&local_434,&local_43c,*(undefined4 *)(iVar2 + 0x50));
      if (*(char *)(iVar2 + 0x71) != '\0') {
        local_434 = 0xc;
        if (*(ushort *)(iVar2 + 0x3e) < 9) {
          local_434 = (1 << ((byte)*(ushort *)(iVar2 + 0x3e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_43c = local_43c + local_434 + 0xe;
      FUN_00404f38(&local_42c,0xe,0);
      local_42c = 0x4d42;
      if (*(ushort *)(iVar2 + 0x3e) < 9) {
        piVar5 = (int *)FUN_00463124(param_1);
        (**(code **)(*piVar5 + 0x2c))(piVar5,1);
        SelectObject(*(HDC *)(*(int *)(param_1 + 0x2c) + 0x38),*(HGDIOBJ *)(iVar2 + 0x14));
        pvStack_430 = (HGDIOBJ)FUN_0045d8c4();
        local_438 = GetDIBColorTable(*(HDC *)(*(int *)(param_1 + 0x2c) + 0x38),0,0x100,local_412);
        SelectObject(*(HDC *)(*(int *)(param_1 + 0x2c) + 0x38),pvStack_430);
      }
      else {
        local_438 = 0;
      }
      uVar3 = *(uint *)(iVar2 + 0x50);
      if ((uVar3 != 0) && (uVar3 < local_438)) {
        local_438 = uVar3;
      }
      if ((((*(char *)(iVar2 + 0x71) == '\0') && (local_438 == 0)) && (*(int *)(iVar2 + 0x10) != 0))
         && (*(char *)(iVar2 + 0x70) == '\0')) {
        local_438 = FUN_0045e060(*(undefined4 *)(iVar2 + 0x10),local_412,0xff);
        if (8 < *(ushort *)(iVar2 + 0x3e)) {
          local_43c = local_43c + local_438 * 4;
          local_434 = local_434 + local_438 * 4;
        }
      }
      iStack_42a = local_43c;
      iStack_422 = local_434 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_0043cac0(param_2,&local_43c,4);
    }
    if (local_43c != 0) {
      FUN_00461ee4(iVar2 + 0x18);
      if (local_438 != 0) {
        if ((*(uint *)(iVar2 + 0x50) == 0) || (*(uint *)(iVar2 + 0x50) != local_438)) {
          *(uint *)(iVar2 + 0x50) = local_438;
        }
        if (*(char *)(iVar2 + 0x71) != '\0') {
          FUN_0045dd3c(local_412,&local_438);
        }
      }
      if (*(char *)(iVar2 + 0x71) == '\0') {
        FUN_0043cac0(param_2,&local_42c,0xe);
        FUN_0043cac0(param_2,iVar2 + 0x30,0x28);
        if ((8 < *(ushort *)(iVar2 + 0x3e)) && ((*(byte *)(iVar2 + 0x40) & 3) != 0)) {
          FUN_0043cac0(param_2,iVar2 + 0x58,0xc);
        }
      }
      else {
        uStack_41e = 0xc;
        uStack_41a = *(undefined2 *)(iVar2 + 0x34);
        uStack_418 = *(undefined2 *)(iVar2 + 0x38);
        uStack_416 = 1;
        uStack_414 = *(undefined2 *)(iVar2 + 0x3e);
        FUN_0043cac0(param_2,&local_42c,0xe);
        FUN_0043cac0(param_2,&uStack_41e,0xc);
      }
      FUN_0043cac0(param_2,local_412,(byte)(&DAT_0067d588)[*(byte *)(iVar2 + 0x71)] * local_438);
      FUN_0043cac0(param_2,*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x44));
    }
  }
  else {
    local_43c = (**(code **)*puVar1)();
    if (param_3 != '\0') {
      FUN_0043cac0(param_2,&local_43c,4);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x6c);
    uVar4 = (**(code **)*puVar1)();
    (**(code **)(*param_2 + 0x10))(param_2,puVar1[1],uVar4);
  }
  return;
}
