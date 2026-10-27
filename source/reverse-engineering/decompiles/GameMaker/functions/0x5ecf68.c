// rea decompile_all
// name: FUN_005ecf68
// address: 0x5ecf68
// body: available
// range: 0x5ecf68-0x5ed141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ecf68(void)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;

  DAT_0077db00 = 0;
  if ((*(int *)PTR_DAT_00782944 == 2) && (4 < *(int *)PTR_DAT_00781bfc)) {
    cVar1 = FUN_005e42a8();
    if (cVar1 == '\0') {
      FUN_005e42b4();
    }
    DAT_0077db08 = FUN_005e42a0();
    pwVar9 = L"GetAddrInfoW";
    uVar2 = DAT_0077db08;
    DAT_0077dacc = FUN_0040dcb4();
    if (DAT_0077dacc == 0) {
      DAT_0077db04 = FUN_0041f0a0(L"Wship6.dll",0x8000,extraout_ECX,uVar2,pwVar9);
      DAT_0077db08 = DAT_0077db04;
      DAT_0077dacc = FUN_0040dcb4();
    }
    if (((DAT_0077dacc != 0) && (DAT_0077dad0 = FUN_0040dcb4(), DAT_0077dad0 != 0)) &&
       (DAT_0077dad4 = FUN_0040dcb4(), DAT_0077dad4 != 0)) {
      DAT_0077db00 = 1;
      _DAT_0077dad8 = FUN_0040dcb4();
      pwVar8 = L"InetNtopW";
      uVar7 = DAT_0077db08;
      _DAT_0077dadc = FUN_0040dcb4();
      pwVar6 = L"GetAddrInfoExW";
      uVar5 = DAT_0077db08;
      _DAT_0077dae0 = FUN_0040dcb4();
      pwVar4 = L"SetAddrInfoExW";
      uVar3 = DAT_0077db08;
      _DAT_0077dae4 = FUN_0040dcb4();
      pwVar9 = L"FreeAddrInfoExW";
      uVar2 = DAT_0077db08;
      _DAT_0077dae8 = FUN_0040dcb4();
      DAT_0077db0c = FUN_0041f0a0(L"Fwpuclnt.dll",0x8000,extraout_ECX_00,uVar2,pwVar9,uVar3,pwVar4,
                                  uVar5,pwVar6,uVar7,pwVar8);
      if (DAT_0077db0c == 0) {
        return;
      }
      _DAT_0077daec = FUN_0040dcb4();
      _DAT_0077daf0 = FUN_0040dcb4();
      _DAT_0077daf4 = FUN_0040dcb4();
      _DAT_0077daf8 = FUN_0040dcb4();
      _DAT_0077dafc = FUN_0040dcb4();
      return;
    }
    FUN_005ecee8();
  }
  return;
}
