// rea decompile_all
// name: FUN_1012c951
// address: 0x1012c951
// body: available
// range: 0x1012c951-0x1012cc6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1012c983) */
/* WARNING: Removing unreachable block (ram,0x1012ca91) */
/* WARNING: Removing unreachable block (ram,0x1012ca66) */
/* WARNING: Removing unreachable block (ram,0x1012ca2a) */
/* WARNING: Removing unreachable block (ram,0x1012c9be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1012c951(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  BOOL BVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_XCR0;
  uint local_1c;
  uint local_18;
  uint local_14;

  DAT_101631f0 = DAT_101631f0 | 1;
  DAT_101633f4 = 0;
  BVar7 = IsProcessorFeaturePresent(10);
  uVar8 = DAT_101631e8;
  uVar6 = DAT_101631f0;
  if (BVar7 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar8 = *puVar2 & 0xfff3ff0, uVar8 == 0x106c0 || (uVar8 == 0x20660)) ||
          (uVar8 == 0x20670)) || ((uVar8 == 0x30650 || (uVar8 == 0x30660)))) || (uVar8 == 0x30670)))
       ) {
      _DAT_101633f8 = _DAT_101633f8 | 1;
    }
    uVar9 = 0;
    uVar10 = 0;
    local_18 = 0;
    local_1c = 0;
    if (6 < *piVar1) {
      piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar9 = piVar3[1];
      local_18 = piVar3[2];
      if ((uVar9 & 0x200) != 0) {
        _DAT_101633f8 = _DAT_101633f8 | 2;
      }
      if (0 < *piVar3) {
        iVar4 = cpuid_Extended_Feature_Enumeration_info(7);
        local_1c = *(uint *)(iVar4 + 8);
      }
      if (0x23 < *piVar1) {
        iVar4 = cpuid(0x24);
        uVar10 = *(uint *)(iVar4 + 4);
      }
    }
    DAT_101633f4 = 1;
    uVar8 = DAT_101631e8 & 0xfffffffe;
    uVar6 = DAT_101631f0 | 2;
    if ((puVar2[3] & 0x100000) != 0) {
      DAT_101633f4 = 2;
      uVar8 = DAT_101631e8 & 0xffffffee;
      uVar6 = DAT_101631f0 | 6;
      if ((puVar2[3] & 0x18000000) == 0x18000000) {
        uVar5 = xinuse(0);
        local_14 = in_XCR0 & (uint)uVar5;
        if ((local_14 & 6) == 6) {
          DAT_101633f4 = 3;
          uVar6 = DAT_101631f0 | 0xe;
          if ((uVar9 & 0x20) != 0) {
            DAT_101633f4 = 5;
            uVar8 = DAT_101631e8 & 0xffffffec;
            uVar6 = DAT_101631f0 | 0x2e;
            if (((uVar9 & 0xd0030000) == 0xd0030000) && ((local_14 & 0xe0) == 0xe0)) {
              DAT_101631f0 = DAT_101631f0 | 0x6e;
              DAT_101633f4 = 6;
              uVar8 = DAT_101631e8 & 0xffffffc8;
              uVar6 = DAT_101631f0;
            }
          }
          DAT_101631f0 = uVar6;
          DAT_101631e8 = uVar8;
          if ((local_18 & 0x800000) != 0) {
            DAT_101631e8 = DAT_101631e8 & 0xfeffffff;
          }
          uVar8 = DAT_101631e8;
          uVar6 = DAT_101631f0;
          if (((local_1c & 0x80000) != 0) && ((local_14 & 0xe0) == 0xe0)) {
            _DAT_101633f0 = uVar10 & 0x400ff;
            uVar8 = ~(uVar10 >> 0x10 & 6 | 0x1000029) & DAT_101631e8;
            if (1 < (byte)_DAT_101633f0) {
              uVar8 = uVar8 & 0xffffffbf;
            }
          }
        }
      }
    }
  }
  DAT_101631f0 = uVar6;
  DAT_101631e8 = uVar8;
  return 0;
}
