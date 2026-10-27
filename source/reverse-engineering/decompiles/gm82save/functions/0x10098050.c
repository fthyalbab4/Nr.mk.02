// rea decompile_all
// name: FUN_10098050
// address: 0x10098050
// body: available
// range: 0x10098050-0x1009809b inclusive
// range: 0x100980a0-0x100980b9 inclusive
// range: 0x100980c0-0x10098104 inclusive
// range: 0x10098110-0x100981af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10098050(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  code *pcVar8;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  short *local_14;

  if (param_3[1] != 0) {
    uVar3 = (**(code **)(param_2 + 0xc))(param_1,*param_3,param_3[1]);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  if (param_3[3] != 0) {
    psVar7 = (short *)param_3[2];
    local_14 = psVar7 + param_3[3] * 6;
    local_20 = param_2;
    do {
      iVar1 = local_20;
      if (*psVar7 == 0) {
        uVar4 = *(uint *)(psVar7 + 2);
        if (0x40 < uVar4) {
          pcVar8 = *(code **)(param_2 + 0xc);
          do {
            uVar3 = (*pcVar8)(param_1,&DAT_10145584,0x40);
            if ((char)uVar3 != '\0') goto LAB_100981a6;
            uVar4 = uVar4 - 0x40;
          } while (0x40 < uVar4);
LAB_10098142:
          uVar3 = (*pcVar8)(param_1,&DAT_10145584,uVar4);
          cVar2 = (char)uVar3;
          param_2 = local_20;
          goto joined_r0x100980af;
        }
        if (uVar4 != 0) {
          pcVar8 = *(code **)(param_2 + 0xc);
          goto LAB_10098142;
        }
      }
      else {
        if (*psVar7 == 1) {
          uVar4 = (uint)(ushort)psVar7[1];
          uStack_18 = 0;
          uStack_1c = 0;
          if (uVar4 == 0) {
            iVar5 = 1;
            iVar6 = iVar5;
          }
          else {
            iVar5 = ((uVar4 + 0xdfc18 & uVar4 + 0x7d8f0 ^ uVar4 + 0x5fff6 & uVar4 + 0x7ff9c) >> 0x11
                    ) + 1;
            iVar6 = iVar5;
          }
          do {
            *(byte *)((int)&local_20 + iVar5 + 3) = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
            iVar5 = iVar5 + -1;
            uVar4 = uVar4 / 10;
          } while (iVar5 != 0);
          uVar3 = (**(code **)(local_20 + 0xc))(param_1,&uStack_1c,iVar6);
          cVar2 = (char)uVar3;
          param_2 = iVar1;
        }
        else {
          uVar3 = (**(code **)(param_2 + 0xc))
                            (param_1,*(undefined4 *)(psVar7 + 2),*(undefined4 *)(psVar7 + 4));
          cVar2 = (char)uVar3;
        }
joined_r0x100980af:
        if (cVar2 != '\0') {
LAB_100981a6:
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
      psVar7 = psVar7 + 6;
    } while (psVar7 != local_14);
  }
  return 0;
}
