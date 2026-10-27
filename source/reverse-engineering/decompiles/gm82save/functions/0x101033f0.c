// rea decompile_all
// name: FUN_101033f0
// address: 0x101033f0
// body: available
// range: 0x101033f0-0x10103409 inclusive
// range: 0x10103410-0x10103499 inclusive
// range: 0x101034a0-0x10103509 inclusive
// range: 0x10103510-0x10103692 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_101033f0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint local_38;
  int local_30;
  char cStack_2c;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;

  iVar12 = *param_1;
  if (iVar12 != 0) {
    iVar10 = 0;
    do {
      local_38 = param_1[1];
      uVar5 = param_1[2];
      if ((uVar5 < local_38) && (*(char *)(iVar12 + uVar5) == 'E')) {
        param_1[2] = uVar5 + 1;
        return 0;
      }
      if ((iVar10 == 0) || ((undefined4 *)param_1[4] == (undefined4 *)0x0)) {
        if (uVar5 < local_38) {
LAB_101034ae:
          if (*(char *)(iVar12 + uVar5) == 's') {
            uVar11 = uVar5 + 1;
            param_1[2] = uVar11;
            if ((local_38 <= uVar11) || (*(char *)(iVar12 + uVar11) != '_')) {
              uVar5 = 0;
              uVar6 = 0;
              do {
                if (local_38 == uVar11) break;
                cVar2 = *(char *)(iVar12 + uVar11);
                if (cVar2 == '_') {
                  param_1[2] = uVar11 + 1;
                  if ((uint)(0xfffffffd < uVar5) <= -uVar6 - 1) goto LAB_101035d0;
                  break;
                }
                bVar9 = cVar2 - 0x30;
                if (9 < bVar9) {
                  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                    bVar9 = cVar2 + 0xa9;
                  }
                  else {
                    if (0x19 < (byte)(cVar2 + 0xbfU)) break;
                    bVar9 = cVar2 - 0x1d;
                  }
                }
                uVar11 = uVar11 + 1;
                param_1[2] = uVar11;
                bVar13 = (int)((ulonglong)uVar6 * 0x3e >> 0x20) != 0;
                uVar6 = (uint)((ulonglong)uVar6 * 0x3e);
                uVar7 = (uint)((ulonglong)uVar5 * 0x3e >> 0x20);
                uVar3 = (uint)((ulonglong)uVar5 * 0x3e);
                uVar8 = uVar7 + uVar6;
                if (CARRY4(uVar7,uVar6) || bVar13) break;
                uVar6 = CONCAT11(bVar13,bVar9) & 0xff;
                uVar5 = uVar3 + uVar6;
                uVar3 = (uint)CARRY4(uVar3,uVar6);
                uVar6 = uVar8 + uVar3;
              } while (!CARRY4(uVar8,uVar3));
              if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
                 (cVar2 = FUN_10093f00((undefined4 *)param_1[4],
                                       (undefined1 (*) [16])"{invalid syntax}",&DAT_00000010),
                 cVar2 != '\0')) {
                return 1;
              }
              *param_1 = 0;
              *(undefined1 *)(param_1 + 1) = 0;
              goto LAB_1010342d;
            }
            param_1[2] = uVar5 + 2;
          }
        }
LAB_101035d0:
        FUN_10101120(&local_30,param_1);
        if (local_30 == 0) {
          puVar1 = (undefined4 *)param_1[4];
          if (cStack_2c == '\0') {
            if (puVar1 == (undefined4 *)0x0) goto LAB_1010367b;
            cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])"{invalid syntax}",&DAT_00000010);
          }
          else {
            if (puVar1 == (undefined4 *)0x0) goto LAB_1010367b;
            cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])"{recursion limit reached}",
                                 (undefined1 *)0x19);
          }
          if (cVar2 != '\0') {
            return 1;
          }
LAB_1010367b:
          *param_1 = 0;
          *(char *)(param_1 + 1) = cStack_2c;
          return 0;
        }
        puVar1 = (undefined4 *)param_1[4];
        local_18 = local_28;
        if (puVar1 != (undefined4 *)0x0) {
          uVar4 = FUN_10101310(local_20,puVar1);
          if ((char)uVar4 != '\0') {
            return 1;
          }
          cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])": ",(undefined1 *)0x2);
          if (cVar2 != '\0') {
            return 1;
          }
        }
        cVar2 = FUN_10101fc0(param_1,'\x01');
        if (cVar2 != '\0') {
          return 1;
        }
      }
      else {
        cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                             (undefined1 *)0x2);
        if (cVar2 != '\0') {
          return 1;
        }
        iVar12 = *param_1;
        if (iVar12 != 0) {
          local_38 = param_1[1];
          uVar5 = param_1[2];
          if (uVar5 < local_38) goto LAB_101034ae;
          goto LAB_101035d0;
        }
        if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
           (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1
                                ), cVar2 != '\0')) {
          return 1;
        }
      }
LAB_1010342d:
      iVar12 = *param_1;
      iVar10 = iVar10 + 1;
    } while (iVar12 != 0);
  }
  return 0;
}
