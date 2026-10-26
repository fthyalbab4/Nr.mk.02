// rea decompile_all
// name: FUN_0052613c
// address: 0x52613c
// body: available
// range: 0x52613c-0x5263dc inclusive
// range: 0x5263e4-0x5263ea inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x526259 (push 0x5263dd followed by fs-segment stack chaining); handler 0x5263dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052613c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *in_FS_OFFSET;
  uint uStack_10158;
  uint uStack_10154;
  int iStack_10150;
  byte abStack_10131 [32769];
  int local_8130;
  undefined1 local_8129;
  int *local_8128;
  undefined4 local_8124;
  int local_8120;
  undefined1 local_8119;
  undefined4 local_8118;
  undefined4 local_8114;
  int local_8110;
  undefined1 local_8109;
  undefined4 uStack_1178;
  undefined1 *puStack_1174;
  undefined4 uStack_1170;
  undefined1 *puStack_116c;
  undefined1 *puStack_1168;

  iVar4 = 0x10;
  do {
    local_8120 = iVar4;
    iVar4 = local_8120 + -1;
  } while (local_8120 + -1 != 0);
  puStack_1168 = (undefined1 *)0x526172;
  local_8128 = param_2;
  FUN_005280a8(local_8120);
  if (*(char *)(local_8120 + 0x34) == '\0') {
    uVar2 = 0;
  }
  else {
    puStack_1168 = (undefined1 *)0x52618c;
    uVar2 = FUN_0052b664(*(undefined4 *)(local_8120 + 0x38));
  }
  puStack_1168 = (undefined1 *)0x5261aa;
  FUN_00404f38(*(undefined4 *)(local_8120 + 0x18),*(undefined4 *)(local_8120 + 0x1c),uVar2);
  puStack_1168 = (undefined1 *)0x5261c0;
  iVar4 = (**(code **)(*local_8128 + 0xc))(local_8128,abStack_10131,1);
  if (iVar4 == 1) {
    local_8130 = abStack_10131[0] + 1;
    local_8110 = 1 << (abStack_10131[0] & 0x1f);
    local_8114 = 0;
    local_8118 = 0;
    local_8124 = 2;
    local_8129 = 0;
    local_8119 = 0;
    local_8109 = 1;
    puStack_116c = &LAB_005263dd;
    uStack_1170 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1170;
    puStack_1174 = (undefined1 *)0x526267;
    puStack_1168 = &stack0xfffffffc;
    cVar3 = FUN_00528da4(local_8120);
    if (cVar3 == '\0') {
      puVar8 = *(undefined1 **)(local_8120 + 0x18);
      puStack_1174 = (undefined1 *)0x526384;
      uVar5 = FUN_005281b8(local_8120,4);
      puStack_1174 = (undefined1 *)0x526397;
      uVar7 = FUN_005281b8(local_8120,3);
      uStack_10158 = (uVar5 & 0xffff) * (uVar7 & 0xffff);
      if (-1 < (int)(uStack_10158 + -1)) {
        do {
          uStack_1178 = 0x5263af;
          puStack_1174 = &stack0xfffffffc;
          iVar4 = FUN_00526100();
          if (iVar4 < 0) {
            puStack_1174 = (undefined1 *)0x5263b9;
            FUN_00406ba8();
            return;
          }
          *puVar8 = (char)iVar4;
          puVar8 = puVar8 + 1;
          uStack_10158 = uStack_10158 + -1;
        } while (uStack_10158 != 0);
      }
    }
    else {
      iVar4 = 0;
      iStack_10150 = 0;
      uStack_10154 = 8;
      puStack_1174 = (undefined1 *)0x526293;
      uStack_10158 = FUN_005281b8(local_8120,4);
      uStack_10158 = uStack_10158 & 0xffff;
      if (-1 < (int)(uStack_10158 - 1)) {
        do {
          puStack_1174 = (undefined1 *)0x5262b6;
          uVar5 = FUN_005281b8(local_8120,3);
          puVar8 = (undefined1 *)((uVar5 & 0xffff) * iVar4 + *(int *)(local_8120 + 0x18));
          puStack_1174 = (undefined1 *)0x5262d5;
          uVar5 = FUN_005281b8(local_8120,3);
          uVar5 = uVar5 & 0xffff;
          if (-1 < (int)(uVar5 - 1)) {
            do {
              uStack_1178 = 0x5262e4;
              puStack_1174 = &stack0xfffffffc;
              iVar6 = FUN_00526100();
              if (iVar6 < 0) {
                puStack_1174 = (undefined1 *)0x5262ee;
                FUN_00406ba8();
                return;
              }
              *puVar8 = (char)iVar6;
              puVar8 = puVar8 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar4 = iVar4 + uStack_10154;
          puStack_1174 = (undefined1 *)0x52630f;
          uVar5 = FUN_005281b8(local_8120,4);
          if ((int)(uVar5 & 0xffff) <= iVar4) {
            do {
              if (0 < iStack_10150) {
                uStack_10154 = (int)uStack_10154 / 2;
              }
              iStack_10150 = iStack_10150 + 1;
              iVar4 = (int)uStack_10154 >> 1;
              if (iVar4 < 0) {
                iVar4 = iVar4 + (uint)((uStack_10154 & 1) != 0);
              }
              puStack_1174 = (undefined1 *)0x526356;
              uVar5 = FUN_005281b8(local_8120,4);
            } while ((int)(uVar5 & 0xffff) <= iVar4);
          }
          uStack_10158 = uStack_10158 - 1;
        } while (uStack_10158 != 0);
      }
    }
    puVar8 = puStack_1168;
    uVar1 = uStack_1170;
    *in_FS_OFFSET = uStack_1170;
    puStack_1168 = (undefined1 *)0x5263e4;
    uStack_1170 = 0x5263d9;
    puStack_116c = &stack0xfffffffc;
    FUN_00526100(0,uVar1,puVar8);
    return;
  }
  return;
}
