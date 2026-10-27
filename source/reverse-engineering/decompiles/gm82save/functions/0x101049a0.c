// rea decompile_all
// name: FUN_101049a0
// address: 0x101049a0
// body: available
// range: 0x101049a0-0x10104c10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_101049a0(int *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int local_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c [2];
  undefined8 local_14;

  bVar2 = FUN_10104c20(param_1);
  if (bVar2 == 2) {
    return 1;
  }
  if (((*param_1 == 0) || (uVar1 = param_1[2], (uint)param_1[1] <= uVar1)) ||
     (*(char *)(*param_1 + uVar1) != 'p')) {
    if (bVar2 != 1) {
      return 0;
    }
  }
  else {
    param_1[2] = uVar1 + 1;
    puVar7 = (undefined4 *)param_1[4];
    if ((bVar2 & 1) == 0) {
      if (puVar7 != (undefined4 *)0x0) {
        pcVar8 = "<";
        puVar9 = (undefined1 *)0x1;
        goto LAB_10104a19;
      }
    }
    else if (puVar7 != (undefined4 *)0x0) {
      pcVar8 = &DAT_10155ce2;
      puVar9 = (undefined1 *)0x2;
LAB_10104a19:
      cVar4 = FUN_10093f00(puVar7,(undefined1 (*) [16])pcVar8,puVar9);
      if (cVar4 != '\0') {
        return 1;
      }
    }
    if (*param_1 == 0) {
LAB_10104bba:
      puVar7 = (undefined4 *)param_1[4];
      if (puVar7 == (undefined4 *)0x0) {
        return 0;
      }
      pcVar8 = "?";
      goto LAB_10104a00;
    }
    FUN_10101120(&local_2c,param_1);
    if (local_2c == 0) {
LAB_10104bcb:
      puVar7 = (undefined4 *)param_1[4];
      if ((char)uStack_28 == '\0') {
        if (puVar7 == (undefined4 *)0x0) goto LAB_10104bff;
        pcVar8 = "{invalid syntax}";
        puVar9 = &DAT_00000010;
      }
      else {
        if (puVar7 == (undefined4 *)0x0) goto LAB_10104bff;
        pcVar8 = "{recursion limit reached}";
        puVar9 = (undefined1 *)0x19;
      }
      cVar4 = FUN_10093f00(puVar7,(undefined1 (*) [16])pcVar8,puVar9);
      if (cVar4 != '\0') {
        return 1;
      }
LAB_10104bff:
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)uStack_28;
      return 0;
    }
    local_14 = local_24;
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       ((uVar5 = FUN_10101310(local_1c,(undefined4 *)param_1[4]), (char)uVar5 != '\0' ||
        (((undefined4 *)param_1[4] != (undefined4 *)0x0 &&
         (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" = ",(undefined1 *)0x3
                              ), cVar4 != '\0')))))) {
      return 1;
    }
    if (((*param_1 == 0) || (uVar1 = param_1[2], (uint)param_1[1] <= uVar1)) ||
       (*(char *)(*param_1 + uVar1) != 'K')) {
      cVar4 = FUN_101018c0(param_1);
    }
    else {
      param_1[2] = uVar1 + 1;
      cVar4 = FUN_10101fc0(param_1,'\0');
    }
    if (cVar4 != '\0') {
      return 1;
    }
    iVar6 = *param_1;
    if (iVar6 != 0) {
      do {
        uVar1 = param_1[2];
        if (((uint)param_1[1] <= uVar1) || (*(char *)(iVar6 + uVar1) != 'p')) break;
        param_1[2] = uVar1 + 1;
        if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
          cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                               (undefined1 *)0x2);
          if (cVar4 != '\0') {
            return 1;
          }
          if (*param_1 == 0) goto LAB_10104bba;
        }
        FUN_10101120(&local_2c,param_1);
        if (local_2c == 0) goto LAB_10104bcb;
        local_14 = local_24;
        if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
          uVar5 = FUN_10101310(local_1c,(undefined4 *)param_1[4]);
          if ((char)uVar5 != '\0') {
            return 1;
          }
          if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
             (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" = ",
                                   (undefined1 *)0x3), cVar4 != '\0')) {
            return 1;
          }
        }
        if (((*param_1 == 0) || (uVar1 = param_1[2], (uint)param_1[1] <= uVar1)) ||
           (*(char *)(*param_1 + uVar1) != 'K')) {
          cVar4 = FUN_101018c0(param_1);
        }
        else {
          param_1[2] = uVar1 + 1;
          cVar4 = FUN_10101fc0(param_1,'\0');
        }
        if (cVar4 != '\0') {
          return 1;
        }
        iVar6 = *param_1;
      } while (iVar6 != 0);
    }
  }
  puVar7 = (undefined4 *)param_1[4];
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  pcVar8 = ">";
LAB_10104a00:
  uVar3 = FUN_10093f00(puVar7,(undefined1 (*) [16])pcVar8,(undefined1 *)0x1);
  return uVar3;
}
