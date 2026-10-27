// rea decompile_all
// name: FUN_004f83f4
// address: 0x4f83f4
// body: available
// range: 0x4f83f4-0x4f851d inclusive
// range: 0x4f85ab-0x4f85b5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f847c (push 0x4f851e followed by fs-segment stack chaining); handler 0x4f851e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f83f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_1c;
  byte local_15;
  undefined4 local_14;
  undefined4 local_c;
  int *local_8;

  local_15 = 1;
  puStack_4c = (undefined1 *)0x4f8412;
  local_14 = param_3;
  local_c = param_2;
  local_8 = param_1;
  cVar3 = FUN_004f7a54(param_1);
  if ((cVar3 != '\0') && (*(char *)((int)local_8 + 0x5d) != '\x05')) {
    if ((*(byte *)(local_8 + 7) & 0x10) != 0) {
      puStack_4c = (undefined1 *)0x4f8438;
      iVar4 = FUN_004f3124(local_8);
      if (iVar4 < 1) goto LAB_004f85ab;
    }
    puStack_4c = (undefined1 *)0x4f844e;
    (**(code **)(*local_8 + 0xd0))(local_8,&local_2c);
    puStack_4c = (undefined1 *)0x4f8459;
    (**(code **)(*local_8 + 0x54))(local_8,&local_3c);
    puStack_4c = (undefined1 *)0x4f8467;
    (**(code **)(*local_8 + 0xa0))(local_8,&local_3c);
    *(short *)(local_8 + 0x6b) = (short)local_8[0x6b] + 1;
    puStack_50 = &LAB_004f851e;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    iVar4 = FUN_004f3124(local_8);
    if (-1 < iVar4 + -1) {
      local_1c = 0;
      do {
        piVar5 = (int *)FUN_004f30e8(local_8,local_1c);
        if ((*(char *)((int)piVar5 + 0x59) != '\0') ||
           (((*(byte *)(piVar5 + 7) & 0x10) != 0 && ((*(byte *)((int)piVar5 + 0x51) & 4) == 0)))) {
          bVar1 = *(byte *)((int)local_8 + 0x5d);
          if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
            iVar8 = local_2c - local_3c;
          }
          else {
            iVar8 = 0;
          }
          if (bVar1 < 3) {
            iVar7 = local_28 - local_38;
          }
          else {
            iVar7 = 0;
          }
          (**(code **)(*piVar5 + 0x98))
                    (piVar5,piVar5[0x10] - iVar8,piVar5[0x11] - iVar7,piVar5[0x13],piVar5[0x12]);
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2 = puStack_4c;
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &DAT_004f8525;
    local_8[0x15] = local_8[0x15] & 0xffffffef;
    puStack_50 = (undefined1 *)0x4f851d;
    uVar6 = FUN_004f2c1c(local_8,uStack_54,puVar2);
    return uVar6;
  }
LAB_004f85ab:
  return (uint)local_15;
}
