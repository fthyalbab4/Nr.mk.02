// rea decompile_all
// name: FUN_10097e20
// address: 0x10097e20
// body: available
// range: 0x10097e20-0x10097ef6 inclusive
// range: 0x10097f00-0x10097f46 inclusive
// range: 0x10097f50-0x1009803f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10097e20(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  ushort local_3c;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;

  uVar12 = *(ushort *)(param_1 + 3);
  uVar9 = (uint)uVar12;
  if (uVar12 == 0) {
    uVar9 = FUN_10098050(*param_1,param_1[1],(undefined4 *)param_2);
    return uVar9;
  }
  uVar3 = param_1[2];
  uVar2 = *param_2;
  local_20 = param_2[1];
  local_14 = param_1[3];
  local_28._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  uVar15 = local_28._4_4_;
  local_38 = uVar3;
  local_28 = uVar2;
  if ((uVar3 & 0x1000000) != 0) {
    local_28._0_4_ = (undefined4)uVar2;
    uVar5 = (undefined4)local_28;
    uVar5 = (**(code **)(param_1[1] + 0xc))(*param_1,uVar5,uVar15);
    if ((char)uVar5 != '\0') goto LAB_10097fea;
    local_28 = 1;
    uVar10 = (ushort)((ulonglong)uVar2 >> 0x20);
    uVar9 = (uint)(ushort)(uVar12 - uVar10);
    if (uVar12 < uVar10) {
      uVar9 = 0;
    }
    local_38 = uVar3 & 0x9fe00000 | 0x20000030;
    param_1[2] = local_38;
    uVar15 = 0;
  }
  if (local_20._4_4_ != 0) {
    puVar8 = (uint *)((int)local_20 + 8);
    iVar6 = local_20._4_4_;
    do {
      if ((short)puVar8[-2] == 0) {
        uVar11 = puVar8[-1];
      }
      else if ((short)puVar8[-2] == 1) {
        uVar11 = (uint)*(ushort *)((int)puVar8 + -6);
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = ((uVar11 + 0x7d8f0 & uVar11 + 0xdfc18 ^ uVar11 + 0x5fff6 & uVar11 + 0x7ff9c) >>
                   0x11) + 1;
        }
      }
      else {
        uVar11 = *puVar8;
      }
      bVar18 = CARRY4(uVar15,uVar11);
      uVar15 = uVar15 + uVar11;
      if (bVar18) {
        uVar15 = 0xffffffff;
      }
      puVar8 = puVar8 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar15 < uVar9) {
    uVar11 = uVar9 - uVar15;
    local_18 = 0;
    switch(local_38 >> 0x1d & 3) {
    case 0:
      break;
    default:
      local_18 = uVar11;
      break;
    case 2:
      local_18 = (uVar11 & 0xffff) >> 1;
    }
    uVar13 = local_18 + 1;
    uVar4 = *param_1;
    iVar6 = param_1[1];
    do {
      uVar12 = (short)uVar13 - 1;
      uVar13 = (uint)uVar12;
      if (uVar12 == 0) {
        uVar5 = FUN_10098050(uVar4,iVar6,(undefined4 *)&local_28);
        if ((char)uVar5 == '\0') {
          iVar1 = uVar11 - local_18;
          iVar14 = local_18 + uVar15;
          iVar16 = CONCAT22((short)(uVar15 >> 0x10),0xffff);
          goto LAB_10098000;
        }
        break;
      }
      uVar5 = (**(code **)(iVar6 + 0x10))(uVar4,local_38 & 0x1fffff);
    } while ((char)uVar5 == '\0');
LAB_10097fea:
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar9 = FUN_10098050(*param_1,param_1[1],(undefined4 *)&local_28);
  goto LAB_1009802a;
  while( true ) {
    iVar7 = (**(code **)(iVar6 + 0x10))(uVar4,local_38 & 0x1fffff);
    iVar17 = iVar16 + 1;
    iVar16 = iVar17;
    if ((char)iVar7 != '\0') break;
LAB_10098000:
    iVar7 = (iVar14 - uVar9) + iVar16;
    iVar17 = iVar1;
    if ((short)iVar7 == -1) break;
  }
  local_3c = (ushort)iVar1;
  uVar9 = CONCAT31((int3)((uint)iVar7 >> 8),(ushort)iVar17 < local_3c);
LAB_1009802a:
  param_1[2] = uVar3;
  param_1[3] = local_14;
  return uVar9;
}
