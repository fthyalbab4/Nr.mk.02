// rea decompile_all
// name: FUN_005e8e54
// address: 0x5e8e54
// body: available
// range: 0x5e8e54-0x5e9130 inclusive
// range: 0x5e9138-0x5e9152 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e8e7e (push 0x5e9153 followed by fs-segment stack chaining); handler 0x5e9153 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e90a6 (push 0x5e9131 followed by fs-segment stack chaining); handler 0x5e9131 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8e54(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar6;
  undefined4 unaff_EDI;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_14 = 4;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_c = (int *)0x0;
  local_28 = &LAB_005e9153;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined1 *)0x5e8e8c;
  local_8 = param_1;
  FUN_005cac58(param_1 + 4);
  *(undefined4 *)(local_8 + 0x274) = *param_2;
  *(undefined4 *)(local_8 + 0x278) = param_5;
  puStack_30 = (undefined1 *)0x5e8eb1;
  FUN_005bf664(local_8 + 4,0xffffffff);
  iVar5 = *(int *)(local_8 + 700);
  if ((*(byte *)(iVar5 + 4) & 1) == 0) {
    uVar3 = *(uint *)(iVar5 + 8);
    uVar4 = *(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 0x30);
    if (**(uint **)(iVar5 + 0x40) < uVar4) {
      uVar4 = **(uint **)(iVar5 + 0x40);
    }
  }
  else {
    uVar3 = *(uint *)(iVar5 + 0x34);
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    uVar4 = *(uint *)(iVar5 + 0xc);
  }
  *(undefined4 *)(local_8 + 0x270) = *(undefined4 *)(iVar5 + 0x3c);
  if ((*(int *)(iVar5 + 0x2c) == 2) && (*(int *)(iVar5 + 0x54) == *(int *)(iVar5 + 0x58))) {
    uVar3 = ((*(ushort *)(local_8 + 0x26c) - 1) + uVar3) / (uint)*(ushort *)(local_8 + 0x26c);
    uVar4 = ((*(ushort *)(local_8 + 0x26e) - 1) + uVar4) / (uint)*(ushort *)(local_8 + 0x26e);
  }
  if ((uVar3 != *(uint *)(local_8 + 0x1c)) || (uVar4 != *(uint *)(local_8 + 0x20))) {
    puStack_30 = (undefined1 *)0x5e8f50;
    FUN_0040b9d0(PTR_LAB_00688aa0,&local_14);
    puStack_30 = (undefined1 *)0x5e8f58;
    FUN_005e7750(local_14);
  }
  uVar3 = 1;
  if (*(int *)(iVar5 + 0x2c) == 1) {
    uVar3 = (uint)*(byte *)(iVar5 + 0x12);
  }
  if (uVar3 != *(uint *)(local_8 + 0x24)) {
    puStack_30 = (undefined1 *)0x5e8f7c;
    FUN_0040b9d0(PTR_LAB_006889c4,&stack0xffffffe8);
    puStack_30 = (undefined1 *)0x5e8f84;
    FUN_005e7750(unaff_EBX);
  }
  if (*(uint *)(local_8 + 0xd4) != (uint)*(byte *)(iVar5 + 0x11)) {
    puStack_30 = (undefined1 *)0x5e8fa2;
    FUN_0040b9d0(PTR_LAB_0068946c,&stack0xffffffe4);
    puStack_30 = (undefined1 *)0x5e8faa;
    FUN_005e7750(unaff_ESI);
  }
  if (*(int *)(iVar5 + 0x2c) == 1) {
    if ((*(uint *)(*(int *)(local_8 + 0xd8) + 8) != (uint)*(ushort *)(local_8 + 0x26c)) ||
       (*(uint *)(*(int *)(local_8 + 0xd8) + 0xc) != (uint)*(ushort *)(local_8 + 0x26e))) {
      puStack_30 = (undefined1 *)0x5e8fec;
      FUN_0040b9d0(PTR_LAB_00688e5c,&stack0xffffffe0);
      puStack_30 = (undefined1 *)0x5e8ff4;
      FUN_005e7750(unaff_EDI);
    }
    iVar6 = *(int *)(local_8 + 0x24) + -1;
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        iVar1 = *(int *)(local_8 + 0xd8) + iVar7 * 0x54;
        if ((*(int *)(iVar1 + 8) != 1) || (*(int *)(iVar1 + 0xc) != 1)) {
          puStack_30 = (undefined1 *)0x5e902c;
          FUN_0040b9d0(PTR_LAB_00688e5c,&local_24);
          puStack_30 = (undefined1 *)0x5e9034;
          FUN_005e7750(local_24);
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if ((*(int *)(*(int *)(local_8 + 0xd8) + 8) != 1) ||
          (*(int *)(*(int *)(local_8 + 0xd8) + 0xc) != 1)) {
    puStack_30 = (undefined1 *)0x5e905c;
    FUN_0040b9d0(PTR_LAB_00688e5c,&local_28);
    puStack_30 = (undefined1 *)0x5e9064;
    FUN_005e7750(local_28);
  }
  if (*(char *)(iVar5 + 0x10) == '\v') {
    *(undefined4 *)(local_8 + 0x28) = 3;
  }
  else {
    *(undefined4 *)(local_8 + 0x28) = 0;
  }
  *(undefined4 *)(local_8 + 0x2c) = 2;
  *(undefined4 *)(local_8 + 0x44) = 0;
  puStack_30 = (undefined1 *)0x5e909b;
  FUN_005c0a5c(local_8 + 4);
  puStack_34 = &LAB_005e9131;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_10 = *local_c;
  uVar3 = param_4 / *(uint *)(local_8 + 0x270);
  puVar2 = &stack0xfffffffc;
  if (param_4 % *(uint *)(local_8 + 0x270) != 0) {
    puStack_30 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688ae4,&local_2c);
    FUN_005e7750(local_2c);
    puVar2 = puStack_30;
  }
  while( true ) {
    if ((int)uVar3 < 1) {
      *in_FS_OFFSET = uStack_38;
      puStack_30 = (undefined1 *)0x5e9138;
      puStack_34 = (undefined1 *)0x5e9130;
      FUN_005bf7e4(local_8 + 4,uStack_38,puVar2);
      return;
    }
    puStack_30 = puVar2;
    iVar5 = FUN_005c0be0(local_8 + 4,&local_10,1);
    if (iVar5 != 1) break;
    local_10 = local_10 + *(int *)(local_8 + 0x270);
    uVar3 = uVar3 - 1;
    puVar2 = puStack_30;
  }
  FUN_00406ba8();
  puVar2 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005e915a;
  local_28 = (undefined1 *)0x5e9152;
  thunk_FUN_004072fc(&local_2c,7,puVar2);
  return;
}
