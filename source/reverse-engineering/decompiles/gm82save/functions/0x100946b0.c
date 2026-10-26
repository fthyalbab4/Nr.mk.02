// rea decompile_all
// name: FUN_100946b0
// address: 0x100946b0
// body: available
// range: 0x100946b0-0x1009490f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall
FUN_100946b0(undefined4 *param_1,int param_2,char *param_3,int param_4,undefined4 param_5,
            int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar17;
  char *local_20;
  uint uVar16;

  uVar1 = param_1[2];
  local_20 = (char *)0x0;
  uVar14 = 0x2d;
  if (param_2 != 0) {
    uVar14 = -(uint)((uVar1 & 0x200000) == 0) | 0x2b;
  }
  uVar5 = 1;
  if (param_2 != 0) {
    uVar5 = (uVar1 & 0x200000) >> 0x15;
  }
  uVar5 = uVar5 + param_6;
  if ((uVar1 & 0x800000) != 0) {
    local_20 = param_3;
    if (param_4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      iVar17 = param_4;
      do {
        cVar4 = *param_3;
        param_3 = param_3 + 1;
        iVar9 = iVar9 + (uint)(-0x41 < cVar4);
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    uVar5 = uVar5 + iVar9;
  }
  uVar10 = *(ushort *)(param_1 + 3);
  uVar13 = (uint)uVar10;
  if (uVar13 <= uVar5) {
    uVar2 = *param_1;
    iVar9 = param_1[1];
    uVar6 = FUN_10094920(uVar2,iVar9,uVar14,(int)local_20,param_4);
    if ((char)uVar6 != '\0') {
      return true;
    }
    uVar3 = (**(code **)(iVar9 + 0xc))(uVar2,param_5,param_6);
    return (bool)uVar3;
  }
  if ((uVar1 & 0x1000000) == 0) {
    uVar13 = uVar13 - uVar5;
    uVar8 = 0;
    switch(uVar1 >> 0x1d & 3) {
    case 0:
      break;
    default:
      uVar8 = uVar13;
      break;
    case 2:
      uVar8 = (uVar13 & 0xffff) >> 1;
    }
    uVar2 = *param_1;
    iVar9 = param_1[1];
    uVar16 = uVar8 + 1;
    do {
      uVar15 = (short)uVar16 - 1;
      uVar16 = (uint)uVar15;
      if (uVar15 == 0) {
        uVar6 = FUN_10094920(uVar2,iVar9,uVar14,(int)local_20,param_4);
        if ((char)uVar6 != '\0') {
          return true;
        }
        cVar4 = (**(code **)(iVar9 + 0xc))(uVar2,param_5,param_6);
        if (cVar4 != '\0') {
          return true;
        }
        uVar11 = (short)uVar13 - (short)uVar8;
        uVar15 = 0xffff;
        goto LAB_100948e0;
      }
      cVar4 = (**(code **)(iVar9 + 0x10))(uVar2,uVar1 & 0x1fffff);
    } while (cVar4 == '\0');
  }
  else {
    uVar2 = param_1[3];
    uVar1 = param_1[2];
    param_1[2] = uVar1 & 0x9fe00000 | 0x20000030;
    iVar9 = param_1[1];
    uVar6 = *param_1;
    uVar7 = FUN_10094920(uVar6,iVar9,uVar14,(int)local_20,param_4);
    if ((char)uVar7 != '\0') {
      return true;
    }
    uVar14 = (uVar13 - uVar5) + 1;
    do {
      uVar10 = (short)uVar14 - 1;
      uVar14 = (uint)uVar10;
      if (uVar10 == 0) {
        cVar4 = (**(code **)(iVar9 + 0xc))(uVar6,param_5,param_6);
        if (cVar4 != '\0') {
          return true;
        }
        param_1[2] = uVar1;
        param_1[3] = uVar2;
        return false;
      }
      cVar4 = (**(code **)(iVar9 + 0x10))(uVar6,0x30);
    } while (cVar4 == '\0');
  }
  return true;
  while( true ) {
    cVar4 = (**(code **)(iVar9 + 0x10))(uVar2,uVar1 & 0x1fffff);
    uVar12 = uVar15 + 1;
    uVar15 = uVar12;
    if (cVar4 != '\0') break;
LAB_100948e0:
    uVar12 = uVar11;
    if ((ushort)((((short)uVar8 + (short)uVar5) - uVar10) + uVar15) == -1) break;
  }
  return uVar12 < uVar11;
}
