// rea decompile_all
// name: FUN_1002c9f0
// address: 0x1002c9f0
// body: available
// range: 0x1002c9f0-0x1002cbfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002c9f0(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 local_3c;
  undefined8 local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  uint local_18;
  byte *local_14;

  puVar3 = (uint *)param_2[2];
  uVar4 = param_2[1];
  cVar1 = (char)param_2[4];
  iVar10 = *param_2;
  uVar7 = *puVar3;
  if (param_2[3] == uVar4) {
    FUN_1002c4b0(param_1,iVar10,uVar4,uVar7,param_3,cVar1);
    return;
  }
  uVar14 = FUN_100913c0(iVar10,uVar4,uVar7,param_2[3]);
  uVar7 = (uint)(uVar14 >> 0x20);
  if ((uVar14 & 1) == 0) {
    if (cVar1 == '\0') {
      if (uVar4 == 0) {
        uVar7 = 0xffffffff;
        iVar11 = 0;
      }
      else {
        uVar7 = uVar4 - 1;
        iVar11 = 0;
        if (*(char *)(iVar10 + -1 + uVar4) == '\r') {
          iVar11 = iVar10;
        }
      }
      local_3c = *(undefined4 *)((int)param_3 + 0xc);
      local_30 = *param_3;
      uVar5 = *(uint *)(param_3 + 1);
      if (uVar5 == (uint)local_30) {
        local_28 = uVar5;
        FUN_10135ee0((uint *)&local_30);
      }
      if (iVar11 == 0) {
        uVar7 = uVar4;
        iVar11 = iVar10;
      }
      *(int *)(local_30._4_4_ + uVar5 * 8) = iVar11;
      *(uint *)(local_30._4_4_ + 4 + uVar5 * 8) = uVar7;
      *(uint *)(param_1 + 1) = uVar5 + 1;
      local_20 = local_30;
      goto LAB_1002cbc1;
    }
    local_30 = *param_3;
    uVar13 = param_3[1];
  }
  else {
    if (uVar7 != 0) {
      if (uVar7 < uVar4) {
        if (*(char *)(iVar10 + uVar7) < -0x40) {
LAB_1002ca5a:
          FUN_10136b90(iVar10,uVar4,0,uVar7,&PTR_s_C__Users_runneradmin__rustup_too_1013f7c0);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
      }
      else if (uVar7 != uVar4) goto LAB_1002ca5a;
    }
    pbVar9 = (byte *)(iVar10 + uVar7);
    if (uVar7 != uVar4) {
      bVar2 = *pbVar9;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          pbVar9 = pbVar9 + 2;
        }
        else {
          pbVar9 = pbVar9 + (4 - (uint)(bVar2 < 0xf0));
        }
      }
      else {
        pbVar9 = pbVar9 + 1;
      }
    }
    FUN_1002c4b0(&local_30,iVar10,uVar7,*puVar3,param_3,'\0');
    if (cVar1 == '\0') {
      iVar10 = (iVar10 + uVar4) - (int)pbVar9;
      if (iVar10 == 0) {
        iVar11 = -1;
        pbVar8 = (byte *)0x0;
      }
      else {
        iVar11 = iVar10 + -1;
        pbVar8 = (byte *)0x0;
        if (pbVar9[iVar10 + -1] == 0xd) {
          pbVar8 = pbVar9;
        }
      }
      local_20 = local_30;
      uVar13 = local_20;
      local_3c = uStack_24;
      local_18 = local_28;
      local_20._0_4_ = (uint)local_30;
      bVar12 = local_28 == (uint)local_20;
      local_20 = uVar13;
      local_14 = pbVar9;
      if (bVar12) {
        FUN_10135ee0((uint *)&local_20);
      }
      if (pbVar8 != (byte *)0x0) {
        local_14 = pbVar8;
        iVar10 = iVar11;
      }
      *(byte **)(local_20._4_4_ + local_28 * 8) = local_14;
      *(int *)(local_20._4_4_ + 4 + local_28 * 8) = iVar10;
      *(uint *)(param_1 + 1) = local_28 + 1;
LAB_1002cbc1:
      *param_1 = local_20;
      *(undefined4 *)((int)param_1 + 0xc) = local_3c;
      return;
    }
    uVar13 = CONCAT44(uStack_24,local_28);
  }
  param_1[1] = uVar13;
  *param_1 = local_30;
  return;
}
