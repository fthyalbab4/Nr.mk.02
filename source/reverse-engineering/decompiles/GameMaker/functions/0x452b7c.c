// rea decompile_all
// name: FUN_00452b7c
// address: 0x452b7c
// body: available
// range: 0x452b7c-0x452be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00452b7c(int param_1,LPDWORD param_2)

{
  LSTATUS LVar1;

  FUN_00404f08(param_2,0x1c,0);
  LVar1 = RegQueryInfoKeyW(*(HKEY *)(param_1 + 4),(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,param_2,
                           param_2 + 1,(LPDWORD)0x0,param_2 + 2,param_2 + 3,param_2 + 4,(LPDWORD)0x0
                           ,(PFILETIME)(param_2 + 5));
  FUN_0045252c(param_1,LVar1);
  if ((PTR_DAT_00782974[0xc] != '\0') && (*(int *)PTR_DAT_00782944 == 2)) {
    param_2[1] = param_2[1] + param_2[1];
    param_2[3] = param_2[3] + param_2[3];
  }
  return;
}
