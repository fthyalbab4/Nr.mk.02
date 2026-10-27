// rea decompile_all
// name: FUN_005238f0
// address: 0x5238f0
// body: available
// range: 0x5238f0-0x5239c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005238f0(undefined4 param_1,int *param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,byte param_8,byte param_9)

{
  int iVar1;
  byte bVar2;

  if (*param_2 == 0) {
    iVar1 = FUN_0052370c(&DAT_0052334c,1,param_6,param_4,param_5,param_7);
    *param_2 = iVar1;
  }
  if (*(char *)(*param_2 + 4) == '\0') {
    bVar2 = 7 - (char)param_6;
    FUN_005238f0(param_1,*param_2 + 0x1c +
                         ((uint)(byte)(((&DAT_00684514)[param_6] & param_3) >> (bVar2 & 0x1f)) * 4 |
                          (uint)(byte)(((&DAT_00684514)[param_6] & param_9) >> (bVar2 & 0x1f)) * 2 |
                         (uint)(byte)(((&DAT_00684514)[param_6] & param_8) >> (bVar2 & 0x1f))) * 4,
                 param_3,param_4,param_5,param_6 + 1,param_7,param_8,param_9);
  }
  else {
    *(int *)(*param_2 + 8) = *(int *)(*param_2 + 8) + 1;
    *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + (uint)param_3;
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + (uint)param_9;
    *(int *)(*param_2 + 0x14) = *(int *)(*param_2 + 0x14) + (uint)param_8;
  }
  return;
}
