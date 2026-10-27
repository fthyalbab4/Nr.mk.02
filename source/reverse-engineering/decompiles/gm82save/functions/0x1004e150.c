// rea decompile_all
// name: FUN_1004e150
// address: 0x1004e150
// body: available
// range: 0x1004e150-0x1004e165 inclusive
// range: 0x1004e170-0x1004e19e inclusive
// range: 0x1004e1a0-0x1004e1ee inclusive
// range: 0x1004e1f0-0x1004e203 inclusive
// range: 0x1004e210-0x1004e2b7 inclusive
// range: 0x1004e2c0-0x1004e2ee inclusive
// range: 0x1004e2f0-0x1004e2fc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1004e150(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  uVar6 = 0;
  uVar7 = *param_1;
  piVar5 = (int *)param_1[1];
  do {
    while( true ) {
      uVar8 = uVar7 >> 1 & 0x1f;
      if (uVar8 != 0x1f) break;
      if (uVar6 < 7) {
        uVar7 = 1;
        do {
          uVar8 = uVar7 >> ((byte)uVar6 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar8 == 0);
LAB_1004e170:
        uVar6 = uVar6 + 1;
      }
      else {
LAB_1004e1f0:
        SwitchToThread();
        if (uVar6 < 0xb) goto LAB_1004e170;
      }
      uVar7 = *param_1;
      piVar5 = (int *)param_1[1];
    }
    if ((uVar7 & 1) == 0) {
      uVar2 = param_1[0x10];
      if (uVar7 >> 1 == uVar2 >> 1) {
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x28) = 0;
        goto LAB_1004e2a7;
      }
      uVar2 = uVar7 + 2 | (uint)(0x3f < (uVar2 ^ uVar7));
    }
    else {
      uVar2 = uVar7 + 2;
    }
    if (piVar5 == (int *)0x0) {
      if (6 < uVar6) goto LAB_1004e1f0;
      uVar7 = 1;
      do {
        uVar8 = uVar7 >> ((byte)uVar6 & 0x1f);
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      goto LAB_1004e170;
    }
    LOCK();
    uVar3 = *param_1;
    bVar9 = uVar7 == uVar3;
    if (bVar9) {
      *param_1 = uVar2;
      uVar3 = uVar7;
    }
    uVar7 = uVar3;
    UNLOCK();
    if (bVar9) break;
    piVar5 = (int *)param_1[1];
    uVar8 = 1;
    uVar2 = 6;
    if (uVar6 < 6) {
      uVar2 = uVar6;
    }
    do {
      uVar3 = uVar8 >> ((byte)uVar2 & 0x1f);
      uVar8 = uVar8 + 1;
    } while (uVar3 == 0);
    uVar6 = uVar6 + (uVar6 < 7);
  } while( true );
  if (uVar8 == 0x1e) {
    piVar4 = (int *)*piVar5;
    if (piVar4 == (int *)0x0) {
      uVar7 = 0;
      do {
        if (uVar7 < 7) {
          uVar6 = 1;
          do {
            uVar3 = uVar6 >> ((byte)uVar7 & 0x1f);
            uVar6 = uVar6 + 1;
          } while (uVar3 == 0);
LAB_1004e2c0:
          uVar7 = uVar7 + 1;
        }
        else {
          SwitchToThread();
          if (uVar7 < 0xb) goto LAB_1004e2c0;
        }
        piVar4 = (int *)*piVar5;
      } while (piVar4 == (int *)0x0);
    }
    iVar1 = *piVar4;
    param_1[1] = (uint)piVar4;
    *param_1 = (uVar2 & 0xfffffffe) + 2 + (uint)(iVar1 != 0);
  }
  *(int **)(param_2 + 0x28) = piVar5;
  *(uint *)(param_2 + 0x2c) = uVar8;
LAB_1004e2a7:
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}
