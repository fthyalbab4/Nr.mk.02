// rea decompile_all
// name: FUN_1013c860
// address: 0x1013c860
// body: available
// range: 0x1013c860-0x1013ce4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1013cd9a) */
/* WARNING: Removing unreachable block (ram,0x1013cbfc) */
/* WARNING: Removing unreachable block (ram,0x1013cb88) */
/* WARNING: Removing unreachable block (ram,0x1013ca88) */
/* WARNING: Removing unreachable block (ram,0x1013c923) */
/* WARNING: Removing unreachable block (ram,0x1013c912) */
/* WARNING: Removing unreachable block (ram,0x1013c8ed) */
/* WARNING: Removing unreachable block (ram,0x1013c8d3) */
/* WARNING: Removing unreachable block (ram,0x1013c89c) */
/* WARNING: Removing unreachable block (ram,0x1013c86f) */

void __fastcall FUN_1013c860(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_48;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_1c;
  uint local_18;
  uint local_14;

  puVar1 = (uint *)cpuid_basic_info(0);
  uVar3 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (uVar3 == 0) {
    local_48 = 0;
    uVar3 = 0;
    uVar7 = 0;
  }
  else {
    local_44 = 0;
    iVar5 = cpuid_Version_info(1);
    uVar8 = *(uint *)(iVar5 + 8);
    uVar7 = *(uint *)(iVar5 + 0xc);
    uVar10 = 0;
    uVar9 = 0;
    local_30 = 0;
    local_3c = 0;
    if (6 < uVar3) {
      iVar5 = cpuid_Extended_Feature_Enumeration_info(7);
      local_44 = *(uint *)(iVar5 + 4);
      uVar10 = *(uint *)(iVar5 + 8);
      local_30 = *(uint *)(iVar5 + 0xc);
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      local_3c = *puVar1;
      uVar9 = puVar1[2];
    }
    local_38 = 0;
    piVar2 = (int *)cpuid(0x80000000);
    if (*piVar2 != 0) {
      iVar5 = cpuid(0x80000001);
      local_38 = *(uint *)(iVar5 + 0xc);
    }
    uVar11 = uVar8 >> 0x13 & 0xc0 |
             uVar7 >> 9 & 0x800 | uVar7 >> 9 & 0x400 | uVar7 & 0x202 | (uVar7 & 1) << 8 |
             uVar8 >> 0x12 & 0x20 | uVar8 & 0x10 | uVar7 >> 0x19 & 1 | uVar7 >> 0x1c & 4 |
             local_44 >> 0xf & 8 |
             local_30 << 0x16 & 0x80000000 |
             local_30 << 0x16 & 0x40000000 | local_44 >> 0x10 & 0x2000;
    uVar4 = ((local_44 & 0x800) >> 3 |
            (local_44 & 0x80000) >> 0xc | (uVar7 & 0x400000) >> 0xd | uVar7 >> 10 & 8) +
            (local_44 & 0x200) * 4 | local_44 >> 0x13 & 0x10;
    local_48 = uVar4 | 0x400;
    if (-1 < (int)local_3c) {
      local_48 = uVar4;
    }
    if ((local_30 & 0x800000) != 0) {
      iVar5 = cpuid(0x19);
      local_48 = local_48 | (*(uint *)(iVar5 + 4) & 1) << 5;
      if ((*(uint *)(iVar5 + 4) & 4) != 0) {
        local_48 = local_48 | 0x40;
      }
    }
    uVar8 = (local_38 & 0x20) << 0x16 |
            ((uVar8 & 0x1000000) + (uVar7 & 0x800000)) * 0x40 | (uVar7 & 0x20000000) >> 6 |
            (local_44 & 8) << 0x16 | (local_44 & 0x100) << 0x12 | local_30 >> 10 & 1;
    iVar5 = memcmp(&local_1c,"AuthenticAMD",0xc);
    if ((iVar5 == 0) || (iVar5 = memcmp(&local_1c,"HygonGenuine",0xc), iVar5 == 0)) {
      uVar8 = uVar8 | (local_38 & 0x200000) << 7;
      uVar11 = uVar11 | (local_38 & 0x40) << 6;
      if ((local_38 & 0x800) != 0) {
        local_48 = local_48 | 0x1000;
      }
    }
    if ((~uVar7 & 0xc000000) == 0) {
      uVar12 = FUN_1011d830();
      uVar4 = (uint)uVar12;
      if (((~uVar4 & 0x60000) == 0) &&
         (uVar8 = uVar8 | (uVar9 & 0x100) << 7 |
                          (local_3c & 0x200000) >> 7 |
                          (uVar10 & 0x400000) >> 9 | (uVar10 & 0x3000000) >> 0xd, 0x1d < uVar3)) {
        puVar1 = (uint *)cpuid(0x1e);
        uVar6 = *puVar1;
        uVar8 = uVar8 | (uVar6 & 0x80) << 9 | (uVar6 & 0x50) << 0xd;
        if ((uVar6 & 0x100) != 0) {
          uVar8 = uVar8 | 0x40000;
        }
      }
      uVar6 = uVar8 | 0x100000;
      if ((uVar9 & 0x200000) == 0 || (uVar12 & 0x80000) == 0) {
        uVar6 = uVar8;
      }
      uVar8 = uVar6;
      if ((uVar4 & 6) == 6) {
        if (0xc < uVar3) {
          puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
          uVar8 = *puVar1;
          uVar3 = local_48 | 1;
          if ((uVar8 & 1) == 0) {
            uVar3 = local_48;
          }
          local_48 = (uVar8 & 2) * 2 | uVar3;
          if ((uVar8 & 8) != 0) {
            local_48 = local_48 | 2;
          }
        }
        uVar3 = local_3c >> 0x11 & 0x40 | (local_3c & 0x10) << 4 | (uVar7 & 0x1000) << 0xc |
                uVar6 | 0x80000000;
        uVar8 = uVar3 | 0x400;
        if ((uVar9 & 0x10) == 0) {
          uVar8 = uVar3;
        }
        uVar11 = (local_3c & 7) << 0x10 | (local_44 & 0x20) << 10 | uVar7 >> 0xe & 0x4000 | uVar11;
        uVar8 = ((uVar9 & 0x400) >> 1) + (uVar9 & 0x20) * 4 | uVar8;
        if (((~uVar7 & 0x20001000) == 0) && ((uVar4 & 0xe0) == 0xe0)) {
          uVar11 = uVar11 | local_44 >> 7 & 0x800000 |
                            local_44 >> 8 & 0x100000 |
                            local_44 >> 6 & 0x200000 |
                            local_44 >> 4 & 0x400000 |
                            (local_44 & 0x200000) << 5 |
                            (local_44 & 0x20000) * 0x80 + (local_44 & 0x10000) * 8;
          uVar3 = uVar11 | 0x2000000;
          if (-1 < (int)local_44) {
            uVar3 = uVar11;
          }
          uVar11 = (local_30 & 0x4000) << 0xe | (local_30 & 0x40) << 0x17 | (local_30 & 2) << 0x1a |
                   uVar3;
          uVar3 = (local_3c & 0x20) >> 2 |
                  uVar10 >> 0x12 & 0x20 | uVar10 >> 4 & 0x10 | local_30 >> 10 & 6 | uVar8;
          uVar8 = uVar3;
          if ((uVar9 & 0x80000) != 0) {
            iVar5 = cpuid(0x24);
            uVar8 = uVar3 | 0x200000;
            if ((((uVar9 & 0x10) != 0) && ((local_3c & 0x800010) == 0x800010)) &&
               ((*(uint *)(iVar5 + 4) & 0xfe) != 0)) {
              uVar8 = uVar3 | 0x600000;
            }
          }
        }
      }
    }
    iVar5 = memcmp(&local_1c,
                   "GenuineIntelC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sync\\once.rs"
                   ,0xc);
    uVar3 = uVar8 & 0xf9ffffff;
    uVar7 = uVar11 & 0xffffbfff;
    if (iVar5 != 0 || (uVar11 & 0x4000) != 0) {
      uVar3 = uVar8;
      uVar7 = uVar11;
    }
  }
  param_1[1] = uVar3;
  *param_1 = uVar7;
  param_1[2] = local_48;
  param_1[3] = 0;
  DAT_101633c0 = uVar7 | 0x80000000;
  DAT_101633c4 = uVar3 << 1 | uVar7 >> 0x1f | 0x80000000;
  return;
}
