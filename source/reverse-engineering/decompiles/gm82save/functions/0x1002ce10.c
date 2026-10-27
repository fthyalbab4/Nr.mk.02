// rea decompile_all
// name: FUN_1002ce10
// address: 0x1002ce10
// body: available
// range: 0x1002ce10-0x1002ce63 inclusive
// range: 0x1002ce70-0x1002d069 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002ce10(char *param_1,int *param_2,void *param_3,SIZE_T param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  LPVOID pvVar7;
  HANDLE pvVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  SIZE_T SStack_60;
  LPVOID pvStack_5c;
  SIZE_T SStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  char cStack_34;
  undefined2 uStack_33;
  char cStack_31;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;

  uVar12 = param_2[8];
  uVar1 = param_2[9];
  if (uVar12 < uVar1) {
    piVar10 = (int *)(uVar12 * 4 + param_2[6]);
    puVar11 = (uint *)(*param_2 + 8 + (uVar12 + param_2[4]) * 0xc);
    iVar9 = param_2[4] * 4 + param_2[2];
    do {
      uVar12 = uVar12 + 1;
      param_2[8] = uVar12;
      if (*puVar11 != 0) {
        iVar6 = FUN_10003510((byte *)puVar11[-1],*puVar11);
        (*(code *)0x407ea8)();
        *piVar10 = iVar6;
        pbVar2 = (byte *)puVar11[-1];
        uVar3 = *puVar11;
        if (param_4 == 0) {
          pvVar7 = (LPVOID)0x1;
        }
        else {
          pvVar7 = FUN_10107380(0,param_4);
          if (pvVar7 == (LPVOID)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          memcpy(pvVar7,param_3,param_4);
        }
        SStack_60 = param_4;
        SStack_58 = param_4;
        uStack_54 = uStack_54 & 0xffffff00;
        pvStack_5c = pvVar7;
        FUN_10111020(&SStack_60,pbVar2,uVar3);
        uStack_70 = CONCAT44(pvStack_5c,SStack_60);
        uStack_68 = CONCAT44(uStack_54,SStack_58);
        FUN_10065a70(&cStack_34,(uint *)&uStack_70,param_5);
        uVar5 = uStack_30;
        if (cStack_34 != -1) {
          uStack_50 = uStack_2c;
          uStack_48 = uStack_24;
          uStack_40 = uStack_1c;
          uStack_38 = uStack_14;
          if ((uint)uStack_70 != 0) {
            pvVar7 = uStack_70._4_4_;
            pvVar8 = GetProcessHeap();
            HeapFree(pvVar8,0,pvVar7);
          }
          *param_1 = cStack_34;
          *(undefined2 *)(param_1 + 1) = uStack_33;
          param_1[3] = cStack_31;
          *(undefined4 *)(param_1 + 4) = uStack_30;
          *(undefined8 *)(param_1 + 0x10) = uStack_48;
          *(undefined8 *)(param_1 + 8) = uStack_50;
          *(undefined8 *)(param_1 + 0x18) = uStack_40;
          *(undefined4 *)(param_1 + 0x20) = uStack_38;
          return;
        }
        if (*(int *)(iVar9 + -4 + uVar12 * 4) != 0) {
          (*(code *)0x405a7c)();
        }
        *(undefined4 *)(iVar9 + -4 + uVar12 * 4) = uVar5;
        if ((uint)uStack_70 != 0) {
          pvVar7 = uStack_70._4_4_;
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,pvVar7);
        }
      }
      piVar10 = piVar10 + 1;
      puVar11 = puVar11 + 3;
    } while ((1 - uVar1) + uVar12 != 1);
  }
  *param_1 = -1;
  return;
}
