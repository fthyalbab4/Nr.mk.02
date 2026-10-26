// rea decompile_all
// name: FUN_10111020
// address: 0x10111020
// body: available
// range: 0x10111020-0x1011108e inclusive
// range: 0x10111097-0x101110ad inclusive
// range: 0x101110ef-0x1011114d inclusive
// range: 0x101111c1-0x101111c4 inclusive
// range: 0x101111ec-0x1011123e inclusive
// range: 0x10111278-0x101113c2 inclusive
// range: 0x101113d0-0x10111444 inclusive
// range: 0x10111465-0x101114b2 inclusive
// range: 0x101114bd-0x10111534 inclusive
// range: 0x10111577-0x101115ef inclusive
// range: 0x1011162e-0x101116f1 inclusive
// range: 0x10111700-0x10111765 inclusive
// range: 0x10111770-0x10111833 inclusive
// range: 0x10111852-0x1011190d inclusive
// range: 0x101119aa-0x10111a1f inclusive
// range: 0x10111a4d-0x10111ab6 inclusive
// range: 0x10111ae2-0x10111af2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10111890) */
/* WARNING: Removing unreachable block (ram,0x101118c6) */
/* WARNING: Removing unreachable block (ram,0x101119aa) */
/* WARNING: Removing unreachable block (ram,0x101118d7) */
/* WARNING: Removing unreachable block (ram,0x101118ee) */
/* WARNING: Removing unreachable block (ram,0x101118f1) */
/* WARNING: Removing unreachable block (ram,0x101112b7) */
/* WARNING: Removing unreachable block (ram,0x101114d9) */
/* WARNING: Removing unreachable block (ram,0x1011131d) */
/* WARNING: Removing unreachable block (ram,0x10111ae2) */
/* WARNING: Removing unreachable block (ram,0x10111331) */
/* WARNING: Removing unreachable block (ram,0x10111406) */
/* WARNING: Removing unreachable block (ram,0x101114bd) */
/* WARNING: Removing unreachable block (ram,0x101114f1) */
/* WARNING: Removing unreachable block (ram,0x1011151b) */
/* WARNING: Removing unreachable block (ram,0x1011162e) */
/* WARNING: Removing unreachable block (ram,0x10111643) */
/* WARNING: Removing unreachable block (ram,0x10111632) */
/* WARNING: Removing unreachable block (ram,0x10111645) */
/* WARNING: Removing unreachable block (ram,0x10111690) */
/* WARNING: Removing unreachable block (ram,0x101117dc) */
/* WARNING: Removing unreachable block (ram,0x1011181d) */
/* WARNING: Removing unreachable block (ram,0x10111861) */
/* WARNING: Removing unreachable block (ram,0x101118a2) */
/* WARNING: Removing unreachable block (ram,0x101118b6) */
/* WARNING: Removing unreachable block (ram,0x101118b9) */
/* WARNING: Removing unreachable block (ram,0x101119c8) */
/* WARNING: Removing unreachable block (ram,0x101119cf) */
/* WARNING: Removing unreachable block (ram,0x101119e1) */
/* WARNING: Removing unreachable block (ram,0x101119ea) */
/* WARNING: Removing unreachable block (ram,0x101119fd) */
/* WARNING: Removing unreachable block (ram,0x101116a9) */
/* WARNING: Removing unreachable block (ram,0x101116b5) */
/* WARNING: Removing unreachable block (ram,0x101116b8) */
/* WARNING: Removing unreachable block (ram,0x10111700) */
/* WARNING: Removing unreachable block (ram,0x101117bb) */
/* WARNING: Removing unreachable block (ram,0x1011171b) */
/* WARNING: Removing unreachable block (ram,0x101116bc) */
/* WARNING: Removing unreachable block (ram,0x101116c4) */
/* WARNING: Removing unreachable block (ram,0x10111770) */
/* WARNING: Removing unreachable block (ram,0x101117d1) */
/* WARNING: Removing unreachable block (ram,0x1011177a) */
/* WARNING: Removing unreachable block (ram,0x101116cd) */
/* WARNING: Removing unreachable block (ram,0x101116d5) */
/* WARNING: Removing unreachable block (ram,0x101116ec) */
/* WARNING: Removing unreachable block (ram,0x1011141c) */
/* WARNING: Removing unreachable block (ram,0x10111425) */
/* WARNING: Removing unreachable block (ram,0x101113d0) */
/* WARNING: Removing unreachable block (ram,0x10111139) */

void __fastcall FUN_10111020(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  byte *local_b0;
  uint uStack_ac;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  uint local_90;
  byte local_8c [8];
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_34;
  undefined3 uStack_30;

  uVar2 = param_1[2];
  pbVar3 = (byte *)param_1[1];
  if (uVar2 == 0) {
    local_90 = 0;
    bVar4 = false;
  }
  else {
    bVar1 = pbVar3[uVar2 - 1];
    FUN_1010a5e0((undefined1 *)&local_b0,pbVar3,uVar2);
    if (((uint)local_b0 & 0xff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x1011108d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(&DAT_10111af4 + ((uint)local_b0 & 0xff) * 4) + 0x10111039))();
      return;
    }
    local_90 = (uint)(*pbVar3 == 0x2f || *pbVar3 == 0x5c);
    uStack_34 = CONCAT13((undefined1)uStack_ac,local_b0._1_3_);
    bVar4 = bVar1 != 0x5c && bVar1 != 0x2f;
    uStack_30 = (undefined3)(uStack_ac >> 8);
  }
  bVar5 = FUN_1010a490(param_2,param_3);
  if (bVar5) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    FUN_1010a5e0((undefined1 *)&local_b0,param_2,param_3);
    if (((uint)local_b0 & 0xff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x1011123d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(&DAT_10111b38 + ((uint)local_b0 & 0xff) * 4) + 0x10111039))();
      return;
    }
    FUN_1010a5e0((undefined1 *)&local_b0,param_2,param_3);
    uVar6 = (uint)local_b0 & 0xff;
    if (uVar6 < 6) {
                    /* WARNING: Could not recover jumptable at 0x101114b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(&DAT_10111b94 + uVar6 * 4) + 0x10111039))();
      return;
    }
    if (((param_3 == 0) || ((*param_2 != 0x2f && (*param_2 != 0x5c)))) &&
       ((uVar6 == 0xff || (uVar6 == 5)))) {
      if (bVar4) {
        FUN_10111bd0(param_1,(byte *)"\\",1);
      }
    }
    else {
      FUN_1010a5e0(local_8c,pbVar3,uVar2);
      if (local_8c[0] < 6) {
                    /* WARNING: Could not recover jumptable at 0x101115ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(&DAT_10111bac + (uint)local_8c[0] * 4) + 0x10111039))();
        return;
      }
      uVar6 = 0;
      if (uVar2 == 0) {
        uStack_92 = false;
      }
      else {
        uStack_92 = *pbVar3 == 0x2f || *pbVar3 == 0x5c;
      }
      local_a0 = local_84;
      local_98 = local_7c;
      uStack_94 = 0x200;
      local_b0 = pbVar3;
      uStack_ac = uVar2;
      if (local_8c[0] != 0xff) {
        uVar6 = FUN_10111e40(local_a8);
      }
      FUN_10110e70((int)param_1,uVar6);
    }
  }
  FUN_10111bd0(param_1,param_2,param_3);
  return;
}
