// rea decompile_all
// name: FUN_005468bc
// address: 0x5468bc
// body: available
// range: 0x5468bc-0x546956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005468bc(int param_1,char param_2,LPSECURITY_ATTRIBUTES param_3,undefined4 param_4,
                byte param_5)

{
  LPCWSTR lpName;
  HANDLE pvVar1;
  DWORD DVar2;
  LPSECURITY_ATTRIBUTES extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  FUN_00408194(param_1 + 0xc,param_4);
  lpName = (LPCWSTR)FUN_00408220(param_4);
  pvVar1 = CreateMutexW(param_3,(uint)param_5,lpName);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00533670(&LAB_005464f8,1,PTR_LAB_006893e0);
    FUN_00406ab4();
  }
  DVar2 = GetLastError();
  *(bool *)(param_1 + 4) = DVar2 == 0xb7;
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}
