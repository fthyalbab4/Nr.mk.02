// rea decompile_all
// name: FUN_1010b130
// address: 0x1010b130
// body: available
// range: 0x1010b130-0x1010b1b8 inclusive
// range: 0x1010b1c0-0x1010b1ec inclusive
// range: 0x1010b1f0-0x1010b3a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_1010b130(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  char local_2c;

  local_50 = param_1[2];
  uVar1 = param_1[3];
  uVar2 = *param_1;
  local_34 = 0x1010b14a;
  local_58 = param_1[1];
  local_48._4_1_ = (byte)((ulonglong)uVar1 >> 0x20);
  local_48 = uVar1;
  if ((local_48._4_1_ == 2) &&
     (local_60._4_4_ = (uint)((ulonglong)uVar2 >> 0x20), local_60._4_4_ != 0)) {
    local_60._0_4_ = (char *)uVar2;
    pcVar9 = (char *)local_60;
    if ((byte)local_58 < 3) {
      pcVar9 = (char *)local_60 + local_60._4_4_;
      do {
        uVar10 = 0;
        while (((char *)local_60)[uVar10] != '\\') {
          uVar10 = uVar10 + 1;
          if (local_60._4_4_ == uVar10) goto LAB_1010b215;
        }
        if (uVar10 != 0) goto LAB_1010b215;
        local_60._0_4_ = (char *)local_60 + 1;
        local_60._4_4_ = local_60._4_4_ - 1;
      } while (local_60._4_4_ != 0);
    }
    else {
      do {
        uVar10 = 0;
        do {
          if ((pcVar9[uVar10] == '/') || (pcVar9[uVar10] == '\\')) {
            iVar5 = 1;
            iVar6 = 0;
            if (uVar10 == 0) goto LAB_1010b203;
            goto LAB_1010b1f9;
          }
          uVar10 = uVar10 + 1;
        } while (local_60._4_4_ != uVar10);
        iVar5 = 0;
        uVar10 = local_60._4_4_;
        if (local_60._4_4_ == 0) {
          iVar6 = 0;
        }
        else {
LAB_1010b1f9:
          local_60._0_4_ = pcVar9;
          if ((uVar10 != 1) || (iVar6 = 1, *pcVar9 != '.')) goto LAB_1010b215;
        }
LAB_1010b203:
        uVar10 = iVar5 + iVar6;
        if (local_60._4_4_ < uVar10) {
          uVar7 = local_60._4_4_;
          local_60 = uVar2;
          FUN_10136a50(uVar10,uVar7,uVar7,&PTR_s_C__Users_runneradmin__rustup_too_10157cdc);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pcVar9 = pcVar9 + uVar10;
        local_60._4_4_ = local_60._4_4_ - uVar10;
      } while (local_60._4_4_ != 0);
    }
    local_60._4_4_ = 0;
    local_60._0_4_ = pcVar9;
LAB_1010b215:
    uVar2 = local_60;
  }
  local_60 = uVar2;
  local_48._5_1_ = (char)((ulonglong)uVar1 >> 0x28);
  uVar10 = local_60._4_4_;
  uVar7 = local_60._4_4_;
  if (local_48._5_1_ == '\x02') {
    local_48._0_4_ = (int)uVar1;
    iVar6 = (int)local_48 + 1;
    if ((int)local_48 == 0) {
      iVar6 = 0;
    }
    if (local_48._4_1_ < 2) {
      local_48._6_1_ = (byte)((ulonglong)uVar1 >> 0x30);
      uVar8 = (uint)local_48._6_1_;
      if (local_48._4_1_ == 0) {
        uVar11 = (uint)(byte)local_58;
        local_3c = iVar6 + 2 + (int)local_50;
        local_38 = (int)local_50 + 4;
        local_40 = iVar6 + 8 + (int)local_50;
        uVar4 = FUN_1010b3c0((int *)&local_60);
        if (5 < uVar11) goto LAB_1010b33d;
        do {
          uVar7 = uVar10;
          switch((&switchD_1010b31b::switchdataD_1010b3a8)[uVar11] + local_34) {
          case 0x1010b31d:
            iVar6 = local_38;
            break;
          case 0x1010b323:
            iVar6 = 6;
            break;
          case 0x1010b32a:
            iVar6 = local_40;
            break;
          case 0x1010b330:
            iVar6 = 2;
            break;
          case 0x1010b337:
            iVar6 = local_3c;
          }
          while( true ) {
            if ((uVar7 <= (uVar4 & 0xff) + uVar8 + iVar6) ||
               (FUN_1010b4c0((int *)&local_30,(int *)&local_60), local_2c != -1)) goto LAB_1010b37b;
            uVar10 = uVar7 - local_30;
            if (uVar7 < local_30) goto LAB_1010b386;
            local_60 = CONCAT44(uVar10,(char *)local_60);
            uVar4 = FUN_1010b3c0((int *)&local_60);
            if (uVar11 < 6) break;
LAB_1010b33d:
            iVar6 = 0;
            uVar7 = uVar10;
          }
        } while( true );
      }
      while ((uVar10 = FUN_1010b3c0((int *)&local_60), (uVar10 & 0xff) + uVar8 < uVar7 &&
             (FUN_1010b4c0((int *)&local_30,(int *)&local_60), local_2c == -1))) {
        uVar10 = uVar7 - local_30;
        if (uVar7 < local_30) {
LAB_1010b386:
          FUN_10136a50(0,uVar10,uVar7,&PTR_s_C__Users_runneradmin__rustup_too_10157c9c);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_60 = CONCAT44(uVar10,(char *)local_60);
        uVar7 = uVar10;
      }
    }
    else {
      uVar7 = 0;
      if (local_60._4_4_ != 0) {
        uVar7 = local_60._4_4_;
        do {
          FUN_1010b4c0((int *)&local_30,(int *)&local_60);
          if (local_2c != -1) goto LAB_1010b37b;
          uVar10 = uVar7 - local_30;
          if (uVar7 < local_30) goto LAB_1010b386;
          local_60 = CONCAT44(uVar10,(char *)local_60);
          uVar7 = uVar10;
        } while (uVar10 != 0);
        uVar7 = 0;
      }
    }
  }
LAB_1010b37b:
  return CONCAT44(uVar7,(char *)local_60);
}
