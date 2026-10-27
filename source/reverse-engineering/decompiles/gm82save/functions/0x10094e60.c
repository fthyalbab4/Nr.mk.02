// rea decompile_all
// name: FUN_10094e60
// address: 0x10094e60
// body: available
// range: 0x10094e60-0x10095099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10094e60(uint *param_1,uint param_2,uint3 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined2 local_e;

  switch(param_2) {
  case 0:
    *(undefined2 *)param_1 = 0x305c;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
switchD_10094e7c_caseD_1:
    if ((0x2ff < param_2 & (byte)param_3) == 0) {
LAB_10094faa:
      uStack_24 = 0x10094fb5;
      bVar2 = FUN_10095140(param_2);
      if (bVar2) {
        *param_1 = param_2;
        uVar4 = 0x81;
        cVar1 = -0x80;
        goto LAB_1009508d;
      }
      uStack_14 = 0;
      local_16 = 0;
      uStack_13 = (&DAT_10155cf4)[param_2 >> 0x14];
      uVar3 = 0x1f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = (uVar3 ^ 0x1c) >> 2;
      uStack_12 = (&DAT_10155cf4)[param_2 >> 0x10 & 0xf];
      cVar1 = (char)uVar3;
      uStack_11 = (&DAT_10155cf4)[param_2 >> 0xc & 0xf];
      uStack_10 = (&DAT_10155cf4)[param_2 >> 8 & 0xf];
      uStack_f = (&DAT_10155cf4)[param_2 >> 4 & 0xf];
      local_e = CONCAT11(0x7d,(&DAT_10155cf4)[param_2 & 0xf]);
      *(undefined2 *)((int)&local_18 + uVar3) = 0x755c;
      *(undefined1 *)((int)&local_16 + uVar3) = 0x7b;
      *(undefined2 *)(param_1 + 2) = local_e;
      *(ulonglong *)param_1 =
           CONCAT17(uStack_f,CONCAT16(uStack_10,
                                      CONCAT15(uStack_11,
                                               CONCAT14(uStack_12,
                                                        CONCAT13(uStack_13,
                                                                 CONCAT12(uStack_14,local_16))))));
    }
    else {
      uStack_24 = 0x10094eb3;
      uVar3 = FUN_100953a0(param_2);
      if ((char)uVar3 == '\0') goto LAB_10094faa;
      uStack_1e = 0;
      local_20 = 0;
      uStack_1d = (&DAT_10155cf4)[param_2 >> 0x14];
      uVar3 = 0x1f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = (uVar3 ^ 0x1c) >> 2;
      cVar1 = (char)uVar3;
      uStack_1c = (&DAT_10155cf4)[param_2 >> 0x10 & 0xf];
      uStack_1b = (&DAT_10155cf4)[param_2 >> 0xc & 0xf];
      uStack_1a = (&DAT_10155cf4)[param_2 >> 8 & 0xf];
      uStack_19 = (&DAT_10155cf4)[param_2 >> 4 & 0xf];
      local_18 = CONCAT11(0x7d,(&DAT_10155cf4)[param_2 & 0xf]);
      *(undefined2 *)((int)&uStack_24 + uVar3 + 2) = 0x755c;
      *(undefined1 *)((int)&local_20 + uVar3) = 0x7b;
      *(undefined2 *)(param_1 + 2) = local_18;
      *(ulonglong *)param_1 =
           CONCAT17(uStack_19,
                    CONCAT16(uStack_1a,
                             CONCAT15(uStack_1b,
                                      CONCAT14(uStack_1c,
                                               CONCAT13(uStack_1d,CONCAT12(uStack_1e,local_20))))));
    }
    cVar1 = cVar1 + -2;
    uVar4 = 10;
    goto LAB_1009508d;
  case 9:
    *(undefined2 *)param_1 = 0x745c;
    break;
  case 10:
    *(undefined2 *)param_1 = 0x6e5c;
    break;
  case 0xd:
    *(undefined2 *)param_1 = 0x725c;
    break;
  case 0x22:
    if (param_3 < 0x10000) goto LAB_10094faa;
    *(undefined2 *)param_1 = 0x225c;
    break;
  case 0x27:
    if ((param_3 & 0x100) == 0) goto LAB_10094faa;
    *(undefined2 *)param_1 = 0x275c;
    break;
  default:
    if (param_2 != 0x5c) goto switchD_10094e7c_caseD_1;
    *(undefined2 *)param_1 = 0x5c5c;
  }
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 2) = 0;
  uVar4 = 2;
  cVar1 = '\0';
LAB_1009508d:
  *(char *)(param_1 + 3) = cVar1;
  *(undefined1 *)((int)param_1 + 0xd) = uVar4;
  return;
}
