// rea decompile_all
// name: FUN_101028a0
// address: 0x101028a0
// body: available
// range: 0x101028a0-0x10102ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_101028a0(int *param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  byte local_38 [8];
  uint local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [24];

  iVar11 = *param_1;
  if (iVar11 == 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return uVar4;
    }
  }
  else {
    uVar6 = param_1[1];
    uVar8 = param_1[2];
    uVar12 = uVar6;
    if (uVar6 < uVar8) {
      uVar12 = uVar8;
    }
    uVar9 = uVar8;
    do {
      uVar2 = uVar9;
      uVar9 = uVar2 + 1;
      if (uVar9 - uVar12 == 1) goto LAB_10102947;
      cVar3 = *(char *)(iVar11 + -1 + uVar9);
      param_1[2] = uVar9;
    } while ((byte)(cVar3 + 0x9fU) < 6 || (byte)(cVar3 - 0x30U) < 10);
    if (cVar3 == '_') {
      if ((uVar8 == 0) || (uVar6 <= uVar8)) {
        if (uVar6 < uVar2) goto LAB_10102934;
      }
      else if ((uVar6 < uVar2) || (*(char *)(iVar11 + uVar8) < -0x40)) {
LAB_10102934:
        FUN_10136b90(iVar11,uVar6,uVar8,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_10155eac);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_10102e40((uint *)local_38,(int)(iVar11 + uVar8),(int)(uVar2 - uVar8));
      if ((local_38[0] & 1) == 0) {
        puVar10 = (undefined4 *)param_1[4];
        if (puVar10 == (undefined4 *)0x0) {
          return 0;
        }
        cVar3 = FUN_10093f00(puVar10,(undefined1 (*) [16])"0x",(undefined1 *)0x2);
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = FUN_10093f00(puVar10,(undefined1 (*) [16])(iVar11 + uVar8),
                             (undefined1 *)(uVar2 - uVar8));
        if (cVar3 != '\0') {
          return 1;
        }
      }
      else {
        puVar10 = (undefined4 *)param_1[4];
        if (puVar10 == (undefined4 *)0x0) {
          return 0;
        }
        uVar13 = CONCAT44(local_2c,local_30);
        iVar11 = 0x14;
        if ((local_30 < 1000) <= local_2c) {
          uVar13 = CONCAT44(local_2c,local_30);
          iVar7 = iVar11;
          do {
            uVar8 = (uint)(uVar13 >> 0x20);
            uVar9 = (uint)uVar13;
            iVar11 = iVar7 + -4;
            uVar13 = __aulldiv(uVar9,uVar8,10000,0);
            uVar6 = uVar9 + (int)uVar13 * -10000;
            uVar12 = (uVar6 & 0xffff) / 100;
            *(uint *)(auStack_28 + iVar7 + -4) =
                 CONCAT22((&DAT_10145841)[uVar6 + uVar12 * -100 & 0xffff],(&DAT_10145841)[uVar12]);
            iVar7 = iVar11;
          } while (uVar8 != 0 || -uVar8 < (uint)(9999999 < uVar9));
        }
        iVar7 = (int)(uVar13 >> 0x20);
        uVar6 = (uint)uVar13;
        if (iVar7 != 0 || (uint)-iVar7 < (uint)(9 < uVar6)) {
          uVar8 = (uVar6 & 0xffff) / 100;
          uVar13 = (ulonglong)uVar8;
          *(undefined2 *)(auStack_28 + iVar11 + -2) = (&DAT_10145841)[uVar6 + uVar8 * -100 & 0xffff]
          ;
          iVar11 = iVar11 + -2;
        }
        if ((local_30 == 0 && local_2c == 0) || (uVar13 != 0)) {
          auStack_28[iVar11 + -1] = *(undefined1 *)((int)&DAT_10145841 + (int)uVar13 * 2 + 1);
          iVar11 = iVar11 + -1;
        }
        bVar5 = FUN_100946b0(puVar10,1,(char *)0x1,0,auStack_28 + iVar11,0x14 - iVar11);
        if (bVar5) {
          return 1;
        }
      }
      if ((*(byte *)((int)puVar10 + 10) & 0x80) == 0) {
        if (((byte)(param_2 + 0x9fU) < 0x1a) &&
           (uVar6 = (uint)(byte)(param_2 + 0x9fU), (0x3bcfbbfU >> (uVar6 & 0x1f) & 1) != 0)) {
          uVar4 = FUN_10093f00(puVar10,(undefined1 (*) [16])(&PTR_s_i8_10160890)[uVar6],
                               *(undefined1 **)(&DAT_10160828 + uVar6 * 4));
          return uVar4;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10155f34);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else {
LAB_10102947:
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                               &DAT_00000010), cVar3 != '\0')) {
        return 1;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return 0;
}
