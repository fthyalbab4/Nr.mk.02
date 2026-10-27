// rea decompile_all
// name: FUN_10095490
// address: 0x10095490
// body: available
// range: 0x10095490-0x100954be inclusive
// range: 0x100954c0-0x100954de inclusive
// range: 0x100954e0-0x1009565f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10095490(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_1c;

  uVar4 = 0;
  uVar8 = param_3 - 7;
  if (param_3 < 7) {
    uVar8 = 0;
  }
  if (param_3 != 0) {
    do {
      bVar1 = *(byte *)(param_2 + uVar4);
      uVar7 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        cVar2 = (&DAT_101586e8)[uVar7];
        local_1c = 1;
        if (cVar2 == '\x04') {
          if (uVar4 + 1 < param_3) {
            cVar2 = *(char *)(param_2 + uVar4 + 1);
            if (uVar7 == 0xf0) {
              if ((byte)(cVar2 + 0x70U) < 0x30) goto LAB_100955fc;
            }
            else if (uVar7 == 0xf4) {
              if (cVar2 < -0x70) {
LAB_100955fc:
                if (uVar4 + 2 < param_3) {
                  if (-0x41 < *(char *)(param_2 + uVar4 + 2)) goto LAB_10095639;
                  uVar6 = uVar4 + 3;
                  if (uVar6 < param_3) {
                    if (*(char *)(param_2 + uVar6) < -0x40) goto LAB_100954c0;
                    uVar7 = 3;
                    goto LAB_1009563b;
                  }
                }
                goto LAB_1009562c;
              }
            }
            else {
              uVar7 = (uint)(byte)(bVar1 + 0xf);
              if (((byte)(bVar1 + 0xf) < 3) && (cVar2 < -0x40)) goto LAB_100955fc;
            }
            goto LAB_10095635;
          }
LAB_1009562c:
          local_1c = 0;
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_1009562c;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar7 == 0xe0) {
            if ((bVar3 & 0xe0) == 0xa0) goto LAB_100955dc;
          }
          else if (uVar7 == 0xed) {
            if ((char)bVar3 < -0x60) {
LAB_100955dc:
              uVar6 = uVar4 + 2;
              if (param_3 <= uVar6) goto LAB_1009562c;
              if (*(char *)(param_2 + uVar6) < -0x40) goto LAB_100954c0;
LAB_10095639:
              uVar7 = 2;
              goto LAB_1009563b;
            }
          }
          else if ((((byte)(bVar1 + 0x1f) < 0xc) ||
                   (uVar7 = (uint)(bVar1 & 0xfe), (bVar1 & 0xfe) == 0xee)) && ((char)bVar3 < -0x40))
          goto LAB_100955dc;
LAB_10095635:
          uVar7 = 1;
        }
        else {
          if (cVar2 != '\x02') goto LAB_10095635;
          uVar6 = uVar4 + 1;
          if (param_3 <= uVar6) goto LAB_1009562c;
          uVar7 = 1;
          if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_100954c0:
            uVar4 = uVar6 + 1;
            goto LAB_100954c3;
          }
        }
LAB_1009563b:
        param_1[1] = uVar4;
        uVar5 = 1;
        param_1[2] = local_1c | uVar7 << 8;
        goto LAB_10095656;
      }
      if ((-uVar4 - param_2 & 3) == 0) {
        while ((uVar4 < uVar8 &&
               (((*(uint *)(param_2 + 4 + uVar4) | *(uint *)(param_2 + uVar4)) & 0x80808080) == 0)))
        {
          uVar4 = uVar4 + 8;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_1009561e;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_100954c3:
    } while (uVar4 < param_3);
  }
LAB_1009561e:
  uVar5 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
LAB_10095656:
  *param_1 = uVar5;
  return;
}
